/*
 * XREFs of vConvertXformToMatrix @ 0x1C002B7F0
 * Callers:
 *     GreExtCreateRegion @ 0x1C002BE30 (GreExtCreateRegion.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C002BC24 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 */

__int64 __fastcall vConvertXformToMatrix(__int64 a1, __int64 a2)
{
  EFLOAT *v2; // r9
  __int64 v3; // r8
  float v4; // xmm0_4
  int v5; // xmm1_4
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // ecx
  __int64 result; // rax
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // ecx
  int v16; // edx
  bool v17; // zf
  float v18; // xmm0_4
  int v19; // edx

  v2 = (EFLOAT *)(a2 + 20);
  *(_DWORD *)a2 = *(_DWORD *)a1;
  v3 = a2;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 12);
  v4 = *(float *)(a1 + 16);
  *(float *)(a2 + 16) = v4;
  v5 = *(_DWORD *)(a1 + 20);
  v6 = (unsigned __int8)(SLODWORD(v4) >> 23) - 118;
  *(_DWORD *)(a2 + 20) = v5;
  if ( v6 > 40 )
  {
    v10 = 0;
  }
  else
  {
    v7 = LODWORD(v4) & 0x7FFFFFLL | 0x800000;
    if ( v6 < 0 )
      v8 = v7 >> (118 - (unsigned __int8)(SLODWORD(v4) >> 23));
    else
      v8 = v7 << v6;
    v9 = (v8 + 0x80000000LL) >> 32;
    v10 = -(int)v9;
    if ( v4 >= 0.0 )
      v10 = v9;
  }
  *(_DWORD *)(a2 + 24) = v10;
  result = (unsigned int)(v5 >> 23);
  v12 = (unsigned __int8)result - 118;
  if ( v12 > 40 )
  {
    v15 = 0;
  }
  else
  {
    v13 = v5 & 0x7FFFFFLL | 0x800000;
    if ( v12 < 0 )
      v14 = v13 >> -(char)v12;
    else
      v14 = v13 << v12;
    result = (v14 + 0x80000000LL) >> 32;
    v15 = -(int)result;
    if ( v5 >= 0 )
      v15 = result;
  }
  *(_DWORD *)(a2 + 28) = v15;
  v16 = 32;
  v17 = v4 == *(float *)v2;
  *(_DWORD *)(v3 + 32) = 32;
  if ( v17 )
  {
    result = EFLOAT::bIsZero(v2);
    if ( (_DWORD)result )
    {
      v16 = 96;
      *(_DWORD *)(v3 + 32) = 96;
    }
  }
  if ( *(float *)(v3 + 4) == 0.0 && *(float *)(v3 + 8) == 0.0 )
  {
    v18 = *(float *)v3;
    v19 = v16 | 1;
    *(_DWORD *)(v3 + 32) = v19;
    if ( v18 == 1.0 && *(float *)(v3 + 12) == 1.0 )
      *(_DWORD *)(v3 + 32) = v19 | 2;
  }
  return result;
}
