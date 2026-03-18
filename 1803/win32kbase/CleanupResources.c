/*
 * XREFs of CleanupResources @ 0x1C00B15B4
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0036210 (xxxDestroyThreadInfo.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C00374D0 (HMAssignmentLock.c)
 *     CleanupPowerRequestList @ 0x1C00A44C0 (CleanupPowerRequestList.c)
 *     CleanupGDI @ 0x1C00A9D70 (CleanupGDI.c)
 */

__int64 CleanupResources()
{
  __int64 v0; // rcx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 i; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  gdwHydraHint |= 0x20000u;
  gbCleanedUpResources = 1;
  CleanupPowerRequestList();
  for ( i = *(_QWORD *)(PsGetCurrentProcessWin32Process(v0) + 320); i; i = *(_QWORD *)(i + 656) )
  {
    v4 = *(_QWORD *)(i + 424);
    if ( v4 )
    {
      v10 = (unsigned __int64)(v4 + 376);
      HMAssignmentLock((__int64)&v10);
    }
  }
  if ( (int)IsUnloadCursorsAndIconsSupported(v2, v1) >= 0 )
    UnloadCursorsAndIcons(v6, v5);
  if ( (int)IsDestroyDpiMetricsCacheSupported(v6, v5) >= 0 )
    DestroyDpiMetricsCache(v8, v7);
  return CleanupGDI();
}
