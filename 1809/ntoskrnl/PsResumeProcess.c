/*
 * XREFs of PsResumeProcess @ 0x1406CB080
 * Callers:
 *     NtResumeProcess @ 0x14088DE50 (NtResumeProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResumeThread @ 0x1400F27A8 (KeResumeThread.c)
 *     PsGetNextProcessThread @ 0x140676AA0 (PsGetNextProcessThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1408BDC74 (EtwTiLogSuspendResumeProcess.c)
 */

__int64 __fastcall PsResumeProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _EX_RUNDOWN_REF *v3; // r14
  _QWORD *NextProcessThread; // rax
  unsigned int v5; // ebx
  _QWORD *v6; // rbp

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (struct _EX_RUNDOWN_REF *)(a1 + 760);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 760)) == 1 )
  {
    NextProcessThread = PsGetNextProcessThread(a1, 0LL);
    v5 = 0;
    while ( 1 )
    {
      v6 = NextProcessThread;
      if ( !NextProcessThread )
        break;
      KeResumeThread((__int64)NextProcessThread);
      NextProcessThread = PsGetNextProcessThread(a1, v6);
    }
    ExReleaseRundownProtection_0(v3);
  }
  else
  {
    v5 = -1073741558;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  if ( (*(_DWORD *)(a1 + 1740) & 0x80000) != 0 )
    EtwTiLogSuspendResumeProcess(v5, CurrentThread, a1, 1LL);
  return v5;
}
