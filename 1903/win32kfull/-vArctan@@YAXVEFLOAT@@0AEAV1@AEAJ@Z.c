/*
 * XREFs of ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1C02A9BF8
 * Callers:
 *     ?lfOrientation@IFIOBJ@@QEAAJXZ @ 0x1C004ECC8 (-lfOrientation@IFIOBJ@@QEAAJXZ.c)
 *     cjIFIMetricsToOTMW @ 0x1C0050F78 (cjIFIMetricsToOTMW.c)
 *     GreAngleArc @ 0x1C0269D50 (GreAngleArc.c)
 *     NtGdiArcInternal @ 0x1C02AA0A0 (NtGdiArcInternal.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C00AA41C (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C01014BC (bFToL.c)
 *     eFraction @ 0x1C02D535C (eFraction.c)
 */

__int64 __fastcall vArctan(int a1, int a2, float *a3, _DWORD *a4)
{
  float v4; // xmm1_4
  float v6; // xmm4_4
  unsigned int v8; // edi
  int v9; // eax
  int v10; // edx
  _DWORD *v11; // r8
  float v12; // xmm4_4
  __int64 result; // rax
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm3_4
  int v17; // xmm5_4
  float *v18; // rax
  float *v19; // rax
  int v20[6]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(float *)&a1;
  v6 = *(float *)&a2;
  v20[0] = a1;
  if ( *(float *)&a1 >= 0.0 )
  {
    v8 = 0;
    v9 = 2;
  }
  else
  {
    v8 = 1;
    v9 = 3;
    LODWORD(v4) = a1 ^ _xmm;
    v20[0] = a1 ^ _xmm;
  }
  if ( *(float *)&a2 < 0.0 )
  {
    v8 = v9;
    LODWORD(v6) = a2 ^ _xmm;
  }
  if ( v6 > v4 )
  {
    *(float *)v20 = v6;
    v4 = v6;
    v8 |= 4u;
  }
  if ( !EFLOAT::bIsZero((EFLOAT *)v20) )
  {
    bFToL((float)(v12 * FP_ARCTAN_TABLE_SIZE) / v4, v20, 5u);
    v14 = gaefArctan[v20[0]];
    *a3 = gaefArctan[v20[0] + 1];
    v15 = *a3 - v14;
    v16 = (float)(v15 * eFraction()) + v14;
    *a3 = v16;
    switch ( v8 )
    {
      case 1u:
        v19 = (float *)FP_180_0;
        break;
      case 2u:
        v18 = (float *)FP_360_0;
        goto LABEL_18;
      case 3u:
        v19 = (float *)FP_180_0;
        goto LABEL_26;
      case 4u:
        v19 = (float *)FP_90_0;
        break;
      default:
        switch ( v8 )
        {
          case 5u:
            v19 = (float *)FP_90_0;
            break;
          case 6u:
            v19 = (float *)FP_270_0;
            break;
          case 7u:
            v18 = (float *)FP_270_0;
LABEL_18:
            *a3 = *v18 + COERCE_FLOAT(LODWORD(v16) ^ v17);
            goto LABEL_27;
          default:
LABEL_27:
            result = v8;
            v10 = byte_1C02F12A8[v8];
            goto LABEL_28;
        }
LABEL_26:
        *a3 = v16 + *v19;
        goto LABEL_27;
    }
    LODWORD(v16) ^= v17;
    goto LABEL_26;
  }
  result = FP_0_0;
  *v11 = FP_0_0;
LABEL_28:
  *a4 = v10;
  return result;
}
