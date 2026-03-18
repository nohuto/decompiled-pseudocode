/*
 * XREFs of ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C01BD37C
 * Callers:
 *     DpiDisableMsBddFallbackDriver @ 0x1C02685B0 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C026877C (DpiEnableMsBddFallbackDriver.c)
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00040B0 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01440B4 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGADAPTER::EnableMsBddFallback(PERESOURCE ***this, char a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  if ( this[16] != (PERESOURCE **)KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 7911LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 7912LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)this) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 7914LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( a2 )
  {
    *((_DWORD *)this + 44) = 1;
  }
  else
  {
    if ( this[316] )
    {
      v9 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v9 + 24) = 7926LL;
      WdLogEvent5_WdAssertion(v9);
    }
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(this[315], 0LL);
    *((_DWORD *)this + 44) = 3;
  }
}
