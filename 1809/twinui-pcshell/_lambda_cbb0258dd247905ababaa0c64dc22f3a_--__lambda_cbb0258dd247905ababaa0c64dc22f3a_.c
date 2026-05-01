/*
 * XREFs of _lambda_cbb0258dd247905ababaa0c64dc22f3a_::__lambda_cbb0258dd247905ababaa0c64dc22f3a_ @ 0x1801D500C
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_cbb0258dd247905ababaa0c64dc22f3a__0__wistd::details::function_allocator_wistd::_Func_class_long_long_Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_long_Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::__Func_impl_wistd::_Callable_obj__lambda_cbb0258dd247905ababaa0c64dc22f3a__0__wistd::details::function_allocator_wistd::_Func_class_long_long_Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_long_Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_ @ 0x1801D53C0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_cbb0258dd247905ababaa0c64dc22f3a__0__wistd--detai.c)
 *     ?RegisterForTabTransferEvents@TabViewManager@@AEAAJXZ @ 0x1801E3A38 (-RegisterForTabTransferEvents@TabViewManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_cbb0258dd247905ababaa0c64dc22f3a_::__lambda_cbb0258dd247905ababaa0c64dc22f3a_(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = a1[4];
  if ( v2 )
  {
    a1[4] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = a1[3];
  if ( v3 )
  {
    a1[3] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = a1[2];
  if ( v4 )
  {
    a1[2] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 1);
}
