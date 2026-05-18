/*
 * XREFs of sub_18008D570 @ 0x18008D570
 * Callers:
 *     sub_18008D4D8 @ 0x18008D4D8 (sub_18008D4D8.c)
 *     sub_18012328C @ 0x18012328C (sub_18012328C.c)
 * Callees:
 *     sub_18001BB48 @ 0x18001BB48 (sub_18001BB48.c)
 */

__int64 __fastcall sub_18008D570(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  __int64 v7; // r10
  unsigned __int64 v8; // rcx
  __int64 v9; // r11

  v4 = (a1[1] - *a1) >> 3;
  v5 = sub_18001BB48((__int64)a1, a2);
  v6 = v5;
  v7 = 0LL;
  v8 = (unsigned __int64)(a1[1] - *a1 + 7) >> 3;
  if ( *a1 > (unsigned __int64)a1[1] )
    v8 = 0LL;
  if ( v8 )
  {
    v9 = *a1 - (_QWORD)v5;
    do
    {
      *v6 = *(_QWORD *)((char *)v6 + v9);
      ++v6;
      ++v7;
    }
    while ( v7 != v8 );
  }
  return sub_18001B918(a1, (__int64)v5, v4, a2);
}
