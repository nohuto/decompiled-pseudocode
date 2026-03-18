/*
 * XREFs of MiObtainFreePages @ 0x1402C8454
 * Callers:
 *     MiUnlinkFreeOrZeroedPage @ 0x14002C210 (MiUnlinkFreeOrZeroedPage.c)
 *     MiUnlinkPageFromList @ 0x1400B3280 (MiUnlinkPageFromList.c)
 *     MiDecreaseAvailablePages @ 0x1400BB338 (MiDecreaseAvailablePages.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400F8050 (MiUnlinkNodeLargePageHelper.c)
 *     MiWaitForFreePage @ 0x1402E5760 (MiWaitForFreePage.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     PsReferencePartitionSafe @ 0x1400C5438 (PsReferencePartitionSafe.c)
 *     PsDereferencePartition @ 0x1400C5468 (PsDereferencePartition.c)
 *     MiWakeModifiedPageWriter @ 0x14015C9B4 (MiWakeModifiedPageWriter.c)
 *     CcNotifyWriteBehindEx @ 0x14016A8C4 (CcNotifyWriteBehindEx.c)
 */

void __fastcall MiObtainFreePages(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  unsigned __int64 v4; // rcx

  v1 = *(_QWORD *)(a1 + 7800);
  if ( v1 && *(_BYTE *)(v1 + 52) != 1 )
  {
    v3 = *(_QWORD *)(a1 + 168);
    if ( PsReferencePartitionSafe(v3) )
    {
      CcNotifyWriteBehindEx(1, v3);
      PsDereferencePartition(v3);
    }
    v4 = *(_QWORD *)(a1 + 8560);
    if ( *(_QWORD *)(a1 + 8448) - v4 >= 0x10 )
    {
      KeSetEvent((PRKEVENT)(a1 + 784), 0, 0);
      v4 = *(_QWORD *)(a1 + 8560);
    }
    if ( v4 >= 0x10 )
      MiWakeModifiedPageWriter(a1, -1LL);
    if ( *(_BYTE *)(v1 + 106) )
      KeSetEvent((PRKEVENT)(v1 + 104), 0, 0);
  }
}
