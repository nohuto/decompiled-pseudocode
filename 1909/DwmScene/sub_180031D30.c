/*
 * XREFs of sub_180031D30 @ 0x180031D30
 * Callers:
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 * Callees:
 *     sub_18000F60C @ 0x18000F60C (sub_18000F60C.c)
 *     memmove @ 0x180125BAC (memmove.c)
 */

__int64 __fastcall sub_180031D30(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v6; // [rsp+30h] [rbp-28h]

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  v6 = sub_18000F60C(a1, a2);
  memmove(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return sub_180031CA0((__int64 *)a1, (__int64)v6, v4, a2);
}
