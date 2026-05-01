/*
 * XREFs of ?PropagateViewStateOverridesToComponentsIfNecessary@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x1802B8320
 * Callers:
 *     ?HostViewStateOverridesChanged@ViewWrapperBase@@UEAAXAEBUHostViewStateOverrides@@@Z @ 0x1802B79F0 (-HostViewStateOverridesChanged@ViewWrapperBase@@UEAAXAEBUHostViewStateOverrides@@@Z.c)
 *     ?SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1802B8FC8 (-SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     std::_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___::_Delete_this @ 0x180189610 (std--_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___--_Dele.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewWrapperBase::PropagateViewStateOverridesToComponentsIfNecessary(
        ViewWrapperBase *this,
        const struct APPLICATION_VIEW_DATA *a2,
        const struct APPLICATION_VIEW_DATA *a3)
{
  int v3; // eax
  _DWORD v4[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v5; // [rsp+28h] [rbp-60h]
  _QWORD v6[8]; // [rsp+30h] [rbp-58h] BYREF

  v5 = -2LL;
  v3 = *((_DWORD *)a3 + 6);
  if ( *((_DWORD *)a2 + 6) != v3 )
  {
    v4[0] = 1;
    v4[1] = v3;
    v6[0] = off_18046A9A0;
    v6[1] = v4;
    v6[7] = v6;
    std::_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___::_Delete_this(v6, 0);
  }
}
