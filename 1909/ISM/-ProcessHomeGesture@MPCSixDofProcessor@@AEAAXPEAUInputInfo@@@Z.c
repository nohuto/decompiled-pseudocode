/*
 * XREFs of ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180036AC0
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801316F0 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021360 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _lambda_73ee74375a7aa9a7d53c1e011ef1d674_::operator() @ 0x1800365F0 (_lambda_73ee74375a7aa9a7d53c1e011ef1d674_--operator().c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace_reallocate@AEBW4GamepadButtons@Input@Gaming@Windows@@@?$vector@W4GamepadButtons@Input@Gaming@Windows@@V?$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@@std@@QEAAPEAW4GamepadButtons@Input@Gaming@Windows@@QEAW42345@AEBW42345@@Z @ 0x18007947C (--$_Emplace_reallocate@AEBW4GamepadButtons@Input@Gaming@Windows@@@-$vector@W4GamepadButtons@Inpu.c)
 *     ?OnButtonsChangedDuringHomeGesture@MPCManager@@QEAAXIII_KI@Z @ 0x18007E68C (-OnButtonsChangedDuringHomeGesture@MPCManager@@QEAAXIII_KI@Z.c)
 *     ?OnInteractiveIntentGesture@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@III_KI@Z @ 0x18007E820 (-OnInteractiveIntentGesture@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@III_KI@Z.c)
 *     ?IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ @ 0x180081748 (-IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x180089DF8 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@PEBG@Z @ 0x18012DE3C (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@PEBG@Z.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z @ 0x18012DE7C (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z.c)
 *     ??$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_NAEBI2$$QEAM1@Z @ 0x18012E33C (--$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_NAEBI2$$.c)
 *     ??$MPCSixDofProcessor_HomeEventUpdate@KAEBI@ISMTracing@@SAX$$QEAKAEBI@Z @ 0x18012E584 (--$MPCSixDofProcessor_HomeEventUpdate@KAEBI@ISMTracing@@SAX$$QEAKAEBI@Z.c)
 *     ??$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEBI@ISMTracing@@SAX$$QEAKAEA_NAEAKAEBM33333AEAM44444444444AEBI@Z @ 0x18012E5C4 (--$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEA.c)
 *     ?AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@I@Z @ 0x18012FBCC (-AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@I@Z.c)
 *     ?MPCSixDofProcessor_HomeButtonIgnored_@ISMTracing@@QEAAXXZ @ 0x1801307A8 (-MPCSixDofProcessor_HomeButtonIgnored_@ISMTracing@@QEAAXXZ.c)
 *     ?ResetHomeState@MPCSixDofProcessor@@AEAAXXZ @ 0x180131908 (-ResetHomeState@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ?SendHomeEvent@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x180131B3C (-SendHomeEvent@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180140A70 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 */

void __fastcall MPCSixDofProcessor::ProcessHomeGesture(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  __m128 v2; // xmm0
  _DWORD *v3; // r12
  unsigned int *v4; // rsi
  unsigned int v5; // ebx
  struct MPCConstantManager *Instance; // rax
  unsigned int v9; // eax
  unsigned __int64 v10; // r8
  char *v11; // r13
  MPCButtonHoldHelper *v12; // rcx
  char v13; // dl
  MPCButtonHoldHelper *v14; // rcx
  unsigned int v15; // ebx
  struct MPCConstantManager *v16; // rax
  bool v17; // bl
  const char *v18; // r9
  bool v19; // zf
  float v20; // xmm11_4
  float v21; // xmm12_4
  float v22; // xmm10_4
  float v23; // xmm11_4
  float v24; // xmm12_4
  struct MPCConstantManager *v25; // rax
  float v26; // xmm6_4
  float v27; // xmm7_4
  float v28; // xmm9_4
  float v29; // xmm8_4
  struct MPCConstantManager *v30; // rax
  __m128 v31; // xmm3
  __m128 v32; // xmm2
  __int64 v33; // rcx
  __int64 v34; // rax
  float v35; // xmm4_4
  float v36; // eax
  float v37; // xmm2_4
  float v38; // xmm1_4
  float v39; // xmm0_4
  float v40; // eax
  float v41; // xmm2_4
  float v42; // xmm1_4
  float v43; // xmm0_4
  __int64 v44; // rax
  double v45; // xmm0_8
  struct MPCConstantManager *v46; // rax
  struct MPCConstantManager *v47; // rax
  float v48; // xmm6_4
  struct MPCConstantManager *v49; // rax
  float v50; // xmm0_4
  char v51; // al
  char v52; // al
  unsigned int v53; // ebx
  struct MPCConstantManager *v54; // rax
  char v55; // cl
  _BYTE *v56; // rdi
  MPCHolographicInputManager *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  _DWORD *v60; // rdx
  int v61; // eax
  MPCHolographicInputManager *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  char v65; // cl
  MPCHolographicInputManager *v66; // rax
  __int64 v67; // rax
  MPCHolographicInputManager *v68; // rax
  __int64 v69; // rax
  unsigned int *v70; // rsi
  unsigned __int64 v71; // rbx
  __int64 i; // r13
  MPCHolographicInputManager *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rcx
  ISMTracing *v77; // rcx
  int v78; // eax
  int v79; // eax
  float v80; // eax
  float v81; // [rsp+B8h] [rbp-80h] BYREF
  float v82; // [rsp+BCh] [rbp-7Ch] BYREF
  bool v83; // [rsp+C0h] [rbp-78h]
  __int64 v84; // [rsp+C4h] [rbp-74h]
  float v85; // [rsp+CCh] [rbp-6Ch]
  float v86; // [rsp+D0h] [rbp-68h] BYREF
  float v87; // [rsp+D4h] [rbp-64h] BYREF
  float v88; // [rsp+D8h] [rbp-60h] BYREF
  float v89; // [rsp+E0h] [rbp-58h] BYREF
  float v90; // [rsp+E4h] [rbp-54h] BYREF
  float v91; // [rsp+E8h] [rbp-50h] BYREF
  float v92; // [rsp+F0h] [rbp-48h] BYREF
  float v93; // [rsp+F4h] [rbp-44h] BYREF
  float v94; // [rsp+F8h] [rbp-40h] BYREF
  __int64 v95; // [rsp+100h] [rbp-38h]
  float v96; // [rsp+108h] [rbp-30h]
  _QWORD v97[22]; // [rsp+110h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+C8h]
  bool v99; // [rsp+208h] [rbp+D0h] BYREF
  int v100; // [rsp+210h] [rbp+D8h] BYREF
  char v101; // [rsp+218h] [rbp+E0h] BYREF
  char v102; // [rsp+220h] [rbp+E8h] BYREF

  v3 = (_DWORD *)((char *)a2 + 728);
  v4 = (unsigned int *)((char *)this + 5172);
  v5 = *((_DWORD *)this + 1293);
  LOBYTE(v100) = *((_BYTE *)a2 + 728) & 1;
  Instance = MPCConstantManager::GetInstance();
  v9 = MPCConstantManager::GetConstant<unsigned long>(Instance, (char *)this + 24, L"HomeCancelExceedThresholdMaxCount");
  v10 = *((_QWORD *)a2 + 2);
  v11 = (char *)a2 + 788;
  v12 = (MPCButtonHoldHelper *)*((_QWORD *)this + 623);
  v83 = v5 >= v9;
  MPCButtonHoldHelper::UpdateState(v12, v100, v10);
  v13 = *(_BYTE *)(*((_QWORD *)this + 623) + 8LL);
  v14 = (MPCButtonHoldHelper *)*((_QWORD *)this + 622);
  if ( !v13 && *((_BYTE *)v14 + 8) )
  {
    if ( MPCSixDofProcessor::AreButtonsOrAxesActive(this, a2, 0) || (v13 = 0, *(_BYTE *)(*((_QWORD *)this + 627) + 8LL)) )
      v13 = 1;
    v14 = (MPCButtonHoldHelper *)*((_QWORD *)this + 622);
  }
  MPCButtonHoldHelper::UpdateState(v14, v13, *((_QWORD *)a2 + 2));
  v15 = *v4;
  v16 = MPCConstantManager::GetInstance();
  v17 = v15 >= (unsigned int)MPCConstantManager::GetConstant<unsigned long>(
                               v16,
                               (char *)this + 24,
                               L"HomeCancelExceedThresholdMaxCount");
  v95 = 0LL;
  v96 = 0.0;
  v92 = 0.0;
  v93 = 0.0;
  v94 = 0.0;
  v19 = *((_BYTE *)this + 5577) == 0;
  v99 = v17;
  if ( !v19 )
  {
    v20 = *((float *)a2 + 32);
    v21 = *((float *)a2 + 33);
    LODWORD(v95) = *((_DWORD *)a2 + 31);
    v22 = *(float *)&v95 - *((float *)this + 1306);
    *((float *)&v95 + 1) = v20;
    v23 = v20 - *((float *)this + 1307);
    v96 = v21;
    v24 = v21 - *((float *)this + 1308);
    v92 = v22;
    v93 = v23;
    v94 = v24;
    v25 = MPCConstantManager::GetInstance();
    v2.m128_f32[0] = MPCConstantManager::GetConstant<float>(v25, (char *)this + 24, L"HomeDistanceWeight");
    v26 = *((float *)this + 1309);
    v27 = *((float *)this + 1310);
    v28 = 1.0 - v2.m128_f32[0];
    v29 = *((float *)this + 1311);
    v30 = MPCConstantManager::GetInstance();
    v2.m128_f32[0] = MPCConstantManager::GetConstant<float>(v30, (char *)this + 24, L"HomeDistanceWeight");
    v31 = v2;
    v32 = v2;
    v31.m128_f32[0] = (float)(v2.m128_f32[0] * v22) + (float)(v28 * v26);
    v32.m128_f32[0] = (float)(v2.m128_f32[0] * v23) + (float)(v28 * v27);
    v85 = (float)(v2.m128_f32[0] * v24) + (float)(v28 * v29);
    *(_QWORD *)((char *)this + 5236) = _mm_unpacklo_ps(v31, v32).m128_u64[0];
    *((float *)this + 1311) = (float)(v2.m128_f32[0] * v24) + (float)(v28 * v29);
  }
  if ( (_BYTE)v100 )
  {
    v33 = *((_QWORD *)a2 + 2);
    v86 = 0.0;
    v34 = v33 - *((_QWORD *)this + 648);
    v87 = 0.0;
    v88 = 0.0;
    v89 = 0.0;
    v90 = 0.0;
    v91 = 0.0;
    v35 = (double)(int)v34 / (double)(int)qword_1801E0BE0;
    if ( v35 > 0.0 )
    {
      if ( *((_BYTE *)a2 + 888) )
      {
        v36 = *((float *)a2 + 215);
        v84 = *(_QWORD *)((char *)a2 + 852);
        v37 = *(float *)&v84 - *((float *)this + 1300);
        v38 = *((float *)&v84 + 1) - *((float *)this + 1301);
        v85 = v36;
        v39 = (float)(v36 - *((float *)this + 1302)) * (float)(1.0 / v35);
        v86 = v37 * (float)(1.0 / v35);
        v87 = v38 * (float)(1.0 / v35);
        v88 = v39;
      }
      if ( *((_BYTE *)a2 + 889) )
      {
        v40 = *((float *)a2 + 218);
        v84 = *((_QWORD *)a2 + 108);
        v41 = *(float *)&v84 - *((float *)this + 1303);
        v42 = *((float *)&v84 + 1) - *((float *)this + 1304);
        v85 = v40;
        v43 = (float)(v40 - *((float *)this + 1305)) * (float)(1.0 / v35);
        v89 = v41 * (float)(1.0 / v35);
        v90 = v42 * (float)(1.0 / v35);
        v91 = v43;
      }
    }
    v97[0] = (char *)a2 + 788;
    v97[2] = &v89;
    v97[3] = &v86;
    v44 = *((_QWORD *)this + 623);
    v97[1] = this;
    if ( *(_BYTE *)(v44 + 10) )
    {
      v45 = (double)((int)v33 - *((_DWORD *)this + 1298)) / (double)(int)qword_1801E0BE0;
      v46 = MPCConstantManager::GetInstance();
      if ( MPCConstantManager::GetConstant<float>(v46, (char *)this + 24, L"HomeAllowTimeBetweenClicksInSec") <= (float)v45
        || (v47 = MPCConstantManager::GetInstance(),
            v48 = MPCConstantManager::GetConstant<float>(v47, (char *)this + 24, L"HomeSecondClickAngularMultiplier"),
            v49 = MPCConstantManager::GetInstance(),
            v50 = MPCConstantManager::GetConstant<float>(v49, (char *)this + 24, L"HomeSecondClickLinearMultiplier"),
            v19 = lambda_73ee74375a7aa9a7d53c1e011ef1d674_::operator()(v97, v50, v48) == 0,
            v51 = 1,
            !v19) )
      {
        v51 = 0;
      }
      *((_BYTE *)this + 5176) = v51;
      *((_QWORD *)this + 649) = *((_QWORD *)a2 + 2);
      if ( MPCSixDofProcessor::AreButtonsOrAxesActive(this, (MPCSixDofProcessor *)((char *)this + 2504), 1u)
        || (v52 = 1, (*((_BYTE *)this + 3232) & 0x40) != 0) )
      {
        v52 = 0;
      }
      *((_BYTE *)this + 5584) = v52;
    }
    if ( !*((_BYTE *)this + 5176) && lambda_73ee74375a7aa9a7d53c1e011ef1d674_::operator()(v97, 1.0, 1.0) )
    {
      v53 = ++*v4;
      v54 = MPCConstantManager::GetInstance();
      v99 = v53 >= (unsigned int)MPCConstantManager::GetConstant<unsigned long>(
                                   v54,
                                   (char *)this + 24,
                                   L"HomeCancelExceedThresholdMaxCount");
    }
    if ( MPCSixDofProcessor::AreButtonsOrAxesActive(this, a2, 1u)
      || (v55 = 0, *(_BYTE *)(*((_QWORD *)this + 627) + 8LL)) )
    {
      v55 = 1;
    }
    *((_BYTE *)this + 5177) |= v55;
    v100 = **((_DWORD **)this + 6);
    ISMTracing::MPCSixDofProcessor_HomePressedEvent<unsigned long,bool &,unsigned long &,float const &,float const &,float const &,float const &,float const &,float const &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,unsigned int const &>(
      (unsigned int)&v100,
      (unsigned int)&v99,
      (_DWORD)this + 5172,
      (_DWORD)a2 + 864,
      (__int64)a2 + 868,
      (__int64)a2 + 872,
      (__int64)a2 + 852,
      (__int64)a2 + 856,
      (__int64)a2 + 860,
      (__int64)&v89,
      (__int64)&v90,
      (__int64)&v91,
      (__int64)&v86,
      (__int64)&v87,
      (__int64)&v88,
      (__int64)&v92,
      (__int64)&v93,
      (__int64)&v94,
      (__int64)this + 5236,
      (__int64)this + 5240,
      (__int64)this + 5244,
      (__int64)v3);
    v17 = v99;
  }
  v56 = (char *)this + 5177;
  if ( *(_BYTE *)(*((_QWORD *)this + 623) + 13LL) )
  {
    MPCManager::OnInteractiveIntentGesture(
      MPCManager::s_instance,
      *((_QWORD *)this + 6),
      5LL,
      **((unsigned int **)this + 6),
      0x2000,
      *v3,
      *((_QWORD *)a2 + 2),
      *((_DWORD *)a2 + 179));
    v57 = MPCHolographicInputManager::GetInstance();
    LOBYTE(v100) = MPCHolographicInputManager::IsExclusiveAppFocused(v57);
    v58 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 649);
    v101 = 1;
    v102 = 0;
    v82 = **((float **)this + 6);
    v81 = (double)(int)v58 / (double)(int)qword_1801E0BE0;
    ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool &,unsigned int const &,bool &,float,bool>(
      (unsigned int)&v82,
      (unsigned int)&v102,
      (unsigned int)&v101,
      (_DWORD)this + 5177,
      (__int64)v3,
      (__int64)&v99,
      (__int64)&v81,
      (__int64)&v100);
  }
  v59 = *((_QWORD *)this + 622);
  if ( *(_BYTE *)(v59 + 8) || *(_BYTE *)(v59 + 12) )
  {
    v18 = (char *)this + 5592;
    v60 = (_DWORD *)*((_QWORD *)this + 700);
    if ( (((unsigned __int64)v60 - *((_QWORD *)this + 699)) & 0xFFFFFFFFFFFFFFFCuLL) == 0
      || *(_DWORD *)(*((_QWORD *)this + 700) - 4LL) != *v3 )
    {
      if ( !*((_BYTE *)this + 5584) )
        goto LABEL_50;
      v61 = *v3;
      v100 = *v3;
      if ( *((_DWORD **)this + 701) == v60 )
      {
        std::vector<enum Windows::Gaming::Input::GamepadButtons>::_Emplace_reallocate<enum Windows::Gaming::Input::GamepadButtons const &>(
          (char *)this + 5592,
          v60,
          &v100);
      }
      else
      {
        *v60 = v61;
        *((_QWORD *)this + 700) += 4LL;
      }
    }
  }
  if ( *((_BYTE *)this + 5584) )
  {
    if ( !v17 )
    {
      *((_DWORD *)a2 + 190) = 0;
      *v3 = 0;
      *((_DWORD *)a2 + 183) = 0;
      *((_BYTE *)a2 + 704) = 0;
      goto LABEL_49;
    }
    if ( !v83 && (*(_BYTE *)v3 & 0x3E) != 0 )
    {
      if ( *((_DWORD *)a2 + 17) == 3 )
      {
        *((_DWORD *)a2 + 17) = 2;
        v62 = MPCHolographicInputManager::GetInstance();
        LOBYTE(v100) = MPCHolographicInputManager::IsExclusiveAppFocused(v62);
        v63 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 649);
        v101 = 1;
        v102 = 1;
        v81 = **((float **)this + 6);
        v82 = (double)(int)v63 / (double)(int)qword_1801E0BE0;
        ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool &,unsigned int const &,bool &,float,bool>(
          (unsigned int)&v81,
          (unsigned int)&v102,
          (unsigned int)&v101,
          (_DWORD)v56,
          (__int64)v3,
          (__int64)&v99,
          (__int64)&v82,
          (__int64)&v100);
        goto LABEL_50;
      }
      if ( *((_DWORD *)a2 + 17) != 4 )
        goto LABEL_50;
LABEL_49:
      *((_DWORD *)a2 + 17) = 6;
    }
  }
LABEL_50:
  v64 = *((_QWORD *)this + 623);
  v65 = *(_BYTE *)(v64 + 12);
  if ( !v65 || *(_BYTE *)(v64 + 11) )
  {
    if ( !*(_BYTE *)(*((_QWORD *)this + 622) + 12LL) )
      goto LABEL_68;
    if ( !v17 && *((_BYTE *)this + 5584) )
    {
      if ( !*v56 )
      {
        if ( !v65 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x1DD,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
            v18);
          JUMPOUT(0x180037690LL);
        }
        MPCSixDofProcessor::SendHomeEvent(this, a2);
        v68 = MPCHolographicInputManager::GetInstance();
        LOBYTE(v100) = MPCHolographicInputManager::IsExclusiveAppFocused(v68);
        v69 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 649);
        v101 = 0;
        v102 = 1;
        v81 = **((float **)this + 6);
        v82 = (double)(int)v69 / (double)(int)qword_1801E0BE0;
        ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool &,unsigned int const &,bool &,float,bool>(
          (unsigned int)&v81,
          (unsigned int)&v102,
          (unsigned int)&v101,
          (_DWORD)this + 5177,
          (__int64)v3,
          (__int64)&v99,
          (__int64)&v82,
          (__int64)&v100);
        *v3 |= 1u;
        goto LABEL_67;
      }
      v70 = (unsigned int *)*((_QWORD *)this + 699);
      v71 = (unsigned __int64)(*((_QWORD *)this + 700) - (_QWORD)v70 + 3LL) >> 2;
      if ( (unsigned __int64)v70 > *((_QWORD *)this + 700) )
        v71 = 0LL;
      if ( v71 )
      {
        for ( i = 0LL; i != v71; ++i )
        {
          MPCManager::OnButtonsChangedDuringHomeGesture(
            MPCManager::s_instance,
            **((_DWORD **)this + 6),
            0x2000u,
            *v70,
            *((_QWORD *)a2 + 2),
            *((_DWORD *)a2 + 179));
          v100 = **((_DWORD **)this + 6);
          ISMTracing::MPCSixDofProcessor_HomeEventUpdate<unsigned long,unsigned int const &>(&v100, v3);
          ++v70;
        }
        v11 = (char *)a2 + 788;
      }
    }
    v73 = MPCHolographicInputManager::GetInstance();
    LOBYTE(v100) = MPCHolographicInputManager::IsExclusiveAppFocused(v73);
    v74 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 649);
    v101 = 0;
    v102 = 0;
    v81 = **((float **)this + 6);
    v82 = (double)(int)v74 / (double)(int)qword_1801E0BE0;
    ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool &,unsigned int const &,bool &,float,bool>(
      (unsigned int)&v81,
      (unsigned int)&v102,
      (unsigned int)&v101,
      (_DWORD)this + 5177,
      (__int64)v3,
      (__int64)&v99,
      (__int64)&v82,
      (__int64)&v100);
    if ( ISMTracing::IsEnabled(v75) )
    {
      wil::details::static_lazy<ISMTracing>::get(v76, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      ISMTracing::MPCSixDofProcessor_HomeButtonIgnored_(v77);
    }
    goto LABEL_67;
  }
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 622), 0, *((_QWORD *)a2 + 2));
  v66 = MPCHolographicInputManager::GetInstance();
  LOBYTE(v100) = MPCHolographicInputManager::IsExclusiveAppFocused(v66);
  v67 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 649);
  v101 = 1;
  v102 = 0;
  v81 = **((float **)this + 6);
  v82 = (double)(int)v67 / (double)(int)qword_1801E0BE0;
  ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool &,unsigned int const &,bool &,float,bool>(
    (unsigned int)&v81,
    (unsigned int)&v102,
    (unsigned int)&v101,
    (_DWORD)this + 5177,
    (__int64)v3,
    (__int64)&v99,
    (__int64)&v82,
    (__int64)&v100);
LABEL_67:
  MPCSixDofProcessor::ResetHomeState(this);
LABEL_68:
  if ( v11[100] )
  {
    v78 = *((_DWORD *)v11 + 18);
    *((_QWORD *)this + 650) = *((_QWORD *)v11 + 8);
    *((_DWORD *)this + 1302) = v78;
  }
  if ( v11[101] )
  {
    v79 = *((_DWORD *)v11 + 21);
    *(_QWORD *)((char *)this + 5212) = *(_QWORD *)(v11 + 76);
    *((_DWORD *)this + 1305) = v79;
  }
  if ( *((_BYTE *)this + 5577) )
  {
    v80 = v96;
    *((_QWORD *)this + 653) = v95;
    *((float *)this + 1308) = v80;
  }
  *((_QWORD *)this + 648) = *((_QWORD *)a2 + 2);
}
