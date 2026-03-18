/*
 * XREFs of ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x1800ABE08
 * Callers:
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x1800AB540 (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 * Callees:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x18003BBF0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 *     std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x1800AD4A8 (std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd7.c)
 *     ReorderAxisAlignedRectVertices @ 0x1800AD8BC (ReorderAxisAlignedRectVertices.c)
 *     IsValidAxisAlignedRect @ 0x1800ADA9C (IsValidAxisAlignedRect.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x180168A5C (--_GCRegion@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CMegaRect::PrepareData(__int64 a1, unsigned __int64 *a2)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  unsigned int v6; // r15d
  unsigned __int64 v7; // r12
  SIZE_T v8; // r8
  LPVOID v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int32 *v14; // rdi
  unsigned int v15; // ebx
  __int32 v16; // xmm1_4
  __int32 v17; // xmm1_4
  __m128 v18; // xmm0
  __m128 v19; // xmm1
  char *v20; // rax
  _DWORD *v21; // rax
  CRegion *v22; // rax
  __int32 v23; // r9d
  __int32 v24; // r10d
  __int32 v25; // eax
  __int32 v26; // r11d
  _DWORD *v27; // rdx
  unsigned int v29; // [rsp+20h] [rbp-40h]
  unsigned __int64 v30; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-28h]
  int v32; // [rsp+3Ch] [rbp-24h]
  __m128 v33; // [rsp+40h] [rbp-20h] BYREF

  v4 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 136LL);
  v6 = 8 * *(_DWORD *)(a1 + 24) + 16;
  std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
    a2,
    4 * v6);
  v7 = *a2;
  v33.m128_u64[0] = v7;
  v33.m128_u64[1] = v6 | 0x400000000LL;
  v8 = a2[1] - v7;
  if ( !v8 )
    v8 = 1LL;
  v9 = HeapAlloc(WPF::g_processHeap, 0, v8);
  v11 = *(_QWORD **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v9;
  if ( v11 )
  {
    WPF::ProcessHeapImpl::Free(v11);
    v9 = *(LPVOID *)(a1 + 16);
  }
  if ( v9 )
  {
    TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(
      v5,
      *(_QWORD *)a1 + 56LL,
      v10,
      COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_1_0)),
      (__int64 *)&v33);
    v12 = 0LL;
    while ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)((int)(v6 * v12) + v7)) & _xmm) <= 8388608.0
         && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)((int)(v6 * v12) + v7 + 4)) & _xmm) <= 8388608.0 )
    {
      if ( (unsigned __int64)++v12 >= 4 )
      {
        v33.m128_u64[0] = v7;
        v33.m128_u64[1] = v6 | 0x400000000LL;
        if ( !(unsigned __int8)IsValidAxisAlignedRect(&v33) )
          return v4;
        v13 = *(unsigned int *)(a1 + 24);
        v33.m128_u64[0] = *(_QWORD *)(a1 + 16);
        v14 = (__int32 *)v33.m128_u64[0];
        v15 = 8 * v13 + 16;
        v30 = v7;
        v33.m128_u64[1] = v15 | 0x400000000LL;
        v31 = v6;
        v32 = 4;
        ReorderAxisAlignedRectVertices(&v30, v13, &v33);
        v16 = v14[1];
        v33.m128_i32[0] = *v14;
        v33.m128_i32[1] = v16;
        v17 = *(__int32 *)((char *)v14 + (int)(3 * v15) + 4);
        v33.m128_i32[2] = *(__int32 *)((char *)v14 + (int)(3 * v15));
        v33.m128_i32[3] = v17;
        v18 = _mm_mul_ps(_mm_add_ps(v33, g_halfFixedPointForRounding), (__m128)_xmm);
        v19 = _mm_cmplt_ps(DirectX::g_XMMaxInt, v18);
        v33 = _mm_or_ps(_mm_andnot_ps(v19, (__m128)_mm_cvttps_epi32(v18)), _mm_and_ps(v19, DirectX::g_XMAbsMask));
        v20 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x48uLL);
        v11 = v20;
        if ( v20 )
        {
          v21 = v20 + 8;
          *v11 = v21;
          *v21 = 0;
        }
        else
        {
          v11 = 0LL;
        }
        v22 = *(CRegion **)(a1 + 8);
        *(_QWORD *)(a1 + 8) = v11;
        if ( v22 )
        {
          CRegion::`scalar deleting destructor'(v22, 1u);
          v11 = *(_QWORD **)(a1 + 8);
        }
        if ( !v11 )
        {
          v29 = 271;
          goto LABEL_23;
        }
        v23 = v33.m128_i32[0];
        v24 = v33.m128_i32[2];
        if ( v33.m128_i32[0] >= v33.m128_i32[2]
          || (v25 = v33.m128_i32[1], v26 = v33.m128_i32[3], v33.m128_i32[1] >= v33.m128_i32[3]) )
        {
          *(_DWORD *)*v11 = 0;
        }
        else
        {
          v27 = (_DWORD *)*v11;
          *v27 = 2;
          v27[1] = v23;
          v27[2] = v24;
          v27[3] = v25;
          v27[4] = 16;
          v27[7] = v23;
          v27[8] = v24;
          v27[5] = v26;
          v27[6] = 16;
        }
        return v4;
      }
    }
  }
  else
  {
    v29 = 233;
LABEL_23:
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v11, 0LL, 0, -2147024882, v29);
  }
  return v4;
}
