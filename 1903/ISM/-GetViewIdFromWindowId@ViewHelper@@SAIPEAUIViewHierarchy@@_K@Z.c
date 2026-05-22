/*
 * XREFs of ?GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z @ 0x18005893C
 * Callers:
 *     _lambda_98d8c15e91123ccd84ca1af9146cf167_::_lambda_invoker_cdecl_ @ 0x180053400 (_lambda_98d8c15e91123ccd84ca1af9146cf167_--_lambda_invoker_cdecl_.c)
 *     ?FixViewIdForHitTestResult@MPCInputRouter@@AEAAXAEAUHitTestResult3D@@@Z @ 0x180053BA0 (-FixViewIdForHitTestResult@MPCInputRouter@@AEAAXAEAUHitTestResult3D@@@Z.c)
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x180053CB8 (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x1800549E8 (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800556A0 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x180055E94 (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@_N@Z @ 0x1800837CC (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindView@ViewHelper@@SAJPEAUIViewHierarchy@@V?$function@$$A6A_NPEAUIMonitorView@Server@Navigation@@@Z@std@@PEAPEAUIMonitorView@Server@Navigation@@@Z @ 0x180057F50 (-FindView@ViewHelper@@SAJPEAUIViewHierarchy@@V-$function@$$A6A_NPEAUIMonitorView@Server@Navigati.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewHelper::GetViewIdFromWindowId(struct IViewHierarchy *a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  _QWORD v6[9]; // [rsp+28h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  unsigned int v8; // [rsp+88h] [rbp+18h] BYREF
  __int64 v9; // [rsp+90h] [rbp+20h] BYREF

  v8 = 0;
  v9 = 0LL;
  v6[0] = off_180173610;
  v6[1] = a2;
  v6[7] = v6;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v9);
  if ( (int)ViewHelper::FindView((__int64)a1, (__int64)v6, &v9) >= 0 )
  {
    if ( v9 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v9 + 120LL))(v9, &v8);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          82LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
          (const char *)(unsigned int)v3);
    }
  }
  v4 = v8;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v9);
  return v4;
}
