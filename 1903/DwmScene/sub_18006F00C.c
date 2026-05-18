/*
 * XREFs of sub_18006F00C @ 0x18006F00C
 * Callers:
 *     sub_180073794 @ 0x180073794 (sub_180073794.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_18002B74C @ 0x18002B74C (sub_18002B74C.c)
 */

_QWORD *__fastcall sub_18006F00C(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  _QWORD *result; // rax
  __int64 v7; // [rsp+48h] [rbp+10h]

  v3 = sub_18002B74C(a1);
  v4 = v3;
  v7 = (__int64)v3;
  *((_WORD *)v3 + 12) = 0;
  v3[6] = 0LL;
  v3[7] = 0LL;
  try
  {
    sub_18000F3F4(v3 + 4, a2);
    *((_DWORD *)v4 + 16) = *(_DWORD *)(a2 + 32);
    result = v4;
  }
  catch ( ... )
  {
    sub_18002B79C((__int64)a1, v7);
    throw;
  }
  return result;
}
