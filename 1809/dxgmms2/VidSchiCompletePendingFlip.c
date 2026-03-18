/*
 * XREFs of VidSchiCompletePendingFlip @ 0x1C0039A40
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0002548 (VidSchiSetFlipDevice.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C003957C (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C0039AB4 (VidSchiCompletePendingFlipOnPlane.c)
 */

__int64 __fastcall VidSchiCompletePendingFlip(int a1, __int64 a2, int a3, int a4)
{
  unsigned int i; // ebx

  for ( i = 0; i < *(_DWORD *)(a2 + 140); ++i )
    VidSchiCompletePendingFlipOnPlane(a1, a2, a3, a4, i);
  return 0LL;
}
