/*
 * XREFs of PsSetProcessFaultInformation @ 0x1406E1DC0
 * Callers:
 *     NtSetInformationProcess @ 0x140671C60 (NtSetInformationProcess.c)
 *     DbgkForwardException @ 0x1406D68FC (DbgkForwardException.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     EtwTelemetryCoverageReport @ 0x14012A560 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x14012A748 (TelemetryCoverageStringHashInternal.c)
 *     PsSetProcessTelemetryAppState @ 0x1405B1974 (PsSetProcessTelemetryAppState.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x140888F80 (PspRecordCrashedProcessIntoBlackbox.c)
 */

__int64 __fastcall PsSetProcessFaultInformation(ULONG_PTR a1, int *a2)
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
    _m_prefetchw((const void *)(a1 + 1740));
    v8 = *(_DWORD *)(a1 + 1740);
    do
    {
      v9 = v8;
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1740), v8 | 4, v8);
    }
    while ( v9 != v8 );
    if ( (v8 & 4) == 0 )
    {
      if ( (unsigned int)dword_140401ADC < MEMORY[0xFFFFF7800000037C] )
      {
        if ( !dword_140401AD8 )
          dword_140401AD8 = TelemetryCoverageStringHashInternal(off_140401AD0, &v12);
        EtwTelemetryCoverageReport(&off_140401AD0);
      }
      PspRecordCrashedProcessIntoBlackbox(a1);
      PsSetProcessTelemetryAppState(a1, 4);
    }
  }
  v4 = *a2;
  if ( (*a2 & 2) != 0 )
  {
    if ( (unsigned int)dword_140401AF4 < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140401AF0 )
        dword_140401AF0 = TelemetryCoverageStringHashInternal(off_140401AE8, &v13);
      EtwTelemetryCoverageReport(&off_140401AE8);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = (volatile signed __int64 *)(a1 + 728);
    ExAcquirePushLockExclusiveEx(a1 + 728, 0LL);
    if ( (*(_BYTE *)(a1 + 1739) & 7) != 7 )
      *(_BYTE *)(a1 + 1739) ^= (*(_BYTE *)(a1 + 1739) ^ (*(_BYTE *)(a1 + 1739) + 1)) & 7;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 728));
    KeAbPostRelease(a1 + 728);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    v4 = *a2;
  }
  else
  {
    v5 = (volatile signed __int64 *)(a1 + 728);
  }
  if ( (v4 & 4) != 0 )
  {
    v6 = KeGetCurrentThread();
    --v6->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
    if ( (*(_BYTE *)(a1 + 1739) & 0x38u) < 0x38 )
      *(_BYTE *)(a1 + 1739) ^= (*(_BYTE *)(a1 + 1739) ^ (*(_BYTE *)(a1 + 1739) + 8)) & 0x38;
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
    *(_BYTE *)(a1 + 1739) |= 0x40u;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5);
    KeAbPostRelease((ULONG_PTR)v5);
    KeLeaveCriticalRegionThread((__int64)v11);
  }
  return 0LL;
}
