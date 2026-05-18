/*
 * XREFs of sub_18003118C @ 0x18003118C
 * Callers:
 *     sub_18002EC20 @ 0x18002EC20 (sub_18002EC20.c)
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 *     sub_180031234 @ 0x180031234 (sub_180031234.c)
 *     sub_180094CE0 @ 0x180094CE0 (sub_180094CE0.c)
 *     sub_180094DB8 @ 0x180094DB8 (sub_180094DB8.c)
 *     sub_180094E90 @ 0x180094E90 (sub_180094E90.c)
 *     sub_180096FA0 @ 0x180096FA0 (sub_180096FA0.c)
 *     sub_1800970AC @ 0x1800970AC (sub_1800970AC.c)
 *     sub_180097678 @ 0x180097678 (sub_180097678.c)
 *     sub_18009E070 @ 0x18009E070 (sub_18009E070.c)
 *     sub_18009E6A0 @ 0x18009E6A0 (sub_18009E6A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003118C(int a1, int a2)
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
