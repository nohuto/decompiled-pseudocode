/*
 * XREFs of ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x180081164
 * Callers:
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18013922C (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18013A708 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000DFD4 (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _lambda_54171966a0979e6caeb7ef18de9c96be_::operator() @ 0x180034930 (_lambda_54171966a0979e6caeb7ef18de9c96be_--operator().c)
 *     _alloca_probe @ 0x1800377B0 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x180058758 (-GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z.c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@_N@Z @ 0x18008358C (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagP.c)
 */

__int64 __fastcall MPCHolographicInputManager::InjectInteractionState(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 *a5)
{
  unsigned int v6; // esi
  int v7; // edi
  const char *v9; // r9
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  unsigned int v13; // eax
  unsigned int v14; // esi
  struct IViewHierarchy *ViewHierarchy; // rax
  __int64 WindowIdFromViewId; // rax
  unsigned int v17; // r8d
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int64 v20; // rax
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v26[3]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v27[3]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v28[64]; // [rsp+B0h] [rbp-50h] BYREF
  int v29; // [rsp+F0h] [rbp-10h]
  _BYTE v30[2032]; // [rsp+8A0h] [rbp+7A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+10D8h] [rbp+FD8h]

  v6 = a3;
  v7 = a2;
  if ( !*(_BYTE *)(a1 + 2364) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      673LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)a4);
    __debugbreak();
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a5 + 32))(a5) )
  {
    v25 = a1;
    if ( *(_BYTE *)(a1 + 2368) )
    {
      if ( v7 != 1 )
        goto LABEL_15;
      v11 = *(_OWORD *)(a4 + 88);
      v26[0] = *(_OWORD *)(a4 + 72);
      v12 = *(_OWORD *)(a4 + 104);
      v26[1] = v11;
      v26[2] = v12;
      lambda_54171966a0979e6caeb7ef18de9c96be_::operator()((__int64)&v25, (__int64)v30, 4u, 1, v6, v26);
      v13 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*a5 + 24))(a5, v30);
      if ( (int)(v13 + 0x80000000) >= 0 && v13 != -2147417853 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          715LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)v13);
    }
    if ( v7 == 1 )
    {
      *(_BYTE *)(a1 + 2368) = 1;
      _InterlockedExchange(
        &MPCInputInfoHelper::m_nextSpectrumId,
        (MPCInputInfoHelper::m_nextSpectrumId - 2000000000) % 0x3B9AC9FFu + 2000000001);
      *(_DWORD *)(a1 + 2372) = MPCInputInfoHelper::m_nextSpectrumId;
      if ( !*(_BYTE *)(a4 + 1) && *(_BYTE *)(a4 + 72) )
      {
        v14 = *(_DWORD *)(a4 + 284);
        ViewHierarchy = ISMStatics::GetViewHierarchy();
        WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, v14);
        MPCHolographicInputManager::RequestForegroundChange(a1, WindowIdFromViewId, v14, a3, 512);
        v7 = a2;
        v6 = a3;
      }
      v17 = 2;
LABEL_19:
      v18 = *(_OWORD *)(a4 + 88);
      v27[0] = *(_OWORD *)(a4 + 72);
      v19 = *(_OWORD *)(a4 + 104);
      v27[1] = v18;
      v27[2] = v19;
      lambda_54171966a0979e6caeb7ef18de9c96be_::operator()((__int64)&v25, (__int64)v28, v17, v7, v6, v27);
      if ( v29 == 3 )
      {
        v20 = *a5;
        v29 = 6;
        v21 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(v20 + 24))(a5, v28);
        if ( (int)(v21 + 0x80000000) >= 0 && v21 != -2147417853 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            774LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
            (const char *)v21);
        v29 = 3;
      }
      v22 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*a5 + 24))(a5, v28);
      if ( ((v22 + 0x80000000) & 0x80000000) == 0 && v22 != -2147417853 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          786LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)v22);
      return 0LL;
    }
LABEL_15:
    *(_BYTE *)(a1 + 2368) = 0;
    if ( v7 )
    {
      if ( v7 != 2 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          759LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v9);
        JUMPOUT(0x180081476LL);
      }
      v17 = 4;
    }
    else
    {
      v17 = 3;
    }
    goto LABEL_19;
  }
  return 0LL;
}
