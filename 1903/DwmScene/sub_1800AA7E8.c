/*
 * XREFs of sub_1800AA7E8 @ 0x1800AA7E8
 * Callers:
 *     sub_1800AB6F8 @ 0x1800AB6F8 (sub_1800AB6F8.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_180069384 @ 0x180069384 (sub_180069384.c)
 */

_QWORD *__fastcall sub_1800AA7E8(_QWORD *a1, __int64 a2, _DWORD **a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  _DWORD *v6; // rbx
  _DWORD *v7; // rcx
  _QWORD *result; // rax
  __int64 v10; // [rsp+68h] [rbp+20h]

  v4 = sub_180069384(a1);
  v5 = v4;
  v10 = (__int64)v4;
  *((_WORD *)v4 + 12) = 0;
  v6 = v4 + 4;
  v7 = *a3;
  *((_DWORD *)v4 + 8) = **a3;
  v4[7] = 0LL;
  v4[8] = 0LL;
  try
  {
    sub_18000F3F4(v4 + 5, (__int64)(v7 + 2));
    v6[10] = 0;
    v6[11] = 0;
    v6[12] = 0;
    v6[13] = 0;
    result = v5;
  }
  catch ( ... )
  {
    sub_180069798((__int64)a1, v10);
    throw;
  }
  return result;
}
