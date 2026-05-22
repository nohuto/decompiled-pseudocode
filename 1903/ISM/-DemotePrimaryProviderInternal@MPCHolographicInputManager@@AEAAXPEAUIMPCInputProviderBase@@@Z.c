/*
 * XREFs of ?DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180080850
 * Callers:
 *     ?DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800808B8 (-DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_03f4dc41ea8f14b1d8dc5b14e548ce90__void_IMPCInputProviderBase___::_Do_call @ 0x1800842B0 (std--_Func_impl_no_alloc__lambda_03f4dc41ea8f14b1d8dc5b14e548ce90__void_IMPCInputPr_ea_1800842B0.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180057368 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DetachProvider@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18008601C (-DetachProvider@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800863AC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?ProcessProviderDemoted@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x18008C198 (-ProcessProviderDemoted@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 */

void __fastcall MPCHolographicInputManager::DemotePrimaryProviderInternal(
        MPCCursorManager **this,
        struct IMPCInputProviderBase *a2)
{
  int v3; // eax
  MPCGestureHandlerManager *Instance; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = MPCCursorManager::ProcessProviderDemoted(this[298], a2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      601LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  Instance = MPCGestureHandlerManager::GetInstance();
  wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(&v6, (__int64)a2);
  MPCGestureHandlerManager::DetachProvider(Instance);
}
