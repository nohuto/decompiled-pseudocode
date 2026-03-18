/*
 * XREFs of ?RemoveAll@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEAAXXZ @ 0x180175CD0
 * Callers:
 *     ??1CFilterEffect@@MEAA@XZ @ 0x180173664 (--1CFilterEffect@@MEAA@XZ.c)
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x1801973A8 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 *     ??1CD2DCommandList@@MEAA@XZ @ 0x180202790 (--1CD2DCommandList@@MEAA@XZ.c)
 *     ?ReleaseD2DResources@CD2DCommandList@@UEAAXXZ @ 0x180202C40 (-ReleaseD2DResources@CD2DCommandList@@UEAAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::RemoveAll(
        __int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    WPF::ProcessHeapImpl::Free(v2);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    WPF::ProcessHeapImpl::Free(v3);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)(a1 + 16) = 0;
}
