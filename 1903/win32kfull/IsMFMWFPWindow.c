/*
 * XREFs of IsMFMWFPWindow @ 0x1C0222B70
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0220464 (xxxHandleMenuMessages.c)
 *     LockMFMWFPWindow @ 0x1C0222B98 (LockMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x1C0223004 (UnlockMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0224500 (xxxMNFindWindowFromPoint.c)
 *     xxxMNMouseMove @ 0x1C0225318 (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C0246D1C (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C0246EC4 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C02470F4 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMFMWFPWindow(__int64 a1)
{
  return a1 && a1 != 4294967291LL && a1 != 0xFFFFFFFFLL;
}
