/*
 * XREFs of ?bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z @ 0x1C0019FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0019A6C (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C001A3E0 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 */

__int64 __fastcall EXFORMOBJ::bMultiply(EXFORMOBJ *this, struct MATRIX *a2, struct MATRIX *a3, char a4)
{
  __int64 v4; // r10
  EXFORMOBJ *v5; // r11
  float v6; // xmm3_4
  int v7; // edx
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // ecx

  v4 = *(_QWORD *)this;
  v5 = this;
  if ( *((float *)a2 + 1) == 0.0 && *((float *)a2 + 2) == 0.0 && *((float *)a3 + 1) == 0.0 && *((float *)a3 + 2) == 0.0 )
  {
    *(float *)v4 = *(float *)a3 * *(float *)a2;
    *(float *)(v4 + 12) = *((float *)a3 + 3) * *((float *)a2 + 3);
    *(_DWORD *)(v4 + 4) = 0;
    *(_DWORD *)(v4 + 8) = 0;
  }
  else
  {
    *(float *)v4 = (float)(*((float *)a3 + 2) * *((float *)a2 + 1)) + (float)(*(float *)a3 * *(float *)a2);
    *(float *)(v4 + 4) = (float)(*((float *)a3 + 3) * *((float *)a2 + 1)) + (float)(*((float *)a3 + 1) * *(float *)a2);
    *(float *)(v4 + 8) = (float)(*((float *)a3 + 2) * *((float *)a2 + 3)) + (float)(*(float *)a3 * *((float *)a2 + 2));
    *(float *)(v4 + 12) = (float)(*((float *)a3 + 3) * *((float *)a2 + 3))
                        + (float)(*((float *)a3 + 1) * *((float *)a2 + 2));
  }
  if ( *((float *)a2 + 4) == 0.0 && EFLOAT::bIsZero((struct MATRIX *)((char *)a2 + 20)) )
  {
    *(_DWORD *)(v4 + 16) = *((_DWORD *)a3 + 4);
    *(_DWORD *)(v4 + 20) = *((_DWORD *)a3 + 5);
    *(_DWORD *)(v4 + 24) = *((_DWORD *)a3 + 6);
    v17 = *((_DWORD *)a3 + 7);
  }
  else
  {
    *(float *)(v4 + 16) = (float)((float)(*((float *)a3 + 2) * *((float *)a2 + 5)) + *((float *)a3 + 4))
                        + (float)(*(float *)a3 * *((float *)a2 + 4));
    v6 = (float)((float)(*((float *)a3 + 3) * *((float *)a2 + 5)) + *((float *)a3 + 5))
       + (float)(*((float *)a3 + 1) * *((float *)a2 + 4));
    *(float *)(v4 + 20) = v6;
    v7 = *(_DWORD *)(v4 + 16);
    v8 = (unsigned __int8)(v7 >> 23) - 118;
    if ( v8 > 40 )
      return 0LL;
    v9 = v7 & 0x7FFFFFLL | 0x800000;
    if ( v8 < 0 )
      v10 = v9 >> (118 - (unsigned __int8)(v7 >> 23));
    else
      v10 = v9 << v8;
    v11 = (v10 + 0x80000000LL) >> 32;
    v12 = -((unsigned __int64)(v10 + 0x80000000LL) >> 32);
    if ( v7 >= 0 )
      v12 = v11;
    *(_DWORD *)(v4 + 24) = v12;
    v13 = (unsigned __int8)(SLODWORD(v6) >> 23) - 118;
    if ( v13 > 40 )
      return 0LL;
    v14 = LODWORD(v6) & 0x7FFFFFLL | 0x800000;
    if ( v13 < 0 )
      v15 = v14 >> (118 - (unsigned __int8)(SLODWORD(v6) >> 23));
    else
      v15 = v14 << v13;
    v16 = (v15 + 0x80000000LL) >> 32;
    v17 = -(int)v16;
    if ( v6 >= 0.0 )
      v17 = v16;
  }
  *(_DWORD *)(v4 + 28) = v17;
  if ( (a4 & 1) != 0 )
    EXFORMOBJ::vComputeAccelFlags(v5, a4 & 0x38);
  return 1LL;
}
