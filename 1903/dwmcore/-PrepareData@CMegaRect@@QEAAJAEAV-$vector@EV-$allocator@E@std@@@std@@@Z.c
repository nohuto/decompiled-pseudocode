/*
 * XREFs of ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x1800754E0
 * Callers:
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x180074794 (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 * Callees:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x18005B8B0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 *     VerticesHaveIntegralXY @ 0x1800750C4 (VerticesHaveIntegralXY.c)
 *     std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x180077C08 (std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd7.c)
 *     ReorderAxisAlignedRectVertices @ 0x180078D48 (ReorderAxisAlignedRectVertices.c)
 *     IsValidAxisAlignedRect @ 0x180078F28 (IsValidAxisAlignedRect.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x180183A1C (--_GCRegion@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CMegaRect::PrepareData(__int64 a1, unsigned __int64 *a2)
{
  unsigned int v4; // r14d
  __int64 v5; // rdi
  unsigned int v6; // r15d
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rcx
  void *v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rcx
  unsigned int v12; // r11d
  unsigned int v13; // r11d
  __int64 v14; // rdx
  __int32 *v15; // rdi
  unsigned int v16; // ebx
  __int32 v17; // xmm1_4
  __int32 v18; // xmm1_4
  __m128 v19; // xmm0
  __m128 v20; // xmm1
  char *v21; // rax
  _DWORD *v22; // rax
  CRegion *v23; // rax
  __int32 v24; // r9d
  __int32 v25; // r10d
  __int32 v26; // eax
  __int32 v27; // r11d
  _DWORD *v28; // rdx
  unsigned int v30; // [rsp+20h] [rbp-40h]
  unsigned __int64 v31; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v32; // [rsp+38h] [rbp-28h]
  unsigned int v33; // [rsp+3Ch] [rbp-24h]
  __m128 v34; // [rsp+40h] [rbp-20h] BYREF

  v4 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
  v6 = 8 * *(_DWORD *)(a1 + 24) + 16;
  std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
    a2,
    4 * v6);
  v7 = *a2;
  v8 = a2[1] - *a2;
  v34.m128_u64[0] = *a2;
  v34.m128_u64[1] = v6 | 0x400000000LL;
  v9 = DefaultHeap::Alloc(v8);
  v11 = *(_QWORD **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v9;
  if ( v11 )
  {
    operator delete(v11);
    v9 = *(void **)(a1 + 16);
  }
  if ( !v9 )
  {
    v30 = 233;
LABEL_18:
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v11, 0LL, 0, -2147024882, v30, 0LL);
    return v4;
  }
  TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(v5, *(_QWORD *)a1 + 64LL, v10, 1.0, (__int64 *)&v34);
  v34.m128_u64[0] = v7;
  v34.m128_u64[1] = v6 | 0x400000000LL;
  if ( !VerticesHaveIntegralXY((__int64 *)&v34) )
    return v4;
  v34.m128_u64[0] = v7;
  v34.m128_u64[1] = __PAIR64__(v12, v6);
  if ( !(unsigned __int8)IsValidAxisAlignedRect(&v34) )
    return v4;
  v14 = *(unsigned int *)(a1 + 24);
  v34.m128_u64[0] = *(_QWORD *)(a1 + 16);
  v15 = (__int32 *)v34.m128_u64[0];
  v16 = 8 * v14 + 16;
  v31 = v7;
  v34.m128_u64[1] = __PAIR64__(v13, v16);
  v32 = v6;
  v33 = v13;
  ReorderAxisAlignedRectVertices(&v31, v14, &v34);
  v17 = v15[1];
  v34.m128_i32[0] = *v15;
  v34.m128_i32[1] = v17;
  v18 = *(__int32 *)((char *)v15 + (int)(3 * v16) + 4);
  v34.m128_i32[2] = *(__int32 *)((char *)v15 + (int)(3 * v16));
  v34.m128_i32[3] = v18;
  v19 = _mm_mul_ps(_mm_add_ps(v34, g_halfFixedPointForRounding), (__m128)_xmm);
  v20 = _mm_cmplt_ps(DirectX::g_XMMaxInt, v19);
  v34 = _mm_or_ps(_mm_andnot_ps(v20, (__m128)_mm_cvttps_epi32(v19)), _mm_and_ps(v20, DirectX::g_XMAbsMask));
  v21 = (char *)DefaultHeap::Alloc(0x48uLL);
  v11 = v21;
  if ( v21 )
  {
    v22 = v21 + 8;
    *v11 = v22;
    *v22 = 0;
  }
  else
  {
    v11 = 0LL;
  }
  v23 = *(CRegion **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v11;
  if ( v23 )
  {
    CRegion::`scalar deleting destructor'(v23, 1u);
    v11 = *(_QWORD **)(a1 + 8);
  }
  if ( !v11 )
  {
    v30 = 271;
    goto LABEL_18;
  }
  v24 = v34.m128_i32[0];
  v25 = v34.m128_i32[2];
  if ( v34.m128_i32[0] >= v34.m128_i32[2]
    || (v26 = v34.m128_i32[1], v27 = v34.m128_i32[3], v34.m128_i32[1] >= v34.m128_i32[3]) )
  {
    *(_DWORD *)*v11 = 0;
  }
  else
  {
    v28 = (_DWORD *)*v11;
    *v28 = 2;
    v28[1] = v24;
    v28[2] = v25;
    v28[3] = v26;
    v28[4] = 16;
    v28[7] = v24;
    v28[8] = v25;
    v28[5] = v27;
    v28[6] = 16;
  }
  return v4;
}
