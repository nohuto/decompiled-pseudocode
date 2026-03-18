/*
 * XREFs of ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00C6918
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CB238 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000CC68 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000CD1C (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00C6A34 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C00C6B70 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0123B0C (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0156B3C (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 */

char __fastcall ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(PERESOURCE **this, struct DXGDEVICE *a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // bp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  PERESOURCE *v12; // rcx
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax

  v4 = a3;
  v8 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v15 + 24) = 3048LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v16 + 24) = 3049LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( this[2] != *((PERESOURCE **)a2 + 216) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v17 + 24) = 3050LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner((DXGADAPTER **)this, a2, v4)
    && !ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((DXGADAPTER **)this, a2, v4) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v20 + 24) = 3051LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v11 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v11 + 24) = a2;
  *(_QWORD *)(v11 + 32) = v4;
  WdLogEvent5_WdEvent(v11);
  v12 = this[14];
  v13 = 496 * v4;
  if ( a2 == (struct DXGDEVICE *)v12[496 * v4 + 88] )
  {
    v12[v13 + 88] = 0LL;
LABEL_14:
    ADAPTER_DISPLAY::UpdateGammaRamp((ADAPTER_DISPLAY *)this, v4);
    return v8;
  }
  if ( a2 == (struct DXGDEVICE *)v12[v13 + 86] )
  {
    if ( *((_QWORD *)a2 + 216) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) )
    {
      if ( DXGDEVICE::IsVidPnSourcePrimaryValid(a2, v4) )
      {
        v8 = 1;
        ADAPTER_DISPLAY::DisablePrimaryOnDevice((ADAPTER_DISPLAY *)this, a2, v4, 0);
      }
    }
    ADAPTER_DISPLAY::RemoveVidPnOwnership((ADAPTER_DISPLAY *)this, v4);
    goto LABEL_14;
  }
  return 0;
}
