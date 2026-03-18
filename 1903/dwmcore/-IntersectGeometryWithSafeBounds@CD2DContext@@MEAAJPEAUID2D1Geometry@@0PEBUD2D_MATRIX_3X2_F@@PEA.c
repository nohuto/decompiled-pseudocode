/*
 * XREFs of ?IntersectGeometryWithSafeBounds@CD2DContext@@MEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAU2@@Z @ 0x180161F00
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18002B3C0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800EC4C7 (ceilf_0.c)
 *     floorf_0 @ 0x1800EC4DF (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::IntersectGeometryWithSafeBounds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  signed int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  signed int v13; // eax
  __int64 v14; // rcx
  __m128 v15; // xmm6
  float v16; // xmm7_4
  float v17; // xmm1_4
  __m128 v18; // xmm8
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  __int64 v22; // rax
  unsigned int v24; // [rsp+28h] [rbp-A9h]
  __int64 v25; // [rsp+48h] [rbp-89h] BYREF
  __int64 v26; // [rsp+50h] [rbp-81h] BYREF
  __int64 v27; // [rsp+58h] [rbp-79h] BYREF
  __int64 v28; // [rsp+60h] [rbp-71h] BYREF
  __int64 v29; // [rsp+68h] [rbp-69h] BYREF
  _QWORD v30[2]; // [rsp+70h] [rbp-61h] BYREF
  unsigned int X; // [rsp+80h] [rbp-51h] BYREF
  unsigned int v32; // [rsp+84h] [rbp-4Dh]
  unsigned int v33; // [rsp+88h] [rbp-49h]
  unsigned int v34; // [rsp+8Ch] [rbp-45h]

  v26 = 0LL;
  v27 = 0LL;
  *a6 = 0LL;
  v28 = 0LL;
  v25 = 0LL;
  v29 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*(_QWORD *)(a1 + 208) + 24LL) + 80LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 208) + 24LL),
          &v26);
  v12 = v10;
  if ( v10 < 0 )
  {
    v24 = 1747;
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*(_QWORD *)(a1 + 208) + 24LL) + 80LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 208) + 24LL),
            &v28);
    v12 = v10;
    if ( v10 < 0 )
    {
      v24 = 1748;
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 136LL))(v26, &v27);
      v12 = v10;
      if ( v10 < 0 )
      {
        v24 = 1749;
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 136LL))(v28, &v25);
        v12 = v10;
        if ( v10 < 0 )
        {
          v24 = 1750;
        }
        else
        {
          v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _DWORD, __int64))(*(_QWORD *)a3 + 88LL))(
                  a3,
                  a2,
                  1LL,
                  a4,
                  LODWORD(FLOAT_0_25),
                  v27);
          v12 = v10;
          if ( v10 < 0 )
          {
            v24 = 1758;
          }
          else
          {
            v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 72LL))(v27);
            v12 = v13;
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x6E0u, 0LL);
              goto LABEL_32;
            }
            v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v26 + 32LL))(v26, 0LL, &X);
            v12 = v10;
            if ( v10 < 0 )
            {
              v24 = 1765;
            }
            else
            {
              v15 = (__m128)X;
              v16 = *(float *)&v33;
              if ( *(float *)&X > *(float *)&v33 )
                goto LABEL_32;
              v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&X) & _xmm);
              if ( v17 < 8388608.0 )
                v15 = (__m128)COERCE_UNSIGNED_INT((float)(int)floorf_0(*(float *)&X));
              v18 = (__m128)v32;
              v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v32) & _xmm);
              if ( v19 < 8388608.0 )
                v18 = (__m128)COERCE_UNSIGNED_INT((float)(int)floorf_0(*(float *)&v32));
              v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v16) & _xmm);
              if ( v20 < 8388608.0 )
                v16 = (float)(int)ceilf_0(v16);
              v21 = *(float *)&v34;
              if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v34) & _xmm) < 8388608.0 )
                v21 = (float)(int)ceilf_0(*(float *)&v34);
              if ( a5 )
              {
                *(_DWORD *)a5 = v15.m128_i32[0];
                *(float *)(a5 + 8) = v16;
                *(_DWORD *)(a5 + 4) = v18.m128_i32[0];
                *(float *)(a5 + 12) = v21;
              }
              v15.m128_f32[0] = v15.m128_f32[0] - 1.0;
              v18.m128_f32[0] = v18.m128_f32[0] - 1.0;
              X = v15.m128_u32[0];
              v32 = v18.m128_u32[0];
              *(float *)&v33 = v16 + 1.0;
              *(float *)&v34 = v21 + 1.0;
              (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v25 + 40LL))(
                v25,
                _mm_unpacklo_ps(v15, v18).m128_u64[0],
                0LL);
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 64LL))(v25, 1LL);
              (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v25 + 40LL))(
                v25,
                _mm_unpacklo_ps((__m128)v33, (__m128)v34).m128_u64[0],
                0LL);
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 64LL))(v25, 1LL);
              v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 72LL))(v25);
              v12 = v10;
              if ( v10 < 0 )
              {
                v24 = 1811;
              }
              else
              {
                v30[0] = v26;
                v30[1] = v28;
                v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64, __int64 *))(**(_QWORD **)(*(_QWORD *)(a1 + 208) + 24LL)
                                                                                              + 64LL))(
                        *(_QWORD *)(*(_QWORD *)(a1 + 208) + 24LL),
                        0LL,
                        v30,
                        2LL,
                        &v29);
                v12 = v10;
                if ( v10 >= 0 )
                {
                  v22 = v29;
                  v29 = 0LL;
                  *a6 = v22;
                  goto LABEL_32;
                }
                v24 = 1821;
              }
            }
          }
        }
      }
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, v24, 0LL);
LABEL_32:
  ReleaseInterface<IBitmapLock>(&v26);
  ReleaseInterface<IBitmapLock>(&v27);
  ReleaseInterface<IBitmapLock>(&v28);
  ReleaseInterface<IBitmapLock>(&v25);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  return v12;
}
