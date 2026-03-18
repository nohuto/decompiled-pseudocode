/*
 * XREFs of ?ResolveEdgeFlags@CEdgeFlagsMap@@QEBAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@W4D2D1_EDGE_FLAGS@@PEAV?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@PEA_N@Z @ 0x1801BB944
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800681F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_J@Z @ 0x180183980 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AFEC0 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vlibe.c)
 *     ?insert@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@W4D2D1_EDGE_FLAGS@@@2@V?$basic_iterator@$$CBW4D2D1_EDGE_FLAGS@@@2@_KAEBW4D2D1_EDGE_FLAGS@@@Z @ 0x1801BBC08 (-insert@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_ex.c)
 */

unsigned __int64 __fastcall CEdgeFlagsMap::ResolveEdgeFlags(
        _QWORD *a1,
        unsigned __int64 *a2,
        int a3,
        __int64 *a4,
        _BYTE *a5)
{
  __int64 v5; // rbp
  unsigned int v7; // edi
  __int64 v9; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  _BYTE *v16; // r13
  int v17; // r12d
  __int64 v18; // r15
  __int64 v19; // rbx
  int v20; // r8d
  char v21; // r11
  unsigned __int64 v22; // rdx
  unsigned int v23; // r10d
  float *v24; // r9
  __int64 v25; // r13
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  __int64 v29; // r13
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  int v33; // edx
  char v34; // cl
  __int64 v35; // [rsp+30h] [rbp-68h] BYREF
  float *v36; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 *v37; // [rsp+A8h] [rbp+10h]
  __int64 v38; // [rsp+B8h] [rbp+20h] BYREF

  v37 = a2;
  v5 = *a2;
  v7 = 0;
  v9 = a4[1];
  v11 = *a4;
  LODWORD(v36) = 0;
  v12 = (v9 - v11) >> 2;
  if ( v5 <= v12 )
  {
    detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>>::clear_region(
      a4,
      (4 * v5) >> 2,
      (v9 - (v11 + 4 * v5)) >> 2);
  }
  else
  {
    v38 = v9;
    detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>>::insert(
      (_DWORD)a4,
      (unsigned int)&v35,
      (unsigned int)&v38,
      v5 - v12,
      (__int64)&v36);
  }
  result = a1[1] - *a1;
  if ( (result & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    v16 = a5;
    v17 = 0;
    *a5 = 0;
    if ( v5 > 0 )
    {
      v18 = 0LL;
      do
      {
        v19 = v17 + 1LL;
        v38 = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](v37, v17);
        result = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](v37, v19 % v5);
        v20 = 0;
        v21 = 0;
        v22 = (__int64)(a1[1] - *a1) >> 2;
        v23 = 0;
        v36 = (float *)result;
        if ( v22 )
        {
          v24 = (float *)v38;
          result = 0LL;
          while ( 1 )
          {
            v25 = a1[11];
            v26 = v24[1] - *(float *)(v25 + 8 * result + 4);
            v27 = *v24 - *(float *)(v25 + 8 * result);
            v16 = a5;
            v28 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v26 * *(float *)(a1[30] + 8 * result))
                                                            - (float)(v27 * *(float *)(a1[30] + 8 * result + 4)))) & _xmm);
            if ( v28 < 0.0000011920929 )
            {
              v29 = a1[11];
              v30 = (float)(v36[1] - *(float *)(v29 + 8 * result + 4)) * *(float *)(a1[30] + 8 * result);
              v24 = (float *)v38;
              v31 = (float)(*v36 - *(float *)(v29 + 8 * result)) * *(float *)(a1[30] + 8 * result + 4);
              v16 = a5;
              v32 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v30 - v31)) & _xmm);
              if ( v32 < 0.0000011920929 )
              {
                v20 |= *(_DWORD *)(*a1 + 4 * result);
                v21 = 1;
                if ( (v20 & 0x1010101) != 0 && (v20 & 0x2020202) != 0 )
                  break;
              }
            }
            result = ++v23;
            if ( v23 >= v22 )
            {
              if ( !v21 )
                goto LABEL_23;
              break;
            }
          }
          v33 = v20 | 1;
          if ( (v20 & 0x1010101) == 0 )
            v33 = v20;
          v34 = v33 | 2;
          result = *a4;
          if ( (v33 & 0x2020202) == 0 )
            v34 = v33;
          *(_DWORD *)(v18 + result) = v34 & 3;
        }
        else
        {
LABEL_23:
          *v16 = 1;
        }
        ++v17;
        v18 += 4LL;
      }
      while ( v19 < v5 );
    }
  }
  else
  {
    v14 = *a4;
    *a5 = 1;
    result = (a4[1] - v14) >> 2;
    if ( result )
    {
      v15 = 0LL;
      do
      {
        *(_DWORD *)(v14 + 4 * v15) = a3;
        ++v7;
        v14 = *a4;
        v15 = v7;
        result = (a4[1] - *a4) >> 2;
      }
      while ( v7 < result );
    }
  }
  return result;
}
