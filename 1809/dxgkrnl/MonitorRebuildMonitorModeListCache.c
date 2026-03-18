/*
 * XREFs of MonitorRebuildMonitorModeListCache @ 0x1C0291300
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0044888 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z @ 0x1C00E1864 (-DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028E0D0 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall MonitorRebuildMonitorModeListCache(
        struct DXGADAPTER *a1,
        __int64 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rax
  unsigned int i; // edx
  int NextVideoPresentTarget; // eax
  unsigned int v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  v6 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v7 = 0;
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = 4294967293LL;
  if ( a1 )
  {
    if ( *((_QWORD *)a1 + 315) )
    {
      for ( i = -1; ; i = v12 )
      {
        NextVideoPresentTarget = DmmGetNextVideoPresentTarget(a1, i, &v12);
        if ( NextVideoPresentTarget < 0 )
          break;
        RebuildMonitorModeListCacheHelper(a1, v12, a3);
      }
      if ( NextVideoPresentTarget != -1073741275 )
        return (unsigned int)NextVideoPresentTarget;
    }
    return v7;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(4294967293LL);
    *(_QWORD *)(v8 + 24) = 0LL;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
}
