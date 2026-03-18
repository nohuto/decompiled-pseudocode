/*
 * XREFs of ??$move@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x1800579A8
 * Callers:
 *     ?clear_region@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EE898 (-clear_region@-$vector_facade@GV-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>(
        __int64 a1,
        _WORD *a2,
        _WORD *a3,
        __int128 *a4)
{
  __int128 v4; // xmm2
  _WORD *v5; // r9
  __int64 result; // rax

  v4 = *a4;
  v5 = (_WORD *)(*(_QWORD *)a4 + 2LL * *((_QWORD *)a4 + 2));
  while ( a2 != a3 )
    *v5++ = *a2++;
  result = a1;
  *(_OWORD *)a1 = v4;
  *(_QWORD *)(a1 + 16) = (__int64)((__int64)v5 - v4) >> 1;
  return result;
}
