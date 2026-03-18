/*
 * XREFs of xxxCleanupThreadPointerInputInfo @ 0x1C00E6660
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01B9BCC (-UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C01CD0C8 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C01CDA2C (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxCleanupThreadPointerInputInfo(__int64 a1)
{
  struct tagTHREADINPUTPOINTERLIST *v2; // rdi
  __int64 v3; // rsi

  if ( a1 == gptiManipulationThread )
  {
    CTouchProcessor::CleanupManipulationThreadData(gpTouchProcessor);
    gptiManipulationThread = 0LL;
  }
  v2 = (struct tagTHREADINPUTPOINTERLIST *)(a1 + 1072);
  v3 = *(_QWORD *)(a1 + 1096);
  if ( v3 )
  {
    CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, *(_QWORD *)(v3 + 24), 5LL, *(_QWORD *)(a1 + 1096));
    Win32FreePool(v3);
    *(_QWORD *)(a1 + 1096) = 0LL;
  }
  while ( *(struct tagTHREADINPUTPOINTERLIST **)v2 != v2 )
    UnlinkAndFreeThreadPointerData(v2, *(struct tagTHREADPOINTERDATA **)v2);
  if ( a1 == qword_1C0326C40 )
  {
    qword_1C0326C40 = 0LL;
    if ( qword_1C0326BC0 )
      dword_1C0326C48 |= 1u;
  }
  if ( word_1C0326C20 )
  {
    if ( a1 == qword_1C0326C28 )
    {
      ForceCompletePendingPromotion();
      xxxProcessMousePromotionQueue();
    }
  }
}
