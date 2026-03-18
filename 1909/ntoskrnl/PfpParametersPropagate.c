/*
 * XREFs of PfpParametersPropagate @ 0x1408A1644
 * Callers:
 *     PfpParametersWatcher @ 0x1408A1770 (PfpParametersWatcher.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     PfTInitialize @ 0x14077AAC0 (PfTInitialize.c)
 *     PfTStart @ 0x14077B7C8 (PfTStart.c)
 *     PfTCleanup @ 0x1408A0F20 (PfTCleanup.c)
 *     PfpRpShutdown @ 0x1408A11F8 (PfpRpShutdown.c)
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
  if ( (dword_140467308 & 1) != 0 )
    v3 = a1[20] != dword_14046751C;
  if ( (dword_140467308 & 2) != 0 && a1[19] != dword_140467524 )
    v3 |= 2u;
  if ( (dword_140467308 & 3) != 0 && (a1[17] & 1) == 0 || v3 )
  {
    PfTCleanup((__int64)&PfTGlobals, v4);
    PfTInitialize((__int64)&PfTGlobals, v5, 1);
    PfTStart((__int64)&PfTGlobals, v6, v3);
  }
  if ( ((a1[17] & 2) != 0) != (dword_140467970 & 1) )
  {
    if ( (a1[17] & 2) != 0 )
    {
      _InterlockedExchange64(&qword_140467960, 0LL);
      dword_140467970 |= 1u;
    }
    else
    {
      PfpRpShutdown((__int64)&unk_1404678D8);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
  KeAbPostRelease((ULONG_PTR)&PfTGlobals);
  KeLeaveCriticalRegion();
}
