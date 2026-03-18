/*
 * XREFs of MiObtainFreePages @ 0x1402C86F4
 * Callers:
 *     MiUnlinkFreeOrZeroedPage @ 0x14002BE20 (MiUnlinkFreeOrZeroedPage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x14009C010 (MiUnlinkNodeLargePageHelper.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     MiDecreaseAvailablePages @ 0x1400DB4B8 (MiDecreaseAvailablePages.c)
 *     MiWaitForFreePage @ 0x1402E5A00 (MiWaitForFreePage.c)
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     PsReferencePartitionSafe @ 0x1400A0358 (PsReferencePartitionSafe.c)
 *     PsDereferencePartition @ 0x1400A0388 (PsDereferencePartition.c)
 *     MiWakeModifiedPageWriter @ 0x14015C314 (MiWakeModifiedPageWriter.c)
 *     CcNotifyWriteBehindEx @ 0x140160BF4 (CcNotifyWriteBehindEx.c)
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
