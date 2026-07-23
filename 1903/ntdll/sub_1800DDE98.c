/*
 * XREFs of sub_1800DDE98 @ 0x1800DDE98
 * Callers:
 *     sub_1800DDF30 @ 0x1800DDF30 (sub_1800DDF30.c)
 * Callees:
 *     sub_18002979C @ 0x18002979C (sub_18002979C.c)
 *     sub_1800DDCD0 @ 0x1800DDCD0 (sub_1800DDCD0.c)
 *     sub_1800DDE50 @ 0x1800DDE50 (sub_1800DDE50.c)
 */

__int64 __fastcall sub_1800DDE98(__int64 a1, __int64 a2)
{
  _WORD *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v7; // rax

  if ( *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * (unsigned __int16)((*(_WORD *)a2 >> 1) - 1)) == 92
    || (int)sub_1800DDCD0((unsigned __int16 *)a2, a2) >= 0 )
  {
    v4 = sub_1800DDE50(*(_WORD *)a2 + 2);
    v5 = v4;
    if ( !v4 )
      return 3221225495LL;
    sub_18002979C(v4 + 8, a2);
    v7 = *(_QWORD **)(a1 + 8);
    if ( *v7 != a1 )
      __fastfail(3u);
    *v5 = a1;
    v5[1] = v7;
    *v7 = v5;
    *(_QWORD *)(a1 + 8) = v5;
  }
  return 0LL;
}
