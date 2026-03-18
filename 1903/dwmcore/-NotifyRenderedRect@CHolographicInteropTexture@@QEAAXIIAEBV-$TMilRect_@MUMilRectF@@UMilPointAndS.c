/*
 * XREFs of ?NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802473E0
 * Callers:
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x180245BDC (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003D3C0 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800B7904 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

void __fastcall CHolographicInteropTexture::NotifyRenderedRect(__int64 a1, __int64 a2, unsigned int a3, float *a4)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned __int64 v5; // rbp
  int v8; // edx
  int v9; // ecx
  const char *v10; // rcx
  struct tagRECT v11; // [rsp+20h] [rbp-88h] BYREF
  void *v12[10]; // [rsp+30h] [rbp-78h] BYREF

  v4 = (RTL_SRWLOCK *)(a1 + 304);
  v5 = a3;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 304));
  v8 = *(_DWORD *)(a1 + 152);
  v9 = *(_DWORD *)(a1 + 156);
  v11.left = (int)*a4 - v8;
  v11.right = (int)a4[2] - v8;
  v11.top = (int)a4[1] - v9;
  v11.bottom = (int)a4[3] - v9;
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v12, &v11);
  if ( *(_DWORD *)(a1 + 136) && (unsigned int)v5 < *(_DWORD *)(a1 + 140) )
  {
    if ( v5 >= 2 )
      std::_Xlength_error(v10);
    FastRegion::CRegion::Union(
      (void **)(*(_QWORD *)(a1 + 8 * v5 + 104) + 16LL),
      (const struct FastRegion::Internal::CRgnData **)v12);
  }
  FastRegion::CRegion::FreeMemory(v12);
  ReleaseSRWLockExclusive(v4);
}
