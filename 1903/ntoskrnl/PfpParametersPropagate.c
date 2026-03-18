/*
 * XREFs of PfpParametersPropagate @ 0x1408A1E04
 * Callers:
 *     PfpParametersWatcher @ 0x1408A1F30 (PfpParametersWatcher.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     PfTInitialize @ 0x1407774E0 (PfTInitialize.c)
 *     PfTStart @ 0x1407781E8 (PfTStart.c)
 *     PfTCleanup @ 0x1408A16E0 (PfTCleanup.c)
 *     PfpRpShutdown @ 0x1408A19B8 (PfpRpShutdown.c)
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
  if ( (dword_140467608 & 1) != 0 )
    v3 = a1[20] != dword_14046781C;
  if ( (dword_140467608 & 2) != 0 && a1[19] != dword_140467824 )
    v3 |= 2u;
  if ( (dword_140467608 & 3) != 0 && (a1[17] & 1) == 0 || v3 )
  {
    PfTCleanup((__int64)&PfTGlobals, v4);
    PfTInitialize((__int64)&PfTGlobals, v5, 1);
    PfTStart((__int64)&PfTGlobals, v6, v3);
  }
  if ( ((a1[17] & 2) != 0) != (dword_140467C70 & 1) )
  {
    if ( (a1[17] & 2) != 0 )
    {
      _InterlockedExchange64(&qword_140467C60, 0LL);
      dword_140467C70 |= 1u;
    }
    else
    {
      PfpRpShutdown((__int64)&unk_140467BD8);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
  KeAbPostRelease((ULONG_PTR)&PfTGlobals);
  KeLeaveCriticalRegion();
}
