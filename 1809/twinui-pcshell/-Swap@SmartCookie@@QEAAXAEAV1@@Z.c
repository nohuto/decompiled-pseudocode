/*
 * XREFs of ?Swap@SmartCookie@@QEAAXAEAV1@@Z @ 0x1801F91C0
 * Callers:
 *     ?RegisterForShellHooks@TitleBarController@@AEAAJXZ @ 0x1801F898C (-RegisterForShellHooks@TitleBarController@@AEAAJXZ.c)
 *     ?UnregisterFromShellHooks@TitleBarController@@AEAAXXZ @ 0x1801F9500 (-UnregisterFromShellHooks@TitleBarController@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?_Tidy@?$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ @ 0x1800E2500 (-_Tidy@-$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ.c)
 *     ??4?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@AEAV01@@Z @ 0x1801F63B8 (--4-$function@$$A6AJK@Z@wistd@@QEAAAEAV01@AEAV01@@Z.c)
 *     ?_Reset@?$_Func_class@JKU_Nil@wistd@@U12@U12@U12@U12@U12@@wistd@@IEAAXAEBV12@@Z @ 0x1801F97F0 (-_Reset@-$_Func_class@JKU_Nil@wistd@@U12@U12@U12@U12@U12@@wistd@@IEAAXAEBV12@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SmartCookie::Swap(SmartCookie *this, struct SmartCookie *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rdx
  _BYTE v7[104]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v8; // [rsp+98h] [rbp-20h]

  v8 = 0LL;
  wistd::_Func_class<long,unsigned long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Reset(
    v7,
    this);
  v4 = *((_DWORD *)this + 28);
  wistd::function<long (unsigned long)>::operator=((__int64)this, (__int64)a2);
  *((_DWORD *)this + 28) = *((_DWORD *)a2 + 28);
  wistd::function<long (unsigned long)>::operator=((__int64)a2, (__int64)v7);
  *((_DWORD *)a2 + 28) = v4;
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)v7,
    v5);
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)v7,
    v6);
}
