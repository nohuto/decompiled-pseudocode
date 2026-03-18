/*
 * XREFs of ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x1800B752C
 * Callers:
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x180090B10 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?RotateFrameInvalidRegions@CHwFullScreenRenderTarget@@MEAAXXZ @ 0x1800B75E0 (-RotateFrameInvalidRegions@CHwFullScreenRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z @ 0x1800B76E4 (-Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z.c)
 */

__int64 __fastcall FastRegion::CRegion::CopyData(void **this, const struct FastRegion::Internal::CRgnData *a2)
{
  int *v2; // r14
  FastRegion::Internal::CRgnData *v5; // rcx
  char *v6; // r10
  int v7; // eax
  int v8; // edi
  LPVOID v10; // rsi

  v2 = (int *)(this + 1);
  v5 = (FastRegion::Internal::CRgnData *)*this;
  v6 = (char *)a2 + 8 * *(_DWORD *)a2 - 8;
  v7 = 60;
  v8 = *((_DWORD *)v6 + 4) + 8 * *(_DWORD *)a2 - *((_DWORD *)a2 + 4) - ((_DWORD)a2 + 12) + (_DWORD)v6 + 24;
  if ( v2 != (int *)v5 )
    v7 = *v2;
  if ( v7 >= v8 )
    goto LABEL_4;
  v10 = DefaultHeap::Alloc(v8);
  if ( v10 )
  {
    FastRegion::CRegion::FreeMemory(this);
    *this = v10;
    *v2 = v8;
    v5 = (FastRegion::Internal::CRgnData *)*this;
LABEL_4:
    FastRegion::Internal::CRgnData::Copy(v5, a2);
    return 0LL;
  }
  return 2147942414LL;
}
