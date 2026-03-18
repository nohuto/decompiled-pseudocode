/*
 * XREFs of CleanupResources @ 0x1C0095DB8
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0099D40 (xxxDestroyThreadInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     CleanupGDI @ 0x1C00423AC (CleanupGDI.c)
 *     CleanupPowerRequestList @ 0x1C0096510 (CleanupPowerRequestList.c)
 */

__int64 CleanupResources()
{
  __int64 v0; // rcx
  __int64 i; // rbx
  __int64 v2; // rcx

  gdwHydraHint |= 0x20000u;
  gbCleanedUpResources = 1;
  CleanupPowerRequestList();
  for ( i = *(_QWORD *)(PsGetCurrentProcessWin32Process(v0) + 328); i; i = *(_QWORD *)(i + 664) )
  {
    v2 = *(_QWORD *)(i + 432);
    if ( v2 )
      LockQCursor(v2, 0LL);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x92u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  if ( (int)IsEditionUnloadCursorsAndIconsSupported() >= 0 )
    EditionUnloadCursorsAndIcons();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x93u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  if ( (int)IsDestroyDpiMetricsCacheSupported() >= 0 )
    DestroyDpiMetricsCache();
  return CleanupGDI();
}
