/*
 * XREFs of fsg_InitInterpreterTrans @ 0x1C02BDA78
 * Callers:
 *     fs__NewTransformation @ 0x1C02B27B0 (fs__NewTransformation.c)
 * Callees:
 *     mth_IsMatrixStretched @ 0x1C02B3860 (mth_IsMatrixStretched.c)
 *     mth_PositiveSquare @ 0x1C02B3A88 (mth_PositiveSquare.c)
 *     scl_InitializeScaling @ 0x1C02B4748 (scl_InitializeScaling.c)
 */

__int64 __fastcall fsg_InitInterpreterTrans(
        __int64 a1,
        __int64 a2,
        int a3,
        __int16 a4,
        __int16 a5,
        int a6,
        __int16 a7,
        unsigned __int16 a8,
        __int16 a9,
        int a10,
        _WORD *a11,
        __int16 *a12)
{
  unsigned __int16 v12; // si
  __int16 v13; // bp
  int *v14; // rdi
  __int64 result; // rax
  int v17; // eax
  bool v18; // cc
  BOOL v19; // eax
  int *v20; // rcx
  int v21; // r11d
  int v22; // [rsp+38h] [rbp-50h]
  unsigned int v23; // [rsp+90h] [rbp+8h] BYREF

  v12 = a8;
  v13 = a7;
  v14 = (int *)(a1 + 4);
  LOWORD(v22) = a7;
  result = scl_InitializeScaling(
             a2,
             *(_DWORD *)(a1 + 48),
             (int *)(a1 + 4),
             *(_WORD *)a1,
             a3,
             a4,
             a5,
             v22,
             a8,
             a9,
             a10,
             a11,
             a12,
             a6,
             &v23);
  if ( !(_DWORD)result )
  {
    v17 = v23;
    v18 = v23 <= 0xFF;
    *(_DWORD *)(a1 + 40) = 0;
    if ( !v18 )
      v17 = 255;
    *(_DWORD *)(a1 + 56) = v17;
    v19 = mth_PositiveSquare(v14);
    *(_DWORD *)(a1 + 44) = v19;
    if ( v14[1] != v21 || v14[3] != v21 || *v14 < v21 || v14[4] < v21 )
      *(_DWORD *)(a1 + 56) |= 0x2000u;
    if ( !v19 )
    {
      if ( (*v14 != v21 || v14[4] != v21) && (v14[3] != v21 || v14[1] != v21) )
        *(_DWORD *)(a1 + 56) |= 0x400u;
      *(_DWORD *)(a1 + 56) |= 0x1000u;
      *(_DWORD *)(a1 + 40) = mth_IsMatrixStretched(v20);
    }
    if ( v13 || v12 )
      v21 = 1;
    *(_DWORD *)(a1 + 60) = v21;
    return 0LL;
  }
  return result;
}
