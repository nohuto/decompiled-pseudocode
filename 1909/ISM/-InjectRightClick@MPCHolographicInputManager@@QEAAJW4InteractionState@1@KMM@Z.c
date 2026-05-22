/*
 * XREFs of ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z @ 0x180081480
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180131510 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18013922C (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005633C (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$make_unique@ULegacyDeviceInfo@@$$V$0A@@std@@YA?AV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@0@XZ @ 0x180080304 (--$make_unique@ULegacyDeviceInfo@@$$V$0A@@std@@YA-AV-$unique_ptr@ULegacyDeviceInfo@@U-$default_d.c)
 *     ?reset@?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAAXPEAULegacyDeviceInfo@@@Z @ 0x180084A3C (-reset@-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAAXPEA.c)
 *     ?SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z @ 0x18012B970 (-SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z.c)
 */

__int64 __fastcall MPCHolographicInputManager::InjectRightClick(__int64 a1, int a2, int a3, const char *a4, float a5)
{
  float v5; // xmm3_4
  __int64 *v9; // rbx
  __int64 *v10; // rax
  const char *v11; // r9
  __int64 v12; // rdx
  _DWORD *v13; // rsi
  int v14; // eax
  _DWORD *v15; // rax
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int16 v20; // ax
  void *v21; // [rsp+28h] [rbp-E0h] BYREF
  _DWORD v22[24]; // [rsp+38h] [rbp-D0h] BYREF
  int v23; // [rsp+9Ah] [rbp-6Eh]
  int v24; // [rsp+A4h] [rbp-64h]
  int v25; // [rsp+A8h] [rbp-60h]
  char v26; // [rsp+B8h] [rbp-50h]
  char v27; // [rsp+BAh] [rbp-4Eh]
  wil::details::in1diag3 *retaddr; // [rsp+240h] [rbp+138h]

  if ( !*(_BYTE *)(a1 + 2364) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      800LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    __debugbreak();
  }
  v9 = (__int64 *)(a1 + 2392);
  if ( !*(_QWORD *)(a1 + 2392) )
  {
    v10 = std::make_unique<LegacyDeviceInfo,,0>(&v21);
    if ( v9 != v10 )
    {
      v12 = *v10;
      *v10 = 0LL;
      std::unique_ptr<LegacyDeviceInfo>::reset(v9, v12);
    }
    if ( v21 )
      operator delete(v21, (const struct std::nothrow_t *)0x620);
    if ( !*v9 )
    {
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        806LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v11);
      __debugbreak();
    }
    v13 = (_DWORD *)*v9;
    *v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2304) + 32LL))(*(_QWORD *)(a1 + 2304));
    *(_DWORD *)(*v9 + 4) = 2;
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 2304) + 40LL))(
            *(_QWORD *)(a1 + 2304),
            *v9,
            0LL);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        811LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v14);
      __debugbreak();
    }
  }
  memset_0(v22, 0, 0x1A8uLL);
  v15 = (_DWORD *)*v9;
  v22[6] = 424;
  v22[0] = 4096;
  v23 = 1;
  v22[1] = *v15;
  v22[10] = a3;
  v26 = 1;
  v27 = 1;
  v24 = (int)v5;
  v25 = (int)a5;
  v16 = MouseProcessor::SynthesizeMouseInput((struct InputInfo *)v22);
  v17 = v16;
  if ( a2 == 1 )
  {
    if ( v16 < 0 )
    {
      v18 = 830LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v16);
      return v17;
    }
    v20 = 4;
  }
  else
  {
    if ( v16 < 0 )
    {
      v18 = 838LL;
      goto LABEL_15;
    }
    v20 = 8;
  }
  HIWORD(v23) = v20;
  return MouseProcessor::SynthesizeMouseInput((struct InputInfo *)v22);
}
