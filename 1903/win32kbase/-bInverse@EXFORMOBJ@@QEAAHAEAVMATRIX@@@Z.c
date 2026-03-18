/*
 * XREFs of ?bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z @ 0x1C0005C50
 * Callers:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C002ADD0 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C002BC24 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C008A898 (bFToL.c)
 */

__int64 __fastcall EXFORMOBJ::bInverse(float **this, struct MATRIX *a2)
{
  float *v2; // rbx
  float v4; // xmm3_4
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // r8
  int v8; // xmm0_4
  int v9; // eax
  float v10; // xmm2_4
  __int64 v11; // rcx
  __int64 v12; // r8
  float v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = *this;
  *((_DWORD *)*this + 8) = *((_DWORD *)a2 + 8) & 0xFFFFFFE7 | 0x10;
  if ( (*((_DWORD *)a2 + 8) & 2) != 0 )
  {
    v2[1] = 0.0;
    v2[2] = 0.0;
    *v2 = 0.0625;
    v2[3] = 0.0625;
    v2[4] = *((float *)a2 + 4);
    v2[5] = *((float *)a2 + 5);
    *((_DWORD *)v2 + 4) ^= _xmm;
    *((_DWORD *)v2 + 5) ^= _xmm;
    v2[4] = v2[4] * 0.0625;
    v2[5] = v2[5] * 0.0625;
    *((_DWORD *)v2 + 6) = -(*((int *)a2 + 6) >> 4);
    *((_DWORD *)v2 + 7) = -(*((int *)a2 + 7) >> 4);
    return 1LL;
  }
  v4 = (float)(*((float *)a2 + 3) * *(float *)a2) - (float)(*((float *)a2 + 2) * *((float *)a2 + 1));
  v13 = v4;
  if ( !(unsigned int)EFLOAT::bIsZero((EFLOAT *)&v13) )
  {
    if ( (v7 & 1) != 0 )
    {
      v2[1] = 0.0;
      v8 = 0;
    }
    else
    {
      *((_DWORD *)v2 + 1) = COERCE_UNSIGNED_INT(*(float *)(v5 + 4) / v4) ^ _xmm;
      v8 = COERCE_UNSIGNED_INT(*(float *)(v5 + 8) / v4) ^ _xmm;
    }
    *((_DWORD *)v2 + 2) = v8;
    *v2 = *(float *)(v5 + 12) / v4;
    v2[3] = *(float *)v5 / v4;
    v9 = *(_DWORD *)(v5 + 32);
    if ( (v9 & 0x40) != 0 )
    {
      v2[4] = 0.0;
      v2[5] = 0.0;
      v2[6] = 0.0;
      v2[7] = 0.0;
      return 1LL;
    }
    if ( (v9 & 1) != 0 )
    {
      v2[4] = *v2 * *(float *)(v5 + 16);
      v10 = v2[3] * *(float *)(v5 + 20);
    }
    else
    {
      v2[4] = (float)(v2[2] * *(float *)(v5 + 20)) + (float)(*v2 * *(float *)(v5 + 16));
      v10 = (float)(v2[3] * *(float *)(v5 + 20)) + (float)(v2[1] * *(float *)(v5 + 16));
    }
    v2[5] = v10;
    *((_DWORD *)v2 + 4) ^= _xmm;
    *((_DWORD *)v2 + 5) ^= _xmm;
    if ( (unsigned int)bFToL(v6, v2 + 6, 6LL) && (unsigned int)bFToL(v11, v2 + 7, v12) )
      return 1LL;
  }
  return 0LL;
}
