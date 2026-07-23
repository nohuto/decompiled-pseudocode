/*
 * XREFs of PoFxAbandonDevice @ 0x1406EE2A8
 * Callers:
 *     PopFxAcpiUnregisterDevice @ 0x1402E89A0 (PopFxAcpiUnregisterDevice.c)
 *     IopRemoveDevice @ 0x1406EE0A4 (IopRemoveDevice.c)
 *     PnpDriverLoadingFailed @ 0x1407642A0 (PnpDriverLoadingFailed.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     PopFxReleaseAcpiRefDevice @ 0x1402D94C4 (PopFxReleaseAcpiRefDevice.c)
 *     PopPluginAbandonDevice @ 0x1402DA788 (PopPluginAbandonDevice.c)
 *     PopFxFreeUniqueId @ 0x1406F01DC (PopFxFreeUniqueId.c)
 *     PopDiagTraceFxDevicePreparation @ 0x1406F022C (PopDiagTraceFxDevicePreparation.c)
 *     PopFxUnregisterDeviceOrWait @ 0x1406F02AC (PopFxUnregisterDeviceOrWait.c)
 *     PopDirectedDripsDiagFreeDeviceDiagnostic @ 0x14087CB40 (PopDirectedDripsDiagFreeDeviceDiagnostic.c)
 */

LONG __fastcall PoFxAbandonDevice(__int64 a1)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett
  LONG result; // eax
  __int64 v5; // rdi
  __int64 v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rax
  _QWORD *v9; // rcx

  _m_prefetchw(&PopDirectedDripsState);
  v2 = PopDirectedDripsState;
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange(&PopDirectedDripsState, v2, v2);
  }
  while ( v3 != v2 );
  if ( (v2 & 1) != 0 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopDirectedDripsDiagLock, 0LL);
    v7 = *(_QWORD **)(a1 + 776);
    if ( v7 )
    {
      *(_QWORD *)(a1 + 776) = 0LL;
      v8 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v7) )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      v7[1] = v7;
      *v7 = v7;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
    KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
    if ( v7 )
      PopDirectedDripsDiagFreeDeviceDiagnostic(v7);
  }
  result = *(_DWORD *)(a1 + 296);
  v5 = 0LL;
  if ( (result & 1) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 80);
    PopFxUnregisterDeviceOrWait(a1);
    v6 = *(_QWORD *)(a1 + 128);
    if ( v6 )
    {
      PopPluginAbandonDevice(*(_QWORD *)(a1 + 128), a1 + 280);
      v6 = *(_QWORD *)(a1 + 128);
    }
    PopDiagTraceFxDevicePreparation(a1, v6, a1 + 280, 0LL);
    *(_QWORD *)(a1 + 128) = 0LL;
    *(_DWORD *)(a1 + 296) &= ~1u;
    result = *(_DWORD *)(a1 + 296);
  }
  if ( (result & 2) != 0 )
  {
    PopFxFreeUniqueId(a1);
    *(_DWORD *)(a1 + 296) &= ~2u;
    result = *(_DWORD *)(a1 + 296);
  }
  if ( (result & 0x4000) != 0 )
  {
    result = PopFxReleaseAcpiRefDevice(v5);
    *(_DWORD *)(a1 + 296) &= ~0x4000u;
  }
  return result;
}
