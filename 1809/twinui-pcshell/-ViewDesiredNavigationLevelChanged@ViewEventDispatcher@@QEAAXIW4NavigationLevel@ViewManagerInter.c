/*
 * XREFs of ?ViewDesiredNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@0@Z @ 0x18021C3D8
 * Callers:
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x180242DDC (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@@Z @ 0x18021EAA4 (-_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXPEAUIViewWrapperInternal@@@Z@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::ViewDesiredNavigationLevelChanged(
        ViewEventDispatcher *a1,
        __int64 a2,
        int a3,
        int a4)
{
  __int64 result; // rax
  __int64 (__fastcall ***v5)(); // rdx
  __int64 (__fastcall **v6)(); // [rsp+30h] [rbp-58h] BYREF
  int v7; // [rsp+38h] [rbp-50h]
  __int64 (__fastcall ***v8)(); // [rsp+68h] [rbp-20h]

  if ( a4 == 1 && a3 > 1 )
    a4 = 3;
  v6 = off_1803E25E8;
  v7 = a4;
  v8 = &v6;
  result = ViewEventDispatcher::_ForEachComponent(a1);
  if ( v8 )
  {
    v5 = &v6;
    LOBYTE(v5) = v8 != &v6;
    return ((__int64 (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v8)[4])(v8, v5);
  }
  return result;
}
