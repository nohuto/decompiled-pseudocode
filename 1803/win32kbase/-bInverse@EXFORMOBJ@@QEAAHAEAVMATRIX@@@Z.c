/*
 * XREFs of ?bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z @ 0x1C0019E30
 * Callers:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C001A750 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0019A6C (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C006312C (bFToL.c)
 */

__int64 __fastcall EXFORMOBJ::bInverse(EXFORMOBJ *this, struct MATRIX *a2)
{
  __int64 v2; // rbx
  float v4; // xmm3_4
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // r8
  unsigned int v8; // edi
  int v9; // xmm0_4
  int v10; // eax
  float v11; // xmm2_4
  __int64 v12; // rcx
  __int64 v13; // r8
  float v14; // xmm0_4
  float v15; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  *(_DWORD *)(*(_QWORD *)this + 32LL) = *((_DWORD *)a2 + 8) & 0xFFFFFFE7 | 0x10;
  if ( (*((_DWORD *)a2 + 8) & 2) != 0 )
  {
    *(_QWORD *)v2 = 1031798784LL;
    *(_DWORD *)(v2 + 12) = 1031798784;
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 16) = *((_DWORD *)a2 + 4);
    *(_DWORD *)(v2 + 20) = *((_DWORD *)a2 + 5);
    *(_DWORD *)(v2 + 16) ^= _xmm;
    *(_DWORD *)(v2 + 20) ^= _xmm;
    *(float *)(v2 + 16) = *(float *)(v2 + 16) * 0.0625;
    *(float *)(v2 + 20) = *(float *)(v2 + 20) * 0.0625;
    *(_DWORD *)(v2 + 24) = -(*((int *)a2 + 6) >> 4);
    *(_DWORD *)(v2 + 28) = -(*((int *)a2 + 7) >> 4);
    return 1LL;
  }
  v4 = (float)(*((float *)a2 + 3) * *(float *)a2) - (float)(*((float *)a2 + 2) * *((float *)a2 + 1));
  v15 = v4;
  v8 = 0;
  if ( EFLOAT::bIsZero((EFLOAT *)&v15) )
    return 0LL;
  if ( (v7 & 1) != 0 )
  {
    *(_DWORD *)(v2 + 4) = 0;
    v9 = 0;
  }
  else
  {
    *(_DWORD *)(v2 + 4) = COERCE_UNSIGNED_INT(*(float *)(v5 + 4) / v4) ^ _xmm;
    v14 = *(float *)(v5 + 8) / v4;
    *(float *)(v2 + 8) = v14;
    v9 = LODWORD(v14) ^ _xmm;
  }
  *(_DWORD *)(v2 + 8) = v9;
  *(float *)v2 = *(float *)(v5 + 12) / v4;
  *(float *)(v2 + 12) = *(float *)v5 / v4;
  v10 = *(_DWORD *)(v5 + 32);
  if ( (v10 & 0x40) != 0 )
  {
    *(_QWORD *)(v2 + 16) = 0LL;
    *(_QWORD *)(v2 + 24) = 0LL;
    return 1LL;
  }
  if ( (v10 & 1) != 0 )
  {
    *(float *)(v2 + 16) = *(float *)v2 * *(float *)(v5 + 16);
    v11 = *(float *)(v2 + 12) * *(float *)(v5 + 20);
  }
  else
  {
    *(float *)(v2 + 16) = (float)(*(float *)(v2 + 8) * *(float *)(v5 + 20))
                        + (float)(*(float *)v2 * *(float *)(v5 + 16));
    v11 = (float)(*(float *)(v2 + 12) * *(float *)(v5 + 20)) + (float)(*(float *)(v2 + 4) * *(float *)(v5 + 16));
  }
  *(float *)(v2 + 20) = v11;
  *(_DWORD *)(v2 + 16) ^= _xmm;
  *(_DWORD *)(v2 + 20) ^= _xmm;
  if ( !(unsigned int)bFToL(v6, v2 + 24, 6LL) )
    return 0LL;
  LOBYTE(v8) = (unsigned int)bFToL(v12, v2 + 28, v13) != 0;
  return v8;
}
