/*
 * XREFs of ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C0140300
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011D60C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C01C78D0 (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01FE090 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0010884 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0010918 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00D2F54 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01229C8 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C0122C20 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C01C1B4C (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 */

char __fastcall ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(PERESOURCE **this, struct DXGDEVICE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  char v9; // r14
  unsigned int v10; // esi
  PERESOURCE *v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // esi
  PERESOURCE *v14; // rcx
  __int64 v15; // rbp
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v17 + 24) = 2762LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v18 + 24) = 2763LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner((ADAPTER_DISPLAY *)this, a2)
    && !ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((ADAPTER_DISPLAY *)this, a2) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v19 + 24) = 2764LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v8 = WdLogNewEntry5_WdEvent(v7, v6);
  *(_QWORD *)(v8 + 24) = a2;
  WdLogEvent5_WdEvent(v8);
  v9 = 0;
  v10 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    while ( 1 )
    {
      v11 = (PERESOURCE *)*((_QWORD *)a2 + 216);
      if ( v11 == *(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL) )
      {
        v12 = 470LL * v10;
        if ( a2 == (struct DXGDEVICE *)this[14][v12 + 86] )
        {
          if ( this[2] != v11 )
          {
            v20 = WdLogNewEntry5_WdAssertion(v12 * 8);
            *(_QWORD *)(v20 + 24) = 2782LL;
            WdLogEvent5_WdAssertion(v20);
          }
          if ( DXGDEVICE::IsVidPnSourcePrimaryValid(a2, v10) )
            break;
        }
      }
      if ( ++v10 >= *((_DWORD *)this + 20) )
        goto LABEL_12;
    }
    v9 = 1;
    ADAPTER_DISPLAY::DisablePrimaryOnDevice((ADAPTER_DISPLAY *)this, a2, 0xFFFFFFFD, 0);
  }
LABEL_12:
  v13 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    while ( 1 )
    {
      v14 = this[14];
      v15 = 470LL * v13;
      if ( a2 == (struct DXGDEVICE *)v14[v15 + 88] )
        break;
      if ( a2 == (struct DXGDEVICE *)v14[v15 + 86] )
      {
        if ( this[2] != *((PERESOURCE **)a2 + 216) )
        {
          v22 = WdLogNewEntry5_WdAssertion(v14);
          *(_QWORD *)(v22 + 24) = 2815LL;
          WdLogEvent5_WdAssertion(v22);
        }
        ADAPTER_DISPLAY::RemoveVidPnOwnership((ADAPTER_DISPLAY *)this, v13);
LABEL_20:
        ADAPTER_DISPLAY::UpdateGammaRamp((DXGADAPTER **)this, v13);
      }
      if ( ++v13 >= *((_DWORD *)this + 20) )
        return v9;
    }
    if ( this[2] != *((PERESOURCE **)a2 + 216) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v21 + 24) = 2808LL;
      WdLogEvent5_WdAssertion(v21);
      v14 = this[14];
    }
    v14[v15 + 88] = 0LL;
    goto LABEL_20;
  }
  return v9;
}
