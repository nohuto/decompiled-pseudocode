/*
 * XREFs of ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18003B430
 * Callers:
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x18003A6E4 (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 * Callees:
 *     VerticesHaveIntegralXY @ 0x18003B014 (VerticesHaveIntegralXY.c)
 *     std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x18003D8E8 (std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd7.c)
 *     ReorderAxisAlignedRectVertices @ 0x18003EA28 (ReorderAxisAlignedRectVertices.c)
 *     IsValidAxisAlignedRect @ 0x18003EC08 (IsValidAxisAlignedRect.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180064340 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x18018233C (--_GCRegion@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CMegaRect::PrepareData(__int64 a1, unsigned __int64 *a2)
{
  unsigned int v4; // r14d
  __int64 v5; // rdi
  unsigned int v6; // r15d
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rcx
  void *v9; // rax
  int v10; // r8d
  int v11; // r9d
  _QWORD *v12; // rcx
  unsigned int v13; // r11d
  unsigned int v14; // r11d
  __int64 v15; // rdx
  __int32 *v16; // rdi
  unsigned int v17; // ebx
  __int32 v18; // xmm1_4
  __int32 v19; // xmm1_4
  __m128 v20; // xmm0
  __m128 v21; // xmm1
  char *v22; // rax
  _DWORD *v23; // rax
  CRegion *v24; // rax
  __int32 v25; // r9d
  __int32 v26; // r10d
  __int32 v27; // eax
  __int32 v28; // r11d
  _DWORD *v29; // rdx
  unsigned int v31; // [rsp+20h] [rbp-40h]
  unsigned __int64 v32; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v33; // [rsp+38h] [rbp-28h]
  unsigned int v34; // [rsp+3Ch] [rbp-24h]
  __m128 v35; // [rsp+40h] [rbp-20h] BYREF

  v4 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
  v6 = 8 * *(_DWORD *)(a1 + 24) + 16;
  std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
    a2,
    4 * v6);
  v7 = *a2;
  v8 = a2[1] - *a2;
  v35.m128_u64[0] = *a2;
  v35.m128_u64[1] = v6 | 0x400000000LL;
  v9 = DefaultHeap::Alloc(v8);
  v12 = *(_QWORD **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v9;
  if ( v12 )
  {
    operator delete(v12);
    v9 = *(void **)(a1 + 16);
  }
  if ( !v9 )
  {
    v31 = 233;
LABEL_18:
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v12, 0LL, 0, -2147024882, v31, 0LL);
    return v4;
  }
  TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(v5, *(_DWORD *)a1 + 64, v10, v11, (__int64)&v35);
  v35.m128_u64[0] = v7;
  v35.m128_u64[1] = v6 | 0x400000000LL;
  if ( !VerticesHaveIntegralXY((__int64 *)&v35) )
    return v4;
  v35.m128_u64[0] = v7;
  v35.m128_u64[1] = __PAIR64__(v13, v6);
  if ( !(unsigned __int8)IsValidAxisAlignedRect(&v35) )
    return v4;
  v15 = *(unsigned int *)(a1 + 24);
  v35.m128_u64[0] = *(_QWORD *)(a1 + 16);
  v16 = (__int32 *)v35.m128_u64[0];
  v17 = 8 * v15 + 16;
  v32 = v7;
  v35.m128_u64[1] = __PAIR64__(v14, v17);
  v33 = v6;
  v34 = v14;
  ReorderAxisAlignedRectVertices(&v32, v15, &v35);
  v18 = v16[1];
  v35.m128_i32[0] = *v16;
  v35.m128_i32[1] = v18;
  v19 = *(__int32 *)((char *)v16 + (int)(3 * v17) + 4);
  v35.m128_i32[2] = *(__int32 *)((char *)v16 + (int)(3 * v17));
  v35.m128_i32[3] = v19;
  v20 = _mm_mul_ps(_mm_add_ps(v35, g_halfFixedPointForRounding), (__m128)_xmm);
  v21 = _mm_cmplt_ps(DirectX::g_XMMaxInt, v20);
  v35 = _mm_or_ps(_mm_andnot_ps(v21, (__m128)_mm_cvttps_epi32(v20)), _mm_and_ps(v21, DirectX::g_XMAbsMask));
  v22 = (char *)DefaultHeap::Alloc(0x48uLL);
  v12 = v22;
  if ( v22 )
  {
    v23 = v22 + 8;
    *v12 = v23;
    *v23 = 0;
  }
  else
  {
    v12 = 0LL;
  }
  v24 = *(CRegion **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v12;
  if ( v24 )
  {
    CRegion::`scalar deleting destructor'(v24, 1u);
    v12 = *(_QWORD **)(a1 + 8);
  }
  if ( !v12 )
  {
    v31 = 271;
    goto LABEL_18;
  }
  v25 = v35.m128_i32[0];
  v26 = v35.m128_i32[2];
  if ( v35.m128_i32[0] >= v35.m128_i32[2]
    || (v27 = v35.m128_i32[1], v28 = v35.m128_i32[3], v35.m128_i32[1] >= v35.m128_i32[3]) )
  {
    *(_DWORD *)*v12 = 0;
  }
  else
  {
    v29 = (_DWORD *)*v12;
    *v29 = 2;
    v29[1] = v25;
    v29[2] = v26;
    v29[3] = v27;
    v29[4] = 16;
    v29[7] = v25;
    v29[8] = v26;
    v29[5] = v28;
    v29[6] = 16;
  }
  return v4;
}
