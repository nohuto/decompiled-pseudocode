/*
 * XREFs of sub_180111C38 @ 0x180111C38
 * Callers:
 *     sub_18010D6EC @ 0x18010D6EC (sub_18010D6EC.c)
 * Callees:
 *     sub_18008D4D8 @ 0x18008D4D8 (sub_18008D4D8.c)
 *     sub_18010D6EC @ 0x18010D6EC (sub_18010D6EC.c)
 */

_QWORD *__fastcall sub_180111C38(float *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rdx
  float v4; // xmm0_4
  float v5; // xmm1_4
  __int64 v6; // rdi
  __int64 v7; // rbx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  result = (_QWORD *)*((_QWORD *)a1 + 2);
  v2 = *((_QWORD *)a1 + 7);
  v4 = (float)(int)result;
  if ( (__int64)result < 0 )
    v4 = v4 + 1.8446744e19;
  v5 = (float)(int)v2;
  if ( v2 < 0 )
    v5 = v5 + 1.8446744e19;
  if ( (float)(v4 / v5) > *a1 )
  {
    if ( (unsigned __int64)v2 >= 0x200 )
    {
      if ( (unsigned __int64)v2 < 0xFFFFFFFFFFFFFFFLL )
        v2 *= 2LL;
    }
    else
    {
      v2 *= 8LL;
    }
    sub_18008D4D8(a1, v2);
    result = (_QWORD *)*((_QWORD *)a1 + 1);
    if ( (_QWORD *)*result != result )
    {
      v6 = result[1];
      do
      {
        v7 = **((_QWORD **)a1 + 1);
        result = (_QWORD *)sub_18010D6EC(a1, (__int64)v8, (const void **)(v7 + 16), v7);
      }
      while ( v7 != v6 );
    }
  }
  return result;
}
