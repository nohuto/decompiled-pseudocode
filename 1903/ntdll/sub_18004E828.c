/*
 * XREFs of sub_18004E828 @ 0x18004E828
 * Callers:
 *     sub_18004E4EC @ 0x18004E4EC (sub_18004E4EC.c)
 * Callees:
 *     sub_180047844 @ 0x180047844 (sub_180047844.c)
 *     sub_18004E8CC @ 0x18004E8CC (sub_18004E8CC.c)
 *     sub_1800501E4 @ 0x1800501E4 (sub_1800501E4.c)
 *     sub_18010B760 @ 0x18010B760 (sub_18010B760.c)
 */

__int64 __fastcall sub_18004E828(__int64 a1, int a2, int a3)
{
  int v6; // r9d
  __int64 v7; // rbx
  __int64 v8; // rdi
  int v10; // [rsp+20h] [rbp-38h]
  unsigned int v11; // [rsp+40h] [rbp-18h] BYREF
  __int64 v12; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v13; // [rsp+78h] [rbp+20h] BYREF

  v12 = 0LL;
  if ( (int)sub_18004E8CC(a1, a3, (unsigned int)&v12, (unsigned int)&v11, (__int64)&v13) < 0 )
  {
    v7 = v12;
    v8 = 0LL;
  }
  else
  {
    v6 = a2;
    v10 = a2;
    v7 = v12;
    if ( (int)sub_180047844(a1, v12, 0, v6, v10, 1073745920, a3) < 0 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( v11 < v13 )
        sub_18010B760(a1, v7);
      v8 = v7;
      v7 = 0LL;
    }
  }
  if ( v7 )
    sub_1800501E4(a1);
  return v8;
}
