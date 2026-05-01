/*
 * XREFs of ??4AgileGitPtr@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800E5AB0
 * Callers:
 *     wistd::function_void___cdecl(unsigned_long_const_&___ptr64)_::function_void___cdecl(unsigned_long_const_&___ptr64)___lambda_117332e7da3c9ad186c9a97544532860___ @ 0x180094850 (wistd--function_void___cdecl(unsigned_long_const_-___ptr64)_--function_void___cdecl_ea_180094850.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7f05c0e38d38d7a3dcdb8c97bbe26781_____lambda_7f05c0e38d38d7a3dcdb8c97bbe26781___ @ 0x180094888 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7f05c0e38d38d.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_117332e7da3c9ad186c9a97544532860__0__wistd::details::function_allocator_wistd::_Func_class_void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Move @ 0x180094FB0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_117332e7da3c9ad186c9a97544532860__0__ea_180094FB0.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_aa80afaf85434d8b303f0719df2313e6___ @ 0x1800E4DE8 (Windows--Internal--ComTaskPool--QueueTask__lambda_aa80afaf85434d8b303f0719df2313e6___.c)
 *     ?RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ @ 0x1800E6A6C (-RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_040ecaeac95cc302220253cdf09fb85c__0__wistd::details::function_allocator_wistd::_Func_class_void__SEB_EVENT_HEADER_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void__SEB_EVENT_HEADER_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Move @ 0x1800E7AC0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_040ecaeac95cc302220253cdf09fb85c__0__ea_1800E7AC0.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_33873f8407ace622a84e55bd6a755f63___ @ 0x1801772C8 (Windows--Internal--ComTaskPool--QueueTask__lambda_33873f8407ace622a84e55bd6a755f63___.c)
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18017A200 (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_8d0f013aa2e1126d91d077424ff08d75__0__wistd::details::function_allocator_wistd::_Func_class_void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Move @ 0x18017B8F0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_8d0f013aa2e1126d91d077424ff08d75__0__ea_18017B8F0.c)
 *     ?OperationRequestComplete@ViewWrapperBase@@UEAAXW4ViewOperationRequestType@@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180242B70 (-OperationRequestComplete@ViewWrapperBase@@UEAAXW4ViewOperationRequestType@@W4AppRequestHandledR.c)
 *     ?TryBack@ViewWrapperBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewHandledEventArgs@2345@@Foundation@Windows@@@Z @ 0x180245130 (-TryBack@ViewWrapperBase@@UEAAJPEAU-$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shel.c)
 *     _lambda_f8421c91cc109f3cf87d8162b66792d4_::operator() @ 0x18024FA80 (_lambda_f8421c91cc109f3cf87d8162b66792d4_--operator().c)
 *     ?OnBackComplete@WindowWrapperBase@@AEAAX_N@Z @ 0x1802506B0 (-OnBackComplete@WindowWrapperBase@@AEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall AgileGitPtr::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rsi
  __int64 *result; // rax

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
  v4 = *a2;
  *a2 = 0LL;
  if ( *a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 16LL))(*a1);
  result = a1;
  *a1 = v4;
  return result;
}
