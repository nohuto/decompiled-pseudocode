/*
 * XREFs of ?OnAutoInvokeInDesktopModePolicyChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180311708
 * Callers:
 *     wistd::__function::__func__lambda_a5972c8af990ecc388564974a60d4c68__void___cdecl(void)_::operator() @ 0x18030DA40 (wistd--__function--__func__lambda_a5972c8af990ecc388564974a60d4c68__void___cdecl(void)_--operato.c)
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803181D0 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     wil::details::ScopeExitFn__lambda_baf825231a143b036c9e66ac1323b7d8___::_ScopeExitFn__lambda_baf825231a143b036c9e66ac1323b7d8___ @ 0x18009CA84 (wil--details--ScopeExitFn__lambda_baf825231a143b036c9e66ac1323b7d8___--_ScopeExitFn__lambda_baf8.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnAutoInvokeInDesktopModePolicyChanged(
        TouchKeyboardExperienceManager *this)
{
  _DWORD v3[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v4; // [rsp+30h] [rbp-18h] BYREF
  char v5; // [rsp+38h] [rbp-10h]
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 91) )
  {
    v6 = 0LL;
    v4 = &v6;
    v5 = 1;
    v3[0] = 1;
    v3[1] = 2;
    if ( (int)PolicyManager_GetPolicy(L"TextInput", L"EnableTouchKeyboardAutoInvokeInDesktopMode", v3, &v6) >= 0 )
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 91) + 96LL) + 496LL) = *(_DWORD *)(v6 + 16) != 0;
    wil::details::ScopeExitFn__lambda_baf825231a143b036c9e66ac1323b7d8___::_ScopeExitFn__lambda_baf825231a143b036c9e66ac1323b7d8___((__int64)&v4);
  }
  return 0LL;
}
