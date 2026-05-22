/*
 * XREFs of ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N1@Z @ 0x1800EF468
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800F0670 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?SendHomeGesture@MPCManager@@QEAAXKK_KI@Z @ 0x18003CCD4 (-SendHomeGesture@MPCManager@@QEAAXKK_KI@Z.c)
 *     ?OnButtonsChangedDuringHomeGesture@MPCManager@@QEAAXIII_KI@Z @ 0x18003CDDC (-OnButtonsChangedDuringHomeGesture@MPCManager@@QEAAXIII_KI@Z.c)
 *     ?OnInteractiveIntentGesture@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@III_KI@Z @ 0x18003CF70 (-OnInteractiveIntentGesture@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@III_KI@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ @ 0x180042B14 (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x1800480D0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??$_Emplace_reallocate@AEAULegacyInputInfo@@@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAAPEAULegacyInputInfo@@QEAU2@AEAU2@@Z @ 0x1800580D4 (--$_Emplace_reallocate@AEAULegacyInputInfo@@@-$vector@ULegacyInputInfo@@V-$allocator@ULegacyInpu.c)
 *     ?AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@I@Z @ 0x1800EF35C (-AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@I@Z.c)
 *     _lambda_b7cefc7a697f0e52101b2c7465c33840_::operator() @ 0x1800F016C (_lambda_b7cefc7a697f0e52101b2c7465c33840_--operator().c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z @ 0x1800F3C58 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@PEBG@Z @ 0x1800F3DD4 (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@PEBG@Z.c)
 *     ??$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEBI@ISMTracing@@SAX$$QEAKAEA_NAEAKAEBM33333AEAM44444444444AEBI@Z @ 0x1800F3F40 (--$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEA.c)
 *     ??$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_NAEBI2$$QEAM1@Z @ 0x1800F4114 (--$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_NAEBI2$$.c)
 *     ?MPCSixDofProcessor_HomeButtonIgnored_@ISMTracing@@QEAAXXZ @ 0x1800F52DC (-MPCSixDofProcessor_HomeButtonIgnored_@ISMTracing@@QEAAXXZ.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180102BE4 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCSixDofProcessor::ProcessHomeGesture(
        MPCSixDofProcessor *this,
        struct InputInfo *a2,
        bool *a3,
        bool *a4)
{
  unsigned __int64 v4; // xmm0_8
  int *v5; // r13
  char *v6; // r15
  bool v8; // bl
  __int64 v10; // rdx
  __int64 v11; // r8
  const char *v12; // r9
  __int64 v13; // rcx
  bool v14; // dl
  _DWORD *v15; // r12
  MPCConstantManager *Instance; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  const char *v19; // r9
  float v20; // xmm11_4
  float v21; // xmm12_4
  float v22; // xmm10_4
  float v23; // xmm11_4
  float v24; // xmm12_4
  MPCConstantManager *v25; // rax
  float v26; // xmm6_4
  __m128 v27; // xmm8
  __m128 v28; // xmm9
  float v29; // xmm7_4
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  const char *v33; // r9
  MPCConstantManager *v34; // rax
  __m128 v35; // xmm2
  float v36; // xmm12_4
  __int64 v37; // rcx
  float v38; // xmm5_4
  __int64 v39; // rax
  float v40; // xmm4_4
  float v41; // xmm4_4
  float v42; // eax
  float v43; // xmm2_4
  float v44; // xmm1_4
  float v45; // eax
  float v46; // xmm2_4
  float v47; // xmm1_4
  __int64 v48; // rax
  __int64 v49; // rcx
  float v50; // xmm6_4
  float v51; // xmm6_4
  MPCConstantManager *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  const char *v56; // r9
  MPCConstantManager *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  const char *v61; // r9
  MPCConstantManager *v62; // rax
  bool v63; // al
  char v64; // al
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  MPCConstantManager *v68; // rax
  bool v69; // al
  char *v70; // rdx
  char *v71; // rdx
  _BYTE *v72; // rax
  MPCHolographicInputManager *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // r8
  const char *v76; // r9
  struct IMPCFocusTarget *FocusedTarget; // rax
  __int64 v78; // rax
  float v79; // xmm1_4
  _DWORD *v80; // rax
  _BYTE *v81; // rdi
  float v82; // xmm0_4
  char v83; // cl
  MPCHolographicInputManager *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // r8
  const char *v87; // r9
  struct IMPCFocusTarget *v88; // rax
  __int64 v89; // rax
  float v90; // xmm1_4
  float *v91; // rax
  float v92; // xmm0_4
  char *v93; // rdx
  __int64 v94; // rax
  __int64 v95; // rbx
  DWORD v96; // ecx
  unsigned int v97; // r12d
  MPCHolographicInputManager *v98; // rax
  __int64 v99; // rdx
  __int64 v100; // r8
  const char *v101; // r9
  struct IMPCFocusTarget *v102; // rax
  __int64 v103; // rax
  float v104; // xmm1_4
  float v105; // xmm0_4
  _DWORD *v106; // rcx
  ISMTracing *v107; // rcx
  bool *v108; // rbx
  int v109; // eax
  int v110; // eax
  float v111; // eax
  MPCHolographicInputManager *v112; // rax
  __int64 v113; // rdx
  __int64 v114; // r8
  const char *v115; // r9
  struct IMPCFocusTarget *v116; // rax
  __int64 v117; // rax
  float v118; // xmm1_4
  float *v119; // rax
  float v120; // xmm0_4
  MPCHolographicInputManager *v121; // rax
  __int64 v122; // rdx
  __int64 v123; // r8
  const char *v124; // r9
  struct IMPCFocusTarget *v125; // rax
  __int64 v126; // rax
  float v127; // xmm1_4
  float *v128; // rax
  float v129; // xmm0_4
  _DWORD *v130; // rcx
  ISMTracing *v131; // rcx
  char v132; // [rsp+B8h] [rbp-80h] BYREF
  _BYTE v133[3]; // [rsp+B9h] [rbp-7Fh] BYREF
  float v134; // [rsp+BCh] [rbp-7Ch] BYREF
  __int64 v135; // [rsp+C0h] [rbp-78h] BYREF
  int v136; // [rsp+C8h] [rbp-70h] BYREF
  __int64 v137; // [rsp+D0h] [rbp-68h]
  float v138; // [rsp+D8h] [rbp-60h]
  float v139; // [rsp+E0h] [rbp-58h] BYREF
  float v140; // [rsp+E4h] [rbp-54h] BYREF
  int v141; // [rsp+E8h] [rbp-50h] BYREF
  float v142; // [rsp+F0h] [rbp-48h] BYREF
  float v143; // [rsp+F4h] [rbp-44h] BYREF
  float v144; // [rsp+F8h] [rbp-40h] BYREF
  __int64 v145; // [rsp+100h] [rbp-38h]
  float v146; // [rsp+108h] [rbp-30h]
  _QWORD v147[24]; // [rsp+110h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+D8h]
  bool v149; // [rsp+218h] [rbp+E0h] BYREF
  DWORD pcbData; // [rsp+220h] [rbp+E8h] BYREF
  bool *v151; // [rsp+228h] [rbp+F0h]
  bool *v152; // [rsp+230h] [rbp+F8h]

  v152 = a4;
  v151 = a3;
  v5 = (int *)((char *)a2 + 1168);
  v6 = (char *)a2 + 1228;
  v8 = *((_BYTE *)a2 + 1168) & 1;
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 513), v8, *((_QWORD *)a2 + 2));
  v13 = *((_QWORD *)this + 513);
  if ( *(_BYTE *)(v13 + 8) || *(_BYTE *)(*((_QWORD *)this + 512) + 8LL) )
  {
    if ( MPCSixDofProcessor::AreButtonsOrAxesActive(this, a2, 0, v12)
      || (v14 = 0, *(_BYTE *)(*((_QWORD *)this + 517) + 8LL)) )
    {
      v14 = 1;
    }
    MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 512), v14, *((_QWORD *)a2 + 2));
  }
  v15 = (_DWORD *)((char *)this + 4292);
  Instance = MPCConstantManager::GetInstance(v13, v10, v11, v12);
  v149 = *((_DWORD *)this + 1073) >= (unsigned int)MPCConstantManager::GetConstant<unsigned long>(Instance);
  v145 = 0LL;
  v146 = 0.0;
  v142 = 0.0;
  v143 = 0.0;
  v144 = 0.0;
  if ( *((_BYTE *)this + 4704) )
  {
    v20 = *((float *)a2 + 136);
    v21 = *((float *)a2 + 137);
    LODWORD(v145) = *((_DWORD *)a2 + 135);
    v22 = *(float *)&v145 - *((float *)this + 1086);
    *((float *)&v145 + 1) = v20;
    v23 = v20 - *((float *)this + 1087);
    v146 = v21;
    v24 = v21 - *((float *)this + 1088);
    v142 = v22;
    v143 = v23;
    v144 = v24;
    v25 = MPCConstantManager::GetInstance(v17, 0LL, v18, v19);
    MPCConstantManager::GetConstant<float>(v25);
    v26 = *((float *)this + 1089);
    v27 = (__m128)LODWORD(FLOAT_1_0);
    v28 = (__m128)*((unsigned int *)this + 1090);
    v27.m128_f32[0] = 1.0 - *(float *)&v4;
    v29 = *((float *)this + 1091);
    v34 = MPCConstantManager::GetInstance(v31, v30, v32, v33);
    MPCConstantManager::GetConstant<float>(v34);
    v35 = v27;
    v35.m128_f32[0] = (float)((float)(1.0 - *(float *)&v4) * v26) + (float)(*(float *)&v4 * v22);
    v36 = (float)(v24 * *(float *)&v4) + (float)((float)(1.0 - *(float *)&v4) * v29);
    v28.m128_f32[0] = (float)(v28.m128_f32[0] * (float)(1.0 - *(float *)&v4)) + (float)(*(float *)&v4 * v23);
    v138 = v36;
    v4 = _mm_unpacklo_ps(v35, v28).m128_u64[0];
    *(_QWORD *)((char *)this + 4356) = v4;
    *((float *)this + 1091) = v36;
  }
  if ( v8 )
  {
    v37 = *((_QWORD *)a2 + 2);
    v38 = (float)(int)*((_QWORD *)this + 546);
    v39 = v37 - *((_QWORD *)this + 538);
    v40 = (float)(int)v39;
    if ( v39 < 0 )
      v40 = v40 + 1.8446744e19;
    v135 = 0LL;
    v136 = 0;
    v139 = 0.0;
    v140 = 0.0;
    v141 = 0;
    v41 = v40 / v38;
    if ( v41 > 0.0 )
    {
      if ( v6[100] )
      {
        v42 = *((float *)v6 + 18);
        v137 = *((_QWORD *)v6 + 8);
        v43 = *(float *)&v137 - *((float *)this + 1080);
        v44 = *((float *)&v137 + 1) - *((float *)this + 1081);
        v138 = v42;
        *(float *)&v4 = (float)(v42 - *((float *)this + 1082)) * (float)(1.0 / v41);
        *(float *)&v135 = v43 * (float)(1.0 / v41);
        *((float *)&v135 + 1) = v44 * (float)(1.0 / v41);
        v136 = v4;
      }
      if ( v6[101] )
      {
        v45 = *((float *)v6 + 21);
        v137 = *(_QWORD *)(v6 + 76);
        v46 = *(float *)&v137 - *((float *)this + 1083);
        v47 = *((float *)&v137 + 1) - *((float *)this + 1084);
        v138 = v45;
        *(float *)&v4 = (float)(v45 - *((float *)this + 1085)) * (float)(1.0 / v41);
        v139 = v46 * (float)(1.0 / v41);
        v140 = v47 * (float)(1.0 / v41);
        v141 = v4;
      }
    }
    v147[0] = v6;
    v147[2] = &v139;
    v147[3] = &v135;
    v48 = *((_QWORD *)this + 513);
    v147[1] = this;
    if ( *(_BYTE *)(v48 + 10) )
    {
      v49 = v37 - *((_QWORD *)this + 539);
      v50 = (float)(int)v49;
      if ( v49 < 0 )
        v50 = v50 + 1.8446744e19;
      v51 = v50 / v38;
      v52 = MPCConstantManager::GetInstance(v49, 0LL, v18, v19);
      MPCConstantManager::GetConstant<float>(v52);
      v63 = 0;
      if ( *(float *)&v4 > v51 )
      {
        v57 = MPCConstantManager::GetInstance(v54, v53, v55, v56);
        MPCConstantManager::GetConstant<float>(v57);
        v62 = MPCConstantManager::GetInstance(v59, v58, v60, v61);
        MPCConstantManager::GetConstant<float>(v62);
        if ( !(unsigned __int8)lambda_b7cefc7a697f0e52101b2c7465c33840_::operator()(v147) )
          v63 = 1;
      }
      *((_BYTE *)this + 4296) = v63;
      *((_QWORD *)this + 539) = *((_QWORD *)a2 + 2);
      if ( MPCSixDofProcessor::AreButtonsOrAxesActive(this, (MPCSixDofProcessor *)((char *)this + 2064), 1, v56)
        || (v64 = 1, (*((_BYTE *)this + 3232) & 0x40) != 0) )
      {
        v64 = 0;
      }
      *((_BYTE *)this + 4712) = v64;
    }
    if ( !*((_BYTE *)this + 4296) && (unsigned __int8)lambda_b7cefc7a697f0e52101b2c7465c33840_::operator()(v147) )
    {
      ++*v15;
      v68 = MPCConstantManager::GetInstance(v66, v65, v67, v19);
      v149 = *v15 >= (unsigned int)MPCConstantManager::GetConstant<unsigned long>(v68);
    }
    v69 = MPCSixDofProcessor::AreButtonsOrAxesActive(this, a2, 1, v19) || *(_BYTE *)(*((_QWORD *)this + 517) + 8LL);
    *((_BYTE *)this + 4297) |= v69;
    v70 = (char *)*((_QWORD *)this + 591);
    if ( *((char **)this + 592) == v70 )
    {
      std::vector<LegacyInputInfo>::_Emplace_reallocate<LegacyInputInfo &>((_QWORD *)this + 590, v70, a2);
    }
    else
    {
      memcpy_0(*((void **)this + 591), a2, 0x640uLL);
      *((_QWORD *)this + 591) += 1600LL;
    }
    *v151 = 1;
    pcbData = **((_DWORD **)this + 6);
    ISMTracing::MPCSixDofProcessor_HomePressedEvent<unsigned long,bool &,unsigned long &,float const &,float const &,float const &,float const &,float const &,float const &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,unsigned int const &>(
      (unsigned int)&pcbData,
      (unsigned int)&v149,
      (_DWORD)this + 4292,
      (_DWORD)v6 + 76,
      (__int64)(v6 + 80),
      (__int64)(v6 + 84),
      (__int64)(v6 + 64),
      (__int64)(v6 + 68),
      (__int64)(v6 + 72),
      (__int64)&v139,
      (__int64)&v140,
      (__int64)&v141,
      (__int64)&v135,
      (__int64)&v135 + 4,
      (__int64)&v136,
      (__int64)&v142,
      (__int64)&v143,
      (__int64)&v144,
      (__int64)this + 4356,
      (__int64)this + 4360,
      (__int64)this + 4364,
      (__int64)v5);
  }
  else if ( *(_BYTE *)(*((_QWORD *)this + 512) + 8LL) )
  {
    v71 = (char *)*((_QWORD *)this + 591);
    if ( *((char **)this + 592) == v71 )
    {
      std::vector<LegacyInputInfo>::_Emplace_reallocate<LegacyInputInfo &>((_QWORD *)this + 590, v71, a2);
    }
    else
    {
      memcpy_0(*((void **)this + 591), a2, 0x640uLL);
      *((_QWORD *)this + 591) += 1600LL;
    }
    *v151 = 1;
  }
  v72 = (_BYTE *)*((_QWORD *)this + 513);
  if ( v72[13] )
  {
    MPCManager::OnInteractiveIntentGesture(
      (__int64)MPCManager::s_instance,
      *((_QWORD *)this + 6),
      5u,
      **((_DWORD **)this + 6),
      0x2000,
      *v5,
      *((_QWORD *)a2 + 2),
      *((_DWORD *)a2 + 289));
    v73 = MPCHolographicInputManager::GetInstance();
    FocusedTarget = MPCHolographicInputManager::GetFocusedTarget(v73, v74, v75, v76);
    LOBYTE(pcbData) = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)FocusedTarget + 32LL))(FocusedTarget);
    v78 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 539);
    v79 = (float)(int)v78;
    if ( v78 < 0 )
      v79 = v79 + 1.8446744e19;
    v80 = (_DWORD *)*((_QWORD *)this + 6);
    v81 = (char *)this + 4297;
    v132 = 1;
    v82 = (float)(int)*((_QWORD *)this + 546);
    v133[0] = 0;
    LODWORD(v135) = *v80;
    v134 = v79 / v82;
    ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool &,unsigned int const &,bool &,float,bool>(
      (unsigned int)&v135,
      (unsigned int)v133,
      (unsigned int)&v132,
      (_DWORD)this + 4297,
      (__int64)v5,
      (__int64)&v149,
      (__int64)&v134,
      (__int64)&pcbData);
    v72 = (_BYTE *)*((_QWORD *)this + 513);
  }
  else
  {
    v81 = (char *)this + 4297;
  }
  v83 = v72[12];
  if ( !v83 || v72[11] )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 512) + 12LL) )
    {
      if ( v149 || !*((_BYTE *)this + 4712) )
      {
        v108 = v152;
        *v152 = 1;
        v121 = MPCHolographicInputManager::GetInstance();
        v125 = MPCHolographicInputManager::GetFocusedTarget(v121, v122, v123, v124);
        LOBYTE(pcbData) = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)v125 + 32LL))(v125);
        v126 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 539);
        v127 = (float)(int)v126;
        if ( v126 < 0 )
          v127 = v127 + 1.8446744e19;
        v128 = (float *)*((_QWORD *)this + 6);
        v133[0] = 0;
        v129 = (float)(int)*((_QWORD *)this + 546);
        v132 = 0;
        v134 = *v128;
        *(float *)&v135 = v127 / v129;
        ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool &,unsigned int const &,bool &,float,bool>(
          (unsigned int)&v134,
          (unsigned int)&v132,
          (unsigned int)v133,
          (_DWORD)v81,
          (__int64)v5,
          (__int64)&v149,
          (__int64)&v135,
          (__int64)&pcbData);
        v130 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
        if ( v130 && *v130 )
        {
          ISMTracing::Instance();
          ISMTracing::MPCSixDofProcessor_HomeButtonIgnored_(v131);
        }
      }
      else if ( *v81 )
      {
        pcbData = 0;
        v93 = (char *)*((_QWORD *)this + 591);
        if ( *((char **)this + 592) == v93 )
        {
          std::vector<LegacyInputInfo>::_Emplace_reallocate<LegacyInputInfo &>((_QWORD *)this + 590, v93, a2);
        }
        else
        {
          memcpy_0(*((void **)this + 591), a2, 0x640uLL);
          *((_QWORD *)this + 591) += 1600LL;
        }
        *v151 = 1;
        v94 = *((_QWORD *)this + 591);
        v95 = *((_QWORD *)this + 590);
        v135 = v94;
        if ( v95 != v94 )
        {
          v96 = pcbData;
          do
          {
            v97 = *(_DWORD *)(v95 + 1168);
            if ( v97 != v96 )
            {
              MPCManager::OnButtonsChangedDuringHomeGesture(
                MPCManager::s_instance,
                **((_DWORD **)this + 6),
                0x2000u,
                v97,
                *(_QWORD *)(v95 + 16),
                *(_DWORD *)(v95 + 1156));
              v94 = v135;
            }
            v95 += 1600LL;
            v96 = v97;
          }
          while ( v95 != v94 );
          v15 = (_DWORD *)((char *)this + 4292);
        }
        v98 = MPCHolographicInputManager::GetInstance();
        v102 = MPCHolographicInputManager::GetFocusedTarget(v98, v99, v100, v101);
        LOBYTE(pcbData) = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)v102 + 32LL))(v102);
        v103 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 539);
        v104 = (float)(int)v103;
        if ( v103 < 0 )
          v104 = v104 + 1.8446744e19;
        v105 = (float)(int)*((_QWORD *)this + 546);
        v134 = **((float **)this + 6);
        v133[0] = 0;
        v132 = 0;
        *(float *)&v135 = v104 / v105;
        ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool &,unsigned int const &,bool &,float,bool>(
          (unsigned int)&v134,
          (unsigned int)&v132,
          (unsigned int)v133,
          (_DWORD)v81,
          (__int64)v5,
          (__int64)&v149,
          (__int64)&v135,
          (__int64)&pcbData);
        v106 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
        if ( v106 && *v106 )
        {
          ISMTracing::Instance();
          ISMTracing::MPCSixDofProcessor_HomeButtonIgnored_(v107);
        }
        v108 = v152;
      }
      else
      {
        if ( !v83 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x1CB,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
            v19);
          JUMPOUT(0x1800F0165LL);
        }
        if ( !byte_180193BA4 )
        {
          pcbData = 4;
          RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\DWM",
            L"DisableBloomFor6dof",
            0x10u,
            0LL,
            &dword_180193BA0,
            &pcbData);
          byte_180193BA4 = 1;
        }
        if ( dword_180193BA0 != 1 )
          MPCManager::SendHomeGesture(
            MPCManager::s_instance,
            **((_DWORD **)this + 6),
            *(_DWORD *)(*((_QWORD *)this + 6) + 4LL),
            *((_QWORD *)a2 + 2),
            *((_DWORD *)a2 + 289));
        v108 = v152;
        *v152 = 1;
        v112 = MPCHolographicInputManager::GetInstance();
        v116 = MPCHolographicInputManager::GetFocusedTarget(v112, v113, v114, v115);
        LOBYTE(pcbData) = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)v116 + 32LL))(v116);
        v117 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 539);
        v118 = (float)(int)v117;
        if ( v117 < 0 )
          v118 = v118 + 1.8446744e19;
        v119 = (float *)*((_QWORD *)this + 6);
        v133[0] = 0;
        v120 = (float)(int)*((_QWORD *)this + 546);
        v132 = 1;
        v134 = *v119;
        *(float *)&v135 = v118 / v120;
        ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool &,unsigned int const &,bool &,float,bool>(
          (unsigned int)&v134,
          (unsigned int)&v132,
          (unsigned int)v133,
          (_DWORD)v81,
          (__int64)v5,
          (__int64)&v149,
          (__int64)&v135,
          (__int64)&pcbData);
      }
      v138 = 0.0;
      *v15 = 0;
      *((_BYTE *)this + 4296) = 0;
      *v81 = 0;
      *((_BYTE *)this + 4712) = 0;
      *(_QWORD *)((char *)this + 4356) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      *((_DWORD *)this + 1091) = 0;
      MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 512), 0, *((_QWORD *)a2 + 2));
      if ( !*v108 )
        *((_QWORD *)this + 591) = *((_QWORD *)this + 590);
    }
  }
  else
  {
    MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 512), 0, *((_QWORD *)a2 + 2));
    *v152 = 1;
    v84 = MPCHolographicInputManager::GetInstance();
    v88 = MPCHolographicInputManager::GetFocusedTarget(v84, v85, v86, v87);
    LOBYTE(pcbData) = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)v88 + 32LL))(v88);
    v89 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 539);
    v90 = (float)(int)v89;
    if ( v89 < 0 )
      v90 = v90 + 1.8446744e19;
    v91 = (float *)*((_QWORD *)this + 6);
    v133[0] = 1;
    v92 = (float)(int)*((_QWORD *)this + 546);
    v132 = 0;
    v134 = *v91;
    *(float *)&v135 = v90 / v92;
    ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool &,unsigned int const &,bool &,float,bool>(
      (unsigned int)&v134,
      (unsigned int)&v132,
      (unsigned int)v133,
      (_DWORD)v81,
      (__int64)v5,
      (__int64)&v149,
      (__int64)&v135,
      (__int64)&pcbData);
    v138 = 0.0;
    *(_QWORD *)((char *)this + 4356) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)this + 1091) = 0;
    *v15 = 0;
    *((_BYTE *)this + 4296) = 0;
    *v81 = 0;
    *((_BYTE *)this + 4712) = 0;
  }
  if ( v6[100] )
  {
    v109 = *((_DWORD *)v6 + 18);
    *((_QWORD *)this + 540) = *((_QWORD *)v6 + 8);
    *((_DWORD *)this + 1082) = v109;
  }
  if ( v6[101] )
  {
    v110 = *((_DWORD *)v6 + 21);
    *(_QWORD *)((char *)this + 4332) = *(_QWORD *)(v6 + 76);
    *((_DWORD *)this + 1085) = v110;
  }
  if ( *((_BYTE *)this + 4704) )
  {
    v111 = v146;
    *((_QWORD *)this + 543) = v145;
    *((float *)this + 1088) = v111;
  }
  *((_QWORD *)this + 538) = *((_QWORD *)a2 + 2);
}
