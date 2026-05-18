/*
 * XREFs of sub_1800B2EB8 @ 0x1800B2EB8
 * Callers:
 *     sub_1800B4084 @ 0x1800B4084 (sub_1800B4084.c)
 * Callees:
 *     sub_1800B3608 @ 0x1800B3608 (sub_1800B3608.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_Thrd_imp_t *__fastcall sub_1800B2EB8(_Thrd_imp_t *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v9; // [rsp+20h] [rbp-18h]

  v6 = operator new(0x10uLL);
  v7 = v6;
  if ( v6 )
  {
    *v6 = *a3;
    v6[1] = *a2;
  }
  else
  {
    v7 = 0LL;
  }
  v9 = v7;
  sub_1800B3608(a1);
  if ( v9 )
    j__o_free(v9);
  return a1;
}
