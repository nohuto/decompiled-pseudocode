/*
 * XREFs of BgGetDisplayContext @ 0x14098E024
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14019BC70 (BgkSetVirtualFrameBuffer.c)
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int128 *BgGetDisplayContext()
{
  return &BgInternal;
}
