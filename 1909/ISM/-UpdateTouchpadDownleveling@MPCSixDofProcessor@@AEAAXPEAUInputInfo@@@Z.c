/*
 * XREFs of ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180132F14
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180131510 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     sqrtf_0 @ 0x18003785B (sqrtf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x1800570C8 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180085EE4 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18008616C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?GetLastScrollVelocityAvg@MPCGestureHandlerManager@@QEAAMV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180086228 (-GetLastScrollVelocityAvg@MPCGestureHandlerManager@@QEAAMV-$com_ptr_t@UIMPCInputProviderBase@@Ue.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18008645C (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?IsWorkspaceScrolling@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800864F4 (-IsWorkspaceScrolling@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ??R?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecognizerHandler@@@Z @ 0x18008D040 (--R-$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecogni.c)
 *     ??$GetStaticConstant@_N@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z @ 0x18012BB6C (--$GetStaticConstant@_N@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z.c)
 *     ??$GetStaticConstant@K@MPCConstantManager@@QEAAKW4InputType@@PEBG@Z @ 0x18012DEBC (--$GetStaticConstant@K@MPCConstantManager@@QEAAKW4InputType@@PEBG@Z.c)
 *     ??$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z @ 0x18012E0F4 (--$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z.c)
 *     ??$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA?AV?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@0@$$QEAM@Z @ 0x18012EAD4 (--$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA-AV-$unique_ptr@VMPCButtonHoldHelper@@U-$defau.c)
 *     ??4?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18012EF04 (--4-$unique_ptr@VMPCButtonHoldHelper@@U-$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAAE.c)
 *     ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x18012FE78 (-EndGesture@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180140A70 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCSixDofProcessor::UpdateTouchpadDownleveling(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  char v4; // r13
  __int64 *v5; // r12
  MPCButtonHoldHelper *v6; // r15
  __int64 v7; // rax
  __int64 v8; // rbx
  char *v9; // rsi
  __int64 *v10; // rax
  bool v11; // dl
  const char *v12; // r9
  __int64 v13; // rax
  volatile signed __int32 *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 *v17; // rax
  bool v18; // bl
  __int64 v19; // rax
  volatile signed __int32 *v20; // rcx
  char v21; // r15
  struct BamoMPCConstantManagerClientPrincipal *v22; // rbx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 *v26; // rax
  struct BamoMPCConstantManagerClientPrincipal *v27; // r15
  int v28; // eax
  int v29; // ebx
  const char *v30; // r9
  __int64 v31; // rax
  volatile signed __int32 *v32; // rcx
  char v33; // r15
  struct BamoMPCConstantManagerClientPrincipal *v34; // rbx
  float v35; // xmm6_4
  int v36; // eax
  const char *v37; // r9
  float v38; // xmm6_4
  struct BamoMPCConstantManagerClientPrincipal *v39; // rbx
  int v40; // eax
  const char *v41; // r9
  struct BamoMPCConstantManagerClientPrincipal *v42; // rbx
  int v43; // eax
  const char *v44; // r9
  float v45; // xmm6_4
  float v46; // xmm7_4
  struct BamoMPCConstantManagerClientPrincipal *v47; // r15
  int v48; // ebx
  float v49; // xmm6_4
  char v50; // r15
  float v51; // xmm0_4
  bool v52; // r12
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 *v55; // rax
  int v56; // eax
  const char *v57; // r9
  struct BamoMPCConstantManagerClientPrincipal *v58; // rbx
  int v59; // eax
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 *v62; // rax
  const char *v63; // r9
  float v64; // xmm6_4
  float v65; // xmm7_4
  struct BamoMPCConstantManagerClientPrincipal *v66; // r15
  int v67; // ebx
  float v68; // xmm0_4
  const char *v69; // r9
  unsigned int v70; // r15d
  struct BamoMPCConstantManagerClientPrincipal *v71; // rbx
  int v72; // eax
  __int64 v73; // rax
  __int64 v74; // rbx
  __int64 *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rbx
  __int64 *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rbx
  __int64 *v81; // rax
  const char *v82; // r9
  float v83; // xmm6_4
  struct BamoMPCConstantManagerClientPrincipal *v84; // rbx
  int v85; // eax
  __int64 *v86; // rax
  __int64 v87; // rcx
  __int64 **v88; // rax
  __int64 **v89; // rbx
  __int64 *v90; // rax
  const char *v91; // r9
  __int64 v92; // [rsp+28h] [rbp-69h] BYREF
  __int64 v93; // [rsp+30h] [rbp-61h] BYREF
  __int64 v94; // [rsp+38h] [rbp-59h] BYREF
  __int64 v95; // [rsp+40h] [rbp-51h] BYREF
  __int64 v96; // [rsp+48h] [rbp-49h] BYREF
  __int64 v97; // [rsp+50h] [rbp-41h] BYREF
  void (__fastcall ***v98)(_QWORD, __int64); // [rsp+58h] [rbp-39h] BYREF
  _QWORD v99[3]; // [rsp+60h] [rbp-31h] BYREF
  __int64 v100; // [rsp+78h] [rbp-19h]
  volatile signed __int32 *v101; // [rsp+80h] [rbp-11h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  std::_Ref_count_base *v103; // [rsp+F8h] [rbp+67h]
  float v104; // [rsp+100h] [rbp+6Fh] BYREF
  __int64 v105; // [rsp+108h] [rbp+77h] BYREF
  __int64 v106; // [rsp+110h] [rbp+7Fh] BYREF

  v99[1] = -2LL;
  v4 = 0;
  v5 = (__int64 *)((char *)this + 5000);
  v6 = (MPCButtonHoldHelper *)*((_QWORD *)this + 625);
  MPCGestureHandlerManager::GetInstance();
  v8 = v7;
  v9 = (char *)this + 24;
  v10 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
          &v105,
          (__int64)this + 24);
  v11 = !MPCGestureHandlerManager::IsWorkspaceScrolling(v8, v10) || *((_BYTE *)this + 4634);
  MPCButtonHoldHelper::UpdateState(v6, v11, *((_QWORD *)a2 + 2));
  *((_DWORD *)a2 + 168) = *((_DWORD *)a2 + 39);
  *((_DWORD *)a2 + 169) = *((_DWORD *)a2 + 40);
  *((_DWORD *)a2 + 164) = 0;
  v13 = *((_QWORD *)this + 629);
  v14 = *(volatile signed __int32 **)(v13 + 24);
  if ( v14 )
  {
    _InterlockedIncrement(v14 + 2);
    v14 = *(volatile signed __int32 **)(v13 + 24);
  }
  v100 = *(_QWORD *)(v13 + 16);
  v101 = v14;
  LODWORD(v103) = 1;
  v18 = 0;
  if ( *(_BYTE *)(v100 + 8) )
  {
    MPCGestureHandlerManager::GetInstance();
    v16 = v15;
    v17 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v106,
            (__int64)this + 24);
    if ( !MPCGestureHandlerManager::IsWorkspaceScrolling(v16, v17) )
      v18 = 1;
  }
  if ( v14 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v14);
  if ( v18 )
  {
    v19 = *((_QWORD *)this + 629);
    v20 = *(volatile signed __int32 **)(v19 + 24);
    if ( v20 )
    {
      _InterlockedIncrement(v20 + 2);
      v20 = *(volatile signed __int32 **)(v19 + 24);
    }
    v21 = *(_BYTE *)(*(_QWORD *)(v19 + 16) + 10LL);
    if ( v20 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v20);
    v22 = MPCConstantManager::s_instance;
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v12);
      __debugbreak();
    }
    v23 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v9 + 48LL))((char *)this + 24);
    if ( MPCConstantManager::GetStaticConstant<bool>((__int64)v22, v23, L"IsTouchpadClickingEnabled")
      && (v21 || *(_BYTE *)(*((_QWORD *)this + 629) + 13LL)) )
    {
      MPCGestureHandlerManager::GetInstance();
      v25 = v24;
      v26 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              &v92,
              (__int64)this + 24);
      *((_DWORD *)a2 + 164) = MPCGestureHandlerManager::IsInjecting(v25, v26) != 0 ? 7 : 1;
LABEL_24:
      *((_BYTE *)this + 4634) = 1;
LABEL_93:
      *(_OWORD *)((char *)a2 + 680) = *(_OWORD *)((char *)a2 + 164);
      *((_DWORD *)a2 + 174) = *((_DWORD *)a2 + 46);
      MPCGestureHandlerManager::GetInstance();
      v89 = v88;
      v90 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              v99,
              (__int64)this + 24);
      MPCGestureHandlerManager::DownLevelTo2D(v89, (__int64)a2, v90, v91);
      *((_BYTE *)this + 4645) = 1;
      return;
    }
    return;
  }
  v27 = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v12);
    __debugbreak();
  }
  v28 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v9 + 48LL))((char *)this + 24);
  v29 = 0;
  if ( !MPCConstantManager::GetStaticConstant<bool>((__int64)v27, v28, L"IsTouchpadTouchScrollingEnabled")
    || !*((_BYTE *)this + 4644)
    || (LODWORD(v103) = 0, *((_DWORD *)this + 1160) == 2) )
  {
    v32 = (volatile signed __int32 *)v103;
LABEL_35:
    v33 = 0;
    goto LABEL_36;
  }
  v31 = *((_QWORD *)this + 629);
  v32 = *(volatile signed __int32 **)(v31 + 24);
  if ( v32 )
  {
    _InterlockedIncrement(v32 + 2);
    v32 = *(volatile signed __int32 **)(v31 + 24);
  }
  v29 = 2;
  if ( *(_BYTE *)(*(_QWORD *)(v31 + 16) + 12LL) )
    goto LABEL_35;
  v33 = 1;
LABEL_36:
  if ( v29 && v32 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v32);
  v34 = MPCConstantManager::s_instance;
  if ( v33 )
  {
    v35 = *((float *)this + 1276) + *((float *)this + 1291);
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v30);
      __debugbreak();
    }
    v36 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v9 + 48LL))((char *)this + 24);
    *((float *)a2 + 165) = MPCConstantManager::GetStaticConstant<float>(
                             (__int64)v34,
                             v36,
                             L"TouchpadScrollTouchSpeedFactor").m128_f32[0]
                         * v35;
    v38 = *((float *)this + 1292) + *((float *)this + 1277);
    v39 = MPCConstantManager::s_instance;
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v37);
      __debugbreak();
    }
    v40 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v9 + 48LL))((char *)this + 24);
    *((float *)a2 + 166) = MPCConstantManager::GetStaticConstant<float>(
                             (__int64)v39,
                             v40,
                             L"TouchpadScrollTouchSpeedFactor").m128_f32[0]
                         * v38;
    v42 = MPCConstantManager::s_instance;
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v41);
      __debugbreak();
    }
    v43 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v9 + 48LL))((char *)this + 24);
    if ( MPCConstantManager::GetStaticConstant<bool>((__int64)v42, v43, L"TouchpadScrollInvert") )
      *((float *)a2 + 166) = *((float *)a2 + 166) * -1.0;
    v45 = *((float *)this + 1291) + *((float *)this + 1276);
    v46 = *((float *)this + 1277) + *((float *)this + 1292);
    v47 = MPCConstantManager::s_instance;
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v44);
      __debugbreak();
    }
    v48 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v9 + 48LL))((char *)this + 24);
    v49 = sqrtf_0((float)(v45 * v45) + (float)(v46 * v46));
    if ( v49 <= MPCConstantManager::GetStaticConstant<float>((__int64)v47, v48, L"TouchpadScrollTouchVelocityMin").m128_f32[0] )
    {
      v50 = 0;
      v51 = *((float *)this + 1277) + *((float *)this + 1292);
      *((float *)this + 1291) = *((float *)this + 1276) + *((float *)this + 1291);
      *((float *)this + 1292) = v51;
    }
    else
    {
      v50 = 1;
    }
    v52 = v50
       && *((_DWORD *)this + 1160) != 3
       && (float)((float)(*((float *)this + 1277) * *((float *)this + 1279))
                + (float)(*((float *)this + 1276) * *((float *)this + 1278))) >= 0.0;
    MPCGestureHandlerManager::GetInstance();
    v54 = v53;
    v55 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v93,
            (__int64)this + 24);
    if ( !MPCGestureHandlerManager::IsWorkspaceScrolling(v54, v55) || v50 )
    {
      if ( !v52 )
      {
LABEL_64:
        *((_DWORD *)a2 + 164) = 5;
        *((_DWORD *)this + 1159) = 0;
        goto LABEL_92;
      }
      *(_QWORD *)((char *)this + 5164) = 0LL;
      *((_BYTE *)this + 4634) = 0;
    }
    else
    {
      *(_QWORD *)((char *)a2 + 660) = 0LL;
      *((_BYTE *)this + 4634) = 1;
    }
    v4 = 1;
    goto LABEL_64;
  }
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v30);
    __debugbreak();
  }
  v56 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v9 + 48LL))((char *)this + 24);
  if ( !MPCConstantManager::GetStaticConstant<bool>((__int64)v34, v56, L"IsTouchpadTouchScrollingEnabled") )
    goto LABEL_85;
  v58 = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v57);
    __debugbreak();
  }
  v59 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v9 + 48LL))((char *)this + 24);
  if ( !MPCConstantManager::GetStaticConstant<bool>((__int64)v58, v59, L"IsTouchpadTouchScrollingStopEnabled")
    || *((_BYTE *)this + 4634)
    || !*((_BYTE *)this + 4644)
    || !*(_BYTE *)(*v5 + 8)
    || *(_BYTE *)(*v5 + 9)
    || (MPCGestureHandlerManager::GetInstance(),
        v61 = v60,
        v62 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                &v94,
                (__int64)this + 24),
        MPCGestureHandlerManager::IsInjecting(v61, v62)) )
  {
LABEL_85:
    MPCGestureHandlerManager::GetInstance();
    v74 = v73;
    v75 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v95,
            (__int64)this + 24);
    if ( !MPCGestureHandlerManager::IsInjecting(v74, v75) && !*((_BYTE *)this + 4645) )
      return;
    MPCGestureHandlerManager::GetInstance();
    v77 = v76;
    v78 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v96,
            (__int64)this + 24);
    LOBYTE(v77) = MPCGestureHandlerManager::IsWorkspaceScrolling(v77, v78);
    MPCSixDofProcessor::EndGesture(this);
    if ( !(_BYTE)v77 )
      return;
    MPCGestureHandlerManager::GetInstance();
    v80 = v79;
    v81 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v97,
            (__int64)this + 24);
    v83 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(MPCGestureHandlerManager::GetLastScrollVelocityAvg(v80, v81).m128_f32[0]) & _xmm);
    v84 = MPCConstantManager::s_instance;
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v82);
      __debugbreak();
    }
    v85 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v9 + 48LL))((char *)this + 24);
    v104 = MPCConstantManager::GetStaticConstant<float>((__int64)v84, v85, L"TouchpadNotScrollingMultiplier").m128_f32[0]
         * v83;
    v86 = std::make_unique<MPCButtonHoldHelper,float,0>(&v98, &v104);
    std::unique_ptr<MPCButtonHoldHelper>::operator=(v5, v86);
    if ( !v98 )
      return;
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(v87, v98);
LABEL_92:
    if ( !v4 )
      return;
    goto LABEL_93;
  }
  ++*((_DWORD *)this + 1159);
  v64 = *((float *)this + 1268) - *((float *)this + 1274);
  v65 = *((float *)this + 1269) - *((float *)this + 1275);
  v66 = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v63);
    __debugbreak();
  }
  v67 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v9 + 48LL))((char *)this + 24);
  v68 = sqrtf_0((float)(v64 * v64) + (float)(v65 * v65));
  if ( (float)(int)v68 <= MPCConstantManager::GetStaticConstant<float>((__int64)v66, v67, L"TouchpadStopMaxDelta").m128_f32[0] )
  {
    v70 = *((_DWORD *)this + 1159);
  }
  else
  {
    *((_DWORD *)this + 1159) = 0;
    v70 = 0;
  }
  v71 = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v69);
    __debugbreak();
  }
  v72 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v9 + 48LL))((char *)this + 24);
  if ( v70 >= (unsigned int)MPCConstantManager::GetStaticConstant<unsigned long>(
                              (__int64)v71,
                              v72,
                              L"TouchpadNumFramesStopScroll") )
  {
    *((_DWORD *)a2 + 164) = 1;
    goto LABEL_24;
  }
}
