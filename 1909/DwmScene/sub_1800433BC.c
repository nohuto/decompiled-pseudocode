/*
 * XREFs of sub_1800433BC @ 0x1800433BC
 * Callers:
 *     sub_180042EB4 @ 0x180042EB4 (sub_180042EB4.c)
 * Callees:
 *     sub_180031E4C @ 0x180031E4C (sub_180031E4C.c)
 *     memmove @ 0x180125BAC (memmove.c)
 */

__int64 __fastcall sub_1800433BC(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v6; // [rsp+30h] [rbp-28h]

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 5;
  v6 = sub_180031E4C(a1, a2);
  memmove(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return sub_18004332C((__int64 *)a1, (__int64)v6, v4, a2);
}
