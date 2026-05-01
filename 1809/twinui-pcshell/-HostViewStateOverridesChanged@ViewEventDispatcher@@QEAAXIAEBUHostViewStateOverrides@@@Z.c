/*
 * XREFs of ?HostViewStateOverridesChanged@ViewEventDispatcher@@QEAAXIAEBUHostViewStateOverrides@@@Z @ 0x1802158C8
 * Callers:
 *     ?PropagateViewStateOverridesToComponentsIfNecessary@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x180242D60 (-PropagateViewStateOverridesToComponentsIfNecessary@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_D.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@@Z @ 0x18021EAA4 (-_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXPEAUIViewWrapperInternal@@@Z@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewEventDispatcher::HostViewStateOverridesChanged(
        ViewEventDispatcher *this,
        __int64 a2,
        const struct HostViewStateOverrides *a3)
{
  _QWORD *v3; // rdx
  _QWORD v4[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v5; // [rsp+68h] [rbp-20h]

  v4[0] = off_1803E25B8;
  v4[1] = a3;
  v5 = v4;
  ViewEventDispatcher::_ForEachComponent(this);
  if ( v5 )
  {
    v3 = v4;
    LOBYTE(v3) = v5 != v4;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v5 + 32LL))(v5, v3);
  }
}
