/*
 * XREFs of ?AddToPreviousFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007A7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x18009B2CC (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A6FB4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::AddToPreviousFrameInvalidRegion(__int64 a1, const struct MilRectU *a2)
{
  void *v4[10]; // [rsp+20h] [rbp-68h] BYREF

  CRegion::CRegion((CRegion *)v4, a2);
  FastRegion::CRegion::Union((FastRegion::CRegion *)(a1 + 408), (const struct CRegion *)v4);
  FastRegion::CRegion::FreeMemory(v4);
  return 0LL;
}
