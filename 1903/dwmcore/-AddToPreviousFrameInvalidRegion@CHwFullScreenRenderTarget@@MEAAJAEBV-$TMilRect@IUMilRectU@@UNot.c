/*
 * XREFs of ?AddToPreviousFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D83E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x18003C208 (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800B7904 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::AddToPreviousFrameInvalidRegion(__int64 a1, struct tagRECT *a2)
{
  void *v4[10]; // [rsp+20h] [rbp-68h] BYREF

  CRegion::CRegion((CRegion *)v4, a2);
  FastRegion::CRegion::Union((void **)(a1 + 344), (const struct FastRegion::Internal::CRgnData **)v4);
  FastRegion::CRegion::FreeMemory(v4);
  return 0LL;
}
