/*
 * XREFs of ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1C0281430
 * Callers:
 *     ?lfOrientation@IFIOBJ@@QEAAJXZ @ 0x1C00CFDCC (-lfOrientation@IFIOBJ@@QEAAJXZ.c)
 *     cjIFIMetricsToOTMW @ 0x1C00CFEA8 (cjIFIMetricsToOTMW.c)
 *     GreAngleArc @ 0x1C026F194 (GreAngleArc.c)
 *     NtGdiArcInternal @ 0x1C02818C0 (NtGdiArcInternal.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0096D1C (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 *     eFraction @ 0x1C022AD98 (eFraction.c)
 */

void __fastcall vArctan(int a1, int a2, float *a3, _DWORD *a4)
{
  float v4; // xmm1_4
  float v5; // xmm4_4
  int v8; // ecx
  unsigned int v9; // eax
  __int64 v10; // rdi
  int v11; // edx
  _DWORD *v12; // r8
  double v13; // xmm4_8
  double v14; // xmm0_8
  float v15; // xmm2_4
  float v16; // xmm3_4
  double v17; // xmm0_8
  int v18; // xmm5_4
  float v19; // xmm3_4
  float *v20; // rax
  int v21[6]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(float *)&a1;
  v5 = *(float *)&a2;
  v21[0] = a1;
  v8 = 1;
  if ( *(float *)v21 >= 0.0 )
  {
    v9 = 0;
    v10 = 2LL;
  }
  else
  {
    v9 = 1;
    v10 = 3LL;
  }
  if ( v9 )
  {
    LODWORD(v4) ^= _xmm;
    *(float *)v21 = v4;
  }
  if ( *(float *)&a2 >= 0.0 )
    v8 = 0;
  else
    LODWORD(v5) = a2 ^ _xmm;
  if ( !v8 )
    v10 = v9;
  if ( v5 > v4 )
  {
    *(float *)v21 = v5;
    v4 = v5;
    v10 = (unsigned int)v10 | 4;
  }
  if ( !EFLOAT::bIsZero((EFLOAT *)v21) )
  {
    *(float *)&v13 = (float)(*(float *)&v13 * FP_ARCTAN_TABLE_SIZE) / v4;
    v14 = v13;
    bFToL(*(float *)&v13, v21, 5);
    v15 = gaefArctan[v21[0]];
    *a3 = gaefArctan[v21[0] + 1];
    v16 = *a3 - v15;
    v17 = eFraction(v14);
    v19 = (float)(v16 * *(float *)&v17) + v15;
    *a3 = v19;
    switch ( (_DWORD)v10 )
    {
      case 1:
        v20 = (float *)FP_180_0;
        break;
      case 2:
        v20 = (float *)FP_360_0;
        break;
      case 3:
        v20 = (float *)FP_180_0;
        goto LABEL_30;
      case 4:
        v20 = (float *)FP_90_0;
        break;
      default:
        switch ( (_DWORD)v10 )
        {
          case 5:
            v20 = (float *)FP_90_0;
            break;
          case 6:
            v20 = (float *)FP_270_0;
            break;
          case 7:
            v20 = (float *)FP_270_0;
            goto LABEL_29;
          default:
LABEL_31:
            v11 = byte_1C02EBB10[v10];
            goto LABEL_32;
        }
LABEL_30:
        *a3 = v19 + *v20;
        goto LABEL_31;
    }
LABEL_29:
    LODWORD(v19) ^= v18;
    goto LABEL_30;
  }
  *v12 = FP_0_0;
LABEL_32:
  *a4 = v11;
}
