/*
 * XREFs of ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x1800BA4AC
 * Callers:
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x18006E580 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?RotateFrameInvalidRegions@CHwFullScreenRenderTarget@@MEAAXXZ @ 0x1800BA560 (-RotateFrameInvalidRegions@CHwFullScreenRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z @ 0x1800BA664 (-Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BA758 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

__int64 __fastcall FastRegion::CRegion::CopyData(
        FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData *a2)
{
  int *v2; // r14
  FastRegion::Internal::CRgnData *v5; // rcx
  char *v6; // r10
  int v7; // eax
  int v8; // edi
  FastRegion::Internal::CRgnData *v10; // rsi

  v2 = (int *)(this + 1);
  v5 = *this;
  v6 = (char *)a2 + 8 * *(_DWORD *)a2 - 8;
  v7 = 60;
  v8 = *((_DWORD *)v6 + 4) + 8 * *(_DWORD *)a2 - *((_DWORD *)a2 + 4) - ((_DWORD)a2 + 12) + (_DWORD)v6 + 24;
  if ( v2 != (int *)v5 )
    v7 = *v2;
  if ( v7 >= v8 )
    goto LABEL_4;
  v10 = (FastRegion::Internal::CRgnData *)DefaultHeap::Alloc(v8);
  if ( v10 )
  {
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
    *this = v10;
    *v2 = v8;
    v5 = *this;
LABEL_4:
    FastRegion::Internal::CRgnData::Copy(v5, a2);
    return 0LL;
  }
  return 2147942414LL;
}
