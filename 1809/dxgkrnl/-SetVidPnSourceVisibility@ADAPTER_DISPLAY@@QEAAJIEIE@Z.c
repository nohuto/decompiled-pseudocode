/*
 * XREFs of ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00D2CC0
 * Callers:
 *     ?ADAPTER_DISPLAY_SetVidPnSourceVisibility@@YAJPEAVADAPTER_DISPLAY@@IEIE@Z @ 0x1C0037880 (-ADAPTER_DISPLAY_SetVidPnSourceVisibility@@YAJPEAVADAPTER_DISPLAY@@IEIE@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00B883C (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00D00BC (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00D04A8 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00D0FBC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00D4724 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00FFD40 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C011FD6C (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C0120094 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C01C1B4C (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01C3E9C (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1C0248224 (-SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C027C6A8 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0282754 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0002060 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C00051F4 (DxgkLogCodePointPacket.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C00060EC (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00106CC (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x1C0019E6C (-Resume@CVidSchSuspendResume@@QEAAXXZ.c)
 *     ?IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C001A414 (-IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z @ 0x1C00308A0 (-SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D30EC (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z @ 0x1C00D4108 (-DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C00EDAC4 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0138890 (-DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01C1920 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01C6840 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetVidPnSourceVisibility(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        BOOLEAN a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  __int64 v5; // rsi
  __int64 v6; // r12
  char v9; // bl
  __int64 v10; // r8
  char v11; // r14
  char v12; // r9
  ADAPTER_RENDER *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  DXGADAPTER *v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  unsigned int v23; // r12d
  __int64 v24; // rcx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  char v39; // [rsp+30h] [rbp-48h]
  _DXGKARG_SETVIDPNSOURCEVISIBILITY v41; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v42; // [rsp+40h] [rbp-38h]
  ADAPTER_RENDER *v43[2]; // [rsp+48h] [rbp-30h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v44; // [rsp+58h] [rbp-20h] BYREF

  v5 = a2;
  v6 = 3760LL * a2;
  *(_QWORD *)&v44.VidPnSourceId = 0LL;
  *(_QWORD *)&v44.Y = 0LL;
  v41 = 0LL;
  v9 = *(_BYTE *)(v6 + *((_QWORD *)this + 14) + 721);
  v39 = v9;
  if ( a2 >= *((_DWORD *)this + 20) )
  {
    v29 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v29 + 24) = 1670LL;
    WdLogEvent5_WdAssertion(v29);
  }
  if ( a3 && !ADAPTER_DISPLAY::IsVidPnSourceActive(this, v5) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v26);
    *(_QWORD *)(v30 + 24) = 1671LL;
    WdLogEvent5_WdAssertion(v30);
  }
  v10 = *((_QWORD *)this + 2);
  v44.VidPnSourceId = v5;
  v41.VidPnSourceId = v5;
  v41.Visible = a3;
  v11 = 0;
  v42 = (unsigned __int8)v5 | (v9 != 0 ? 0x80000000 : 0) | (a3 != 0 ? 0x40000000 : 0);
  v44.Flags.Value ^= (*(_BYTE *)&v44.Flags.0 ^ a3) & 1;
  if ( !a5 )
  {
    if ( *(_DWORD *)(v10 + 284) == 32902 && *(int *)(v10 + 2160) < 4864 )
    {
      v12 = 0;
    }
    else if ( DXGADAPTER::IsLegacyDisplayStateSynchronization((DXGADAPTER *)v10) )
    {
      v11 = v12;
      goto LABEL_9;
    }
    v11 = 0;
    goto LABEL_9;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v10) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v28);
    *(_QWORD *)(v31 + 24) = 1692LL;
    WdLogEvent5_WdAssertion(v31);
  }
  v10 = *((_QWORD *)this + 2);
  v12 = 0;
LABEL_9:
  v13 = *(ADAPTER_RENDER **)(v10 + 2528);
  LODWORD(v43[0]) = 0;
  v43[1] = v13;
  if ( v13 && v12 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v10) )
    {
      v32 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v32 + 24) = 1720LL;
      WdLogEvent5_WdAssertion(v32);
    }
    v15 = *((_QWORD *)this + 2);
    if ( v11 )
    {
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(v15 + 2528), 6LL, (unsigned int)v5, 1LL);
    }
    else
    {
      ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(*(ADAPTER_RENDER **)(v15 + 2528), 0, 1 << v5, 0, 1 << v5);
      CVidSchSuspendResume::SetSuspendSourceMask((CVidSchSuspendResume *)v43, 1 << v5);
    }
  }
  if ( a3 )
  {
    v27 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v41);
    v22 = v27;
    if ( v27 >= 0 )
    {
      if ( ADAPTER_DISPLAY::IsPointerVisible(this, v5) )
      {
        v34 = *((_QWORD *)this + 14);
        v44.X = *(_DWORD *)(v6 + v34 + 728);
        v44.Y = *(_DWORD *)(v6 + v34 + 732);
        v35 = ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v44);
        LODWORD(v22) = v35;
        if ( v35 < 0 )
        {
          v37 = WdLogNewEntry5_WdAssertion(v36);
          *(_QWORD *)(v37 + 24) = 1775LL;
          WdLogEvent5_WdAssertion(v37);
        }
      }
      goto LABEL_21;
    }
LABEL_37:
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v33[3] = v5;
    v33[4] = *((_QWORD *)this + 2);
    v33[5] = v22;
    WdLogEvent5_WdError(v33);
    ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((DXGADAPTER **)this, v5, 1);
    v23 = a4;
    goto LABEL_22;
  }
  v16 = (DXGADAPTER *)*((_QWORD *)this + 2);
  if ( *((_BYTE *)v16 + 2466) )
  {
    if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(v16) )
      ADAPTER_DISPLAY::DisableMPOPlanes(this, v5, 0);
  }
  else
  {
    ADAPTER_DISPLAY::DisableAllPlanesOnVidPnSourcesImmediate(this, 1 << v5);
  }
  if ( (int)ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v44) < 0 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v38 + 24) = 1800LL;
    WdLogEvent5_WdAssertion(v38);
  }
  v18 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v41);
  v22 = v18;
  if ( v18 < 0 )
    goto LABEL_37;
LABEL_21:
  LOBYTE(v21) = a3;
  v23 = a4;
  LOBYTE(v20) = v39;
  DisplayScenarioJournalVidPnSourceVisibility(
    *(_QWORD *)(*((_QWORD *)this + 2) + 276LL),
    (unsigned int)v5,
    v20,
    v21,
    a4);
LABEL_22:
  DxgkLogCodePointPacket(0x44u, v42, v23, v22, *(_QWORD *)(*((_QWORD *)this + 2) + 276LL));
  v24 = *(_QWORD *)(*((_QWORD *)this + 2) + 2528LL);
  if ( v24 && v11 )
    ADAPTER_RENDER::FlushScheduler(v24, 7LL, (unsigned int)v5, 1LL);
  CVidSchSuspendResume::Resume(v43);
  return (unsigned int)v22;
}
