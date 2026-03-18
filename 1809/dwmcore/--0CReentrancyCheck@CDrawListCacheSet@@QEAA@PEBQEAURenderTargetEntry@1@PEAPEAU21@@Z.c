/*
 * XREFs of ??0CReentrancyCheck@CDrawListCacheSet@@QEAA@PEBQEAURenderTargetEntry@1@PEAPEAU21@@Z @ 0x1800689F8
 * Callers:
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x180021C60 (-Clear@CTreeData@@MEAAXXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A100 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x1800A5428 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

struct CDrawListCacheSet::RenderTargetEntry **__fastcall CDrawListCacheSet::CReentrancyCheck::CReentrancyCheck(
        struct CDrawListCacheSet::RenderTargetEntry **this,
        struct CDrawListCacheSet::RenderTargetEntry **a2,
        struct CDrawListCacheSet::RenderTargetEntry **a3)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  *this = (struct CDrawListCacheSet::RenderTargetEntry *)a2;
  this[1] = *a2;
  if ( *a2 == (struct CDrawListCacheSet::RenderTargetEntry *)-1LL )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  *a2 = (struct CDrawListCacheSet::RenderTargetEntry *)-1LL;
  *a3 = this[1];
  return this;
}
