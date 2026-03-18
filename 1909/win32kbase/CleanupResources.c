/*
 * XREFs of CleanupResources @ 0x1C00B4194
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00322E8 (xxxDestroyThreadInfo.c)
 * Callees:
 *     CleanupGDI @ 0x1C00B4220 (CleanupGDI.c)
 *     ApiSetEditionUnloadCursorsAndIcons @ 0x1C00B4AEC (ApiSetEditionUnloadCursorsAndIcons.c)
 *     CleanupPowerRequestList @ 0x1C00B4B80 (CleanupPowerRequestList.c)
 */

__int64 CleanupResources()
{
  __int64 v0; // rcx
  __int64 i; // rbx
  __int64 v2; // rcx

  gdwHydraHint |= 0x20000u;
  gbCleanedUpResources = 1;
  CleanupPowerRequestList();
  for ( i = *(_QWORD *)(PsGetCurrentProcessWin32Process(v0) + 320); i; i = *(_QWORD *)(i + 656) )
  {
    v2 = *(_QWORD *)(i + 424);
    if ( v2 )
      LockQCursor(v2, 0LL);
  }
  ApiSetEditionUnloadCursorsAndIcons();
  if ( (int)IsDestroyDpiMetricsCacheSupported() >= 0 )
    DestroyDpiMetricsCache();
  return CleanupGDI();
}
