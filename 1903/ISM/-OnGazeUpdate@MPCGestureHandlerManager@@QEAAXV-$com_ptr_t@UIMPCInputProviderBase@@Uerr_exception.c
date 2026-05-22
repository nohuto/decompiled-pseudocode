/*
 * XREFs of ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800868F0
 * Callers:
 *     ?OnGazeUpdate@MPCSixDofProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180130F00 (-OnGazeUpdate@MPCSixDofProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCHandProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180135AE0 (-OnGazeUpdate@MPCHandProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180137B90 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18013F140 (-PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x18013FC00 (-OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180057368 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ??$_Try_emplace@AEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@$$V@?$map@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@std@@_N@1@AEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180085DBC (--$_Try_emplace@AEBV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@$$V@-$m.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@2@AEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180087468 (-find@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@w.c)
 *     ?OnGazeUpdate@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18008E7EC (-OnGazeUpdate@MPCGestureHandler@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCGestureHandlerManager::OnGazeUpdate(__int64 a1, __int64 *a2)
{
  __int64 **v3; // rax
  __int64 **v4; // r10
  __int64 v5; // rbx
  _QWORD v7[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+58h] [rbp+10h]

  v9 = a2;
  v3 = (__int64 **)std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy> const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::find(
                     a1 + 24,
                     &v8,
                     a2);
  if ( *v3 != *v4 )
  {
    std::map<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::_Try_emplace<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy> const &,>(
      v4,
      (unsigned __int64)v7,
      a2);
    v5 = *(_QWORD *)(v7[0] + 40LL);
    wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(&v8, *a2);
    MPCGestureHandler::OnGazeUpdate(v5, &v8);
  }
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(a2);
}
