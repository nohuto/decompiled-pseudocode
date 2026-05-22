/*
 * XREFs of ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180082A68
 * Callers:
 *     ?Process3DInput@MPCVoiceProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18012C200 (-Process3DInput@MPCVoiceProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801316F0 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180136440 (-Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180138CC0 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18013A6D8 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCEyeGazeProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18013ED70 (-Process3DInput@MPCEyeGazeProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCHeadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18013F280 (-Process3DInput@MPCHeadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18013FFF0 (-Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180014870 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputClient@@@Z @ 0x180015F98 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputClient@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_UseEyeGazeForGazeCursor@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180034D50 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_UseEyeGazeForGazeCursor@@@wil@@CAX_N.c)
 *     memcpy_0 @ 0x180037D6F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV?$function@$$A6AXPEAUIMPCInputProviderBase@@@Z@std@@@Z @ 0x180080A48 (-ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV-$function@$$A6AXPEAUIMPCInputProviderB.c)
 *     ?IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@@Z @ 0x1800819B0 (-IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@.c)
 *     ?IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z @ 0x180081A00 (-IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z.c)
 *     ?MPCHolographicInputManager_Process3DInput_HitTestResult_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800821E4 (-MPCHolographicInputManager_Process3DInput_HitTestResult_@ISMTracing@@QEAAXPEAULegacyInputInfo@@.c)
 *     ?MPCHolographicInputManager_SendPoints_@ISMTracing@@QEAAX_KK@Z @ 0x180082508 (-MPCHolographicInputManager_SendPoints_@ISMTracing@@QEAAX_KK@Z.c)
 *     ?PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@@Z @ 0x180082944 (-PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProvi.c)
 *     ?ProcessCapture@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180083098 (-ProcessCapture@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x180083240 (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 *     ?SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z @ 0x1800839A4 (-SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z.c)
 *     ?UpdateGazeDrivenProviders@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x180083E88 (-UpdateGazeDrivenProviders@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateGazeSensorData@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x180083F48 (-UpdateGazeSensorData@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdatePrimary@MPCHolographicInputManager@@AEAAXXZ @ 0x180084040 (-UpdatePrimary@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@AEAAXXZ @ 0x180084478 (-_Tidy@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCHolographicInputManager::Process3DInput(
        MPCHolographicInputManager *this,
        struct InputInfo *a2,
        struct IMPCInputProviderBase *a3,
        struct IMPCTarget **a4)
{
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rax
  struct ISystemInputRouter *v10; // rax
  __int64 v11; // rax
  struct IMPCTarget *v12; // rbx
  _OWORD *v13; // rax
  _OWORD *v14; // rcx
  __int64 v15; // r8
  const char *v16; // r9
  _OWORD *v17; // rcx
  _OWORD *v18; // rax
  __int64 v19; // r8
  struct IMPCTarget *v20; // rbx
  __int64 v21; // rdi
  void (__fastcall *v22)(__int64, struct InputInfo *, __int64, struct IMPCTarget **); // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  ISMTracing *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  MPCHolographicInputManager *v30; // rcx
  bool v31; // bl
  MPCHolographicInputManager *v32; // rcx
  unsigned int v33; // eax
  char *v34; // r8
  int v35; // eax
  int v36; // edi
  __int64 v37; // rbx
  __int64 v38; // rcx
  ISMTracing *v39; // rcx
  __int128 v41; // [rsp+40h] [rbp-31h]
  __int128 v42; // [rsp+50h] [rbp-21h] BYREF
  __int64 v43; // [rsp+60h] [rbp-11h]
  __int64 (__fastcall **v44)(); // [rsp+68h] [rbp-9h] BYREF
  __int128 v45; // [rsp+70h] [rbp-1h]
  __int64 (__fastcall ***v46)(); // [rsp+A0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  struct IMPCTarget *v48; // [rsp+D8h] [rbp+67h] BYREF

  v8 = retaddr;
  if ( !*((_BYTE *)this + 2364) )
    goto LABEL_43;
  if ( !*((_QWORD *)this + 288) )
  {
    v9 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 248LL))(a3);
    Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)this + 288, v9);
    v10 = (struct ISystemInputRouter *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 288) + 64LL))(*((_QWORD *)this + 288));
    MPCHolographicInputManager::SetMPCInputRouter(this, v10);
  }
  if ( !*((_QWORD *)this + 286) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      357LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)a4);
    __debugbreak();
  }
  MPCHolographicInputManager::UpdateGazeSensorData(this, a2);
  MPCHolographicInputManager::UpdatePrimary(this);
  v11 = *(_QWORD *)a3;
  if ( *((_BYTE *)a2 + 2025) )
  {
    v12 = (struct IMPCTarget *)(*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(v11 + 224))(a3);
    v48 = v12;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v48);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v48);
    *a4 = v12;
    v13 = (_OWORD *)(*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 232LL))(a3);
    v14 = (_OWORD *)((char *)a2 + 152);
    v15 = 2LL;
    do
    {
      *v14 = *v13;
      v14[1] = v13[1];
      v14[2] = v13[2];
      v14[3] = v13[3];
      v14[4] = v13[4];
      v14[5] = v13[5];
      v14[6] = v13[6];
      v14 += 8;
      *(v14 - 1) = v13[7];
      v13 += 8;
      --v15;
    }
    while ( v15 );
    *v14 = *v13;
    v14[1] = v13[1];
    v14[2] = v13[2];
    v14[3] = v13[3];
    *((_QWORD *)v14 + 8) = *((_QWORD *)v13 + 8);
LABEL_14:
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v48);
    goto LABEL_17;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(v11 + 64))(a3) )
  {
    if ( !*((_QWORD *)this + 293) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        374LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v16);
      __debugbreak();
    }
    v17 = (_OWORD *)((char *)a2 + 152);
    v18 = (_OWORD *)((char *)this + 400);
    v19 = 2LL;
    do
    {
      *v17 = *v18;
      v17[1] = v18[1];
      v17[2] = v18[2];
      v17[3] = v18[3];
      v17[4] = v18[4];
      v17[5] = v18[5];
      v17[6] = v18[6];
      v17 += 8;
      *(v17 - 1) = v18[7];
      v18 += 8;
      --v19;
    }
    while ( v19 );
    *v17 = *v18;
    v17[1] = v18[1];
    v17[2] = v18[2];
    v17[3] = v18[3];
    *((_QWORD *)v17 + 8) = *((_QWORD *)v18 + 8);
    v20 = (struct IMPCTarget *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 293) + 216LL))(
                                 *((_QWORD *)this + 293),
                                 128LL);
    v48 = v20;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v48);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v48);
    *a4 = v20;
    goto LABEL_14;
  }
  MPCHolographicInputManager::PrepAndStabilizeTargetingRay(this, a2, a3);
  v21 = *((_QWORD *)this + 287);
  v22 = *(void (__fastcall **)(__int64, struct InputInfo *, __int64, struct IMPCTarget **))(*(_QWORD *)v21 + 64LL);
  v23 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 216LL))(a3);
  v22(v21, a2, v23, a4);
  if ( ISMTracing::IsEnabled(v24) )
  {
    wil::details::static_lazy<ISMTracing>::get(v25, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCHolographicInputManager_Process3DInput_HitTestResult_(v26, a2);
  }
LABEL_17:
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD))(*(_QWORD *)a3 + 192LL))(a3, *a4);
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, char *))(*(_QWORD *)a3 + 208LL))(a3, (char *)a2 + 152);
  if ( *((_DWORD *)a2 + 16) == 8 )
  {
    wil::Feature<__WilFeatureTraits_Feature_UseEyeGazeForGazeCursor>::ReportUsageToService(v28, v27, v29);
    MPCHolographicInputManager::ProcessCursorData(
      this,
      *((_QWORD *)this + 293),
      (char *)a2 + 152,
      0LL,
      (char *)this + 2400);
    memcpy_0((char *)this + 248, a2, 0x7F0uLL);
  }
  MPCHolographicInputManager::UpdateGazeDrivenProviders(this, a2);
  MPCHolographicInputManager::ProcessCapture(v30, a2, a3, a4);
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD))(*(_QWORD *)a3 + 200LL))(a3, *a4);
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, MPCHolographicInputManager *, struct InputInfo *))(*(_QWORD *)a3 + 120LL))(
    a3,
    this,
    a2);
  v31 = !(*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 322) + 256LL))(**((_QWORD **)this + 322))
     && (*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 322) + 64LL))(**((_QWORD **)this + 322))
     && a3 == *((struct IMPCInputProviderBase **)this + 293);
  if ( MPCHolographicInputManager::IsProviderPrimary(this, a3) || v31 )
  {
    if ( MPCHolographicInputManager::IsProviderPrimary(this, a3) )
      *((_BYTE *)this + 2280) = *((_BYTE *)a2 + 456) != 0;
    LOBYTE(v48) = 0;
    v44 = off_180174940;
    *(_QWORD *)&v45 = &v48;
    v46 = &v44;
    MPCHolographicInputManager::ForEachActiveProvider((__int64)this, (__int64)&v44);
    if ( !*((_BYTE *)a2 + 2024) )
    {
      if ( MPCHolographicInputManager::IsMultiplePrimariesWithGazeCommit(v32, a3) )
        v33 = 1;
      else
        v33 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 312LL))(a3);
      v34 = (char *)this + 400;
      if ( !v31 )
        v34 = (char *)a2 + 152;
      MPCHolographicInputManager::ProcessCursorData(this, a3, v34, v33, (char *)a2 + 480);
    }
    if ( (__int64)(*((_QWORD *)this + 323) - *((_QWORD *)this + 322)) >> 3 == 1
      || (*(unsigned int (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 312LL))(a3) != 2 )
    {
      v42 = 0LL;
      v43 = 0LL;
      *(_QWORD *)&v41 = this;
      *((_QWORD *)&v41 + 1) = &v42;
      v44 = off_180174970;
      v45 = v41;
      v46 = &v44;
      MPCHolographicInputManager::ForEachActiveProvider((__int64)this, (__int64)&v44);
      v35 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 297) + 80LL))(
              *((_QWORD *)this + 297),
              (*((_QWORD *)&v42 + 1) - (_QWORD)v42) / 184LL);
      if ( v35 >= 0 )
      {
        v36 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 48LL))(a3);
        v37 = (*((_QWORD *)&v42 + 1) - (_QWORD)v42) / 184LL;
        if ( ISMTracing::IsEnabled((unsigned __int64)(*((_QWORD *)&v42 + 1)
                                                    - v42
                                                    + ((unsigned __int128)((__int64)(*((_QWORD *)&v42 + 1) - v42)
                                                                         * (__int128)(__int64)0xB21642C8590B2165uLL) >> 64)) >> 63) )
        {
          wil::details::static_lazy<ISMTracing>::get(
            v38,
            lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
          ISMTracing::MPCHolographicInputManager_SendPoints_(v39, (unsigned int)v37, v36);
        }
        std::vector<PointData3D>::_Tidy(&v42);
        return 0LL;
      }
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        466LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v35);
LABEL_43:
      wil::details::in1diag3::_FailFast_Unexpected(
        v8,
        348LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)a4);
      __debugbreak();
    }
  }
  return 0LL;
}
