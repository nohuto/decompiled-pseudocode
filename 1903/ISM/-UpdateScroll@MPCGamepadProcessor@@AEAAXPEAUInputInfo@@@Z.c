/*
 * XREFs of ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1801395D0
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

void __fastcall MPCGamepadProcessor::UpdateScroll(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  int v2; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // r14d
  int v8; // edi
  bool v9; // cl
  char *v10; // rbx
  bool v11; // al
  const char *v12; // r9
  char *v13; // rcx
  __int64 v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  struct BamoMPCConstantManagerClientPrincipal *v26; // rbx
  unsigned __int64 v27; // rsi
  int v28; // eax
  const char *v29; // r9
  float v30; // xmm0_4
  struct BamoMPCConstantManagerClientPrincipal *v31; // rbx
  int v32; // eax
  __int64 **v33; // rax
  __int64 **v34; // rbx
  __int64 *v35; // rax
  const char *v36; // r9
  __int64 v37; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v38[24]; // [rsp+30h] [rbp-D0h] BYREF
  int v39; // [rsp+48h] [rbp-B8h]
  char v40; // [rsp+C8h] [rbp-38h] BYREF
  int v41; // [rsp+CCh] [rbp-34h]
  int v42; // [rsp+D0h] [rbp-30h]
  __int128 v43; // [rsp+D4h] [rbp-2Ch]
  int v44; // [rsp+E8h] [rbp-18h]
  char v45; // [rsp+1F9h] [rbp+F9h]
  int v46; // [rsp+2C0h] [rbp+1C0h]
  float v47; // [rsp+2C4h] [rbp+1C4h]
  float v48; // [rsp+2C8h] [rbp+1C8h]
  int v49; // [rsp+2D0h] [rbp+1D0h]
  int v50; // [rsp+2D4h] [rbp+1D4h]
  __int128 v51; // [rsp+2D8h] [rbp+1D8h]
  int v52; // [rsp+2E8h] [rbp+1E8h]
  bool v53; // [rsp+2ECh] [rbp+1ECh]
  wil::details::in1diag3 *retaddr; // [rsp+858h] [rbp+758h]

  v2 = *((_DWORD *)this + 1676);
  v5 = v2 & 0x80;
  v6 = v2 & 0x100;
  if ( (v2 & 0x40) != 0 )
    v7 = v5 == 0;
  else
    v7 = -(v5 != 0);
  if ( (v2 & 0x200) != 0 )
    v8 = (v6 != 0) - 1;
  else
    v8 = v6 != 0;
  v9 = v7 || v8;
  v10 = (char *)a2 + 152;
  v11 = *v10 && v10[2] || *((_DWORD *)this + 1788) == 1;
  if ( v9 && v11 )
  {
    *((_DWORD *)this + 1788) = 1;
    memset_0(v38, 0, 0x7F0uLL);
    v13 = &v40;
    v39 = 2032;
    v14 = 2LL;
    do
    {
      v15 = *((_OWORD *)v10 + 1);
      *(_OWORD *)v13 = *(_OWORD *)v10;
      v16 = *((_OWORD *)v10 + 2);
      *((_OWORD *)v13 + 1) = v15;
      v17 = *((_OWORD *)v10 + 3);
      *((_OWORD *)v13 + 2) = v16;
      v18 = *((_OWORD *)v10 + 4);
      *((_OWORD *)v13 + 3) = v17;
      v19 = *((_OWORD *)v10 + 5);
      *((_OWORD *)v13 + 4) = v18;
      v20 = *((_OWORD *)v10 + 6);
      *((_OWORD *)v13 + 5) = v19;
      v21 = *((_OWORD *)v10 + 7);
      v10 += 128;
      *((_OWORD *)v13 + 6) = v20;
      v13 += 128;
      *((_OWORD *)v13 - 1) = v21;
      --v14;
    }
    while ( v14 );
    v22 = *((_QWORD *)v10 + 8);
    v23 = *((_OWORD *)v10 + 1);
    *(_OWORD *)v13 = *(_OWORD *)v10;
    v24 = *((_OWORD *)v10 + 2);
    *((_OWORD *)v13 + 1) = v23;
    v25 = *((_OWORD *)v10 + 3);
    v26 = MPCConstantManager::s_instance;
    *((_OWORD *)v13 + 2) = v24;
    *((_OWORD *)v13 + 3) = v25;
    *((_QWORD *)v13 + 8) = v22;
    v53 = v45 != 0;
    v49 = v41;
    v50 = v42;
    v46 = 5;
    v52 = v44;
    v51 = v43;
    if ( !v26 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v12);
      __debugbreak();
    }
    v27 = ((unsigned __int64)this + 32) & -(__int64)(this != 0LL);
    v28 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v27 + 48LL))(v27);
    v30 = MPCConstantManager::GetStaticConstant<float>((__int64)v26, v28, L"ScrollingScale").m128_f32[0];
    v31 = MPCConstantManager::s_instance;
    v47 = v30 * (float)v8;
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v29);
      __debugbreak();
    }
    v32 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v27 + 48LL))(v27);
    v48 = MPCConstantManager::GetStaticConstant<float>((__int64)v31, v32, L"ScrollingScale").m128_f32[0] * (float)v7;
    MPCGestureHandlerManager::GetInstance();
    v34 = v33;
    v35 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(&v37, v27);
    MPCGestureHandlerManager::DownLevelTo2D(v34, (__int64)v38, v35, v36);
  }
  else if ( *((_DWORD *)this + 1788) == 1 )
  {
    MPCGamepadProcessor::EndGesture(this);
  }
}
