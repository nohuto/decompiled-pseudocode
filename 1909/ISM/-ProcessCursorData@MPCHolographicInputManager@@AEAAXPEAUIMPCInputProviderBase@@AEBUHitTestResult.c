/*
 * XREFs of ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x180083000
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180082828 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180080CB0 (-GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@@Z @ 0x180081770 (-IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_OnlyShowCursorInOverlayIfHittingShellContent@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008352C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_OnlyShowCursorInOverlayIfHittingShel.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180084A64 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@AEA_N@Z @ 0x18008C014 (-ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@A.c)
 */

__int64 __fastcall MPCHolographicInputManager::ProcessCursorData(
        __int64 a1,
        struct IMPCInputProviderBase *a2,
        __int64 a3,
        const char *a4,
        __int64 a5)
{
  int v5; // r12d
  char v9; // al
  int v10; // eax
  MPCHolographicInputManager *v11; // rcx
  char v12; // di
  __int64 v13; // rax
  bool v14; // al
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  const char *v19; // r9
  int v20; // xmm1_4
  struct IMPCInputPostProcessor *PostProcessor; // rdi
  int (__fastcall *v22)(struct IMPCInputPostProcessor *, _QWORD, _QWORD *); // rbx
  unsigned int v23; // eax
  int v24; // eax
  __int64 v25; // rax
  __int64 result; // rax
  bool v27; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v28[2]; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v29[2]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]

  v5 = (int)a4;
  if ( !*(_BYTE *)(a1 + 2364) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      855LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    __debugbreak();
  }
  *(_OWORD *)(a5 + 24) = *(_OWORD *)(a3 + 168);
  *(_OWORD *)(a5 + 40) = *(_OWORD *)(a3 + 184);
  *(_OWORD *)(a5 + 56) = *(_OWORD *)(a3 + 200);
  *(_OWORD *)(a5 + 72) = *(_OWORD *)(a3 + 120);
  *(_OWORD *)(a5 + 88) = *(_OWORD *)(a3 + 136);
  *(_OWORD *)(a5 + 104) = *(_OWORD *)(a3 + 152);
  *(_OWORD *)a5 = *(_OWORD *)(a3 + 260);
  *(_QWORD *)(a5 + 16) = *(_QWORD *)(a3 + 276);
  v9 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 112LL))(a2);
  *(_DWORD *)(a5 + 152) = v5;
  *(_BYTE *)(a5 + 136) = v9;
  v10 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 104LL))(a2);
  *(_BYTE *)(a5 + 160) = 0;
  *(_DWORD *)(a5 + 132) = v10;
  *(_QWORD *)(a5 + 120) = *(_QWORD *)(a3 + 52);
  *(_DWORD *)(a5 + 128) = *(_DWORD *)(a3 + 60);
  *(_BYTE *)(a5 + 161) = *(_BYTE *)a3;
  v12 = 1;
  if ( MPCHolographicInputManager::IsMultiplePrimariesWithGazeCommit(v11, a2) )
    LODWORD(v13) = 1;
  else
    v13 = (__int64)(*(_QWORD *)(a1 + 2584) - *(_QWORD *)(a1 + 2576)) >> 3;
  *(_DWORD *)(a5 + 164) = v13;
  *(_DWORD *)(a5 + 168) = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 296LL))(a2);
  v27 = 0;
  wil::Feature<__WilFeatureTraits_Feature_OnlyShowCursorInOverlayIfHittingShellContent>::ReportUsageToService();
  if ( *(_BYTE *)(a3 + 306) )
  {
    v14 = *(_BYTE *)(a3 + 72) == 0;
    v27 = v14;
  }
  else
  {
    if ( v5 == 1 )
    {
      v15 = MPCCursorManager::ProcessProviderHitTest(
              *(MPCCursorManager **)(a1 + 2384),
              a2,
              (const struct HitTestResult3D *)a3,
              &v27);
      if ( v15 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          878LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v15);
        __debugbreak();
      }
    }
    v14 = v27;
  }
  if ( !v14 && (*(unsigned __int8 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 2576) + 72LL))(**(_QWORD **)(a1 + 2576)) )
    v12 = 0;
  *(_BYTE *)(a5 + 160) = v12;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 2576) + 72LL))(**(_QWORD **)(a1 + 2576)) && v5 )
  {
    *(_BYTE *)(a5 + 24) = 0;
    *(_BYTE *)(a5 + 72) = 0;
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 2336) + 112LL))(*(_QWORD *)(a1 + 2336), a5);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      891LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v16);
    __debugbreak();
  }
  v20 = *(_DWORD *)(a3 + 56);
  LODWORD(v28[0]) = *(_DWORD *)(a3 + 52);
  LODWORD(v28[1]) = *(_DWORD *)(a3 + 60);
  HIDWORD(v28[0]) = v20;
  v29[0] = 0LL;
  LODWORD(v29[1]) = 0;
  PostProcessor = MPCHolographicInputManager::GetPostProcessor((MPCHolographicInputManager *)a1, v17, v18, v19);
  v22 = *(int (__fastcall **)(struct IMPCInputPostProcessor *, _QWORD, _QWORD *))(*(_QWORD *)PostProcessor + 120LL);
  v23 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 312LL))(a2);
  if ( v22(PostProcessor, v23, v29) >= 0 )
  {
    LODWORD(v28[0]) = v29[0];
    *(_QWORD *)((char *)v28 + 4) = *(_QWORD *)((char *)v29 + 4);
  }
  v24 = v28[1];
  *(_QWORD *)(a1 + 224) = v28[0];
  *(_DWORD *)(a1 + 232) = v24;
  v25 = Windows::Foundation::Numerics::transform(v28, a1 + 224, a1);
  *(_QWORD *)(a1 + 236) = *(_QWORD *)v25;
  *(_DWORD *)(a1 + 244) = *(_DWORD *)(v25 + 8);
  *(_OWORD *)(a1 + 2400) = *(_OWORD *)a5;
  *(_OWORD *)(a1 + 2416) = *(_OWORD *)(a5 + 16);
  *(_OWORD *)(a1 + 2432) = *(_OWORD *)(a5 + 32);
  *(_OWORD *)(a1 + 2448) = *(_OWORD *)(a5 + 48);
  *(_OWORD *)(a1 + 2464) = *(_OWORD *)(a5 + 64);
  *(_OWORD *)(a1 + 2480) = *(_OWORD *)(a5 + 80);
  *(_OWORD *)(a1 + 2496) = *(_OWORD *)(a5 + 96);
  result = a1 + 2528;
  *(_OWORD *)(a1 + 2512) = *(_OWORD *)(a5 + 112);
  *(_OWORD *)(a1 + 2528) = *(_OWORD *)(a5 + 128);
  *(_OWORD *)(a1 + 2544) = *(_OWORD *)(a5 + 144);
  *(_OWORD *)(a1 + 2560) = *(_OWORD *)(a5 + 160);
  return result;
}
