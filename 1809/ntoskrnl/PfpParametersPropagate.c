/*
 * XREFs of PfpParametersPropagate @ 0x140865904
 * Callers:
 *     PfpParametersWatcher @ 0x140865A30 (PfpParametersWatcher.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     PfTInitialize @ 0x140751D78 (PfTInitialize.c)
 *     PfTStart @ 0x140752A9C (PfTStart.c)
 *     PfTCleanup @ 0x1408651FC (PfTCleanup.c)
 *     PfpRpShutdown @ 0x1408654D4 (PfpRpShutdown.c)
 */

void __fastcall PfpParametersPropagate(_DWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rdx
  void *v6; // rdx

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PfTGlobals, 0LL);
  if ( (dword_14043BB48 & 1) != 0 )
    v3 = a1[20] != dword_14043BD5C;
  if ( (dword_14043BB48 & 2) != 0 && a1[19] != dword_14043BD64 )
    v3 |= 2u;
  if ( (dword_14043BB48 & 3) != 0 && (a1[17] & 1) == 0 || v3 )
  {
    PfTCleanup((__int64)&PfTGlobals, v4);
    PfTInitialize((__int64)&PfTGlobals, v5, 1);
    PfTStart((__int64)&PfTGlobals, v6, v3);
  }
  if ( ((a1[17] & 2) != 0) != (dword_14043C1B0 & 1) )
  {
    if ( (a1[17] & 2) != 0 )
    {
      _InterlockedExchange64(&qword_14043C1A0, 0LL);
      dword_14043C1B0 |= 1u;
    }
    else
    {
      PfpRpShutdown((__int64)&unk_14043C118);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
  KeAbPostRelease((ULONG_PTR)&PfTGlobals);
  KeLeaveCriticalRegion();
}
