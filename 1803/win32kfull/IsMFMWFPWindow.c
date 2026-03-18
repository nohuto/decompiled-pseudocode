/*
 * XREFs of IsMFMWFPWindow @ 0x1C01E5130
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C01E2BFC (xxxHandleMenuMessages.c)
 *     LockMFMWFPWindow @ 0x1C01E5158 (LockMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x1C01E55A8 (UnlockMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x1C01E6A2C (xxxMNFindWindowFromPoint.c)
 *     xxxMNMouseMove @ 0x1C01E7844 (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C0205428 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C02055B8 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C02057B0 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMFMWFPWindow(__int64 a1)
{
  return a1 && a1 != 4294967291LL && a1 != 0xFFFFFFFFLL;
}
