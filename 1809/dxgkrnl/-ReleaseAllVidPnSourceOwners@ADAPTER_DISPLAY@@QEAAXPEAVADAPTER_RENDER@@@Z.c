/*
 * XREFs of ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01440B4
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00F62A0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     DxgkDisplayOnOff @ 0x1C0122E70 (DxgkDisplayOnOff.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C0143DEC (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C01BD37C (-EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z.c)
 *     ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C01C53FC (-Stop@ADAPTER_DISPLAY@@QEAAXE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00D04A8 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00D2F54 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01229C8 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(PERESOURCE **this, PERESOURCE **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  struct ADAPTER_RENDER *v8; // rcx
  unsigned int i; // edi
  __int64 v10; // rax
  __int64 v11; // rax

  if ( a2 && !DXGADAPTER::IsCoreResourceExclusiveOwner(a2[2]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v10 + 24) = 2959LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v11 + 24) = 2960LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v7 = WdLogNewEntry5_WdEvent(v6, v5);
  *(_QWORD *)(v7 + 24) = this;
  WdLogEvent5_WdEvent(v7);
  v8 = (struct ADAPTER_RENDER *)this[2][316];
  if ( v8 && v8 == (struct ADAPTER_RENDER *)a2 )
    ADAPTER_DISPLAY::DisableAllPrimaries(this, (struct ADAPTER_RENDER *)a2);
  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    if ( this[14][470 * i + 86] )
    {
      ADAPTER_DISPLAY::RemoveVidPnOwnership((ADAPTER_DISPLAY *)this, i);
      ADAPTER_DISPLAY::UpdateGammaRamp((DXGADAPTER **)this, i);
    }
  }
}
