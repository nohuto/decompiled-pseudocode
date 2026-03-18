/*
 * XREFs of _lambda_896d46864d60d2b7d5e734e8b1f76c71_::operator() @ 0x18006A76C
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800671F0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x180079560 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18008C3D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

__int64 __fastcall lambda_896d46864d60d2b7d5e734e8b1f76c71_::operator()(__int64 a1, __int64 a2)
{
  bool v3; // zf
  float v4; // xmm0_4
  __m128i v5; // xmm1
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm3_4
  __int32 v10; // xmm2_4
  __int64 v11; // rax
  __int32 v12; // xmm4_4
  float v13; // xmm4_4
  float v14; // xmm4_4
  float v15; // xmm4_4
  int v16; // eax
  _DWORD *v17; // rcx
  int v18; // r9d
  __m128 v20; // [rsp+30h] [rbp-30h] BYREF
  __m128 v21; // [rsp+40h] [rbp-20h]

  v3 = **(_BYTE **)a1 == 0;
  v4 = (float)*(int *)a2;
  v20.m128_f32[1] = (float)*(int *)(a2 + 4);
  v5 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 12));
  v20.m128_f32[0] = v4;
  v6 = (float)*(int *)(a2 + 8);
  v20.m128_i32[3] = _mm_cvtepi32_ps(v5).m128_u32[0];
  v20.m128_f32[2] = v6;
  v7 = v20.m128_f32[0];
  LODWORD(v8) = _mm_shuffle_ps(v20, v20, 85).m128_u32[0];
  LODWORD(v9) = _mm_shuffle_ps(v20, v20, 170).m128_u32[0];
  v10 = _mm_shuffle_ps(v20, v20, 255).m128_u32[0];
  *(unsigned __int64 *)((char *)v20.m128_u64 + 4) = __PAIR64__(LODWORD(v9), LODWORD(v8));
  v20.m128_i32[3] = v10;
  if ( !v3 )
  {
    CMILMatrix::Transform2DBoundsHelper<0>(*(CMILMatrix **)(a1 + 8));
    v7 = v21.m128_f32[0];
    v8 = v21.m128_f32[1];
    v9 = v21.m128_f32[2];
    v10 = v21.m128_i32[3];
    v20 = v21;
  }
  if ( !**(_BYTE **)(a1 + 16) )
    goto LABEL_14;
  v11 = *(_QWORD *)(a1 + 24);
  v12 = *(__int32 *)v11;
  if ( *(float *)v11 > v7 )
  {
    v20.m128_i32[0] = *(_DWORD *)v11;
    v7 = *(float *)&v12;
  }
  v13 = *(float *)(v11 + 4);
  if ( v13 > v8 )
  {
    v20.m128_i32[1] = *(_DWORD *)(v11 + 4);
    v8 = v13;
  }
  v14 = *(float *)(v11 + 8);
  if ( v9 > v14 )
  {
    v20.m128_i32[2] = *(_DWORD *)(v11 + 8);
    v9 = v14;
  }
  v15 = *(float *)(v11 + 12);
  if ( *(float *)&v10 > v15 )
  {
    v20.m128_i32[3] = *(_DWORD *)(v11 + 12);
    *(float *)&v10 = v15;
  }
  if ( v9 > v7 && *(float *)&v10 > v8 )
  {
LABEL_14:
    v16 = CVisual::AddAdditionalDirtyRects(*(CVisual **)(a1 + 40), (const struct MilRectF *)&v20);
    v17 = *(_DWORD **)(a1 + 32);
    *v17 = v16;
    v18 = **(_DWORD **)(a1 + 32);
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v17, 0LL, 0, v18, 0x23Cu, 0LL);
  }
  return **(unsigned int **)(a1 + 32);
}
