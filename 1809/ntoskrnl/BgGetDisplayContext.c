/*
 * XREFs of BgGetDisplayContext @ 0x14094E024
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x140191A20 (BgkSetVirtualFrameBuffer.c)
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int128 *BgGetDisplayContext()
{
  return &BgInternal;
}
