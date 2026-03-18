/*
 * XREFs of ?ReadPresentDirtyRectsData@@YAJPEBVDXGADAPTER@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C0281B78
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C0281E68 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001CA08 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 */

__int64 __fastcall ReadPresentDirtyRectsData(
        const struct DXGADAPTER *a1,
        unsigned int a2,
        struct _D3DKMT_MULTIPLANE_OVERLAY3 **a3,
        struct CRefCountedBuffer **a4)
{
  struct _D3DKMT_MULTIPLANE_OVERLAY3 **v5; // r14
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned int v9; // r11d
  struct _D3DKMT_MULTIPLANE_OVERLAY3 **v10; // r10
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rdi
  __int64 DirtyRectCount; // rdx
  int v13; // esi
  struct CRefCountedBuffer *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct CRefCountedBuffer *v19; // rdi
  __int64 v20; // rax
  __int64 v22; // rax
  UINT *v23; // rsi
  char *v24; // rbx
  __int64 v25; // r15
  struct _D3DKMT_MULTIPLANE_OVERLAY3 *v26; // rcx
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v27; // r14
  size_t v28; // r8
  char *pDirtyRects; // rdx

  v5 = a3;
  *a4 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  if ( a2 )
  {
    v10 = a3;
    while ( 1 )
    {
      pPlaneAttributes = (*v10)->pPlaneAttributes;
      DirtyRectCount = pPlaneAttributes->DirtyRectCount;
      if ( (unsigned int)DirtyRectCount > 0xFFF )
        break;
      if ( ((*v10)->InputFlags.Value & 1) != 0 && (_DWORD)DirtyRectCount )
      {
        v7 = (unsigned int)(DirtyRectCount + v7);
        v8 = (unsigned int)(v8 + 1);
      }
      ++v9;
      ++v10;
      if ( v9 >= a2 )
        goto LABEL_8;
    }
    v22 = WdLogNewEntry5_WdWarning(v7, DirtyRectCount, a3);
    *(_QWORD *)(v22 + 24) = pPlaneAttributes->DirtyRectCount;
    WdLogEvent5_WdWarning(v22);
    return 3221225485LL;
  }
  else
  {
LABEL_8:
    if ( (_DWORD)v7 && (_DWORD)v8 )
    {
      v13 = 16 * (v8 + v7) + 8;
      v14 = (struct CRefCountedBuffer *)operator new[]((unsigned int)(16 * (v8 + v7) + 16), 0x4B677844u, (POOL_TYPE)512);
      v19 = v14;
      if ( !v14 )
      {
        v20 = WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
        *(_QWORD *)(v20 + 24) = 1446LL;
        WdLogEvent5_WdLowResource(v20);
        return 3221225495LL;
      }
      *(_DWORD *)v14 = v13;
      *((_DWORD *)v14 + 1) = 1;
      *((_DWORD *)v14 + 2) = v8;
      v23 = (UINT *)((char *)v14 + 16);
      v24 = (char *)v14 + 16 * v8 + 16;
      v25 = 0LL;
      while ( (unsigned int)v25 < a2 )
      {
        v26 = v5[v25];
        v27 = v26->pPlaneAttributes;
        if ( (v26->InputFlags.Value & 1) != 0 && v27->DirtyRectCount )
        {
          *v23 = v26->LayerIndex;
          *((_QWORD *)v23 + 1) = v24;
          v23[1] = v27->DirtyRectCount;
          v28 = 16LL * v27->DirtyRectCount;
          pDirtyRects = (char *)v27->pDirtyRects;
          if ( &pDirtyRects[v28] < pDirtyRects || (unsigned __int64)&pDirtyRects[v28] > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v24, pDirtyRects, v28);
          v24 += 16 * v27->DirtyRectCount;
          v23 += 4;
        }
        v25 = (unsigned int)(v25 + 1);
        v5 = a3;
      }
      *a4 = v19;
    }
    return 0LL;
  }
}
