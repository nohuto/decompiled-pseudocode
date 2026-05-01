/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_cbb0258dd247905ababaa0c64dc22f3a__0__wistd::details::function_allocator_wistd::_Func_class_long_long_Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_long_Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Copy @ 0x1801EFF10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_cbb0258dd247905ababaa0c64dc22f3a__0__wistd::details::function_allocator_wistd::_Func_class_long_long_Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_long_Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Copy(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( !a2 )
    __fastfail(7u);
  *a2 = off_1803CAAF0;
  a2[1] = a1[1];
  a2[2] = a1[2];
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2 + 2);
  v4 = a1[3];
  a2[3] = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = a1[4];
  a2[4] = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = a1[5];
  a2[5] = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  return a2;
}
