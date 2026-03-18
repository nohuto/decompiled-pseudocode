/*
 * XREFs of vFillGLYPHDATA_ErrRecover @ 0x1C0221838
 * Callers:
 *     lGetGlyphBitmapErrRecover @ 0x1C021F77C (lGetGlyphBitmapErrRecover.c)
 * Callees:
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 *     bGetFastAdvanceWidth @ 0x1C021E3B4 (bGetFastAdvanceWidth.c)
 *     vGetNotionalGlyphMetrics @ 0x1C0221CE4 (vGetNotionalGlyphMetrics.c)
 *     vLTimesVtfl @ 0x1C022AD5C (vLTimesVtfl.c)
 *     FixMul @ 0x1C02B2F90 (FixMul.c)
 */

__int64 __fastcall vFillGLYPHDATA_ErrRecover(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r15d
  int *v7; // r14
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rdx
  int fixed; // eax
  __int64 v12; // rdx
  __int64 result; // rax
  _DWORD *v14; // r11
  unsigned int v15; // ebx
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  _BYTE v19[2]; // [rsp+20h] [rbp-10h] BYREF
  __int16 v20; // [rsp+22h] [rbp-Eh]
  __int16 v21; // [rsp+28h] [rbp-8h]
  __int16 v22; // [rsp+2Ah] [rbp-6h]
  int v23; // [rsp+60h] [rbp+30h] BYREF

  *(_DWORD *)(a4 + 8) = a1;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  *(_QWORD *)(a4 + 40) = 0LL;
  *(_QWORD *)(a4 + 24) = 0LL;
  v6 = a2;
  vGetNotionalGlyphMetrics(a3, a2, v19);
  v7 = (int *)(a4 + 12);
  if ( (*(_DWORD *)(a3 + 116) & 1) != 0 )
  {
    v8 = abs32(*(_DWORD *)(a3 + 80));
    if ( (unsigned int)bGetFastAdvanceWidth(a3, v6, (unsigned int *)(a4 + 12)) )
    {
      v9 = *v7;
    }
    else
    {
      v9 = 16 * FixMul((unsigned int)v22, *(unsigned int *)(a3 + 80));
      *v7 = v9;
    }
    *(_DWORD *)(a4 + 52) = v9;
    *(_DWORD *)(a4 + 48) = 0;
    if ( *(int *)(a3 + 80) < 0 )
      *v7 = -v9;
    v10 = (unsigned int)v21;
    *(_QWORD *)(a4 + 56) = 0LL;
    fixed = FixMul(v8, v10);
    v12 = (unsigned int)v20;
    *(_DWORD *)(a4 + 16) = 16 * fixed;
    result = 16 * (unsigned int)FixMul(v8, v12);
    *(_DWORD *)(a4 + 20) = result;
  }
  else
  {
    v15 = v22;
    v23 = 0;
    bFToL((float)v22 * *(float *)(a3 + 224), &v23, 0);
    v16 = v21;
    *v7 = v23;
    v23 = 0;
    bFToL((float)v16 * *(float *)(a3 + 224), &v23, 0);
    v17 = v20;
    *(_DWORD *)(a4 + 16) = v23;
    v23 = 0;
    bFToL((float)v17 * *(float *)(a3 + 224), &v23, 0);
    *(_DWORD *)(a4 + 20) = v23;
    result = vLTimesVtfl(v15, a3 + 208, a4 + 48);
  }
  if ( (*(_DWORD *)(a3 + 40) & 0x2000) != 0 )
  {
    v18 = *v7;
    if ( *v7 )
    {
      v18 += 16;
      *v7 = v18;
    }
    result = *(unsigned int *)(a3 + 116);
    if ( (result & 1) != 0 )
    {
      *(_DWORD *)(a4 + 52) = v18;
      if ( *(int *)(a3 + 80) < 0 )
        *(_DWORD *)(a4 + 52) = -v18;
    }
    else if ( *(_DWORD *)(a4 + 52) || *(_DWORD *)(a4 + 60) )
    {
      *v14 += *(_DWORD *)(a3 + 232);
      v14[1] += *(_DWORD *)(a3 + 236) + (*v14 < *(_DWORD *)(a3 + 232));
      v14[2] += *(_DWORD *)(a3 + 240);
      result = *(unsigned int *)(a3 + 244);
      v14[3] += result + (v14[2] < *(_DWORD *)(a3 + 240));
    }
  }
  return result;
}
