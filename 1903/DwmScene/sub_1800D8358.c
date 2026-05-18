/*
 * XREFs of sub_1800D8358 @ 0x1800D8358
 * Callers:
 *     sub_1800D8358 @ 0x1800D8358 (sub_1800D8358.c)
 *     sub_1800D9448 @ 0x1800D9448 (sub_1800D9448.c)
 * Callees:
 *     sub_1800D7864 @ 0x1800D7864 (sub_1800D7864.c)
 *     sub_1800D7AE0 @ 0x1800D7AE0 (sub_1800D7AE0.c)
 *     sub_1800D7D30 @ 0x1800D7D30 (sub_1800D7D30.c)
 *     sub_1800D81E8 @ 0x1800D81E8 (sub_1800D81E8.c)
 *     sub_1800D8358 @ 0x1800D8358 (sub_1800D8358.c)
 */

__int128 *__fastcall sub_1800D8358(unsigned __int64 a1, __int128 *a2, __int64 a3, char a4)
{
  __int128 *v4; // rdi
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  __int128 *result; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  __int128 *v12; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-10h]

  v4 = a2;
  v7 = a1;
  v8 = (__int64)((unsigned __int128)((__int64)((__int64)a2 - a1) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  result = (__int128 *)(v8 >> 63);
  v10 = (v8 >> 63) + v8;
  if ( v10 <= 32 )
    goto LABEL_9;
  do
  {
    if ( a3 <= 0 )
      break;
    sub_1800D7D30((unsigned __int64 *)&v12, v7, (unsigned __int64)v4);
    LOBYTE(v11) = a4;
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)((__int64)v12 - v7) / 48 >= (__int64)((__int64)v4 - v13) / 48 )
    {
      sub_1800D8358(v13, v4, a3, v11);
      v4 = v12;
    }
    else
    {
      sub_1800D8358(v7, v12, a3, v11);
      v7 = v13;
    }
    result = (__int128 *)((unsigned __int64)((unsigned __int128)((__int64)((__int64)v4 - v7)
                                                               * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63);
    v10 = (__int64)((__int64)v4 - v7) / 48;
  }
  while ( v10 > 32 );
  if ( v10 <= 32 )
  {
LABEL_9:
    if ( v10 >= 2 )
      return sub_1800D7864(v7, v4);
  }
  else
  {
    sub_1800D7AE0(v7, (__int64)v4, a4);
    return (__int128 *)sub_1800D81E8(v7, (__int64)v4);
  }
  return result;
}
