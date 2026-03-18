/*
 * XREFs of ?DmmResetModeState@@YAJQEAXK@Z @ 0x1C01446B4
 * Callers:
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01231FC (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     DpiPowerArbiterThread @ 0x1C015D200 (DpiPowerArbiterThread.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C0263B28 (DpiFdoDestroyRelatedObjects.c)
 * Callees:
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0002060 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DmmResetModeState(PERESOURCE *a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx
  PERESOURCE v6; // rcx
  PERESOURCE v7; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v2 = 0;
  if ( a1 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
    {
      v10 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v10);
    }
    v6 = a1[315];
    if ( v6 && LODWORD(v6->Reserved2) )
    {
      do
      {
        v7 = v6;
        if ( _bittest(&a2, v2) )
        {
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((DXGADAPTER **)v6, v2, 1);
          v7 = a1[315];
        }
        ++v2;
        v6 = v7;
      }
      while ( v2 < LODWORD(v7->Reserved2) );
    }
    return 0LL;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v9 + 24) = 0LL;
    WdLogEvent5_WdError(v9);
    return 3223191554LL;
  }
}
