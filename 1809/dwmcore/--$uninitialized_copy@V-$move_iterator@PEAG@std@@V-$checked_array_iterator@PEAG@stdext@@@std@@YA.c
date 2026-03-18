/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x18005888C
 * Callers:
 *     ?resize@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBG@Z @ 0x1800585B0 (-resize@-$vector_facade@GV-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@det.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>(
        __int64 a1,
        _WORD *a2,
        _WORD *a3,
        _QWORD *a4)
{
  _WORD *v5; // r9
  __int64 result; // rax
  __int64 v8; // xmm1_8

  v5 = (_WORD *)(2LL * a4[2] + *a4);
  while ( a2 != a3 )
    *v5++ = *a2++;
  result = a1;
  a4[2] = ((__int64)v5 - *a4) >> 1;
  v8 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v8;
  return result;
}
