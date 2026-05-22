/*
 * XREFs of ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18013989C
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180137B90 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180057368 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180086124 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800863AC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z @ 0x18012E0F4 (--$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z.c)
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x180137628 (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 */

void __fastcall MPCGamepadProcessor::UpdateZoom(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  char *v2; // r14
  float v4; // xmm0_4
  float v5; // xmm9_4
  float v6; // xmm7_4
  const char *v7; // r9
  __int64 v8; // rdx
  _OWORD *v9; // rax
  char *v10; // rcx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  struct BamoMPCConstantManagerClientPrincipal *v18; // rbx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rax
  unsigned __int64 v23; // r12
  int v24; // eax
  float v25; // xmm6_4
  const char *v26; // r9
  float v27; // xmm0_4
  char v28; // bl
  bool v29; // si
  struct BamoMPCConstantManagerClientPrincipal *v30; // r15
  int v31; // eax
  float v32; // xmm6_4
  __int64 v33; // rdx
  const char *v34; // r9
  float v35; // xmm0_4
  bool v36; // cl
  int v37; // eax
  struct BamoMPCConstantManagerClientPrincipal *v38; // rbx
  int v39; // eax
  float v40; // xmm0_4
  __int64 **v41; // rax
  __int64 **v42; // rbx
  __int64 *v43; // rax
  const char *v44; // r9
  __int64 v45; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v46[24]; // [rsp+38h] [rbp-D0h] BYREF
  int v47; // [rsp+50h] [rbp-B8h]
  char v48; // [rsp+D0h] [rbp-38h] BYREF
  int v49; // [rsp+D4h] [rbp-34h]
  int v50; // [rsp+D8h] [rbp-30h]
  __int128 v51; // [rsp+DCh] [rbp-2Ch]
  int v52; // [rsp+F0h] [rbp-18h]
  char v53; // [rsp+201h] [rbp+F9h]
  int v54; // [rsp+2C8h] [rbp+1C0h]
  float v55; // [rsp+2D4h] [rbp+1CCh]
  int v56; // [rsp+2D8h] [rbp+1D0h]
  int v57; // [rsp+2DCh] [rbp+1D4h]
  __int128 v58; // [rsp+2E0h] [rbp+1D8h]
  int v59; // [rsp+2F0h] [rbp+1E8h]
  bool v60; // [rsp+2F4h] [rbp+1ECh]
  wil::details::in1diag3 *retaddr; // [rsp+890h] [rbp+788h]

  v2 = (char *)a2 + 152;
  v4 = *((double *)this + 839);
  v5 = (float)*((double *)this + 840) - v4;
  v6 = (float)*((double *)this + 848) - (float)*((double *)this + 847);
  memset_0(v46, 0, 0x7F0uLL);
  v8 = 2LL;
  v47 = 2032;
  v9 = v2;
  v10 = &v48;
  do
  {
    v11 = v9[1];
    *(_OWORD *)v10 = *v9;
    v12 = v9[2];
    *((_OWORD *)v10 + 1) = v11;
    v13 = v9[3];
    *((_OWORD *)v10 + 2) = v12;
    v14 = v9[4];
    *((_OWORD *)v10 + 3) = v13;
    v15 = v9[5];
    *((_OWORD *)v10 + 4) = v14;
    v16 = v9[6];
    *((_OWORD *)v10 + 5) = v15;
    v17 = v9[7];
    v9 += 8;
    *((_OWORD *)v10 + 6) = v16;
    v10 += 128;
    *((_OWORD *)v10 - 1) = v17;
    --v8;
  }
  while ( v8 );
  v18 = MPCConstantManager::s_instance;
  v19 = v9[1];
  *(_OWORD *)v10 = *v9;
  v20 = v9[2];
  *((_OWORD *)v10 + 1) = v19;
  v21 = v9[3];
  v22 = *((_QWORD *)v9 + 8);
  *((_OWORD *)v10 + 2) = v20;
  *((_OWORD *)v10 + 3) = v21;
  *((_QWORD *)v10 + 8) = v22;
  v54 = 0;
  v60 = v53 != 0;
  v56 = v49;
  v57 = v50;
  v59 = v52;
  v58 = v51;
  if ( !v18 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v7);
    __debugbreak();
  }
  v23 = ((unsigned __int64)this + 32) & -(__int64)(this != 0LL);
  v24 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64))(*(_QWORD *)v23 + 48LL))(v23, 0LL, 128LL);
  v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5) & _xmm);
  v27 = MPCConstantManager::GetStaticConstant<float>((__int64)v18, v24, L"ThumbstickDeadzone").m128_f32[0];
  v28 = 1;
  v29 = v25 > v27 && *v2;
  v30 = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v26);
    __debugbreak();
  }
  v31 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v23 + 48LL))(((unsigned __int64)this + 32) & -(__int64)(this != 0LL));
  LODWORD(v35) = MPCConstantManager::GetStaticConstant<float>((__int64)v30, v31, L"ThumbstickDeadzone").m128_u32[0];
  v36 = *v2 && v2[2] || *((_DWORD *)this + 1788) == 2;
  LOBYTE(v33) = v29 && (v32 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6) & _xmm), v32 <= v35) && !*((_DWORD *)this + 1788);
  v37 = *((_DWORD *)this + 1788);
  if ( v37 != 2 )
  {
LABEL_24:
    v28 = 0;
    goto LABEL_25;
  }
  if ( v29 )
  {
    if ( !v36 )
      goto LABEL_28;
    goto LABEL_24;
  }
LABEL_25:
  if ( v36 && (_BYTE)v33 )
  {
    *((_DWORD *)this + 1788) = 2;
    v37 = 2;
  }
LABEL_28:
  if ( v28 )
  {
    MPCGamepadProcessor::EndGesture(this);
  }
  else if ( v37 == 2 )
  {
    v38 = MPCConstantManager::s_instance;
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v34);
      __debugbreak();
    }
    v39 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v23 + 48LL))(
            ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
            v33);
    v40 = MPCConstantManager::GetStaticConstant<float>((__int64)v38, v39, L"ZoomingScale").m128_f32[0];
    v54 = 6;
    v55 = (float)((float)(v40 * v5) * *((float *)this + 1808)) + 1.0;
    MPCGestureHandlerManager::GetInstance();
    v42 = v41;
    v43 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v45,
            ((unsigned __int64)this + 32) & -(__int64)(this != 0LL));
    MPCGestureHandlerManager::DownLevelTo2D(v42, (__int64)v46, v43, v44);
  }
}
