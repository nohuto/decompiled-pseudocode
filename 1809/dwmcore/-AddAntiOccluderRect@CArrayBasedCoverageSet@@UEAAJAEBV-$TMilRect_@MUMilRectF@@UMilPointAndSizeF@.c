/*
 * XREFs of ?AddAntiOccluderRect@CArrayBasedCoverageSet@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x1800ABC60
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@VCZOrderedRect@@$0A@@@QEAAJPEFBVCZOrderedRect@@I@Z @ 0x1800A8E78 (-AddMultipleAndSet@-$DynArray@VCZOrderedRect@@$0A@@@QEAAJPEFBVCZOrderedRect@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800EFFF7 (ceilf_0.c)
 *     floorf_0 @ 0x1800F000F (floorf_0.c)
 */

__int64 __fastcall CArrayBasedCoverageSet::AddAntiOccluderRect(__int64 a1, float *a2, int a3, CMILMatrix *a4)
{
  float v4; // xmm2_4
  float v6; // xmm8_4
  float v7; // xmm7_4
  float v8; // xmm6_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  float v17; // [rsp+38h] [rbp-19h] BYREF
  float v18; // [rsp+3Ch] [rbp-15h]
  float v19; // [rsp+40h] [rbp-11h]
  float v20; // [rsp+44h] [rbp-Dh]
  int v21; // [rsp+48h] [rbp-9h]
  float v22; // [rsp+4Ch] [rbp-5h]
  float v23; // [rsp+50h] [rbp-1h]
  float v24; // [rsp+54h] [rbp+3h]
  float v25; // [rsp+58h] [rbp+7h]

  v4 = *a2;
  v6 = a2[1];
  v7 = a2[2];
  v8 = a2[3];
  v22 = *a2;
  v23 = v6;
  v24 = v7;
  v25 = v8;
  v21 = a3;
  if ( a4 )
  {
    CMILMatrix::Transform2DBoundsHelper<0>(a4);
    v4 = v17;
    v8 = v20;
    v7 = v19;
    v6 = v18;
  }
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v4) & _xmm);
  if ( v9 < 8388608.0 )
    v4 = (float)(int)ceilf_0(v4);
  v17 = v4;
  v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6) & _xmm);
  if ( v10 < 8388608.0 )
    v6 = (float)(int)ceilf_0(v6);
  v18 = v6;
  v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v7) & _xmm);
  if ( v11 < 8388608.0 )
    v7 = (float)(int)floorf_0(v7);
  v19 = v7;
  v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v8) & _xmm);
  if ( v12 < 8388608.0 )
    v8 = (float)(int)floorf_0(v8);
  v20 = v8;
  v13 = DynArray<CZOrderedRect,0>::AddMultipleAndSet((__int64 *)(a1 + 416), (__int64)&v17);
  v15 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x58u);
  return v15;
}
