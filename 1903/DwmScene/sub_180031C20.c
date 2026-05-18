/*
 * XREFs of sub_180031C20 @ 0x180031C20
 * Callers:
 *     sub_18002EC2C @ 0x18002EC2C (sub_18002EC2C.c)
 * Callees:
 *     sub_18000F5BC @ 0x18000F5BC (sub_18000F5BC.c)
 *     memmove @ 0x180125A9C (memmove.c)
 */

__int64 __fastcall sub_180031C20(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v6; // [rsp+30h] [rbp-28h]

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  v6 = sub_18000F5BC(a1, a2);
  memmove(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return sub_180031B90((__int64 *)a1, (__int64)v6, v4, a2);
}
