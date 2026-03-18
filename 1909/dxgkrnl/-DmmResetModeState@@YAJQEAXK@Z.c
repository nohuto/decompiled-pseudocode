/*
 * XREFs of ?DmmResetModeState@@YAJQEAXK@Z @ 0x1C015A894
 * Callers:
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00C7454 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     DpiPowerArbiterThread @ 0x1C01815C0 (DpiPowerArbiterThread.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C029F410 (DpiFdoDestroyRelatedObjects.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C001B504 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 */

__int64 __fastcall DmmResetModeState(PERESOURCE *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  PERESOURCE v8; // rcx
  PERESOURCE v9; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v3 = 0;
  v4 = a2;
  if ( a1 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
    {
      v12 = WdLogNewEntry5_WdAssertion(v7, v6);
      WdLogEvent5_WdAssertion(v12);
    }
    v8 = a1[319];
    if ( v8 && LODWORD(v8->Reserved2) )
    {
      do
      {
        v9 = v8;
        if ( _bittest(&v4, v3) )
        {
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((PERESOURCE **)v8, v3, 1);
          v9 = a1[319];
        }
        ++v3;
        v8 = v9;
      }
      while ( v3 < LODWORD(v9->Reserved2) );
    }
    return 0LL;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v11 + 24) = 0LL;
    WdLogEvent5_WdError(v11);
    return 3223191554LL;
  }
}
