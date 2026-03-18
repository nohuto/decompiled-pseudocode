/*
 * XREFs of ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18020A628
 * Callers:
 *     ?Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800BBF80 (-Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800C1720 (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 * Callees:
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x18006ECCC (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x1800BCF34 (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800D6FF0 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _o_acos_0 @ 0x1800E7F24 (_o_acos_0.c)
 *     _o_sin_0 @ 0x1800E7F84 (_o_sin_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     ??HD2DVector4@@QEBA?AU0@AEBU0@@Z @ 0x180227B2C (--HD2DVector4@@QEBA-AU0@AEBU0@@Z.c)
 *     ??KD2DVector4@@QEBA?AU0@M@Z @ 0x180227B88 (--KD2DVector4@@QEBA-AU0@M@Z.c)
 *     ?D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z @ 0x18022941C (-D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z @ 0x1802299CC (-D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z.c)
 */

__int64 __fastcall KeyframeInterpolation::InterpolateSpherical(double a1, int a2, __int64 a3, __m128 *a4, __int64 a5)
{
  __m128 v9; // xmm7
  __int64 v10; // r14
  float v11; // xmm9_4
  __m128 v12; // xmm4
  __m128 v13; // xmm3
  float v14; // xmm5_4
  float v15; // xmm0_4
  double v16; // xmm0_8
  __m128 v17; // xmm1
  float v18; // xmm2_4
  __int32 v19; // eax
  unsigned __int64 v20; // xmm0_8
  __int32 v21; // eax
  float v22; // xmm0_4
  unsigned __int64 v23; // xmm1_8
  float v24; // xmm1_4
  double v25; // xmm8_8
  float v26; // xmm0_4
  float v27; // xmm1_4
  float v28; // xmm10_4
  float v29; // xmm6_4
  float v30; // xmm3_4
  __int64 i; // rax
  __int64 j; // rax
  __int64 v33; // rax
  unsigned int v34; // xmm1_4
  unsigned int v35; // xmm0_4
  float v36; // xmm6_4
  unsigned int v37; // xmm1_4
  unsigned int v38; // xmm0_4
  float v39; // xmm3_4
  __m128 v40; // xmm2
  float v41; // xmm1_4
  float v42; // xmm1_4
  __m128 v43; // xmm0
  unsigned int v44; // xmm1_4
  __int64 v45; // rax
  _OWORD *v46; // rax
  float v47; // xmm1_4
  float v48; // xmm2_4
  float v49; // xmm0_4
  float v50; // xmm3_4
  __int64 result; // rax
  _OWORD v52[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v53; // [rsp+78h] [rbp-90h]
  int v54; // [rsp+80h] [rbp-88h]
  char v55; // [rsp+84h] [rbp-84h]
  __m128 v56; // [rsp+88h] [rbp-80h] BYREF
  __m128 v57; // [rsp+98h] [rbp-70h] BYREF
  __m128 v58; // [rsp+A8h] [rbp-60h] BYREF
  const void *retaddr; // [rsp+150h] [rbp+48h]

  memset_0(v52, 0, sizeof(v52));
  v9 = (__m128)(unsigned int)FLOAT_1_0;
  v10 = 0LL;
  v53 = 0LL;
  v11 = *(float *)&FLOAT_1_0;
  v54 = 18;
  v55 = 0;
  if ( a2 != 18 )
  {
    if ( a2 == 35 )
    {
      v23 = a4->m128_u64[0];
      v58.m128_u64[0] = *(_QWORD *)a3;
      v57.m128_u64[0] = v23;
      D3DXVec2Normalize((struct D2DVector2 *)&v58, (const struct D2DVector2 *)&v58);
      D3DXVec2Normalize((struct D2DVector2 *)&v57, (const struct D2DVector2 *)&v57);
      v24 = (float)(v58.m128_f32[0] * v57.m128_f32[0]) + (float)(v58.m128_f32[1] * v57.m128_f32[1]);
      v22 = FLOAT_N1_0;
      if ( v24 >= -1.0 )
        v22 = fminf(1.0, v24);
    }
    else
    {
      switch ( a2 )
      {
        case '4':
          v19 = *(_DWORD *)(a3 + 8);
          v57.m128_u64[0] = *(_QWORD *)a3;
          v20 = a4->m128_u64[0];
          v57.m128_i32[2] = v19;
          v21 = a4->m128_i32[2];
          v58.m128_u64[0] = v20;
          v58.m128_i32[2] = v21;
          D3DXVec3Normalize((struct D2DVector3 *)&v57, (const struct D2DVector3 *)&v57);
          D3DXVec3Normalize((struct D2DVector3 *)&v58, (const struct D2DVector3 *)&v58);
          v18 = (float)((float)(v58.m128_f32[0] * v57.m128_f32[0]) + (float)(v57.m128_f32[1] * v58.m128_f32[1]))
              + (float)(v57.m128_f32[2] * v58.m128_f32[2]);
          break;
        case 'E':
          v17 = *a4;
          v57 = *(__m128 *)a3;
          v58 = v17;
          D3DXVec4Normalize((struct D2DVector4 *)&v57, (const struct D2DVector4 *)&v57);
          D3DXVec4Normalize((struct D2DVector4 *)&v58, (const struct D2DVector4 *)&v58);
          v18 = (float)((float)((float)(v57.m128_f32[0] * v58.m128_f32[0]) + (float)(v57.m128_f32[1] * v58.m128_f32[1]))
                      + (float)(v57.m128_f32[2] * v58.m128_f32[2]))
              + (float)(v57.m128_f32[3] * v58.m128_f32[3]);
          break;
        case 'G':
          v12 = (__m128)_mm_loadu_si128((const __m128i *)a3);
          v13 = (__m128)_mm_loadu_si128((const __m128i *)a4);
          v11 = FLOAT_N1_0;
          v14 = (float)((float)((float)(v12.m128_f32[0] * v13.m128_f32[0])
                              + (float)(_mm_shuffle_ps(v12, v12, 85).m128_f32[0]
                                      * _mm_shuffle_ps(v13, v13, 85).m128_f32[0]))
                      + (float)(_mm_shuffle_ps(v12, v12, 170).m128_f32[0] * _mm_shuffle_ps(v13, v13, 170).m128_f32[0]))
              + (float)(_mm_shuffle_ps(v12, v12, 255).m128_f32[0] * _mm_shuffle_ps(v13, v13, 255).m128_f32[0]);
          if ( v14 >= -1.0 )
            v15 = fminf(1.0, v14);
          else
            v15 = FLOAT_N1_0;
          if ( v15 >= 0.0 )
            v11 = *(float *)&FLOAT_1_0;
          v16 = v15;
          goto LABEL_20;
        default:
          ModuleFailFastForHRESULT(-2147024809, retaddr);
      }
      v22 = FLOAT_N1_0;
      if ( v18 >= -1.0 )
        v22 = fminf(1.0, v18);
    }
    v16 = v22;
LABEL_20:
    v25 = o_acos_0(v16);
    goto LABEL_22;
  }
  v25 = 0.0;
LABEL_22:
  v26 = v25;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v26) & _xmm) >= 0.0000011920929 )
  {
    v28 = o_sin_0(v25);
    v29 = o_sin_0(a1 * v25);
    v30 = o_sin_0((1.0 - a1) * v25);
    switch ( a2 )
    {
      case 18:
        *(float *)v52 = (float)((float)((float)(v30 * *(float *)a3) * v11) + (float)(v29 * a4->m128_f32[0])) / v28;
        break;
      case 35:
        v54 = 35;
        *(_QWORD *)&v52[0] = __PAIR64__(
                               (float)((float)(v29 * a4->m128_f32[1]) + (float)((float)(v30 * *(float *)(a3 + 4)) * v11))
                             * (float)(1.0 / v28),
                               (float)((float)(v29 * a4->m128_f32[0]) + (float)((float)(v30 * *(float *)a3) * v11))
                             * (float)(1.0 / v28));
        break;
      case 52:
        v54 = 52;
        v47 = v30 * *(float *)(a3 + 4);
        v48 = (float)((float)(v30 * *(float *)a3) * v11) + (float)(v29 * a4->m128_f32[0]);
        v49 = v29 * a4->m128_f32[1];
        v50 = (float)((float)(v30 * *(float *)(a3 + 8)) * v11) + (float)(v29 * a4->m128_f32[2]);
        *(float *)v52 = v48 * (float)(1.0 / v28);
        *((float *)v52 + 2) = v50 * (float)(1.0 / v28);
        *((float *)v52 + 1) = (float)((float)(v47 * v11) + v49) * (float)(1.0 / v28);
        break;
      case 69:
        *(float *)&v37 = v30 * *(float *)(a3 + 4);
        v57.m128_f32[0] = v30 * *(float *)a3;
        *(float *)&v38 = v30 * *(float *)(a3 + 8);
        v39 = v30 * *(float *)(a3 + 12);
        *(unsigned __int64 *)((char *)v57.m128_u64 + 4) = __PAIR64__(v38, v37);
        v57.m128_f32[3] = v39;
        v40 = v57;
        v41 = _mm_shuffle_ps(v57, v57, 85).m128_f32[0];
        v57.m128_f32[0] = v57.m128_f32[0] * v11;
        v57.m128_f32[1] = v41 * v11;
        v42 = v29 * a4->m128_f32[0];
        v57.m128_f32[2] = _mm_shuffle_ps(v40, v40, 170).m128_f32[0] * v11;
        v57.m128_f32[3] = _mm_shuffle_ps(v40, v40, 255).m128_f32[0] * v11;
        v43 = v57;
        v57.m128_f32[0] = v42;
        *(float *)&v44 = v29 * a4->m128_f32[2];
        v58 = v43;
        v43.m128_f32[0] = v29 * a4->m128_f32[1];
        v57.m128_f32[3] = v29 * a4->m128_f32[3];
        *(unsigned __int64 *)((char *)v57.m128_u64 + 4) = __PAIR64__(v44, v43.m128_u32[0]);
        v56 = v57;
        v45 = D2DVector4::operator+(&v58, &v57, &v56);
        v46 = (_OWORD *)D2DVector4::operator/(v45, &v56);
        v54 = 69;
        v52[0] = *v46;
        break;
      default:
        for ( i = 0LL; i < 4; ++i )
          v57.m128_f32[i] = v30 * *(float *)(a3 + 4 * i);
        for ( j = 0LL; j < 4; ++j )
          v56.m128_f32[j] = v11 * v57.m128_f32[j];
        v33 = 0LL;
        *(float *)&v34 = v29 * a4->m128_f32[1];
        v57.m128_f32[0] = v29 * a4->m128_f32[0];
        *(float *)&v35 = v29 * a4->m128_f32[2];
        v36 = v29 * a4->m128_f32[3];
        *(unsigned __int64 *)((char *)v57.m128_u64 + 4) = __PAIR64__(v35, v34);
        v57.m128_f32[3] = v36;
        do
        {
          v58.m128_f32[v33] = v57.m128_f32[v33] + v56.m128_f32[v33];
          ++v33;
        }
        while ( v33 < 4 );
        v54 = 71;
        v9.m128_f32[0] = 1.0 / v28;
        v52[0] = _mm_mul_ps(v58, _mm_shuffle_ps(v9, v9, 0));
        break;
    }
    v55 = 1;
  }
  else
  {
    v27 = a1;
    KeyframeInterpolation::ExpressionValueLerp(a2, v27, a3, (unsigned int *)a4, (__int64)v52);
    v10 = v53;
  }
  result = CExpressionValue::operator=(a5, (__int64)v52);
  if ( v10 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return result;
}
