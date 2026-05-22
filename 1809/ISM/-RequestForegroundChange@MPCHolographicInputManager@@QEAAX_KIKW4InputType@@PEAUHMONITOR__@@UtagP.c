/*
 * XREFs of ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@_N@Z @ 0x180042B58
 * Callers:
 *     ?HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z @ 0x180006880 (-HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z.c)
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x1800415AC (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000C2CC (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z @ 0x18000C778 (-GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z @ 0x18000C9E0 (-GetProcessIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z.c)
 *     ?GetThreadIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z @ 0x18000CAF4 (-GetThreadIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ @ 0x180042B14 (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ.c)
 *     ?MPCHolographicInputManager_RequestForegroundChange_@ISMTracing@@QEAAX_K0KK_N@Z @ 0x180044374 (-MPCHolographicInputManager_RequestForegroundChange_@ISMTracing@@QEAAX_K0KK_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

int __fastcall MPCHolographicInputManager::RequestForegroundChange(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        const char *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        bool a8)
{
  unsigned int v8; // r12d
  unsigned int ViewIdFromWindowId; // edi
  unsigned __int64 v12; // rbp
  struct IMPCFocusTarget *FocusedTarget; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  const char *v16; // r9
  int v17; // r15d
  struct IMPCFocusTarget *v18; // rax
  _DWORD *v19; // rcx
  ISMTracing *v20; // rcx
  __int64 v21; // rax
  struct IViewHierarchy *ViewHierarchy; // rax
  unsigned int ThreadIdFromViewId; // ebx
  struct IViewHierarchy *v24; // rax
  unsigned int ProcessIdFromViewId; // eax
  struct IViewHierarchy *v26; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = (unsigned int)a4;
  ViewIdFromWindowId = a3;
  if ( !*(_BYTE *)(a1 + 1872) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4EA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    JUMPOUT(0x180042D37LL);
  }
  v12 = 0LL;
  FocusedTarget = MPCHolographicInputManager::GetFocusedTarget((MPCHolographicInputManager *)a1, a2, a3, a4);
  if ( FocusedTarget )
    v12 = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)FocusedTarget + 56LL))(FocusedTarget);
  v17 = 0;
  v18 = MPCHolographicInputManager::GetFocusedTarget((MPCHolographicInputManager *)a1, v14, v15, v16);
  if ( v18 )
    v17 = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)v18 + 80LL))(v18);
  v19 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v19 && *v19 )
  {
    ISMTracing::Instance();
    ISMTracing::MPCHolographicInputManager_RequestForegroundChange_(v20, a2, v12, ViewIdFromWindowId, v8, a8);
  }
  v21 = 1LL << gdwDeviceFamily;
  if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
  {
    if ( a2 )
    {
      LODWORD(v21) = (unsigned int)GetAncestor((HWND)(int)v12, 2u);
      if ( v12 != a2 && (!ViewIdFromWindowId || v17 != ViewIdFromWindowId) && (unsigned int)v21 != a2 )
      {
        LODWORD(v21) = SetForegroundWindow((HWND)(int)a2);
        if ( a8 )
        {
          if ( ViewIdFromWindowId )
          {
            ViewHierarchy = ISMStatics::GetViewHierarchy();
            ThreadIdFromViewId = ViewHelper::GetThreadIdFromViewId(ViewHierarchy, ViewIdFromWindowId);
            v24 = ISMStatics::GetViewHierarchy();
            ProcessIdFromViewId = ViewHelper::GetProcessIdFromViewId(v24, ViewIdFromWindowId);
            LODWORD(v21) = SetInputFocus(ProcessIdFromViewId, ThreadIdFromViewId, ViewIdFromWindowId, a2, 0, 0, 0);
          }
        }
      }
    }
  }
  else
  {
    if ( !ViewIdFromWindowId )
    {
      v26 = ISMStatics::GetViewHierarchy();
      ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(v26, a2);
    }
    LODWORD(v21) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 1808)
                                                                                              + 88LL))(
                     *(_QWORD *)(a1 + 1808),
                     ViewIdFromWindowId,
                     v8,
                     a5,
                     0LL,
                     a7);
  }
  return v21;
}
