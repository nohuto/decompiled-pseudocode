/*
 * XREFs of ?GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z @ 0x180007910
 * Callers:
 *     ?GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@AEBUfloat3@Numerics@Foundation@Windows@@PEAVCMILMatrix@@@Z @ 0x18000734C (-GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@AEBUfloat3@Num.c)
 *     ?IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1@@Z @ 0x180008F58 (-IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1.c)
 *     ?GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVisual@@PEAVCMILMatrix@@@Z @ 0x180259834 (-GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVi.c)
 * Callees:
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@@Z @ 0x180007724 (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x180007AE8 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShadowHelpers::GetLightPosition(
        ShadowHelpers *this,
        const struct CVisualTree *a2,
        const struct CCompositionLight *a3,
        struct CVisual *a4)
{
  int v4; // r15d
  unsigned int v8; // ebx
  const struct CCompositionLight *v9; // rax
  __int64 v10; // rdx
  const struct CCompositionLight *v11; // r14
  __int64 v12; // rdx
  float v13; // xmm6_4
  float v14; // xmm7_4
  __int64 (__fastcall *v15)(const struct CVisualTree *); // rax
  float v16; // xmm8_4
  float *v17; // rax
  FLOAT v18; // xmm8_4
  FLOAT v19; // xmm7_4
  __m128 v20; // xmm2
  int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rax
  FLOAT v25; // xmm1_4
  FLOAT v26; // xmm0_4
  FLOAT z; // xmm0_4
  int v28; // eax
  unsigned int v29; // ecx
  struct D2D_VECTOR_4F v30; // [rsp+38h] [rbp-D0h] BYREF
  D2D_VECTOR_4F v31; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v32[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v33; // [rsp+88h] [rbp-80h]
  int v34; // [rsp+98h] [rbp-70h]
  _OWORD v35[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v36; // [rsp+E8h] [rbp-20h]

  v4 = (int)this;
  v8 = 0;
  v9 = (const struct CCompositionLight *)(*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 208LL))(a2);
  v36 = 0;
  v11 = v9;
  if ( a3 == v9 )
  {
    v35[0] = _xmm;
    v35[1] = _xmm;
    v35[2] = _xmm;
    v35[3] = _xmm;
    LOWORD(v36) = 32085;
  }
  else
  {
    v22 = CVisual::CalcSrcToDestVisualTransform(v4, v10, (__int64)v9, (int)a3, (char)v35);
    v8 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x59u, 0LL);
      return v8;
    }
  }
  if ( (*(unsigned int (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 224LL))(a2) == 2 )
  {
    v24 = (*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 232LL))(a2);
    v25 = *(float *)(v24 + 4);
    v30.x = *(FLOAT *)v24;
    v26 = *(float *)(v24 + 8);
    v30.y = v25;
    v30.z = v26;
    LODWORD(v30.w) = (_DWORD)FLOAT_1_0;
    CMILMatrix::Transform4DVector((CMILMatrix *)v35, &v31, &v30);
    z = v31.z;
    *(_QWORD *)a4 = _mm_unpacklo_ps((__m128)LODWORD(v31.x), (__m128)LODWORD(v31.y)).m128_u64[0];
    v30.z = z;
  }
  else
  {
    v34 = 0;
    if ( a3 == v11 )
    {
      v32[0] = _xmm;
      v32[1] = _xmm;
      v32[2] = _xmm;
      v33 = _xmm;
      LOWORD(v34) = 32085;
    }
    else
    {
      v28 = CVisual::CalcSrcToDestVisualTransform(v4, v12, (__int64)a3, (int)v11, (char)v32);
      v8 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x72u, 0LL);
        return v8;
      }
    }
    v13 = *(float *)&v33;
    v14 = *((float *)&v33 + 1);
    v15 = *(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 240LL);
    v16 = *((float *)&v33 + 2);
    v30.w = *((FLOAT *)&v33 + 3);
    v17 = (float *)v15(a2);
    v18 = v16 - (float)(v17[2] * 100.0);
    v19 = v14 - (float)(v17[1] * 100.0);
    v30.x = v13 - (float)(*v17 * 100.0);
    v30.z = v18;
    v30.y = v19;
    v20 = (__m128)_mm_loadu_si128((const __m128i *)CMILMatrix::Transform4DVector((CMILMatrix *)v35, &v31, &v30));
    LODWORD(v30.z) = _mm_shuffle_ps(v20, v20, 170).m128_u32[0];
    *(_QWORD *)a4 = _mm_unpacklo_ps(v20, _mm_shuffle_ps(v20, v20, 85)).m128_u64[0];
  }
  *((_DWORD *)a4 + 2) = LODWORD(v30.z);
  return v8;
}
