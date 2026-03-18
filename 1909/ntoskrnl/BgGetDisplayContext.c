/*
 * XREFs of BgGetDisplayContext @ 0x14098E024
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14019C3F0 (BgkSetVirtualFrameBuffer.c)
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int128 *BgGetDisplayContext()
{
  return &BgInternal;
}
