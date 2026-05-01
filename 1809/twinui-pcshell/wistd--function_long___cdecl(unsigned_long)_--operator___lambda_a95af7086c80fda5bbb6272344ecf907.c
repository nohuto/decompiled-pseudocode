/*
 * XREFs of wistd::function_long___cdecl(unsigned_long)_::operator___lambda_a95af7086c80fda5bbb6272344ecf907___ @ 0x180352F9C
 * Callers:
 *     ??$Register@UITabletModePositionerManager@@P81@EAAJPEAUITabletModePositionerManagerNotification@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@SmartCookie@@QEAAJPEAUITabletModePositionerManager@@P81@EAAJPEAUITabletModePositionerManagerNotification@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@Z @ 0x180353150 (--$Register@UITabletModePositionerManager@@P81@EAAJPEAUITabletModePositionerManagerNotification@.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ @ 0x1800E2500 (-_Tidy@-$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ.c)
 *     ??0?$_Func_base@JKU_Nil@wistd@@U12@U12@U12@U12@U12@@wistd@@QEAA@XZ @ 0x1800E5378 (--0-$_Func_base@JKU_Nil@wistd@@U12@U12@U12@U12@U12@@wistd@@QEAA@XZ.c)
 */

_QWORD *__fastcall wistd::function_long___cdecl_unsigned_long__::operator___lambda_a95af7086c80fda5bbb6272344ecf907___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *result; // rax

  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)a1,
    (__int64)a2);
  wistd::_Func_base<long,unsigned long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Func_base<long,unsigned long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>(a1);
  *a1 = off_1803CCC90;
  a1[1] = 0LL;
  if ( a1 + 1 != a2 )
  {
    a1[1] = *a2;
    *a2 = 0LL;
  }
  a1[2] = a2[1];
  result = a1;
  a1[13] = a1;
  return result;
}
