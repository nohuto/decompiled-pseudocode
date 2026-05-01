/*
 * XREFs of ?ViewDesiredNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@0@Z @ 0x180291334
 * Callers:
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x1802B83D8 (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     std::_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___::_Delete_this @ 0x180189610 (std--_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___--_Dele.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewEventDispatcher::ViewDesiredNavigationLevelChanged(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 (__fastcall **v4)(); // [rsp+30h] [rbp-58h] BYREF
  int v5; // [rsp+38h] [rbp-50h]
  __int64 (__fastcall ***v6)(); // [rsp+68h] [rbp-20h]

  if ( a4 == 1 && a3 > 1 )
    a4 = 3;
  v4 = off_18046A9D0;
  v5 = a4;
  v6 = &v4;
  std::_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___::_Delete_this(&v4, 0);
}
