/*
 * XREFs of xxxCleanupThreadPointerInputInfo @ 0x1C01029F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeThreadPointerHookData@@YAXPEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01DC1B0 (-FreeThreadPointerHookData@@YAXPEAUtagTHREADPOINTERDATA@@@Z.c)
 *     ?UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01DC8E4 (-UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C01F155C (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C01F1F8C (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxCleanupThreadPointerInputInfo(__int64 a1)
{
  struct tagTHREADPOINTERDATA **v2; // rdi
  struct tagTHREADPOINTERDATA *v3; // rcx

  if ( a1 == gptiManipulationThread )
  {
    CTouchProcessor::CleanupManipulationThreadData(gpTouchProcessor);
    gptiManipulationThread = 0LL;
  }
  v2 = (struct tagTHREADPOINTERDATA **)(a1 + 1080);
  v3 = *(struct tagTHREADPOINTERDATA **)(a1 + 1104);
  if ( v3 )
  {
    FreeThreadPointerHookData(v3);
    *(_QWORD *)(a1 + 1104) = 0LL;
  }
  while ( *v2 != (struct tagTHREADPOINTERDATA *)v2 )
    UnlinkAndFreeThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 1080), *v2);
  if ( a1 == qword_1C03172F0 )
  {
    qword_1C03172F0 = 0LL;
    if ( qword_1C0317270 )
      dword_1C03172F8 |= 1u;
  }
  if ( word_1C03172D0 )
  {
    if ( a1 == qword_1C03172D8 )
    {
      ForceCompletePendingPromotion();
      xxxProcessMousePromotionQueue();
    }
  }
}
