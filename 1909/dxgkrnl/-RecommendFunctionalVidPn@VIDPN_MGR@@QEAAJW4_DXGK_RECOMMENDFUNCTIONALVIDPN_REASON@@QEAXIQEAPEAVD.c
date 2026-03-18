/*
 * XREFs of ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C02B61A0
 * Callers:
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1C01827AC (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C02B4048 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004518 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?Enqueue@?$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C0054654 (-Enqueue@-$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x1C005482C (-GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E32C4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00E3CC0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E4244 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E43B0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C014E414 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z @ 0x1C01FBE34 (-DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C0200A00 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C02B4B58 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 */

__int64 __fastcall VIDPN_MGR::RecommendFunctionalVidPn(
        ADAPTER_DISPLAY **this,
        __int64 a2,
        void *const a3,
        UINT a4,
        struct DMMVIDPN **const a5)
{
  struct DMMVIDPN **v5; // r12
  DXGK_RECOMMENDFUNCTIONALVIDPN_REASON v8; // r13d
  __int64 v10; // rax
  int ClientVidPn; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // edi
  DMMVIDPN *v15; // rbx
  ADAPTER_DISPLAY *v16; // r14
  __int64 v17; // rax
  DXGADAPTER *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 NumTargetsWithMonitorObjects; // rax
  unsigned __int8 v24; // r9
  __int64 v25; // rdx
  const GUID *v26; // r8
  ADAPTER_DISPLAY *v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  DMMVIDPN *v44; // rax
  unsigned __int8 v45; // r8
  DMMVIDPN *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  struct DMMVIDPN **v51; // rdi
  __int64 v52; // rax
  int v53; // ebx
  __int64 v54; // rdx
  __int64 v55; // rcx
  _QWORD *v56; // rax
  unsigned __int64 v58; // [rsp+28h] [rbp-41h]
  DMMVIDPN *v59; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v60[24]; // [rsp+50h] [rbp-19h] BYREF
  _DXGKARG_RECOMMENDFUNCTIONALVIDPN v61; // [rsp+68h] [rbp-1h] BYREF
  enum _DXGK_RECOMMENDFUNCTIONALVIDPN_REASON v62; // [rsp+D0h] [rbp+67h]

  v62 = (int)a2;
  v5 = a5;
  v8 = (int)a2;
  if ( !a5 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v10);
  }
  *v5 = 0LL;
  v59 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn((struct VIDPN_MGR *)this, (__int64 *)&v59);
  v14 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12) + 24) = ClientVidPn;
    goto LABEL_34;
  }
  *(_QWORD *)&v61.NumberOfVidPnTargets = 0LL;
  *((_DWORD *)&v61.RequestReason + 1) = 0;
  *(&v61.PrivateDriverDataSize + 1) = 0;
  v61.pVidPnTargetPrioritizationVector = 0LL;
  v15 = v59;
  if ( v59 == (DMMVIDPN *)-88LL )
    v61.hRecommendedFunctionalVidPn = 0LL;
  else
    v61.hRecommendedFunctionalVidPn = (D3DKMDT_HVIDPN)v59;
  v61.pPrivateDriverData = a3;
  v16 = this[1];
  v61.RequestReason = v8;
  v61.PrivateDriverDataSize = a4;
  if ( !v16 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v17);
    v16 = this[1];
  }
  v18 = (DXGADAPTER *)*((_QWORD *)v16 + 2);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v18) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v20, v19);
    WdLogEvent5_WdAssertion(v21);
  }
  LOBYTE(v20) = *((_BYTE *)v15 + 172);
  if ( ((unsigned __int16)((2 << v20) - 1) & *((_WORD *)v15 + 87)) != 0 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v20, v19);
    WdLogEvent5_WdAssertion(v22);
  }
  NumTargetsWithMonitorObjects = VIDPN_MGR::GetNumTargetsWithMonitorObjects((VIDPN_MGR *)this, v19);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v60,
    (__int64)v15 + 152,
    1u,
    v24,
    v58,
    NumTargetsWithMonitorObjects);
  v27 = this[1];
  if ( !v27 )
  {
    v28 = WdLogNewEntry5_WdAssertion(0LL, v25);
    WdLogEvent5_WdAssertion(v28);
    v27 = this[1];
  }
  v29 = ADAPTER_DISPLAY::DdiRecommendFunctionalVidPn(v27, &v61, v26);
  v33 = v29;
  v14 = -1071774941;
  if ( v29 == -1071774941 )
  {
    v34 = WdLogNewEntry5_WdDmmEvent(v31, v30);
    *(_QWORD *)(v34 + 24) = v18;
    WdLogEvent5_WdDmmEvent(v34);
LABEL_20:
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v60, v35);
    goto LABEL_34;
  }
  if ( v29 < 0 )
  {
    v36 = WdLogNewEntry5_WdError(v31, v30, v32);
    *(_QWORD *)(v36 + 24) = v18;
    *(_QWORD *)(v36 + 32) = v33;
    WdLogEvent5_WdError(v36);
    v14 = v33;
    goto LABEL_20;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v60, v30);
  if ( !DMMVIDPN::IsFunctional(v15) )
  {
    v39 = WdLogNewEntry5_WdAssertion(v38, v37);
    WdLogEvent5_WdAssertion(v39);
  }
  if ( DMMVIDPN::IsFunctional(v15) )
  {
    a5 = 0LL;
    v44 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, PagedPool);
    if ( v44 )
      v46 = DMMVIDPN::DMMVIDPN(v44, (const struct DMMVIDPNSOURCESET **)v15, v45);
    else
      v46 = 0LL;
    auto_rc<DMMVIDPN>::reset((__int64 *)&a5, (__int64)v46);
    v51 = a5;
    if ( a5 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct DMMVIDPN **const))a5[9])(a5 + 9) )
      {
        DmmLogDriverRecommendVidPnPacket((DMMVIDPN *)((char *)v15 + 96), (unsigned int)v62);
        a5 = 0LL;
        Queue<DMMVIDPN>::Enqueue(this + 27, (__int64)v51);
        auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
        v59 = 0LL;
        v14 = 0;
        *v5 = v15;
        goto LABEL_34;
      }
      v56 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v55, v54);
      v56[3] = v51;
      v56[4] = v15;
      v56[5] = *((int *)v51 + 20);
      WdLogEvent5_WdDmmEvent(v56);
      v53 = *((_DWORD *)v51 + 20);
    }
    else
    {
      v52 = WdLogNewEntry5_WdLowResource(v48, v47, v49, v50);
      *(_QWORD *)(v52 + 24) = v15;
      WdLogEvent5_WdLowResource(v52);
      v53 = -1073741801;
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
    v14 = v53;
  }
  else
  {
    v43 = WdLogNewEntry5_WdError(v41, v40, v42);
    *(_QWORD *)(v43 + 24) = v18;
    *(_QWORD *)(v43 + 32) = -1071774941LL;
    WdLogEvent5_WdError(v43);
    DxgCreateLiveDumpWithWdLogs(0x193u);
  }
LABEL_34:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v59, 0LL);
  return v14;
}
