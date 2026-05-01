/*
 * XREFs of ?UnregisterFromShellHooks@TitleBarController@@AEAAXXZ @ 0x1801F9500
 * Callers:
 *     _lambda_662c9e03a7f7cb620b2a10f3e52d88d6_::operator() @ 0x1801F692C (_lambda_662c9e03a7f7cb620b2a10f3e52d88d6_--operator().c)
 *     ?UnsubscribeFromServices@TitleBarController@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801F95E0 (-UnsubscribeFromServices@TitleBarController@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?_Tidy@?$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ @ 0x1800E2500 (-_Tidy@-$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800E75AC (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?Swap@SmartCookie@@QEAAXAEAV1@@Z @ 0x1801F91C0 (-Swap@SmartCookie@@QEAAXAEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall TitleBarController::UnregisterFromShellHooks(RTL_SRWLOCK *this)
{
  __int64 v2; // rax
  RTL_SRWLOCK *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rdx
  _BYTE v6[104]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v7; // [rsp+98h] [rbp-30h]
  int v8; // [rsp+A0h] [rbp-28h]

  v2 = 2LL;
  do
  {
    v7 = 0LL;
    --v2;
  }
  while ( v2 );
  v8 = 0;
  v3 = this + 10;
  AcquireSRWLockExclusive(this + 10);
  SmartCookie::Swap((SmartCookie *)&this[28], (struct SmartCookie *)v6);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  SmartCookie::Unregister((SmartCookie *)v6);
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)v6,
    v4);
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)v6,
    v5);
}
