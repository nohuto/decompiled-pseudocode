/*
 * XREFs of sub_180077A8C @ 0x180077A8C
 * Callers:
 *     sub_1800101CC @ 0x1800101CC (sub_1800101CC.c)
 *     sub_180019AC8 @ 0x180019AC8 (sub_180019AC8.c)
 *     sub_180067840 @ 0x180067840 (sub_180067840.c)
 *     sub_180068CE0 @ 0x180068CE0 (sub_180068CE0.c)
 *     sub_18007589C @ 0x18007589C (sub_18007589C.c)
 *     sub_1800773B0 @ 0x1800773B0 (sub_1800773B0.c)
 *     sub_180079170 @ 0x180079170 (sub_180079170.c)
 *     sub_18007B248 @ 0x18007B248 (sub_18007B248.c)
 *     sub_18007C254 @ 0x18007C254 (sub_18007C254.c)
 *     sub_1800B4494 @ 0x1800B4494 (sub_1800B4494.c)
 *     sub_1800BE208 @ 0x1800BE208 (sub_1800BE208.c)
 *     sub_1800BE6F0 @ 0x1800BE6F0 (sub_1800BE6F0.c)
 *     sub_1800C22B0 @ 0x1800C22B0 (sub_1800C22B0.c)
 *     sub_1800C2630 @ 0x1800C2630 (sub_1800C2630.c)
 *     sub_1800C2A10 @ 0x1800C2A10 (sub_1800C2A10.c)
 *     sub_1800C2D50 @ 0x1800C2D50 (sub_1800C2D50.c)
 *     sub_1800C3254 @ 0x1800C3254 (sub_1800C3254.c)
 *     sub_1800C32A0 @ 0x1800C32A0 (sub_1800C32A0.c)
 *     sub_1800C32EC @ 0x1800C32EC (sub_1800C32EC.c)
 *     sub_1800C3744 @ 0x1800C3744 (sub_1800C3744.c)
 *     sub_1800C4490 @ 0x1800C4490 (sub_1800C4490.c)
 *     sub_1800C471C @ 0x1800C471C (sub_1800C471C.c)
 *     sub_1800C540C @ 0x1800C540C (sub_1800C540C.c)
 *     sub_1800C5A08 @ 0x1800C5A08 (sub_1800C5A08.c)
 *     sub_1800C640C @ 0x1800C640C (sub_1800C640C.c)
 *     sub_1800C6E80 @ 0x1800C6E80 (sub_1800C6E80.c)
 *     sub_1800C7220 @ 0x1800C7220 (sub_1800C7220.c)
 *     sub_1800C79EC @ 0x1800C79EC (sub_1800C79EC.c)
 *     sub_1800C7D30 @ 0x1800C7D30 (sub_1800C7D30.c)
 *     sub_1800C8208 @ 0x1800C8208 (sub_1800C8208.c)
 *     sub_1800C9538 @ 0x1800C9538 (sub_1800C9538.c)
 *     sub_1800CA84C @ 0x1800CA84C (sub_1800CA84C.c)
 *     sub_1800DC36C @ 0x1800DC36C (sub_1800DC36C.c)
 *     sub_1800DCBD0 @ 0x1800DCBD0 (sub_1800DCBD0.c)
 *     sub_1800EFF30 @ 0x1800EFF30 (sub_1800EFF30.c)
 *     sub_1800FA510 @ 0x1800FA510 (sub_1800FA510.c)
 *     sub_180110D20 @ 0x180110D20 (sub_180110D20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180077A8C(__int64 a1, int a2)
{
  __int64 *v2; // r8
  __int64 *v3; // rcx
  __int64 *v4; // rax

  v2 = *(__int64 **)(a1 + 1080);
  v3 = v2;
  v4 = (__int64 *)v2[1];
  if ( *((_BYTE *)v4 + 25) )
    goto LABEL_8;
  do
  {
    if ( *((_DWORD *)v4 + 8) >= a2 )
    {
      v3 = v4;
      v4 = (__int64 *)*v4;
    }
    else
    {
      v4 = (__int64 *)v4[2];
    }
  }
  while ( !*((_BYTE *)v4 + 25) );
  if ( v3 == v2 || a2 < *((_DWORD *)v3 + 8) )
LABEL_8:
    v3 = v2;
  return v3[5];
}
