/*
 * XREFs of ?ReadPresentDirtyRectsData@@YAJPEBVDXGADAPTER@@IPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C025ADD8
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C0111970 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 */

__int64 __fastcall ReadPresentDirtyRectsData(
        const struct DXGADAPTER *a1,
        int a2,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a3,
        struct CRefCountedBuffer **a4)
{
  BOOL v7; // esi
  UINT NumRects; // eax
  int v9; // ebp
  char *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct CRefCountedBuffer *v15; // rdi
  __int64 v16; // rax
  char *v18; // rbp

  *a4 = 0LL;
  v7 = a3->Token.Flip.ScrollRect.left
    || a3->Token.Flip.ScrollRect.right
    || a3->Token.Flip.ScrollRect.top
    || a3->Token.Flip.ScrollRect.bottom;
  NumRects = a3->Token.Flip.DirtyRegions.NumRects;
  if ( NumRects || v7 )
  {
    v9 = 16 * (NumRects + v7) + 24;
    v10 = (char *)operator new[](16 * (NumRects + v7) + 32, 0x4B677844u, (POOL_TYPE)512);
    v15 = (struct CRefCountedBuffer *)v10;
    if ( !v10 )
    {
      v16 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
      *(_QWORD *)(v16 + 24) = 1514LL;
      WdLogEvent5_WdLowResource(v16);
      return 3221225495LL;
    }
    *(_DWORD *)v10 = v9;
    *((_DWORD *)v10 + 1) = 1;
    v18 = v10 + 32;
    *((_DWORD *)v10 + 2) = 1;
    *((_DWORD *)v10 + 4) = a2;
    *((_QWORD *)v10 + 3) = v10 + 32;
    *((_DWORD *)v10 + 5) = v7 + a3->Token.Flip.DirtyRegions.NumRects;
    memmove(v10 + 32, &a3->Token.SurfaceComplete + 101, 16LL * a3->Token.Flip.DirtyRegions.NumRects);
    if ( v7 )
      *(_OWORD *)&v18[16 * a3->Token.Flip.DirtyRegions.NumRects] = *(_OWORD *)((char *)&a3->Token.SurfaceComplete + 84);
    *a4 = v15;
  }
  return 0LL;
}
