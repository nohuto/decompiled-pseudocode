/*
 * XREFs of sub_18006E564 @ 0x18006E564
 * Callers:
 *     sub_18007C0D8 @ 0x18007C0D8 (sub_18007C0D8.c)
 * Callees:
 *     sub_1800727F8 @ 0x1800727F8 (sub_1800727F8.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_Thrd_imp_t *__fastcall sub_18006E564(_Thrd_imp_t *a1, _OWORD *a2, _QWORD *a3)
{
  char *v6; // rcx
  char *v8; // [rsp+20h] [rbp-18h]

  v6 = (char *)operator new(0x18uLL);
  if ( v6 )
  {
    *(_QWORD *)v6 = *a3;
    *(_OWORD *)(v6 + 8) = *a2;
  }
  else
  {
    v6 = 0LL;
  }
  v8 = v6;
  sub_1800727F8(a1);
  if ( v8 )
    j__o_free(v8);
  return a1;
}
