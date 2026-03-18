/*
 * XREFs of sbit_CalcDevHorMetrics @ 0x1C02B8BB8
 * Callers:
 *     fs__Contour @ 0x1C02B207C (fs__Contour.c)
 * Callees:
 *     SubstituteHorMetrics @ 0x1C02B8A0C (SubstituteHorMetrics.c)
 *     UScaleX @ 0x1C02B8B3C (UScaleX.c)
 *     sbit_ValidateScaleX @ 0x1C02BAC1C (sbit_ValidateScaleX.c)
 *     sfac_GetSbitMetrics @ 0x1C02C0030 (sfac_GetSbitMetrics.c)
 */

__int64 __fastcall sbit_CalcDevHorMetrics(__int64 a1, __int64 a2, int *a3, _DWORD *a4, _DWORD *a5)
{
  unsigned __int16 *v6; // r14
  unsigned __int16 *v7; // r15
  unsigned __int16 *v9; // r12
  __int64 result; // rax
  _WORD *v12; // rcx
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // dx
  _WORD *v15; // rcx
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // dx
  _WORD *v18; // rcx
  unsigned __int16 v19; // ax
  int v20; // r10d
  int v21; // r11d
  int v22; // ebx
  _WORD *v23; // rcx
  unsigned __int16 v24; // ax
  unsigned __int16 v25; // dx
  int v26; // ebx
  _WORD *v27; // rcx
  unsigned __int16 v28; // ax
  unsigned __int16 v29; // dx
  _WORD *v30; // rcx
  unsigned __int16 v31; // ax
  int v32; // r10d
  char v33[72]; // [rsp+70h] [rbp-48h] BYREF
  int v34; // [rsp+C0h] [rbp+8h] BYREF
  int *v35; // [rsp+D0h] [rbp+18h]

  v35 = a3;
  v6 = (unsigned __int16 *)(a1 + 50);
  v7 = (unsigned __int16 *)(a1 + 74);
  v9 = (unsigned __int16 *)(a1 + 48);
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
             (__int64)&v34,
             (__int64)v33);
  if ( !(_DWORD)result )
  {
    if ( v34 || (result = SubstituteHorMetrics((_WORD *)a1, a2), !(_DWORD)result) )
    {
      if ( !*(_WORD *)(a1 + 38) )
      {
        result = sbit_ValidateScaleX(a1);
        if ( (_DWORD)result )
          return result;
        v24 = UScaleX(v23, *v6);
        v25 = *v7;
        v26 = v24 << 6;
        *v35 = v26;
        v28 = UScaleX(v27, v25);
        v29 = *v9;
        *a4 = v28 << 6;
        v31 = UScaleX(v30, v29);
        v22 = v26 - (v31 << 6) - v32;
        goto LABEL_11;
      }
      if ( *(_WORD *)(a1 + 38) != 2 )
        return 6146LL;
      result = sbit_ValidateScaleX(a1);
      if ( !(_DWORD)result )
      {
        v13 = UScaleX(v12, *v6);
        v14 = *v7;
        *v35 = -64 * v13;
        v16 = UScaleX(v15, v14);
        v17 = *v9;
        *a4 = -64 * v16;
        v19 = UScaleX(v18, v17);
        v22 = v21 + (v19 << 6) - v20;
LABEL_11:
        *a5 = v22;
        return 0LL;
      }
    }
  }
  return result;
}
