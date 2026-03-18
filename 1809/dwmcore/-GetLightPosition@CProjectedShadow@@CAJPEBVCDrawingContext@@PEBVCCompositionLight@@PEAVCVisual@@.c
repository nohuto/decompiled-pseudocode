/*
 * XREFs of ?GetLightPosition@CProjectedShadow@@CAJPEBVCDrawingContext@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z @ 0x1801CA864
 * Callers:
 *     ?GetLightToCameraMatrix@CProjectedShadow@@AEBAJPEBVCDrawingContext@@PEBVCCompositionLight@@AEBUfloat3@Numerics@Foundation@Windows@@PEAVCMILMatrix@@@Z @ 0x1801CAAF4 (-GetLightToCameraMatrix@CProjectedShadow@@AEBAJPEBVCDrawingContext@@PEBVCCompositionLight@@AEBUf.c)
 *     ?ProjectOntoAndLocalize@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAVCVisual@@1PEAVCCompositionLight@@PEAVCMILMatrix@@@Z @ 0x1801CC0A4 (-ProjectOntoAndLocalize@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAVCVisual@@1PEAVCCompositi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x1800D95D4 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetSrcToDestVisualTransform@CProjectedShadow@@CAJPEBVCDrawingContext@@PEAVCVisual@@1PEAVCMILMatrix@@@Z @ 0x1801CB24C (-GetSrcToDestVisualTransform@CProjectedShadow@@CAJPEBVCDrawingContext@@PEAVCVisual@@1PEAVCMILMat.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x1801E2D18 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 */

__int64 __fastcall CProjectedShadow::GetLightPosition(
        const struct CDrawingContext *a1,
        const struct CCompositionLight *a2,
        struct CVisual *a3,
        struct D2D_VECTOR_3F *a4)
{
  struct CVisual *v8; // rax
  int SrcToDestVisualTransform; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  FLOAT v15; // xmm1_4
  FLOAT v16; // xmm0_4
  unsigned __int64 v17; // xmm0_8
  __int64 (__fastcall *v18)(const struct CCompositionLight *); // rax
  float v19; // xmm6_4
  float v20; // xmm7_4
  __int64 (__fastcall *v21)(const struct CCompositionLight *); // rax
  float v22; // xmm8_4
  float *v23; // rax
  FLOAT v24; // xmm8_4
  FLOAT v25; // xmm7_4
  __m128 v26; // xmm2
  FLOAT z; // eax
  struct CVisual *v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  struct D2D_VECTOR_4F v32; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_VECTOR_4F v33; // [rsp+48h] [rbp-C0h] BYREF
  __m128 v34[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v35; // [rsp+88h] [rbp-80h]
  int v36; // [rsp+98h] [rbp-70h]
  _BYTE v37[64]; // [rsp+A8h] [rbp-60h] BYREF
  int v38; // [rsp+E8h] [rbp-20h]

  v38 = 0;
  v8 = (struct CVisual *)(*(__int64 (__fastcall **)(const struct CCompositionLight *))(*(_QWORD *)a2 + 168LL))(a2);
  SrcToDestVisualTransform = CProjectedShadow::GetSrcToDestVisualTransform(a1, v8, a3, (struct CMILMatrix *)v37);
  v11 = SrcToDestVisualTransform;
  if ( SrcToDestVisualTransform < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, SrcToDestVisualTransform, 0x4B6u);
    return v11;
  }
  v12 = (*(__int64 (__fastcall **)(const struct CCompositionLight *))(*(_QWORD *)a2 + 184LL))(a2);
  v13 = *(_QWORD *)a2;
  if ( v12 == 2 )
  {
    v14 = (*(__int64 (__fastcall **)(const struct CCompositionLight *))(v13 + 192))(a2);
    v15 = *(float *)(v14 + 4);
    v32.x = *(FLOAT *)v14;
    v16 = *(float *)(v14 + 8);
    v32.y = v15;
    v32.z = v16;
    v32.w = FLOAT_1_0;
    CMILMatrix::Transform4DVector((CMILMatrix *)v37, &v33, &v32);
    v32.z = v33.z;
    v17 = _mm_unpacklo_ps((__m128)LODWORD(v33.x), (__m128)LODWORD(v33.y)).m128_u64[0];
  }
  else
  {
    v18 = *(__int64 (__fastcall **)(const struct CCompositionLight *))(v13 + 168);
    v36 = 0;
    if ( a3 == (struct CVisual *)v18(a2) )
    {
      v34[0] = (__m128)_xmm;
      v34[1] = (__m128)_xmm;
      v34[2] = (__m128)_xmm;
      v35 = _xmm;
      LOWORD(v36) = 32085;
    }
    else if ( !CMILMatrix::SetToInverse(v34, (const struct CMILMatrix *)v37) )
    {
      v28 = (struct CVisual *)(*(__int64 (__fastcall **)(const struct CCompositionLight *))(*(_QWORD *)a2 + 168LL))(a2);
      v29 = CProjectedShadow::GetSrcToDestVisualTransform(a1, a3, v28, (struct CMILMatrix *)v34);
      v11 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x4C9u);
        return v11;
      }
    }
    v19 = *(float *)&v35;
    v20 = *((float *)&v35 + 1);
    v21 = *(__int64 (__fastcall **)(const struct CCompositionLight *))(*(_QWORD *)a2 + 200LL);
    v22 = *((float *)&v35 + 2);
    v32.w = *((FLOAT *)&v35 + 3);
    v23 = (float *)v21(a2);
    v24 = v22 - (float)(v23[2] * 100.0);
    v25 = v20 - (float)(v23[1] * 100.0);
    v32.x = v19 - (float)(*v23 * 100.0);
    v32.z = v24;
    v32.y = v25;
    v26 = (__m128)_mm_loadu_si128((const __m128i *)CMILMatrix::Transform4DVector((CMILMatrix *)v37, &v33, &v32));
    LODWORD(v32.z) = _mm_shuffle_ps(v26, v26, 170).m128_u32[0];
    v17 = _mm_unpacklo_ps(v26, _mm_shuffle_ps(v26, v26, 85)).m128_u64[0];
  }
  z = v32.z;
  *(_QWORD *)&a4->x = v17;
  a4->z = z;
  return v11;
}
