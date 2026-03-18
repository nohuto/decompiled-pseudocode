/*
 * XREFs of ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C027DD48
 * Callers:
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1C0147284 (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C027B850 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00041F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?Enqueue@?$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C004D444 (-Enqueue@-$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x1C004D590 (-GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00C2760 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C00D50E4 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00E1BA0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E4FE0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E5198 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z @ 0x1C01CD5CC (-DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C01D2280 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C027C384 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 */

__int64 __fastcall VIDPN_MGR::RecommendFunctionalVidPn(
        ADAPTER_DISPLAY **this,
        DXGK_RECOMMENDFUNCTIONALVIDPN_REASON a2,
        void *const a3,
        UINT a4,
        struct DMMVIDPN **const a5)
{
  struct DMMVIDPN **v5; // r12
  __int64 v10; // rax
  int ClientVidPn; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // edi
  __int64 v17; // rcx
  DMMVIDPN *v18; // rsi
  ADAPTER_DISPLAY *v19; // r14
  __int64 v20; // rax
  DXGADAPTER *v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 NumTargetsWithMonitorObjects; // rax
  unsigned __int8 v26; // r9
  const GUID *v27; // r8
  ADAPTER_DISPLAY *v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  DMMVIDPN *v42; // rax
  unsigned __int8 v43; // r8
  DMMVIDPN *v44; // rax
  __int64 v45; // rcx
  struct DMMVIDPN **v46; // rbx
  __int64 v47; // rax
  int v48; // ebx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  _QWORD *v53; // rax
  __int64 v55; // [rsp+28h] [rbp-41h]
  DMMVIDPN *v56; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v57[24]; // [rsp+50h] [rbp-19h] BYREF
  _DXGKARG_RECOMMENDFUNCTIONALVIDPN v58; // [rsp+68h] [rbp-1h] BYREF

  v5 = a5;
  if ( !a5 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  *v5 = 0LL;
  v56 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn((struct VIDPN_MGR *)this, (__int64 *)&v56);
  v16 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = ClientVidPn;
    goto LABEL_34;
  }
  memset(&v58, 0, sizeof(v58));
  v58.NumberOfVidPnTargets = 0;
  v58.pVidPnTargetPrioritizationVector = 0LL;
  v18 = v56;
  if ( v56 == (DMMVIDPN *)-88LL )
    v58.hRecommendedFunctionalVidPn = 0LL;
  else
    v58.hRecommendedFunctionalVidPn = (D3DKMDT_HVIDPN)v56;
  v58.pPrivateDriverData = a3;
  v19 = this[1];
  v58.RequestReason = a2;
  v58.PrivateDriverDataSize = a4;
  if ( !v19 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v20);
    v19 = this[1];
  }
  v21 = (DXGADAPTER *)*((_QWORD *)v19 + 2);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v21) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v22);
    WdLogEvent5_WdAssertion(v23);
  }
  LOBYTE(v22) = *((_BYTE *)v18 + 172);
  if ( ((unsigned __int16)((2 << v22) - 1) & *((_WORD *)v18 + 87)) != 0 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v22);
    WdLogEvent5_WdAssertion(v24);
  }
  NumTargetsWithMonitorObjects = VIDPN_MGR::GetNumTargetsWithMonitorObjects((VIDPN_MGR *)this);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v57,
    (__int64)v18 + 152,
    1u,
    v26,
    v55,
    NumTargetsWithMonitorObjects);
  v28 = this[1];
  if ( !v28 )
  {
    v29 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v29);
    v28 = this[1];
  }
  v30 = ADAPTER_DISPLAY::DdiRecommendFunctionalVidPn(v28, &v58, v27);
  v35 = v30;
  v16 = -1071774941;
  if ( v30 == -1071774941 )
  {
    v36 = WdLogNewEntry5_WdDmmEvent(v32, v31, v33, v34);
    *(_QWORD *)(v36 + 24) = v21;
    WdLogEvent5_WdDmmEvent(v36);
LABEL_20:
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v57);
    goto LABEL_34;
  }
  if ( v30 < 0 )
  {
    v37 = WdLogNewEntry5_WdError(v32);
    *(_QWORD *)(v37 + 24) = v21;
    *(_QWORD *)(v37 + 32) = v35;
    WdLogEvent5_WdError(v37);
    v16 = v35;
    goto LABEL_20;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v57);
  if ( !DMMVIDPN::IsFunctional(v18) )
  {
    v39 = WdLogNewEntry5_WdAssertion(v38);
    WdLogEvent5_WdAssertion(v39);
  }
  if ( DMMVIDPN::IsFunctional(v18) )
  {
    v16 = 0;
    a5 = 0LL;
    v42 = (DMMVIDPN *)operator new(0x140uLL, 0x4E506456u, PagedPool);
    if ( v42 )
      v44 = DMMVIDPN::DMMVIDPN(v42, v18, v43);
    else
      v44 = 0LL;
    auto_rc<DMMVIDPN>::reset((__int64 *)&a5, (__int64)v44);
    v46 = a5;
    if ( a5 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct DMMVIDPN **const))a5[9])(a5 + 9) )
      {
        DmmLogDriverRecommendVidPnPacket((DMMVIDPN *)((char *)v18 + 96), a2);
        a5 = 0LL;
        Queue<DMMVIDPN>::Enqueue(this + 27, (__int64)v46);
        auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
        v56 = 0LL;
        *v5 = v18;
        goto LABEL_34;
      }
      v53 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v50, v49, v51, v52);
      v53[3] = v46;
      v53[4] = v18;
      v53[5] = *((int *)v46 + 20);
      WdLogEvent5_WdDmmEvent(v53);
      v48 = *((_DWORD *)v46 + 20);
    }
    else
    {
      v47 = WdLogNewEntry5_WdLowResource(v45);
      *(_QWORD *)(v47 + 24) = v18;
      WdLogEvent5_WdLowResource(v47);
      v48 = -1073741801;
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
    v16 = v48;
  }
  else
  {
    v41 = WdLogNewEntry5_WdError(v40);
    *(_QWORD *)(v41 + 24) = v21;
    *(_QWORD *)(v41 + 32) = -1071774941LL;
    WdLogEvent5_WdError(v41);
    DxgCreateLiveDumpWithWdLogs(0x193u, 2060LL, 0LL, 0LL, 0LL);
  }
LABEL_34:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v56, 0LL);
  return v16;
}
