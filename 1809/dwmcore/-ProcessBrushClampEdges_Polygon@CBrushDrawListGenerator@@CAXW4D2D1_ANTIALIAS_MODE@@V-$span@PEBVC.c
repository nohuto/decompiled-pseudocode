/*
 * XREFs of ?ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAVCEdgeFlagsMap@@@Z @ 0x180183640
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B4690 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x18000C9DC (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_J@Z @ 0x180026618 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z @ 0x1801869E0 (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z.c)
 */

__int64 __fastcall CBrushDrawListGenerator::ProcessBrushClampEdges_Polygon(
        int a1,
        __int64 *a2,
        int a3,
        float *a4,
        __int64 a5)
{
  __int64 result; // rax
  signed int v6; // ebx
  __int64 v11; // r10
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float *v18; // rax
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  int v21; // xmm0_4
  unsigned int v22; // xmm1_4
  unsigned int v23; // xmm0_4
  __int64 v24; // r8
  __int128 v25; // [rsp+28h] [rbp-31h] BYREF
  __int128 v26; // [rsp+38h] [rbp-21h]
  int v27; // [rsp+48h] [rbp-11h]
  float v28[9]; // [rsp+50h] [rbp-9h] BYREF
  float v29[9]; // [rsp+74h] [rbp+1Bh] BYREF
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+57h] BYREF

  result = (__int64)&retaddr;
  v6 = 0;
  if ( *a2 > 0 )
  {
    result = 0LL;
    do
    {
      v11 = *(_QWORD *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, result);
      if ( v11 && *(_BYTE *)(v11 + 52) )
      {
        v12 = *(float *)(v11 + 8);
        v13 = *(float *)(v11 + 12);
        if ( _bittest(&a3, v6) )
        {
          v28[2] = 0.0;
          v28[5] = 0.0;
          v28[0] = v12;
          v14 = *(float *)(v11 + 16);
          v28[1] = v13;
          v15 = *(float *)(v11 + 20);
          v28[3] = v14;
          v16 = *(float *)(v11 + 24);
          v28[4] = v15;
          v17 = *(float *)(v11 + 28);
          v28[6] = v16;
          v28[7] = v17;
          v28[8] = 1.0;
          v18 = Matrix3x3::operator*(v28, v29, a4);
          v19 = *(_OWORD *)v18;
          v20 = *((_OWORD *)v18 + 1);
          *(float *)&v18 = v18[8];
          v25 = v19;
          v27 = (int)v18;
          v26 = v20;
        }
        else
        {
          LODWORD(v25) = *(_DWORD *)(v11 + 8);
          v21 = *(_DWORD *)(v11 + 16);
          *(_QWORD *)((char *)&v25 + 4) = LODWORD(v13);
          v22 = *(_DWORD *)(v11 + 20);
          HIDWORD(v25) = v21;
          v23 = *(_DWORD *)(v11 + 24);
          *(_QWORD *)&v26 = v22;
          *((_QWORD *)&v26 + 1) = __PAIR64__(*(_DWORD *)(v11 + 28), v23);
          v27 = 1065353216;
        }
        if ( a1 == 1 )
          v24 = 0LL;
        else
          v24 = *(unsigned int *)(v11 + 48);
        CEdgeFlagsMap::AddEdgeFlags(a5, v11 + 32, v24, &v25);
      }
      result = ++v6;
    }
    while ( v6 < *a2 );
  }
  return result;
}
