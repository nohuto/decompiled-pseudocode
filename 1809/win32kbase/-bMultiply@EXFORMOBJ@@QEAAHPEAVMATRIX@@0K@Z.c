/*
 * XREFs of ?bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z @ 0x1C001B5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C001B3B0 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C001B794 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C0068BEC (bFToL.c)
 */

__int64 __fastcall EXFORMOBJ::bMultiply(float **this, struct MATRIX *a2, struct MATRIX *a3, char a4)
{
  float *v4; // rbx
  float *v7; // rdx
  float *v8; // r8
  float *v9; // r11
  __int64 v10; // rdx
  __int64 v11; // rcx
  float *v12; // r8
  float *v13; // r9
  float *v14; // r10
  float *v15; // r11
  __int64 v16; // rcx
  __int64 v17; // r8

  v4 = *this;
  if ( (unsigned int)EFLOAT::bIsZero((struct MATRIX *)((char *)a2 + 4))
    && (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v7 + 2))
    && (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v8 + 1))
    && (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v8 + 2)) )
  {
    *v4 = *v8 * *v7;
    v4[3] = v8[3] * v7[3];
    v4[1] = 0.0;
    v4[2] = 0.0;
  }
  else
  {
    *v4 = (float)(v8[2] * *v9) + (float)(*v8 * *v7);
    v4[1] = (float)(v8[3] * *v9) + (float)(v8[1] * *v7);
    v4[2] = (float)(v8[2] * v7[3]) + (float)(*v8 * v7[2]);
    v4[3] = (float)(v8[3] * v7[3]) + (float)(v8[1] * v7[2]);
  }
  if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v7 + 4)) && (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v10 + 20)) )
  {
    v4[4] = v12[4];
    v4[5] = v12[5];
    v4[6] = v12[6];
    v4[7] = v12[7];
  }
  else
  {
    v4[4] = (float)((float)(*v14 * *(float *)(v10 + 20)) + v12[4]) + (float)(*v12 * *v15);
    v4[5] = (float)((float)(v12[3] * *(float *)(v10 + 20)) + v12[5]) + (float)(*v13 * *v15);
    if ( !(unsigned int)bFToL(v11, v4 + 6, 6LL) || !(unsigned int)bFToL(v16, v4 + 7, v17) )
      return 0LL;
  }
  if ( (a4 & 1) != 0 )
    EXFORMOBJ::vComputeAccelFlags(this, a4 & 0x38);
  return 1LL;
}
