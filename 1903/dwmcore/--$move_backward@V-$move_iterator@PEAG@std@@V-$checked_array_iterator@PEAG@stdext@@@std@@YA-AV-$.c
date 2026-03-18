/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x1801AF014
 * Callers:
 *     ?resize@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBG@Z @ 0x18002D080 (-resize@-$vector_facade@GV-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@det.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move_backward<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>(
        __int64 a1,
        _WORD *a2,
        _WORD *a3,
        __int64 *a4)
{
  __int64 v5; // r10
  _WORD *v6; // rcx
  __int64 result; // rax
  __int64 v8; // xmm1_8

  if ( a3 - a2 > 0 && a4[2] < (unsigned __int64)(a3 - a2) || a3 - a2 < 0 && a4[1] - a4[2] < (unsigned __int64)-(a3 - a2) )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, a2, a3, a4);
    __debugbreak();
  }
  v5 = *a4;
  v6 = (_WORD *)(*a4 + 2 * a4[2]);
  while ( a2 != a3 )
    *--v6 = *--a3;
  result = a1;
  a4[2] = ((__int64)v6 - v5) >> 1;
  v8 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v8;
  return result;
}
