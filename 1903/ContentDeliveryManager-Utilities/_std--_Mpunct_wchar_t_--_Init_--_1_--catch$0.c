/*
 * XREFs of _std::_Mpunct_wchar_t_::_Init_::_1_::catch$0 @ 0x1800D51EF
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$_Mpunct@_W@std@@AEAAXXZ @ 0x1800C0988 (-_Tidy@-$_Mpunct@_W@std@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1800CB04C (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Mpunct_wchar_t_::_Init_::_1_::catch_0(__int64 a1, __int64 a2)
{
  std::_Mpunct<wchar_t>::_Tidy(*(void ***)(a2 + 144));
  throw;
}
