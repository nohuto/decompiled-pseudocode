/*
 * XREFs of ??$move@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x1801AD468
 * Callers:
 *     ?resize@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBG@Z @ 0x1800ADE20 (-resize@-$vector_facade@GV-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@det.c)
 *     ?clear_region@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AE18C (-clear_region@-$vector_facade@GV-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>(
        __int64 a1,
        _WORD *a2,
        _WORD *a3,
        __int64 *a4)
{
  __int64 v5; // r10
  __int64 v6; // r10
  _WORD *v7; // rcx
  __int64 result; // rax
  __int64 v9; // xmm1_8

  v5 = a3 - a2;
  if ( v5 < 0 && a4[2] < (unsigned __int64)-v5 || v5 > 0 && a4[1] - a4[2] < (unsigned __int64)v5 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, a2);
    __debugbreak();
  }
  v6 = *a4;
  v7 = (_WORD *)(*a4 + 2 * a4[2]);
  while ( a2 != a3 )
    *v7++ = *a2++;
  result = a1;
  a4[2] = ((__int64)v7 - v6) >> 1;
  v9 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v9;
  return result;
}
