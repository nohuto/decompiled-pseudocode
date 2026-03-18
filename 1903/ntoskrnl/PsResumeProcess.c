/*
 * XREFs of PsResumeProcess @ 0x1406CDBB0
 * Callers:
 *     NtResumeProcess @ 0x1408CB020 (NtResumeProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     KeResumeThread @ 0x140125248 (KeResumeThread.c)
 *     PsGetNextProcessThread @ 0x1406772C0 (PsGetNextProcessThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1408F9600 (EtwTiLogSuspendResumeProcess.c)
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
