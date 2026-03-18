/*
 * XREFs of IsMFMWFPWindow @ 0x1C0222630
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C021FF24 (xxxHandleMenuMessages.c)
 *     LockMFMWFPWindow @ 0x1C0222658 (LockMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x1C0222AC4 (UnlockMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0223FC0 (xxxMNFindWindowFromPoint.c)
 *     xxxMNMouseMove @ 0x1C0224DD8 (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C02465DC (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C0246784 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C02469B4 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMFMWFPWindow(__int64 a1)
{
  return a1 && a1 != 4294967291LL && a1 != 0xFFFFFFFFLL;
}
