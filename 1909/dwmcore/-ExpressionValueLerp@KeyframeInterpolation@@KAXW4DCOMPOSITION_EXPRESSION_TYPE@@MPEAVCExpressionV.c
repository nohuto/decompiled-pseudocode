/*
 * XREFs of ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x1800BE374
 * Callers:
 *     ?Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800BD5B0 (-Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800C1270 (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 *     InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd___ @ 0x1802084D0 (InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd___.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x180208F38 (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801C0298 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ??GD2DVector4@@QEBA?AU0@AEBU0@@Z @ 0x180226214 (--GD2DVector4@@QEBA-AU0@AEBU0@@Z.c)
 *     ??HD2DVector4@@QEBA?AU0@AEBU0@@Z @ 0x18022641C (--HD2DVector4@@QEBA-AU0@AEBU0@@Z.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18024B1F0 (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 */

void __fastcall KeyframeInterpolation::ExpressionValueLerp(int a1, float a2, __int64 a3, unsigned int *a4, __int64 a5)
{
  CInterpolatePathsOperation *v8; // rcx
  int v9; // ecx
  float v10; // xmm0_4
  float v11; // xmm1_4
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  float v19; // xmm3_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  __int128 v23; // xmm0
  float v24; // xmm1_4
  float v25; // xmm0_4
  unsigned int v26; // xmm0_4
  unsigned int v27; // xmm1_4
  float *v28; // rax
  unsigned int v29; // xmm0_4
  unsigned int v30; // xmm2_4
  unsigned int v31; // xmm1_4
  unsigned int v32; // xmm6_4
  __int64 v33; // r9
  __int128 *v34; // rax
  __m128 v35; // xmm2
  __m128 v36; // xmm1
  float v37; // eax
  float v38; // xmm0_4
  float v39; // xmm2_4
  float v40; // xmm6_4
  const struct CPathData *v41; // r8
  const struct CPathData *v42; // rdx
  int v43; // eax
  __int64 v44; // r8
  struct CPathData *v45; // rbx
  char v46[16]; // [rsp+30h] [rbp-50h] BYREF
  struct CPathData *v47[2]; // [rsp+40h] [rbp-40h] BYREF
  char v48[16]; // [rsp+50h] [rbp-30h] BYREF
  void *retaddr; // [rsp+88h] [rbp+8h]

  if ( a1 != *(_DWORD *)(a3 + 72) || a1 != a4[18] )
    ModuleFailFastForHRESULT(2147942487LL, retaddr, a3);
  v8 = (CInterpolatePathsOperation *)(unsigned int)(a1 - 11);
  if ( (_DWORD)v8 )
  {
    v9 = (_DWORD)v8 - 7;
    if ( v9 )
    {
      v12 = v9 - 17;
      if ( v12 )
      {
        v13 = v12 - 7;
        if ( v13 )
        {
          v14 = v13 - 10;
          if ( v14 )
          {
            v15 = v14 - 17;
            if ( v15 )
            {
              v16 = v15 - 1;
              if ( v16 )
              {
                if ( v16 != 1 )
                  ModuleFailFastForHRESULT(2147942487LL, retaddr, a3);
                v24 = (float)((float)(*((float *)a4 + 1) - *(float *)(a3 + 4)) * a2) + *(float *)(a3 + 4);
                *(float *)v47 = (float)((float)(*(float *)a4 - *(float *)a3) * a2) + *(float *)a3;
                v25 = *((float *)a4 + 2) - *(float *)(a3 + 8);
                *((float *)v47 + 1) = v24;
                *(float *)&v26 = (float)(v25 * a2) + *(float *)(a3 + 8);
                *(float *)&v27 = (float)((float)(*((float *)a4 + 3) - *(float *)(a3 + 12)) * a2) + *(float *)(a3 + 12);
                *(_DWORD *)(a5 + 72) = 71;
                v47[1] = (struct CPathData *)__PAIR64__(v27, v26);
              }
              else
              {
                v17 = (__m128)_mm_loadu_si128((const __m128i *)a3);
                v18 = (__m128)_mm_loadu_si128((const __m128i *)a4);
                *(_DWORD *)(a5 + 72) = 70;
                v19 = fmaxf(0.0, fminf(a2, 1.0));
                *(float *)v47 = (float)((float)(v18.m128_f32[0] - v17.m128_f32[0]) * v19) + v17.m128_f32[0];
                v20 = _mm_shuffle_ps(v17, v17, 85).m128_f32[0];
                v21 = (float)((float)(_mm_shuffle_ps(v18, v18, 85).m128_f32[0] - v20) * v19) + v20;
                v22 = _mm_shuffle_ps(v17, v17, 170).m128_f32[0];
                v17.m128_f32[0] = _mm_shuffle_ps(v17, v17, 255).m128_f32[0];
                *((float *)v47 + 1) = v21;
                *(float *)&v47[1] = (float)((float)(_mm_shuffle_ps(v18, v18, 170).m128_f32[0] - v22) * v19) + v22;
                *((float *)&v47[1] + 1) = (float)((float)(_mm_shuffle_ps(v18, v18, 255).m128_f32[0] - v17.m128_f32[0])
                                                * v19)
                                        + v17.m128_f32[0];
              }
              v23 = *(_OWORD *)v47;
            }
            else
            {
              v28 = (float *)D2DVector4::operator-(a4, v48, a3, a3);
              *(float *)&v29 = a2 * v28[1];
              *(float *)&v30 = a2 * *v28;
              *(float *)&v31 = a2 * v28[2];
              *(float *)&v32 = a2 * v28[3];
              v47[0] = (struct CPathData *)__PAIR64__(v29, v30);
              v47[1] = (struct CPathData *)__PAIR64__(v32, v31);
              v34 = (__int128 *)D2DVector4::operator+(v33, v46, v47);
              *(_DWORD *)(a5 + 72) = 69;
              v23 = *v34;
            }
            *(_OWORD *)a5 = v23;
          }
          else
          {
            v35 = (__m128)*a4;
            v36 = (__m128)a4[1];
            v35.m128_f32[0] = (float)((float)(v35.m128_f32[0] - *(float *)a3) * a2) + *(float *)a3;
            v36.m128_f32[0] = (float)((float)(v36.m128_f32[0] - *(float *)(a3 + 4)) * a2) + *(float *)(a3 + 4);
            v37 = (float)((float)(*((float *)a4 + 2) - *(float *)(a3 + 8)) * a2) + *(float *)(a3 + 8);
            *(_DWORD *)(a5 + 72) = 52;
            *(_QWORD *)a5 = _mm_unpacklo_ps(v35, v36).m128_u64[0];
            *(float *)(a5 + 8) = v37;
          }
        }
        else
        {
          v38 = (float)((float)(*(float *)a4 - *(float *)a3) * a2) + *(float *)a3;
          *(_DWORD *)(a5 + 72) = 42;
          *(float *)a5 = v38;
        }
      }
      else
      {
        v39 = (float)(a2 * (float)(*(float *)a4 - *(float *)a3)) + *(float *)a3;
        v40 = (float)(a2 * (float)(*((float *)a4 + 1) - *(float *)(a3 + 4))) + *(float *)(a3 + 4);
        *(_DWORD *)(a5 + 72) = 35;
        *(float *)a5 = v39;
        *(float *)(a5 + 4) = v40;
      }
    }
    else
    {
      v10 = *(float *)a3;
      v11 = *(float *)a4;
      *(_DWORD *)(a5 + 72) = 18;
      *(float *)a5 = (float)((float)(v11 - v10) * a2) + v10;
    }
    *(_BYTE *)(a5 + 76) = 1;
  }
  else
  {
    v41 = (const struct CPathData *)*((_QWORD *)a4 + 8);
    v42 = *(const struct CPathData **)(a3 + 64);
    v47[0] = 0LL;
    v43 = CInterpolatePathsOperation::Interpolate(v8, v42, v41, a2, v47);
    if ( v43 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v43, retaddr, v44);
    *(_DWORD *)(a5 + 72) = 11;
    *(_BYTE *)(a5 + 76) = 1;
    v45 = v47[0];
    Microsoft::WRL::ComPtr<CPathData>::operator=(a5 + 64, v47[0]);
    if ( v45 )
      (*(void (__fastcall **)(struct CPathData *))(*(_QWORD *)v45 + 16LL))(v45);
  }
}
