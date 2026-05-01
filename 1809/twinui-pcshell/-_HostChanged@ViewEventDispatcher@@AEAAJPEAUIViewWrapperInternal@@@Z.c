/*
 * XREFs of ?_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x18021FA4C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_577d888ad5fc09d0ae09be7fcc62383b__void_IViewWrapperInternal_____ptr64_::_Do_call @ 0x18021DF00 (std--_Func_impl_no_alloc__lambda_577d888ad5fc09d0ae09be7fcc62383b__void_IViewWrappe_ea_18021DF00.c)
 *     ?_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z @ 0x180220080 (-_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z.c)
 *     ?_UnregisterComponent@ViewEventDispatcher@@AEAAXI@Z @ 0x180220A08 (-_UnregisterComponent@ViewEventDispatcher@@AEAAXI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180217D6C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CAX_NW4Reporti.c)
 *     ?_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@@Z @ 0x18021EAA4 (-_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXPEAUIViewWrapperInternal@@@Z@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::_HostChanged(
        ViewEventDispatcher *this,
        struct IViewWrapperInternal *a2,
        __int64 a3)
{
  int v5; // eax
  const char *v6; // r9
  _QWORD *v7; // rdx
  _QWORD v9[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v10; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::ReportUsageToService((__int64)this, (__int64)a2, a3);
  (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)a2 + 864LL))(a2);
  try
  {
    v9[0] = off_1803E2468;
    v9[1] = this;
    v10 = v9;
    v5 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)a2 + 672LL))(a2);
    ViewEventDispatcher::_ForEachComponent(this, v5, (__int64)v9);
    if ( v10 )
    {
      v7 = v9;
      LOBYTE(v7) = v10 != v9;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v10 + 32LL))(v10, v7);
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA9A,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                           v6);
  }
  return 0LL;
}
