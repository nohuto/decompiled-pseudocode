/*
 * XREFs of ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x1800A6674
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003E5E0 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A0628 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A60E4 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?OccludeRegions@CMegaRectCollection@@AEAAJXZ @ 0x1800A61E4 (-OccludeRegions@CMegaRectCollection@@AEAAJXZ.c)
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x1800A6420 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x1800A7240 (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

__int64 __fastcall FastRegion::CRegion::SaveResult(void **this, struct FastRegion::Internal::CWorkBuffer *a2)
{
  int *v2; // rsi
  unsigned int v3; // edi
  int v5; // r11d
  FastRegion::CRegion *v6; // r9
  int *v7; // r15
  int v8; // ebx
  int v9; // eax
  int v10; // ebp
  __int64 v11; // r10
  _DWORD *v12; // r8
  _DWORD *v13; // rbx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r10
  SIZE_T v19; // r8
  LPVOID v20; // rbp
  int v21; // ebx

  v2 = (int *)*((_QWORD *)a2 + 1);
  v3 = 0;
  v5 = *v2;
  if ( *v2 )
  {
    if ( (int *)((char *)a2 + 16) == v2 )
    {
      v6 = (FastRegion::CRegion *)*this;
      v7 = (int *)(this + 1);
      v8 = v2[2 * v5 + 2] + 8 * v5 - v2[4] - 12 + 8 * (v5 - 1) + 24;
      v9 = 60;
      if ( this + 1 != *this )
        v9 = *v7;
      if ( v9 < v8 )
      {
        v19 = v8;
        if ( !v8 )
          v19 = 1LL;
        v20 = HeapAlloc(WPF::g_processHeap, 0, v19);
        if ( !v20 )
          return (unsigned int)-2147024882;
        FastRegion::CRegion::FreeMemory(this);
        *this = v20;
        *v7 = v8;
        v6 = (FastRegion::CRegion *)*this;
        v5 = *v2;
      }
      *(_DWORD *)v6 = v5;
      v10 = 0;
      *((_DWORD *)v6 + 1) = v2[1];
      *((_DWORD *)v6 + 2) = v2[2];
      v11 = (__int64)v2 + v2[4] + 12;
      v12 = (_DWORD *)((char *)v6 + 8 * v5 + 12);
      if ( v5 > 0 )
      {
        v13 = (_DWORD *)((char *)v6 + 12);
        do
        {
          *v13 = *(_DWORD *)((char *)v13 + (char *)v2 - (char *)v6);
          v13 += 2;
          v14 = v10++;
          *((_DWORD *)v6 + 2 * v14 + 4) = (_DWORD)v2
                                        + 8 * v14
                                        + 4 * (((__int64)v12 - v11) >> 2)
                                        + v2[2 * v14 + 4]
                                        - ((_DWORD)v6
                                         + 8 * v14);
        }
        while ( v10 < *(_DWORD *)v6 );
      }
      v15 = (unsigned __int64)(8 * *v2 + 4 + v2[2 * *v2 + 2] - v2[4] - 12) >> 2;
      v16 = (int)v15;
      if ( (int)v15 > 0 )
      {
        v17 = v11 - (_QWORD)v12;
        do
        {
          *v12 = *(_DWORD *)((char *)v12 + v17);
          ++v12;
          --v16;
        }
        while ( v16 );
      }
    }
    else
    {
      v21 = *(_DWORD *)a2;
      *(_DWORD *)a2 = 0;
      *((_QWORD *)a2 + 1) = (char *)a2 + 16;
      FastRegion::CRegion::FreeMemory(this);
      *this = v2;
      *((_DWORD *)this + 2) = v21;
    }
  }
  else
  {
    *(_DWORD *)*this = 0;
  }
  return v3;
}
