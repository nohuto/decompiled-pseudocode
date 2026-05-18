/*
 * XREFs of sub_18003107C @ 0x18003107C
 * Callers:
 *     sub_18002EB10 @ 0x18002EB10 (sub_18002EB10.c)
 *     sub_18002EC2C @ 0x18002EC2C (sub_18002EC2C.c)
 *     sub_180031124 @ 0x180031124 (sub_180031124.c)
 *     sub_180094BD0 @ 0x180094BD0 (sub_180094BD0.c)
 *     sub_180094CA8 @ 0x180094CA8 (sub_180094CA8.c)
 *     sub_180094D80 @ 0x180094D80 (sub_180094D80.c)
 *     sub_180096E90 @ 0x180096E90 (sub_180096E90.c)
 *     sub_180096F9C @ 0x180096F9C (sub_180096F9C.c)
 *     sub_180097568 @ 0x180097568 (sub_180097568.c)
 *     sub_18009DF60 @ 0x18009DF60 (sub_18009DF60.c)
 *     sub_18009E590 @ 0x18009E590 (sub_18009E590.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003107C(int a1, int a2)
{
  _DWORD v3[15]; // [rsp+0h] [rbp-70h]
  __int64 v4; // [rsp+3Ch] [rbp-34h]
  __int64 v5; // [rsp+44h] [rbp-2Ch]
  int v6; // [rsp+4Ch] [rbp-24h]
  int v7; // [rsp+50h] [rbp-20h]
  int v8; // [rsp+54h] [rbp-1Ch]
  int v9; // [rsp+58h] [rbp-18h]
  int v10; // [rsp+5Ch] [rbp-14h]
  int v11; // [rsp+60h] [rbp-10h]

  v3[0] = 0;
  v3[13] = 1;
  v10 = 1;
  v3[4] = 8;
  v3[5] = 12;
  v3[10] = 12;
  v3[6] = 16;
  v3[11] = 16;
  v3[12] = 2;
  v3[14] = 2;
  v6 = 2;
  v11 = 2;
  v3[9] = 8;
  v8 = 8;
  v4 = 0x400000004LL;
  v5 = 0x400000004LL;
  v3[1] = 4;
  v3[2] = 4;
  v3[3] = 4;
  v3[7] = 4;
  v3[8] = 4;
  v7 = 4;
  v9 = 4;
  if ( (unsigned int)(a1 - 23) > 1 )
    return (unsigned int)(a2 * v3[a1]);
  else
    return ((a2 + 1) & 0xFFFFFFFE) * v3[a1];
}
