/*
 * XREFs of sbit_GetDevAdvanceHeight @ 0x1C02BA1D0
 * Callers:
 *     fs__Contour @ 0x1C02B207C (fs__Contour.c)
 * Callees:
 *     SubstituteVertMetrics @ 0x1C02B8AA0 (SubstituteVertMetrics.c)
 *     UScaleY @ 0x1C02B8B84 (UScaleY.c)
 *     sfac_GetSbitMetrics @ 0x1C02C0030 (sfac_GetSbitMetrics.c)
 */

__int64 __fastcall sbit_GetDevAdvanceHeight(__int64 a1, __int64 a2, int *a3)
{
  unsigned __int16 *v4; // r12
  __int64 result; // rax
  unsigned __int16 v8; // ax
  int v9; // r9d
  int v10; // eax
  int v11; // [rsp+A0h] [rbp+8h] BYREF
  char v12; // [rsp+B8h] [rbp+20h] BYREF

  v4 = (unsigned __int16 *)(a1 + 52);
  result = sfac_GetSbitMetrics(
             a2,
             *(unsigned __int16 *)(a1 + 40),
             *(unsigned __int16 *)(a1 + 42),
             *(_DWORD *)(a1 + 4),
             a1 + 46,
             a1 + 48,
             a1 + 74,
             a1 + 76,
             a1 + 78,
             a1 + 80,
             a1 + 50,
             a1 + 52,
             (__int64)&v12,
             (__int64)&v11);
  if ( !(_DWORD)result )
  {
    if ( v11 || (result = SubstituteVertMetrics((_WORD *)a1, a2), !(_DWORD)result) )
    {
      if ( *(_WORD *)(a1 + 28) == 3 && !*(_WORD *)(a1 + 36) )
        return 7168LL;
      v8 = UScaleY((_WORD *)a1, *v4);
      v9 = v8 << 6;
      if ( *(_WORD *)(a1 + 38) )
      {
        if ( *(_WORD *)(a1 + 38) == 1 )
        {
          v10 = 0;
          v9 = -v9;
LABEL_17:
          *a3 = v9;
          a3[1] = v10;
          return 0LL;
        }
        if ( *(_WORD *)(a1 + 38) != 2 )
        {
          if ( *(_WORD *)(a1 + 38) != 3 )
            return 6146LL;
          v10 = 0;
          goto LABEL_17;
        }
        v10 = -64 * v8;
      }
      else
      {
        v10 = v8 << 6;
      }
      v9 = 0;
      goto LABEL_17;
    }
  }
  return result;
}
