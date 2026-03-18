/*
 * XREFs of ?NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18020E140
 * Callers:
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x18021117C (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18009B314 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A6FB4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CHolographicInteropTexture::NotifyRenderedRect(__int64 a1, __int64 a2, unsigned int a3, float *a4)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned __int64 v5; // rbp
  int v8; // edx
  int v9; // ecx
  struct tagRECT v10; // [rsp+20h] [rbp-88h] BYREF
  void *v11[10]; // [rsp+30h] [rbp-78h] BYREF
  const void *retaddr; // [rsp+A8h] [rbp+0h]

  v4 = (RTL_SRWLOCK *)(a1 + 304);
  v5 = a3;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 304));
  v8 = *(_DWORD *)(a1 + 152);
  v9 = *(_DWORD *)(a1 + 156);
  v10.left = (int)*a4 - v8;
  v10.right = (int)a4[2] - v8;
  v10.top = (int)a4[1] - v9;
  v10.bottom = (int)a4[3] - v9;
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v11, &v10);
  if ( *(_DWORD *)(a1 + 136) && (unsigned int)v5 < *(_DWORD *)(a1 + 140) )
  {
    if ( v5 >= 2 )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    FastRegion::CRegion::Union(
      (const struct FastRegion::Internal::CRgnData **)(*(_QWORD *)(a1 + 8 * v5 + 104) + 16LL),
      (const struct FastRegion::Internal::CRgnData **)v11);
  }
  FastRegion::CRegion::FreeMemory(v11);
  ReleaseSRWLockExclusive(v4);
}
