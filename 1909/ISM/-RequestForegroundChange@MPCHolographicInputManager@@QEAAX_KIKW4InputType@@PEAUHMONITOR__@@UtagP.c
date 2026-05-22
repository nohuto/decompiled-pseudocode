/*
 * XREFs of ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@_N@Z @ 0x18008358C
 * Callers:
 *     ?HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z @ 0x180054050 (-HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z.c)
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x180081164 (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 * Callees:
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000DFD4 (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18001AFE8 (-IsEdition@@YA_N_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z @ 0x1800583F0 (-GetProcessIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z.c)
 *     ?GetThreadIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z @ 0x1800584F8 (-GetThreadIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z @ 0x18005869C (-GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ @ 0x180080C6C (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ.c)
 *     ?MPCHolographicInputManager_RequestForegroundChange_@ISMTracing@@QEAAX_K0KK_N@Z @ 0x1800821D0 (-MPCHolographicInputManager_RequestForegroundChange_@ISMTracing@@QEAAX_K0KK_N@Z.c)
 */

char __fastcall MPCHolographicInputManager::RequestForegroundChange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        bool a8)
{
  unsigned int v8; // r12d
  unsigned int ViewIdFromWindowId; // edi
  __int64 v12; // rbp
  struct IMPCFocusTarget *FocusedTarget; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  const char *v16; // r9
  int v17; // r15d
  struct IMPCFocusTarget *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  ISMTracing *v21; // rcx
  unsigned int Ancestor; // eax
  struct IViewHierarchy *ViewHierarchy; // rax
  unsigned int ThreadIdFromViewId; // ebx
  struct IViewHierarchy *v25; // rax
  unsigned int ProcessIdFromViewId; // eax
  struct IViewHierarchy *v27; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = (unsigned int)a4;
  ViewIdFromWindowId = a3;
  if ( !*(_BYTE *)(a1 + 2364) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      1304LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    __debugbreak();
  }
  v12 = 0LL;
  FocusedTarget = MPCHolographicInputManager::GetFocusedTarget((MPCHolographicInputManager *)a1, a2, a3, a4);
  if ( FocusedTarget )
    v12 = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)FocusedTarget + 56LL))(FocusedTarget);
  v17 = 0;
  v18 = MPCHolographicInputManager::GetFocusedTarget((MPCHolographicInputManager *)a1, v14, v15, v16);
  if ( v18 )
    v17 = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)v18 + 80LL))(v18);
  if ( ISMTracing::IsEnabled(v19) )
  {
    wil::details::static_lazy<ISMTracing>::get(v20, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCHolographicInputManager_RequestForegroundChange_(v21, a2, v12, ViewIdFromWindowId, v8, a8);
  }
  LOBYTE(Ancestor) = IsEdition(8778LL);
  if ( (_BYTE)Ancestor )
  {
    if ( a2 )
    {
      Ancestor = (unsigned int)GetAncestor((HWND)(int)v12, 2u);
      if ( v12 != a2 && (!ViewIdFromWindowId || v17 != ViewIdFromWindowId) && Ancestor != a2 )
      {
        LOBYTE(Ancestor) = SetForegroundWindow((HWND)(int)a2);
        if ( a8 )
        {
          if ( ViewIdFromWindowId )
          {
            ViewHierarchy = ISMStatics::GetViewHierarchy();
            ThreadIdFromViewId = ViewHelper::GetThreadIdFromViewId(ViewHierarchy, ViewIdFromWindowId);
            v25 = ISMStatics::GetViewHierarchy();
            ProcessIdFromViewId = ViewHelper::GetProcessIdFromViewId(v25, ViewIdFromWindowId);
            LOBYTE(Ancestor) = SetInputFocus(ProcessIdFromViewId, ThreadIdFromViewId, ViewIdFromWindowId, a2, 0, 0, 0);
          }
        }
      }
    }
  }
  else
  {
    if ( !ViewIdFromWindowId )
    {
      v27 = ISMStatics::GetViewHierarchy();
      ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(v27, a2);
    }
    LOBYTE(Ancestor) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 2288)
                                                                                                  + 88LL))(
                         *(_QWORD *)(a1 + 2288),
                         ViewIdFromWindowId,
                         v8,
                         a5,
                         0LL,
                         a7);
  }
  return Ancestor;
}
