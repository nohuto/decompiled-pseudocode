/*
 * XREFs of PsSetProcessFaultInformation @ 0x14071E780
 * Callers:
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 *     DbgkForwardException @ 0x1406F79F8 (DbgkForwardException.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     TelemetryCoverageStringHashInternal @ 0x14012B1C4 (TelemetryCoverageStringHashInternal.c)
 *     EtwTelemetryCoverageReport @ 0x14015C790 (EtwTelemetryCoverageReport.c)
 *     PsSetProcessTelemetryAppState @ 0x1406356F4 (PsSetProcessTelemetryAppState.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x1408C6E88 (PspRecordCrashedProcessIntoBlackbox.c)
 */

__int64 __fastcall PsSetProcessFaultInformation(__int64 BugCheckParameter1, int *a2)
{
  int v4; // eax
  volatile signed __int64 *v5; // rdi
  struct _KTHREAD *v6; // rbp
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  struct _KTHREAD *CurrentThread; // rbp
  struct _KTHREAD *v11; // rbp
  int v12; // [rsp+48h] [rbp+10h] BYREF
  int v13; // [rsp+50h] [rbp+18h] BYREF

  if ( (*a2 & 1) != 0 )
  {
    _m_prefetchw((const void *)(BugCheckParameter1 + 1788));
    v8 = *(_DWORD *)(BugCheckParameter1 + 1788);
    do
    {
      v9 = v8;
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter1 + 1788), v8 | 4, v8);
    }
    while ( v9 != v8 );
    if ( (v8 & 4) == 0 )
    {
      if ( (unsigned int)dword_140427ED4 < MEMORY[0xFFFFF7800000037C] )
      {
        if ( !dword_140427ED0 )
          dword_140427ED0 = TelemetryCoverageStringHashInternal(off_140427EC8, &v12);
        EtwTelemetryCoverageReport((__int64)&off_140427EC8);
      }
      PspRecordCrashedProcessIntoBlackbox(BugCheckParameter1);
      PsSetProcessTelemetryAppState(BugCheckParameter1, 4);
    }
  }
  v4 = *a2;
  if ( (*a2 & 2) != 0 )
  {
    if ( (unsigned int)dword_140427EBC < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140427EB8 )
        dword_140427EB8 = TelemetryCoverageStringHashInternal(off_140427EB0, &v13);
      EtwTelemetryCoverageReport((__int64)&off_140427EB0);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = (volatile signed __int64 *)(BugCheckParameter1 + 736);
    ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 736, 0LL);
    if ( (*(_BYTE *)(BugCheckParameter1 + 1787) & 7) != 7 )
      *(_BYTE *)(BugCheckParameter1 + 1787) ^= (*(_BYTE *)(BugCheckParameter1 + 1787) ^ (*(_BYTE *)(BugCheckParameter1
                                                                                                  + 1787)
                                                                                       + 1)) & 7;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 736));
    KeAbPostRelease(BugCheckParameter1 + 736);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    v4 = *a2;
  }
  else
  {
    v5 = (volatile signed __int64 *)(BugCheckParameter1 + 736);
  }
  if ( (v4 & 4) != 0 )
  {
    v6 = KeGetCurrentThread();
    --v6->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
    if ( (*(_BYTE *)(BugCheckParameter1 + 1787) & 0x38u) < 0x38 )
      *(_BYTE *)(BugCheckParameter1 + 1787) ^= (*(_BYTE *)(BugCheckParameter1 + 1787) ^ (*(_BYTE *)(BugCheckParameter1
                                                                                                  + 1787)
                                                                                       + 8)) & 0x38;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5);
    KeAbPostRelease((ULONG_PTR)v5);
    KeLeaveCriticalRegionThread((__int64)v6);
    v4 = *a2;
  }
  if ( (v4 & 8) != 0 )
  {
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
    *(_BYTE *)(BugCheckParameter1 + 1787) |= 0x40u;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5);
    KeAbPostRelease((ULONG_PTR)v5);
    KeLeaveCriticalRegionThread((__int64)v11);
  }
  return 0LL;
}
