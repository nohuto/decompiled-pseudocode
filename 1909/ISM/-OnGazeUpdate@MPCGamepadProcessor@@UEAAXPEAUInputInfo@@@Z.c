/*
 * XREFs of ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180137BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021360 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18003787F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x1800570C8 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180085EE4 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18008616C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18008632C (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18008645C (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800866B0 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x1800873E4 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ @ 0x18008767C (-ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ.c)
 *     ?ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAUInputInfo@@@Z @ 0x1800876CC (-ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAUInputInfo@@@Z.c)
 *     ??$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z @ 0x18012E0F4 (--$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z.c)
 *     ?ComputeTimeScale@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180137598 (-ComputeTimeScale@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x180137628 (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x180138718 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ @ 0x180138E9C (-ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ.c)
 *     ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1801395F0 (-UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1801398BC (-UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18013D110 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180140C30 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 */

void __fastcall MPCGamepadProcessor::OnGazeUpdate(unsigned __int64 this, struct InputInfo *a2)
{
  __int64 v2; // rax
  int v4; // edx
  MPCGamepadInputHelper *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 *v9; // rax
  MPCGamepadInputHelper *v10; // rax
  char ShouldUseGazeAndCommit; // al
  __int64 v12; // r12
  _OWORD *v13; // rsi
  _OWORD *v14; // rcx
  _OWORD *v15; // rax
  __int64 v16; // rdx
  __int128 v17; // xmm1
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 *v20; // rax
  char IsInjecting; // bl
  char *v22; // rcx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int64 v30; // rax
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int64 v34; // rax
  __int64 **v35; // rax
  __int64 **v36; // rbx
  __int64 *v37; // rax
  const char *v38; // r9
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 *v44; // rax
  float v45; // xmm2_4
  float v46; // xmm4_4
  float v47; // xmm5_4
  float v48; // xmm3_4
  float v49; // xmm5_4
  float v50; // xmm4_4
  float v51; // xmm1_4
  struct MPCHolographicInputManager *Instance; // rax
  const char *v53; // r9
  struct BamoMPCConstantManagerClientPrincipal *v54; // rbx
  float v55; // xmm6_4
  float v56; // xmm8_4
  unsigned __int64 v57; // rsi
  int v58; // eax
  const char *v59; // r9
  struct BamoMPCConstantManagerClientPrincipal *v60; // rbx
  float v61; // xmm8_4
  int v62; // eax
  const char *v63; // r9
  __m128 Static; // xmm0
  struct BamoMPCConstantManagerClientPrincipal *v65; // rbx
  __m128 v66; // xmm2
  __m128 v67; // xmm1
  float v68; // eax
  float v69; // xmm8_4
  int v70; // eax
  struct BamoMPCConstantManagerClientPrincipal *v71; // rbx
  float v72; // xmm8_4
  int v73; // eax
  const char *v74; // r9
  struct BamoMPCConstantManagerClientPrincipal *v75; // rbx
  float v76; // xmm8_4
  int v77; // eax
  const char *v78; // r9
  __m128 v79; // xmm0
  struct BamoMPCConstantManagerClientPrincipal *v80; // rbx
  __m128 v81; // xmm2
  __m128 v82; // xmm1
  float v83; // eax
  float v84; // xmm8_4
  int v85; // eax
  struct BamoMPCConstantManagerClientPrincipal *v86; // rbx
  float v87; // xmm8_4
  int v88; // eax
  const char *v89; // r9
  struct BamoMPCConstantManagerClientPrincipal *v90; // rbx
  float v91; // xmm8_4
  int v92; // eax
  const char *v93; // r9
  __m128 v94; // xmm0
  struct BamoMPCConstantManagerClientPrincipal *v95; // rbx
  __m128 v96; // xmm0
  __m128 v97; // xmm2
  __m128 v98; // xmm1
  float v99; // eax
  float v100; // xmm8_4
  int v101; // eax
  struct BamoMPCConstantManagerClientPrincipal *v102; // rbx
  float v103; // xmm7_4
  int v104; // eax
  const char *v105; // r9
  struct BamoMPCConstantManagerClientPrincipal *v106; // rbx
  float v107; // xmm7_4
  int v108; // eax
  __int128 v109; // xmm1
  __int128 v110; // xmm0
  __int128 v111; // xmm1
  __int64 v112; // rax
  __int64 v113; // rbx
  __int64 *v114; // rax
  _QWORD v115[2]; // [rsp+38h] [rbp-D0h] BYREF
  float v116; // [rsp+48h] [rbp-C0h]
  float v117[16]; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v118[4]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v119[24]; // [rsp+D8h] [rbp-30h] BYREF
  int v120; // [rsp+F0h] [rbp-18h]
  char v121; // [rsp+170h] [rbp+68h] BYREF
  int v122; // [rsp+174h] [rbp+6Ch]
  int v123; // [rsp+178h] [rbp+70h]
  __int128 v124; // [rsp+17Ch] [rbp+74h]
  int v125; // [rsp+190h] [rbp+88h]
  char v126; // [rsp+2A1h] [rbp+199h]
  int v127; // [rsp+368h] [rbp+260h]
  int v128; // [rsp+378h] [rbp+270h]
  int v129; // [rsp+37Ch] [rbp+274h]
  __int128 v130; // [rsp+380h] [rbp+278h]
  int v131; // [rsp+390h] [rbp+288h]
  bool v132; // [rsp+394h] [rbp+28Ch]
  __int128 v133; // [rsp+490h] [rbp+388h]
  __int128 v134; // [rsp+4A0h] [rbp+398h]
  __int128 v135; // [rsp+4B0h] [rbp+3A8h]
  __int128 v136; // [rsp+4C0h] [rbp+3B8h]
  wil::details::in1diag3 *retaddr; // [rsp+A40h] [rbp+938h]

  v2 = *((_QWORD *)a2 + 2);
  v4 = *(_DWORD *)(this + 6672);
  *(_QWORD *)(this + 4640) = v2;
  MPCSlateDeadzoneHelper::UpdateState(
    *(MPCSlateDeadzoneHelper **)(this + 7224),
    (v4 & 4) != 0,
    *((_QWORD *)a2 + 2),
    *((float *)a2 + 39),
    *((float *)a2 + 40),
    *((float *)a2 + 54));
  MPCGamepadProcessor::ProcessInteractionMode((MPCGamepadProcessor *)(this - 32));
  MPCGamepadInputHelper::GetInstance();
  if ( MPCGamepadInputHelper::ShouldHandleMPCInput(v6) )
  {
    MPCGamepadInputHelper::GetInstance();
    ShouldUseGazeAndCommit = MPCGamepadInputHelper::ShouldUseGazeAndCommit(v10, a2);
    *(_BYTE *)(this + 7124) = ShouldUseGazeAndCommit;
    if ( ShouldUseGazeAndCommit && *((_BYTE *)a2 + 152) && MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this)
      || *(_DWORD *)(this + 7120) )
    {
      v12 = 2LL;
      v13 = (_OWORD *)((char *)a2 + 152);
      if ( *((_BYTE *)a2 + 152) )
      {
        v14 = (_OWORD *)(this + 6792);
        v15 = (_OWORD *)((char *)a2 + 152);
        v16 = 2LL;
        do
        {
          *v14 = *v15;
          v14[1] = v15[1];
          v14[2] = v15[2];
          v14[3] = v15[3];
          v14[4] = v15[4];
          v14[5] = v15[5];
          v14[6] = v15[6];
          v14 += 8;
          v17 = v15[7];
          v15 += 8;
          *(v14 - 1) = v17;
          --v16;
        }
        while ( v16 );
        *v14 = *v15;
        v14[1] = v15[1];
        v14[2] = v15[2];
        v14[3] = v15[3];
        *((_QWORD *)v14 + 8) = *((_QWORD *)v15 + 8);
      }
      if ( *((_BYTE *)a2 + 154) || *(_DWORD *)(this + 7120) )
      {
        MPCGamepadProcessor::UpdateScroll((MPCGamepadProcessor *)(this - 32), a2);
        MPCGamepadProcessor::UpdateZoom((MPCGamepadProcessor *)(this - 32), a2);
        if ( !*(_DWORD *)(this + 7120) )
        {
          if ( *(_BYTE *)v13 )
          {
            MPCGestureHandlerManager::GetInstance();
            v19 = v18;
            v20 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                    v115,
                    this & -(__int64)(this != 32));
            IsInjecting = MPCGestureHandlerManager::IsInjecting(v19, v20);
            memset_0(v119, 0, 0x7F0uLL);
            v22 = &v121;
            v120 = 2032;
            do
            {
              v23 = v13[1];
              *(_OWORD *)v22 = *v13;
              v24 = v13[2];
              *((_OWORD *)v22 + 1) = v23;
              v25 = v13[3];
              *((_OWORD *)v22 + 2) = v24;
              v26 = v13[4];
              *((_OWORD *)v22 + 3) = v25;
              v27 = v13[5];
              *((_OWORD *)v22 + 4) = v26;
              v28 = v13[6];
              *((_OWORD *)v22 + 5) = v27;
              v29 = v13[7];
              v13 += 8;
              *((_OWORD *)v22 + 6) = v28;
              v22 += 128;
              *((_OWORD *)v22 - 1) = v29;
              --v12;
            }
            while ( v12 );
            v30 = *((_QWORD *)v13 + 8);
            v31 = v13[1];
            *(_OWORD *)v22 = *v13;
            v32 = v13[2];
            *((_OWORD *)v22 + 1) = v31;
            v33 = v13[3];
            *((_OWORD *)v22 + 2) = v32;
            *((_OWORD *)v22 + 3) = v33;
            *((_QWORD *)v22 + 8) = v30;
            v132 = v126 != 0;
            v128 = v122;
            v129 = v123;
            v127 = 4;
            v131 = v125;
            v130 = v124;
            if ( IsInjecting )
            {
              v34 = *(_QWORD *)(this + 7224);
              v127 = 7;
              if ( !*(_BYTE *)(v34 + 13) )
              {
                v128 = *(_DWORD *)(v34 + 4);
                v129 = *(_DWORD *)(v34 + 8);
              }
            }
            MPCGestureHandlerManager::GetInstance();
            v36 = v35;
            v37 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                    v115,
                    this & -(__int64)(this != 32));
            MPCGestureHandlerManager::DownLevelTo2D(v36, (__int64)v119, v37, v38);
          }
        }
      }
    }
    else
    {
      MPCGestureHandlerManager::GetInstance();
      v40 = v39;
      v41 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              v115,
              this & -(__int64)(this != 32));
      if ( MPCGestureHandlerManager::IsInjecting(v40, v41) && (*(_BYTE *)(this + 6672) & 4) == 0
        || (MPCGestureHandlerManager::GetInstance(),
            v43 = v42,
            v44 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                    v115,
                    this & -(__int64)(this != 32)),
            MPCGestureHandlerManager::IsHovering(v43, v44)) )
      {
        MPCGamepadProcessor::EndGesture((MPCGamepadProcessor *)(this - 32));
      }
    }
    v45 = 0.0;
    if ( (*(_DWORD *)(this + 6672) & 0x400) != 0 )
      v48 = FLOAT_N1_0;
    else
      v48 = 0.0;
    if ( (*(_DWORD *)(this + 6672) & 0x800) != 0 )
      v45 = FLOAT_1_0;
    v47 = *(double *)(this + 6696);
    v49 = (float)(v47 + *(float *)(this + 7152)) * 0.5;
    v46 = *(double *)(this + 6704);
    v50 = (float)(v46 + *(float *)(this + 7156)) * 0.5;
    v51 = (float)((float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(*(double *)(this + 6688)) ^ _xmm)
                        + (float)*(double *)(this + 6680))
                + *(float *)(this + 7160))
        * 0.5;
    *(float *)(this + 7164) = (float)((float)(v45 + v48) + *(float *)(this + 7164)) * 0.5;
    *(float *)(this + 7152) = v49;
    *(float *)(this + 7156) = v50;
    *(float *)(this + 7160) = v51;
    Instance = MPCHolographicInputManager::GetInstance();
    memcpy_0(v119, Instance, 0x8F0uLL);
    v118[0] = v133;
    v118[1] = v134;
    v118[2] = v135;
    v118[3] = v136;
    MPCMath::OrientToGravity(v117, v118);
    MPCGamepadProcessor::ComputeTimeScale((MPCGamepadProcessor *)(this - 32), a2);
    v54 = MPCConstantManager::s_instance;
    v55 = *(float *)(this + 7200);
    v56 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(this + 7152)) & _xmm);
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v53);
      __debugbreak();
    }
    v57 = this & -(__int64)(this != 32);
    v58 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v57 + 48LL))(v57);
    if ( v56 >= MPCConstantManager::GetStaticConstant<float>((__int64)v54, v58, L"ThumbstickDeadzone").m128_f32[0] )
    {
      v60 = MPCConstantManager::s_instance;
      v61 = *(float *)(this + 7152);
      if ( !MPCConstantManager::s_instance )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v59);
        __debugbreak();
      }
      v62 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v57 + 48LL))(v57);
      Static = MPCConstantManager::GetStaticConstant<float>((__int64)v60, v62, L"PointScaleFactor");
      v65 = MPCConstantManager::s_instance;
      Static.m128_f32[0] = Static.m128_f32[0] * v61;
      v66 = Static;
      v67 = Static;
      v66.m128_f32[0] = (float)((float)(Static.m128_f32[0] * v117[0]) * v55) + *(float *)(this + 7140);
      v67.m128_f32[0] = (float)((float)(Static.m128_f32[0] * v117[1]) * v55) + *(float *)(this + 7144);
      v116 = (float)((float)(Static.m128_f32[0] * v117[2]) * v55) + *(float *)(this + 7148);
      v68 = v116;
      *(_QWORD *)(this + 7140) = _mm_unpacklo_ps(v66, v67).m128_u64[0];
      *(float *)(this + 7148) = v68;
      v69 = *(float *)(this + 7152);
      if ( !v65 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v63);
        __debugbreak();
      }
      v70 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v57 + 48LL))(v57);
      *(float *)(this + 7168) = (float)((float)(MPCConstantManager::GetStaticConstant<float>(
                                                  (__int64)v65,
                                                  v70,
                                                  L"PointScaleFactor").m128_f32[0]
                                              * v69)
                                      * v55)
                              + *(float *)(this + 7168);
    }
    v71 = MPCConstantManager::s_instance;
    v72 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(this + 7156)) & _xmm);
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v59);
      __debugbreak();
    }
    v73 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v57 + 48LL))(v57);
    if ( v72 >= MPCConstantManager::GetStaticConstant<float>((__int64)v71, v73, L"ThumbstickDeadzone").m128_f32[0] )
    {
      v75 = MPCConstantManager::s_instance;
      v76 = *(float *)(this + 7156);
      if ( !MPCConstantManager::s_instance )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v74);
        __debugbreak();
      }
      v77 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v57 + 48LL))(v57);
      v79 = MPCConstantManager::GetStaticConstant<float>((__int64)v75, v77, L"PointScaleFactor");
      v80 = MPCConstantManager::s_instance;
      v79.m128_f32[0] = v79.m128_f32[0] * v76;
      v81 = v79;
      v82 = v79;
      v81.m128_f32[0] = (float)((float)(v79.m128_f32[0] * v117[4]) * v55) + *(float *)(this + 7140);
      v82.m128_f32[0] = (float)((float)(v79.m128_f32[0] * v117[5]) * v55) + *(float *)(this + 7144);
      v116 = (float)((float)(v79.m128_f32[0] * v117[6]) * v55) + *(float *)(this + 7148);
      v83 = v116;
      *(_QWORD *)(this + 7140) = _mm_unpacklo_ps(v81, v82).m128_u64[0];
      *(float *)(this + 7148) = v83;
      v84 = *(float *)(this + 7156);
      if ( !v80 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v78);
        __debugbreak();
      }
      v85 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v57 + 48LL))(v57);
      *(float *)(this + 7172) = (float)((float)(MPCConstantManager::GetStaticConstant<float>(
                                                  (__int64)v80,
                                                  v85,
                                                  L"PointScaleFactor").m128_f32[0]
                                              * v84)
                                      * v55)
                              + *(float *)(this + 7172);
    }
    v86 = MPCConstantManager::s_instance;
    v87 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(this + 7160)) & _xmm);
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v74);
      __debugbreak();
    }
    v88 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v57 + 48LL))(v57);
    if ( v87 >= MPCConstantManager::GetStaticConstant<float>((__int64)v86, v88, L"ThumbstickDeadzone").m128_f32[0] )
    {
      v90 = MPCConstantManager::s_instance;
      v91 = *(float *)(this + 7160);
      if ( !MPCConstantManager::s_instance )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v89);
        __debugbreak();
      }
      v92 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v57 + 48LL))(v57);
      v94 = MPCConstantManager::GetStaticConstant<float>((__int64)v90, v92, L"PointScaleFactor");
      v95 = MPCConstantManager::s_instance;
      v94.m128_f32[0] = v94.m128_f32[0] * v91;
      v96 = _mm_xor_ps(v94, (__m128)_xmm);
      v97 = v96;
      v98 = v96;
      v97.m128_f32[0] = (float)((float)(v96.m128_f32[0] * v117[8]) * v55) + *(float *)(this + 7140);
      v98.m128_f32[0] = (float)((float)(v96.m128_f32[0] * v117[9]) * v55) + *(float *)(this + 7144);
      v116 = (float)((float)(v96.m128_f32[0] * v117[10]) * v55) + *(float *)(this + 7148);
      v99 = v116;
      *(_QWORD *)(this + 7140) = _mm_unpacklo_ps(v97, v98).m128_u64[0];
      *(float *)(this + 7148) = v99;
      v100 = *(float *)(this + 7160);
      if ( !v95 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v93);
        __debugbreak();
      }
      v101 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v57 + 48LL))(v57);
      *(float *)(this + 7176) = (float)((float)(MPCConstantManager::GetStaticConstant<float>(
                                                  (__int64)v95,
                                                  v101,
                                                  L"PointScaleFactor").m128_f32[0]
                                              * v100)
                                      * v55)
                              + *(float *)(this + 7176);
    }
    v102 = MPCConstantManager::s_instance;
    v103 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(this + 7164)) & _xmm);
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v89);
      __debugbreak();
    }
    v104 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v57 + 48LL))(v57);
    if ( v103 >= MPCConstantManager::GetStaticConstant<float>((__int64)v102, v104, L"ThumbstickDeadzone").m128_f32[0] )
    {
      v106 = MPCConstantManager::s_instance;
      v107 = *(float *)(this + 7164);
      if ( !MPCConstantManager::s_instance )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v105);
        __debugbreak();
      }
      v108 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v57 + 48LL))(v57);
      *(float *)(this + 7180) = (float)((float)(MPCConstantManager::GetStaticConstant<float>(
                                                  (__int64)v106,
                                                  v108,
                                                  L"PointScaleFactor").m128_f32[0]
                                              * v107)
                                      * v55)
                              + *(float *)(this + 7180);
    }
    v109 = *(_OWORD *)(this + 6680);
    *(_OWORD *)(this + 6728) = *(_OWORD *)(this + 6664);
    v110 = *(_OWORD *)(this + 6696);
    *(_OWORD *)(this + 6744) = v109;
    v111 = *(_OWORD *)(this + 6712);
    *(_OWORD *)(this + 6760) = v110;
    *(_OWORD *)(this + 6776) = v111;
    MPCGestureHandlerManager::GetInstance();
    v113 = v112;
    v114 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
             v115,
             v57);
    MPCGestureHandlerManager::OnGazeUpdate(v113, v114);
  }
  else if ( *(_DWORD *)(this + 7120)
         || (MPCGestureHandlerManager::GetInstance(),
             v8 = v7,
             v9 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                    v115,
                    this & -(__int64)(this != 32)),
             MPCGestureHandlerManager::IsHovering(v8, v9)) )
  {
    MPCGamepadProcessor::EndGesture((MPCGamepadProcessor *)(this - 32));
  }
}
