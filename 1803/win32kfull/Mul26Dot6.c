/*
 * XREFs of Mul26Dot6 @ 0x1C02B3178
 * Callers:
 *     EmboldPoint @ 0x1C02BB384 (EmboldPoint.c)
 *     itrp_ISECT @ 0x1C02C9370 (itrp_ISECT.c)
 *     itrp_MUL @ 0x1C02CC870 (itrp_MUL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Mul26Dot6(int a1, int a2)
{
  unsigned int v2; // r10d
  unsigned int v3; // eax
  unsigned int v5; // r11d
  int v7; // r9d
  unsigned int v8; // ecx
  int v9; // edx
  int v10; // r8d
  int v11; // eax
  unsigned int v12; // r10d
  unsigned int v13; // ebx
  int v14; // eax
  unsigned int v15; // ebx

  v2 = a2;
  v3 = a1;
  if ( a1 <= 46340 && a2 <= 46340 && a1 >= -46340 && a2 >= -46340 )
    return (unsigned int)((a1 * a2 + 32) >> 6);
  if ( a1 < 0 )
    v3 = -a1;
  v5 = (unsigned int)a1 >> 31;
  if ( a2 < 0 )
    v2 = -a2;
  v7 = (unsigned __int16)v3;
  v8 = HIWORD(v3);
  v9 = (unsigned __int16)v3;
  v10 = (unsigned __int16)v2;
  v11 = (unsigned __int16)v2 * HIWORD(v3);
  v12 = HIWORD(v2);
  v13 = v11 + v12 * v9;
  v14 = v5 ^ 1;
  v15 = (((v13 << 16) + 32 + v10 * v7) >> 6) | ((((v13 << 16) + 32 + v10 * v7 < (v13 << 16) + 32)
                                               + v8 * v12
                                               + HIWORD(v13)) << 26);
  if ( a2 >= 0 )
    v14 = v5;
  if ( v14 )
    return -v15;
  return v15;
}
