/*
 * XREFs of ?GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z @ 0x18000C778
 * Callers:
 *     ?HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z @ 0x180006880 (-HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z.c)
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x18000740C (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x180007624 (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x180007EE8 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x180008268 (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 *     _lambda_389ee6cac702106878bc21352c056760_::_lambda_invoker_cdecl_ @ 0x1800084C0 (_lambda_389ee6cac702106878bc21352c056760_--_lambda_invoker_cdecl_.c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@_N@Z @ 0x180042B58 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagP.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::_Func_impl_no_alloc__lambda_3bffa33b46eabc9ad4a3efbb73b99b0c__bool_Navigation::Server::IMonitorView_____ptr64_::_Move @ 0x18000D2C0 (std--_Func_impl_no_alloc__lambda_3bffa33b46eabc9ad4a3efbb73b99b0c__bool_Navigation-_ea_18000D2C0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewHelper::GetViewIdFromWindowId(struct IViewHierarchy *a1, __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rdx
  int v5; // eax
  _QWORD *v6; // rdx
  unsigned int v7; // ebx
  _QWORD v9[7]; // [rsp+20h] [rbp-49h] BYREF
  _QWORD *v10; // [rsp+58h] [rbp-11h]
  __int64 v11; // [rsp+60h] [rbp-9h]
  _BYTE *v12; // [rsp+68h] [rbp-1h]
  _BYTE v13[56]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  unsigned int v16; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v17; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v18; // [rsp+E0h] [rbp+77h]
  _QWORD *v19; // [rsp+E8h] [rbp+7Fh]

  v11 = -2LL;
  v16 = 0;
  v9[0] = off_180138608;
  v9[1] = a2;
  v10 = v9;
  v19 = v9;
  v3 = 0LL;
  v18 = 0LL;
  v12 = v13;
  v14 = 0LL;
  v14 = std::_Func_impl_no_alloc__lambda_3bffa33b46eabc9ad4a3efbb73b99b0c__bool_Navigation::Server::IMonitorView_____ptr64_::_Move(
          v9,
          v13);
  (*(void (__fastcall **)(struct IViewHierarchy *, __int64 *, _BYTE *))(*(_QWORD *)a1 + 72LL))(a1, &v17, v13);
  if ( v17 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    v3 = v17;
    v18 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    if ( v10 )
    {
      v4 = v9;
      LOBYTE(v4) = v10 != v9;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v10 + 32LL))(v10, v4);
    }
    if ( v3 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v3 + 120LL))(v3, &v16);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x52,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
          (const char *)(unsigned int)v5);
    }
  }
  else if ( v10 )
  {
    v6 = v9;
    LOBYTE(v6) = v10 != v9;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v10 + 32LL))(v10, v6);
  }
  v7 = v16;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v7;
}
