/*
 * XREFs of ?ResolveEdgeFlags@CEdgeFlagsMap@@QEBAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@W4D2D1_EDGE_FLAGS@@PEAV?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@PEA_N@Z @ 0x180186D48
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800B7870 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_J@Z @ 0x180026618 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EED94 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vlibe.c)
 *     ?insert@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@W4D2D1_EDGE_FLAGS@@@2@V?$basic_iterator@$$CBW4D2D1_EDGE_FLAGS@@@2@_KAEBW4D2D1_EDGE_FLAGS@@@Z @ 0x180186FFC (-insert@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_ex.c)
 */

unsigned __int64 __fastcall CEdgeFlagsMap::ResolveEdgeFlags(_QWORD *a1, __int64 *a2, int a3, __int64 *a4, _BYTE *a5)
{
  unsigned __int64 v6; // r9
  unsigned int v7; // edi
  unsigned __int64 v11; // rax
  unsigned __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // ebp
  _BYTE *v16; // r13
  __int64 v17; // r12
  __int64 v18; // rbx
  int v19; // r8d
  char v20; // r11
  unsigned __int64 v21; // rdx
  unsigned int v22; // r10d
  float *v23; // r9
  __int64 v24; // r13
  float v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  __int64 v28; // r13
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm1_4
  int v32; // edx
  char v33; // cl
  float *v34; // [rsp+90h] [rbp+8h] BYREF
  __int64 v35; // [rsp+98h] [rbp+10h] BYREF
  __int64 v36; // [rsp+A8h] [rbp+20h] BYREF

  v6 = *a2;
  v7 = 0;
  LODWORD(v34) = 0;
  v11 = (a4[1] - *a4) >> 2;
  if ( v6 <= v11 )
  {
    detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>>::clear_region(
      a4,
      (__int64)(4 * v6) >> 2,
      (__int64)(a4[1] - (*a4 + 4 * v6)) >> 2);
  }
  else
  {
    v35 = a4[1];
    detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>>::insert(
      (_DWORD)a4,
      (unsigned int)&v36,
      (unsigned int)&v35,
      v6 - v11,
      (__int64)&v34);
  }
  result = a1[1] - *a1;
  if ( (result & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    v15 = 0;
    v16 = a5;
    *a5 = 0;
    if ( *a2 > 0 )
    {
      v17 = 0LL;
      do
      {
        v35 = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, v15);
        v18 = v15 + 1LL;
        result = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, v18 % *a2);
        v19 = 0;
        v20 = 0;
        v21 = (__int64)(a1[1] - *a1) >> 2;
        v22 = 0;
        v34 = (float *)result;
        if ( v21 )
        {
          v23 = (float *)v35;
          result = 0LL;
          while ( 1 )
          {
            v24 = a1[11];
            v25 = v23[1] - *(float *)(v24 + 8 * result + 4);
            v26 = *v23 - *(float *)(v24 + 8 * result);
            v16 = a5;
            v27 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v25 * *(float *)(a1[30] + 8 * result))
                                                            - (float)(v26 * *(float *)(a1[30] + 8 * result + 4)))) & _xmm);
            if ( v27 < 0.0000011920929 )
            {
              v28 = a1[11];
              v29 = (float)(v34[1] - *(float *)(v28 + 8 * result + 4)) * *(float *)(a1[30] + 8 * result);
              v23 = (float *)v35;
              v30 = (float)(*v34 - *(float *)(v28 + 8 * result)) * *(float *)(a1[30] + 8 * result + 4);
              v16 = a5;
              v31 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v29 - v30)) & _xmm);
              if ( v31 < 0.0000011920929 )
              {
                v19 |= *(_DWORD *)(*a1 + 4 * result);
                v20 = 1;
                if ( (v19 & 0x1010101) != 0 && (v19 & 0x2020202) != 0 )
                  break;
              }
            }
            result = ++v22;
            if ( v22 >= v21 )
            {
              if ( !v20 )
                goto LABEL_23;
              break;
            }
          }
          v32 = v19 | 1;
          if ( (v19 & 0x1010101) == 0 )
            v32 = v19;
          v33 = v32 | 2;
          result = *a4;
          if ( (v32 & 0x2020202) == 0 )
            v33 = v32;
          *(_DWORD *)(v17 + result) = v33 & 3;
        }
        else
        {
LABEL_23:
          *v16 = 1;
        }
        ++v15;
        v17 += 4LL;
      }
      while ( v18 < *a2 );
    }
  }
  else
  {
    v13 = *a4;
    *a5 = 1;
    result = (a4[1] - v13) >> 2;
    if ( result )
    {
      v14 = 0LL;
      do
      {
        *(_DWORD *)(v13 + 4 * v14) = a3;
        ++v7;
        v13 = *a4;
        v14 = v7;
        result = (a4[1] - *a4) >> 2;
      }
      while ( v7 < result );
    }
  }
  return result;
}
