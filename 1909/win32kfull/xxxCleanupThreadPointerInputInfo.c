/*
 * XREFs of xxxCleanupThreadPointerInputInfo @ 0x1C00E9610
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C00E96A4 (-RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     ?UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01F2374 (-UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C0207570 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0207FB4 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxCleanupThreadPointerInputInfo(__int64 a1)
{
  struct tagTHREADPOINTERDATA **v2; // rdi

  if ( a1 == gptiManipulationThread )
  {
    CTouchProcessor::CleanupManipulationThreadData(gpTouchProcessor);
    gptiManipulationThread = 0LL;
  }
  v2 = (struct tagTHREADPOINTERDATA **)(a1 + 1080);
  RemoveThreadPointerHookData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 1080));
  while ( *v2 != (struct tagTHREADPOINTERDATA *)v2 )
    UnlinkAndFreeThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 1080), *v2);
  if ( a1 == qword_1C032A310 )
  {
    qword_1C032A310 = 0LL;
    if ( qword_1C032A290 )
      dword_1C032A318 |= 1u;
  }
  if ( word_1C032A2F0 )
  {
    if ( a1 == qword_1C032A2F8 )
    {
      ForceCompletePendingPromotion();
      xxxProcessMousePromotionQueue();
    }
  }
}
