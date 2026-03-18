/*
 * XREFs of PsResumeProcess @ 0x1406CC950
 * Callers:
 *     NtResumeProcess @ 0x1408CA900 (NtResumeProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     KeResumeThread @ 0x1401258B8 (KeResumeThread.c)
 *     PsGetNextProcessThread @ 0x14067C9D0 (PsGetNextProcessThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1408F8FE0 (EtwTiLogSuspendResumeProcess.c)
 */

__int64 __fastcall PsResumeProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _EX_RUNDOWN_REF *v3; // r14
  _QWORD *NextProcessThread; // rax
  unsigned int v5; // ebx
  _QWORD *v6; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (struct _EX_RUNDOWN_REF *)(a1 + 768);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 768)) == 1 )
  {
    NextProcessThread = PsGetNextProcessThread(a1, 0LL);
    v5 = 0;
    while ( 1 )
    {
      v6 = NextProcessThread;
      if ( !NextProcessThread )
        break;
      if ( (*((_DWORD *)NextProcessThread + 29) & 0x200000) == 0 )
        KeResumeThread((__int64)NextProcessThread);
      NextProcessThread = PsGetNextProcessThread(a1, v6);
    }
    ExReleaseRundownProtection_0(v3);
  }
  else
  {
    v5 = -1073741558;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( (*(_DWORD *)(a1 + 1788) & 0x80000) != 0 )
    EtwTiLogSuspendResumeProcess(v5, CurrentThread, a1, 1LL);
  return v5;
}
