/*
 * XREFs of ?UnregisterFromShellHooks@TitleBarController@@AEAAXXZ @ 0x180269960
 * Callers:
 *     _lambda_8c677c44027c68cbd42f9970f610ae83_::operator() @ 0x180266D74 (_lambda_8c677c44027c68cbd42f9970f610ae83_--operator().c)
 *     ?UnsubscribeFromServices@TitleBarController@@UEAAJPEAUIServiceProvider@@@Z @ 0x180269A20 (-UnsubscribeFromServices@TitleBarController@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x1800547D0 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1801286A8 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?Swap@SmartCookie@@QEAAXAEAV1@@Z @ 0x180233FB4 (-Swap@SmartCookie@@QEAAXAEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall TitleBarController::UnregisterFromShellHooks(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  _BYTE v3[112]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v4; // [rsp+A0h] [rbp-28h]
  int v5; // [rsp+A8h] [rbp-20h]

  v4 = 0LL;
  v5 = 0;
  v2 = this + 10;
  AcquireSRWLockExclusive(this + 10);
  SmartCookie::Swap((SmartCookie *)&this[28], (struct SmartCookie *)v3);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  SmartCookie::Unregister((SmartCookie *)v3);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v3);
}
