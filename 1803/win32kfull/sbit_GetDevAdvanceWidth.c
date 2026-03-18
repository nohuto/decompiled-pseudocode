/*
 * XREFs of sbit_GetDevAdvanceWidth @ 0x1C02BA310
 * Callers:
 *     fs__Contour @ 0x1C02B207C (fs__Contour.c)
 * Callees:
 *     SubstituteHorMetrics @ 0x1C02B8A0C (SubstituteHorMetrics.c)
 *     UScaleX @ 0x1C02B8B3C (UScaleX.c)
 *     sbit_ValidateScaleX @ 0x1C02BAC1C (sbit_ValidateScaleX.c)
 *     sfac_GetSbitMetrics @ 0x1C02C0030 (sfac_GetSbitMetrics.c)
 */

__int64 __fastcall sbit_GetDevAdvanceWidth(__int64 a1, __int64 a2, int *a3)
{
  unsigned __int16 *v4; // r12
  __int64 result; // rax
  int v8; // ebx
  _WORD *v9; // rcx
  unsigned __int16 v10; // ax
  int v11; // r10d
  int v12; // eax
  int v13; // [rsp+A0h] [rbp+8h] BYREF
  char v14; // [rsp+B8h] [rbp+20h] BYREF

  v4 = (unsigned __int16 *)(a1 + 50);
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
             (__int64)&v13,
             (__int64)&v14);
  v8 = 0;
  if ( !(_DWORD)result )
  {
    if ( v13 || (result = SubstituteHorMetrics((_WORD *)a1, a2), !(_DWORD)result) )
    {
      result = sbit_ValidateScaleX(a1);
      if ( !(_DWORD)result )
      {
        v10 = UScaleX(v9, *v4);
        v11 = v10 << 6;
        if ( !*(_WORD *)(a1 + 38) )
        {
          v12 = 0;
          v8 = v11;
          goto LABEL_14;
        }
        if ( *(_WORD *)(a1 + 38) != 1 )
        {
          if ( *(_WORD *)(a1 + 38) == 2 )
          {
            v12 = 0;
            v8 = -v11;
            goto LABEL_14;
          }
          if ( *(_WORD *)(a1 + 38) != 3 )
            return 6146LL;
          v11 = -64 * v10;
        }
        v12 = v11;
LABEL_14:
        *a3 = v8;
        a3[1] = v12;
        return 0LL;
      }
    }
  }
  return result;
}
