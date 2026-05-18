/*
 * XREFs of sub_1800432AC @ 0x1800432AC
 * Callers:
 *     sub_180042DA4 @ 0x180042DA4 (sub_180042DA4.c)
 * Callees:
 *     sub_180031D3C @ 0x180031D3C (sub_180031D3C.c)
 *     memmove @ 0x180125A9C (memmove.c)
 */

__int64 __fastcall sub_1800432AC(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v6; // [rsp+30h] [rbp-28h]

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 5;
  v6 = sub_180031D3C(a1, a2);
  memmove(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return sub_18004321C((__int64 *)a1, (__int64)v6, v4, a2);
}
