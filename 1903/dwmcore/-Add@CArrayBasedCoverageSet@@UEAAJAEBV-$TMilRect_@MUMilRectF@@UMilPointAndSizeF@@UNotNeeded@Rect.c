/*
 * XREFs of ?Add@CArrayBasedCoverageSet@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x180075280
 * Callers:
 *     <none>
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005C830 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@VCZOrderedRect@@$0A@@@QEAAJPEFBVCZOrderedRect@@I@Z @ 0x18008BB94 (-AddMultipleAndSet@-$DynArray@VCZOrderedRect@@$0A@@@QEAAJPEFBVCZOrderedRect@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800EC4C7 (ceilf_0.c)
 *     floorf_0 @ 0x1800EC4DF (floorf_0.c)
 */

__int64 __fastcall CArrayBasedCoverageSet::Add(__int64 a1, float *a2, int a3, CMILMatrix *a4)
{
  float v4; // xmm2_4
  __int64 v5; // rbx
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
  _DWORD v22[5]; // [rsp+4Ch] [rbp-5h] BYREF

  v4 = *a2;
  v5 = a1 + 24;
  v6 = a2[1];
  v7 = a2[2];
  v8 = a2[3];
  *(float *)v22 = *a2;
  *(float *)&v22[1] = v6;
  *(float *)&v22[2] = v7;
  *(float *)&v22[3] = v8;
  v21 = a3;
  if ( a4 )
  {
    CMILMatrix::Transform2DBoundsHelper<0>(a4, (__int64)v22, &v17);
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
  v13 = DynArray<CZOrderedRect,0>::AddMultipleAndSet(v5, &v17);
  v15 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x3Cu, 0LL);
  return v15;
}
