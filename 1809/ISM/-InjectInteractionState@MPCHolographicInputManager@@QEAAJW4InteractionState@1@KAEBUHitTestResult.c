/*
 * XREFs of ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x1800415AC
 * Callers:
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800F9C1C (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1800FB954 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000C2CC (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x18000C8D0 (-GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z.c)
 *     _lambda_ba94582f5a49cd463f39dfc8045b2062_::operator() @ 0x1800418D0 (_lambda_ba94582f5a49cd463f39dfc8045b2062_--operator().c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@_N@Z @ 0x180042B58 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagP.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCHolographicInputManager::InjectInteractionState(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 *a5)
{
  unsigned int v6; // edi
  unsigned int v7; // ebx
  const char *v9; // r9
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  unsigned int v13; // eax
  unsigned int v14; // esi
  struct IViewHierarchy *ViewHierarchy; // rax
  __int64 WindowIdFromViewId; // rax
  __int64 v17; // r8
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int64 v20; // rax
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v26[3]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v27[3]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v28[520]; // [rsp+B0h] [rbp-50h] BYREF
  int v29; // [rsp+2B8h] [rbp+1B8h]
  _BYTE v30[1600]; // [rsp+6F0h] [rbp+5F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D78h] [rbp+C78h]

  v6 = a3;
  v7 = a2;
  if ( !*(_BYTE *)(a1 + 1872) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)a4);
    __debugbreak();
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a5 + 32))(a5) )
  {
    v25 = a1;
    if ( *(_BYTE *)(a1 + 1876) )
    {
      if ( v7 != 1 )
        goto LABEL_14;
      v11 = *(_OWORD *)(a4 + 88);
      v26[0] = *(_OWORD *)(a4 + 72);
      v12 = *(_OWORD *)(a4 + 104);
      v26[1] = v11;
      v26[2] = v12;
      lambda_ba94582f5a49cd463f39dfc8045b2062_::operator()(&v25, v30, 4LL, 1LL, v6, v26);
      v13 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*a5 + 24))(a5, v30);
      if ( (int)(v13 + 0x80000000) >= 0 && v13 != -2147417853 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2C4,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)v13);
    }
    if ( v7 == 1 )
    {
      *(_BYTE *)(a1 + 1876) = 1;
      _InterlockedExchange(
        &MPCInputInfoHelper::m_nextSpectrumId,
        (MPCInputInfoHelper::m_nextSpectrumId - 2000000000) % 0x3B9AC9FFu + 2000000001);
      *(_DWORD *)(a1 + 1880) = MPCInputInfoHelper::m_nextSpectrumId;
      if ( !*(_BYTE *)(a4 + 1) && *(_BYTE *)(a4 + 72) )
      {
        v14 = *(_DWORD *)(a4 + 276);
        ViewHierarchy = ISMStatics::GetViewHierarchy();
        WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, v14);
        v6 = a3;
        MPCHolographicInputManager::RequestForegroundChange(a1, WindowIdFromViewId, v14, a3, 512);
        v7 = a2;
      }
      v17 = 2LL;
LABEL_18:
      v18 = *(_OWORD *)(a4 + 88);
      v27[0] = *(_OWORD *)(a4 + 72);
      v19 = *(_OWORD *)(a4 + 104);
      v27[1] = v18;
      v27[2] = v19;
      lambda_ba94582f5a49cd463f39dfc8045b2062_::operator()(&v25, v28, v17, v7, v6, v27);
      if ( v29 == 3 )
      {
        v20 = *a5;
        v29 = 6;
        v21 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(v20 + 24))(a5, v28);
        if ( (int)(v21 + 0x80000000) >= 0 && v21 != -2147417853 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2FF,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
            (const char *)v21);
        v29 = 3;
      }
      v22 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*a5 + 24))(a5, v28);
      if ( ((v22 + 0x80000000) & 0x80000000) == 0 && v22 != -2147417853 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x30B,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)v22);
      return 0LL;
    }
LABEL_14:
    *(_BYTE *)(a1 + 1876) = 0;
    if ( v7 )
    {
      if ( v7 != 2 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x2F0,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v9);
        JUMPOUT(0x1800418C6LL);
      }
      v17 = 4LL;
    }
    else
    {
      v17 = 3LL;
    }
    goto LABEL_18;
  }
  return 0LL;
}
