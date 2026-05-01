/*
 * XREFs of ??4?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@AEAV01@@Z @ 0x1801F63B8
 * Callers:
 *     ?Swap@SmartCookie@@QEAAXAEAV1@@Z @ 0x1801F91C0 (-Swap@SmartCookie@@QEAAXAEAV1@@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ @ 0x1800E2500 (-_Tidy@-$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ.c)
 *     ?_Reset@?$_Func_class@JKU_Nil@wistd@@U12@U12@U12@U12@U12@@wistd@@IEAAXAEBV12@@Z @ 0x1801F97F0 (-_Reset@-$_Func_class@JKU_Nil@wistd@@U12@U12@U12@U12@U12@@wistd@@IEAAXAEBV12@@Z.c)
 */

__int64 __fastcall wistd::function<long (unsigned long)>::operator=(__int64 a1, __int64 a2)
{
  if ( a1 != a2 )
  {
    wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
      a1,
      a2);
    wistd::_Func_class<long,unsigned long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Reset(
      a1,
      a2);
  }
  return a1;
}
