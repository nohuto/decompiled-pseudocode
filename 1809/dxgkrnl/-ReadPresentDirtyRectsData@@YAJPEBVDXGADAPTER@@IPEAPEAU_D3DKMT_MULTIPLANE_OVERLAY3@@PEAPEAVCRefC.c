/*
 * XREFs of ?ReadPresentDirtyRectsData@@YAJPEBVDXGADAPTER@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C024BF40
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C024C1C4 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 */

__int64 __fastcall ReadPresentDirtyRectsData(
        const struct DXGADAPTER *a1,
        unsigned int a2,
        struct _D3DKMT_MULTIPLANE_OVERLAY3 **a3,
        struct CRefCountedBuffer **a4)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // r14
  unsigned int v7; // r10d
  struct _D3DKMT_MULTIPLANE_OVERLAY3 **v9; // rsi
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rdi
  __int64 DirtyRectCount; // rdx
  int v12; // ebp
  struct CRefCountedBuffer *v13; // rax
  __int64 v14; // rcx
  struct CRefCountedBuffer *v15; // rdi
  __int64 v16; // rax
  UINT *v18; // r15
  char *v19; // rbx
  struct _D3DKMT_MULTIPLANE_OVERLAY3 *v20; // rcx
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v21; // rbp
  __int64 v22; // rax

  *a4 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = a2;
  v7 = 0;
  v9 = a3;
  if ( a2 )
  {
    do
    {
      pPlaneAttributes = (*a3)->pPlaneAttributes;
      DirtyRectCount = pPlaneAttributes->DirtyRectCount;
      if ( (unsigned int)DirtyRectCount > 0xFFF )
      {
        v22 = WdLogNewEntry5_WdWarning(v4, DirtyRectCount, a3);
        *(_QWORD *)(v22 + 24) = pPlaneAttributes->DirtyRectCount;
        WdLogEvent5_WdWarning(v22);
        return 3221225485LL;
      }
      if ( ((*a3)->InputFlags.Value & 1) != 0 && (_DWORD)DirtyRectCount )
      {
        v4 = (unsigned int)(DirtyRectCount + v4);
        v5 = (unsigned int)(v5 + 1);
      }
      ++v7;
      ++a3;
    }
    while ( v7 < (unsigned int)v6 );
    if ( (_DWORD)v4 && (_DWORD)v5 )
    {
      v12 = 16 * (v5 + v4) + 8;
      v13 = (struct CRefCountedBuffer *)operator new[]((unsigned int)(16 * (v5 + v4) + 16), 0x4B677844u, (POOL_TYPE)512);
      v15 = v13;
      if ( !v13 )
      {
        v16 = WdLogNewEntry5_WdLowResource(v14);
        *(_QWORD *)(v16 + 24) = 1446LL;
        WdLogEvent5_WdLowResource(v16);
        return 3221225495LL;
      }
      *(_DWORD *)v13 = v12;
      v18 = (UINT *)((char *)v13 + 16);
      *((_DWORD *)v13 + 1) = 1;
      *((_DWORD *)v13 + 2) = v5;
      v19 = (char *)v13 + 16 * v5 + 16;
      do
      {
        v20 = *v9;
        if ( ((*v9)->InputFlags.Value & 1) != 0 )
        {
          v21 = v20->pPlaneAttributes;
          if ( v21->DirtyRectCount )
          {
            *v18 = v20->LayerIndex;
            *((_QWORD *)v18 + 1) = v19;
            v18[1] = v21->DirtyRectCount;
            memmove(v19, v21->pDirtyRects, 16LL * v21->DirtyRectCount);
            v19 += 16 * v21->DirtyRectCount;
            v18 += 4;
          }
        }
        ++v9;
        --v6;
      }
      while ( v6 );
      *a4 = v15;
    }
  }
  return 0LL;
}
