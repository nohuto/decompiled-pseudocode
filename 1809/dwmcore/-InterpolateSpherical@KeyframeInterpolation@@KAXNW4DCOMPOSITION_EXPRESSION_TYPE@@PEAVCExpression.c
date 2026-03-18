/*
 * XREFs of ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801D9248
 * Callers:
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18005DA88 (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x18005F1EC (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1800695BC (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _o_acos_0 @ 0x1800EC5D4 (_o_acos_0.c)
 *     _o_sin_0 @ 0x1800EC634 (_o_sin_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ??HD2DVector4@@QEBA?AU0@AEBU0@@Z @ 0x180218758 (--HD2DVector4@@QEBA-AU0@AEBU0@@Z.c)
 *     ??KD2DVector4@@QEBA?AU0@M@Z @ 0x1802187B4 (--KD2DVector4@@QEBA-AU0@M@Z.c)
 *     ?D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z @ 0x180219EA8 (-D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z @ 0x18021A3B0 (-D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z.c)
 */

__int64 __fastcall KeyframeInterpolation::InterpolateSpherical(double a1, int a2, __int64 a3, __m128 *a4, __int64 a5)
{
  __int64 v9; // r14
  float v10; // xmm9_4
  __m128 v11; // xmm4
  __m128 v12; // xmm3
  float v13; // xmm5_4
  float v14; // xmm0_4
  double v15; // xmm0_8
  __m128 v16; // xmm1
  float v17; // xmm2_4
  __int32 v18; // eax
  unsigned __int64 v19; // xmm0_8
  __int32 v20; // eax
  float v21; // xmm0_4
  unsigned __int64 v22; // xmm1_8
  float v23; // xmm1_4
  double v24; // xmm8_8
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm10_4
  float v28; // xmm7_4
  float v29; // xmm4_4
  float v30; // xmm1_4
  float v31; // xmm3_4
  float v32; // xmm2_4
  float v33; // xmm0_4
  float v34; // xmm4_4
  unsigned int v35; // xmm1_4
  unsigned int v36; // xmm0_4
  float v37; // xmm7_4
  float v38; // xmm1_4
  __m128 v39; // xmm0
  unsigned int v40; // xmm1_4
  __m128 v41; // xmm3
  float v42; // xmm1_4
  __int64 v43; // rax
  _OWORD *v44; // rax
  float v45; // xmm1_4
  float v46; // xmm2_4
  float v47; // xmm0_4
  float v48; // xmm4_4
  float v49; // xmm6_4
  float v50; // xmm4_4
  __int64 result; // rax
  __m128 v52; // [rsp+38h] [rbp-D0h] BYREF
  __m128 v53; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v54[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v55; // [rsp+98h] [rbp-70h]
  int v56; // [rsp+A0h] [rbp-68h]
  char v57; // [rsp+A4h] [rbp-64h]
  char v58[112]; // [rsp+A8h] [rbp-60h] BYREF
  void *retaddr; // [rsp+140h] [rbp+38h]

  memset_0(v54, 0, sizeof(v54));
  v9 = 0LL;
  v55 = 0LL;
  v10 = FLOAT_1_0;
  v56 = 18;
  v57 = 0;
  if ( a2 != 18 )
  {
    if ( a2 == 35 )
    {
      v22 = a4->m128_u64[0];
      v53.m128_u64[0] = *(_QWORD *)a3;
      v52.m128_u64[0] = v22;
      D3DXVec2Normalize((struct D2DVector2 *)&v53, (const struct D2DVector2 *)&v53);
      D3DXVec2Normalize((struct D2DVector2 *)&v52, (const struct D2DVector2 *)&v52);
      v23 = (float)(v53.m128_f32[0] * v52.m128_f32[0]) + (float)(v53.m128_f32[1] * v52.m128_f32[1]);
      v21 = FLOAT_N1_0;
      if ( v23 >= -1.0 )
        v21 = fminf(1.0, v23);
    }
    else
    {
      switch ( a2 )
      {
        case '4':
          v18 = *(_DWORD *)(a3 + 8);
          v52.m128_u64[0] = *(_QWORD *)a3;
          v19 = a4->m128_u64[0];
          v52.m128_i32[2] = v18;
          v20 = a4->m128_i32[2];
          v53.m128_u64[0] = v19;
          v53.m128_i32[2] = v20;
          D3DXVec3Normalize((struct D2DVector3 *)&v52, (const struct D2DVector3 *)&v52);
          D3DXVec3Normalize((struct D2DVector3 *)&v53, (const struct D2DVector3 *)&v53);
          v17 = (float)((float)(v53.m128_f32[0] * v52.m128_f32[0]) + (float)(v52.m128_f32[1] * v53.m128_f32[1]))
              + (float)(v52.m128_f32[2] * v53.m128_f32[2]);
          break;
        case 'E':
          v16 = *a4;
          v52 = *(__m128 *)a3;
          v53 = v16;
          D3DXVec4Normalize((struct D2DVector4 *)&v52, (const struct D2DVector4 *)&v52);
          D3DXVec4Normalize((struct D2DVector4 *)&v53, (const struct D2DVector4 *)&v53);
          v17 = (float)((float)((float)(v52.m128_f32[0] * v53.m128_f32[0]) + (float)(v52.m128_f32[1] * v53.m128_f32[1]))
                      + (float)(v52.m128_f32[2] * v53.m128_f32[2]))
              + (float)(v52.m128_f32[3] * v53.m128_f32[3]);
          break;
        case 'G':
          v11 = (__m128)_mm_loadu_si128((const __m128i *)a3);
          v12 = (__m128)_mm_loadu_si128((const __m128i *)a4);
          v10 = FLOAT_N1_0;
          v13 = (float)((float)((float)(v11.m128_f32[0] * v12.m128_f32[0])
                              + (float)(_mm_shuffle_ps(v11, v11, 85).m128_f32[0]
                                      * _mm_shuffle_ps(v12, v12, 85).m128_f32[0]))
                      + (float)(_mm_shuffle_ps(v11, v11, 170).m128_f32[0] * _mm_shuffle_ps(v12, v12, 170).m128_f32[0]))
              + (float)(_mm_shuffle_ps(v11, v11, 255).m128_f32[0] * _mm_shuffle_ps(v12, v12, 255).m128_f32[0]);
          if ( v13 >= -1.0 )
            v14 = fminf(1.0, v13);
          else
            v14 = FLOAT_N1_0;
          if ( v14 >= 0.0 )
            v10 = FLOAT_1_0;
          v15 = v14;
          goto LABEL_20;
        default:
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
      }
      v21 = FLOAT_N1_0;
      if ( v17 >= -1.0 )
        v21 = fminf(1.0, v17);
    }
    v15 = v21;
LABEL_20:
    v24 = o_acos_0(v15);
    goto LABEL_22;
  }
  v24 = 0.0;
LABEL_22:
  v25 = v24;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v25) & _xmm) >= 0.0000011920929 )
  {
    v27 = o_sin_0(v24);
    v28 = o_sin_0(a1 * v24);
    v29 = o_sin_0((1.0 - a1) * v24);
    switch ( a2 )
    {
      case 18:
        v50 = v29 * *(float *)a3;
        v56 = 18;
        *(float *)v54 = (float)((float)(v50 * v10) + (float)(v28 * a4->m128_f32[0])) / v27;
        break;
      case 35:
        v56 = 35;
        v49 = (float)(1.0 / v27)
            * (float)((float)((float)(v29 * *(float *)(a3 + 4)) * v10) + (float)(v28 * a4->m128_f32[1]));
        *(float *)v54 = (float)(1.0 / v27)
                      * (float)((float)(v28 * a4->m128_f32[0]) + (float)((float)(v29 * *(float *)a3) * v10));
        *((float *)v54 + 1) = v49;
        break;
      case 52:
        v56 = 52;
        v45 = v29 * *(float *)(a3 + 4);
        v46 = (float)((float)(v29 * *(float *)a3) * v10) + (float)(v28 * a4->m128_f32[0]);
        v47 = v28 * a4->m128_f32[1];
        v48 = (float)((float)(v29 * *(float *)(a3 + 8)) * v10) + (float)(v28 * a4->m128_f32[2]);
        *(float *)v54 = v46 * (float)(1.0 / v27);
        *((float *)v54 + 2) = v48 * (float)(1.0 / v27);
        *((float *)v54 + 1) = (float)((float)(v45 * v10) + v47) * (float)(1.0 / v27);
        break;
      case 69:
        *(float *)&v35 = v28 * a4->m128_f32[1];
        v52.m128_f32[0] = v28 * a4->m128_f32[0];
        *(float *)&v36 = v28 * a4->m128_f32[2];
        v37 = v28 * a4->m128_f32[3];
        *(unsigned __int64 *)((char *)v52.m128_u64 + 4) = __PAIR64__(v36, v35);
        v38 = v29 * *(float *)a3;
        v52.m128_f32[3] = v37;
        v39 = v52;
        v52.m128_f32[0] = v38;
        *(float *)&v40 = v29 * *(float *)(a3 + 8);
        v53 = v39;
        v39.m128_f32[0] = v29 * *(float *)(a3 + 4);
        v52.m128_f32[3] = v29 * *(float *)(a3 + 12);
        *(unsigned __int64 *)((char *)v52.m128_u64 + 4) = __PAIR64__(v40, v39.m128_u32[0]);
        v41 = v52;
        v42 = _mm_shuffle_ps(v52, v52, 85).m128_f32[0] * v10;
        v52.m128_f32[0] = v52.m128_f32[0] * v10;
        v52.m128_f32[1] = v42;
        v52.m128_f32[2] = _mm_shuffle_ps(v41, v41, 170).m128_f32[0] * v10;
        v52.m128_f32[3] = _mm_shuffle_ps(v41, v41, 255).m128_f32[0] * v10;
        v43 = D2DVector4::operator+(&v52, v58, &v53);
        v44 = (_OWORD *)D2DVector4::operator/(v43, &v52);
        v56 = 69;
        v54[0] = *v44;
        break;
      default:
        v56 = 71;
        v30 = v29 * *(float *)(a3 + 8);
        v31 = (float)((float)((float)(v29 * *(float *)a3) * v10) + (float)(v28 * a4->m128_f32[0])) * (float)(1.0 / v27);
        v32 = (float)((float)(v29 * *(float *)(a3 + 4)) * v10) + (float)(v28 * a4->m128_f32[1]);
        v33 = v28 * a4->m128_f32[2];
        v34 = (float)((float)(v29 * *(float *)(a3 + 12)) * v10) + (float)(v28 * a4->m128_f32[3]);
        *(float *)v54 = v31;
        *((float *)v54 + 1) = v32 * (float)(1.0 / v27);
        *((float *)v54 + 2) = (float)((float)(v30 * v10) + v33) * (float)(1.0 / v27);
        *((float *)v54 + 3) = v34 * (float)(1.0 / v27);
        break;
    }
    v57 = 1;
  }
  else
  {
    v26 = a1;
    KeyframeInterpolation::ExpressionValueLerp(a2, v26, a3, (unsigned int *)a4, (__int64)v54);
    v9 = v55;
  }
  result = CExpressionValue::operator=(a5, (__int64)v54);
  if ( v9 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return result;
}
