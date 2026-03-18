/*
 * XREFs of FracMul @ 0x1C02B3048
 * Callers:
 *     mth_FixXYMul @ 0x1C02B3550 (mth_FixXYMul.c)
 *     itrp_Normalize @ 0x1C02CCCD0 (itrp_Normalize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FracMul(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  bool v4; // sf
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int v7; // ecx
  int v8; // r8d
  unsigned __int64 v9; // rax
  int v10; // r8d
  unsigned int v11; // edx

  v2 = 0;
  if ( !a1 || !a2 )
    return 0LL;
  v3 = 1;
  v4 = a1 < 0;
  if ( a1 > 0 )
  {
    if ( a2 < 0 )
    {
LABEL_8:
      v2 = 1;
      goto LABEL_9;
    }
    v4 = a1 < 0;
  }
  if ( v4 && a2 > 0 )
    goto LABEL_8;
LABEL_9:
  v5 = a2 * (__int64)a1;
  v6 = HIDWORD(v5);
  if ( (v5 & 0x20000000) == 0 || (!v2 ? (v7 = 1) : (v7 = v5 & 0x1FFFFFFF), !v7) )
    v3 = 0;
  v8 = v5 >> 30;
  v9 = HIDWORD(v5);
  v10 = v3 + v8;
  if ( (v6 & 0xC0000000) != 0 )
  {
    v11 = 0x80000000;
    if ( (v9 & 0xC0000000) == 0xC0000000 )
    {
      if ( v10 <= 0 )
        return (unsigned int)v10;
    }
    else
    {
      return 0x80000000 - ((v9 & 0x80000000) != 0LL);
    }
  }
  else
  {
    v11 = 0x7FFFFFFF;
    if ( v10 >= 0 )
      return (unsigned int)v10;
  }
  return v11;
}
