/*
 * XREFs of VidSchiDrainFlipQueue @ 0x1C0083E60
 * Callers:
 *     <none>
 * Callees:
 *     VidSchIsTDRPending @ 0x1C00094D0 (VidSchIsTDRPending.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C0083E88 (VidSchiWaitForDrainFlipQueue.c)
 */

char __fastcall VidSchiDrainFlipQueue(__int64 a1)
{
  char result; // al

  result = VidSchIsTDRPending(a1);
  if ( !result )
    return VidSchiWaitForDrainFlipQueue(a1);
  return result;
}
