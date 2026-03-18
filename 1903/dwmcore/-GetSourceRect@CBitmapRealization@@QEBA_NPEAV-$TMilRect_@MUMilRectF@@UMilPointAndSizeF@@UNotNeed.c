/*
 * XREFs of ?GetSourceRect@CBitmapRealization@@QEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180071AD4
 * Callers:
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800718A0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x180193D70 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 *     ?IsDirectFlipSupportedOnTarget@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z @ 0x18025D034 (-IsDirectFlipSupportedOnTarget@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@.c)
 *     ?GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22@Z @ 0x1802642B0 (-GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV-$TMilRect_@.c)
 * Callees:
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800444E8 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CBitmapRealization::GetSourceRect(__int64 a1, _OWORD *a2)
{
  char v4; // cl
  char v6; // cl
  bool v7; // zf
  char v8; // al
  int v9; // edx
  int v10; // r8d
  int v11; // eax
  float v12; // xmm0_4
  float v13; // xmm1_4
  int v14; // r9d
  int v15; // r10d
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  __m128i v18; // xmm0
  int v19; // [rsp+20h] [rbp-20h] BYREF
  int v20; // [rsp+24h] [rbp-1Ch] BYREF
  unsigned int v21; // [rsp+28h] [rbp-18h] BYREF
  unsigned int v22; // [rsp+2Ch] [rbp-14h]
  unsigned int v23; // [rsp+30h] [rbp-10h]
  int v24; // [rsp+34h] [rbp-Ch]

  v4 = *(_BYTE *)(a1 + 308);
  if ( (v4 & 1) == 0 )
  {
    v6 = v4 & 0xFD;
    v7 = *(_DWORD *)(a1 + 304) == 3;
    *(_BYTE *)(a1 + 308) = v6;
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)(a1 + 144) + 32LL))(a1 + 144, &v19, &v20);
      v21 = 0;
      v22 = 0;
      v23 = v19;
      v24 = v20;
      if ( *(_DWORD *)(a1 + 200) <= *(_DWORD *)(a1 + 208)
        && *(_DWORD *)(a1 + 204) <= *(_DWORD *)(a1 + 212)
        && TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v21, (_DWORD *)(a1 + 200)) )
      {
        v16 = _mm_cvtsi32_si128(v21);
        v17 = _mm_cvtsi32_si128(v22);
        *(_BYTE *)(a1 + 308) |= 2u;
        *(_DWORD *)(a1 + 312) = _mm_cvtepi32_ps(v16).m128_u32[0];
        v18 = _mm_cvtsi32_si128(v23);
        *(_DWORD *)(a1 + 316) = _mm_cvtepi32_ps(v17).m128_u32[0];
        *(float *)v17.m128i_i32 = (float)v24;
        *(_DWORD *)(a1 + 320) = _mm_cvtepi32_ps(v18).m128_u32[0];
        *(_DWORD *)(a1 + 324) = v17.m128i_i32[0];
      }
      v8 = *(_BYTE *)(a1 + 308);
    }
    else
    {
      v8 = v6;
      if ( *(int *)(a1 + 272) >= 2 )
      {
        v9 = *(_DWORD *)(a1 + 208);
        v10 = *(_DWORD *)(a1 + 200);
        if ( v9 > v10 )
        {
          v14 = *(_DWORD *)(a1 + 212);
          v8 = v6;
          v15 = *(_DWORD *)(a1 + 204);
          if ( v14 > v15 )
          {
            v8 = v6 | 2;
            *(_BYTE *)(a1 + 308) = v6 | 2;
            *(float *)(a1 + 312) = (float)v10;
            *(float *)(a1 + 316) = (float)v15;
            *(float *)(a1 + 320) = (float)v9;
            *(float *)(a1 + 324) = (float)v14;
          }
        }
      }
    }
    if ( (v8 & 2) == 0 )
    {
      (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)(a1 + 144) + 32LL))(a1 + 144, &v20, &v19);
      v11 = v20;
      *(_DWORD *)(a1 + 312) = 0;
      *(_DWORD *)(a1 + 316) = 0;
      v12 = (float)v11;
      v13 = (float)v19;
      v8 = *(_BYTE *)(a1 + 308);
      *(float *)(a1 + 320) = v12;
      *(float *)(a1 + 324) = v13;
    }
    *(_BYTE *)(a1 + 308) = v8 | 1;
  }
  *a2 = *(_OWORD *)(a1 + 312);
  return (*(_BYTE *)(a1 + 308) & 2) != 0;
}
