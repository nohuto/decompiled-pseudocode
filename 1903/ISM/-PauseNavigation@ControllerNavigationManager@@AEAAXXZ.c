/*
 * XREFs of ?PauseNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x180073138
 * Callers:
 *     ?SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180073E40 (-SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverr.c)
 * Callees:
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x1800147C8 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x18006C218 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180078AFC (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 */

void __fastcall ControllerNavigationManager::PauseNavigation(ControllerNavigationManager *this, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  _QWORD *v7; // rdi
  _QWORD *i; // rbx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  LOBYTE(a2) = 1;
  (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8, a2);
  if ( InputETW::IsEnabled(v3) )
  {
    v5 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<InputETW>::get(
                                                      v4,
                                                      lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)
                                        + 1);
    if ( *(_DWORD *)v5 > 5u )
    {
      if ( TlgKeywordOn(v5, 1uLL) )
        TlgWrite(v6, &unk_18019B319, 0LL, 0LL, 2u, &pData);
    }
  }
  v7 = (_QWORD *)*((_QWORD *)this + 9);
  for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
    ControllerProcessor::UpdateNavigationState(i[3], 1LL, 0LL);
}
