/*
 * XREFs of sub_1800F4348 @ 0x1800F4348
 * Callers:
 *     sub_1800F4394 @ 0x1800F4394 (sub_1800F4394.c)
 *     sub_1800F46F8 @ 0x1800F46F8 (sub_1800F46F8.c)
 *     sub_1800F48DC @ 0x1800F48DC (sub_1800F48DC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F4348(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  _QWORD *v3; // rax

  while ( 1 )
  {
    if ( a2 < a1[1] || a2 > a1[2] )
      return 0LL;
    v2 = a2 <= a1[1] ? 0LL : (a2 - a1[1]) / *a1;
    v3 = &a1[v2];
    if ( *a1 == 4096LL )
      break;
    a1 = (_QWORD *)v3[7];
    if ( !a1 )
      return 0LL;
  }
  return v3[7];
}
