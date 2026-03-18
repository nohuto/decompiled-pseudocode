/*
 * XREFs of MiObtainFreePages @ 0x1402B3194
 * Callers:
 *     MiUnlinkFreeOrZeroedPage @ 0x140039AD0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiUnlinkNodeLargePageHelper @ 0x140064700 (MiUnlinkNodeLargePageHelper.c)
 *     MiDecreaseAvailablePages @ 0x1400EE82C (MiDecreaseAvailablePages.c)
 *     MiWaitForFreePage @ 0x1402CB3A4 (MiWaitForFreePage.c)
 * Callees:
 *     PsDereferencePartition @ 0x140090CC0 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x140090CE8 (PsReferencePartitionSafe.c)
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 *     CcNotifyWriteBehindEx @ 0x140153294 (CcNotifyWriteBehindEx.c)
 *     MiWakeModifiedPageWriter @ 0x1401532B8 (MiWakeModifiedPageWriter.c)
 */

void __fastcall MiObtainFreePages(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  unsigned __int64 v4; // rcx

  v1 = *(_QWORD *)(a1 + 7024);
  if ( v1 && *(_BYTE *)(v1 + 52) != 1 )
  {
    v3 = *(_QWORD *)(a1 + 168);
    if ( PsReferencePartitionSafe(v3) )
    {
      CcNotifyWriteBehindEx(1, v3);
      PsDereferencePartition(v3);
    }
    v4 = *(_QWORD *)(a1 + 7792);
    if ( *(_QWORD *)(a1 + 7680) - v4 >= 0x10 )
    {
      KeSetEvent((PRKEVENT)(a1 + 776), 0, 0);
      v4 = *(_QWORD *)(a1 + 7792);
    }
    if ( v4 >= 0x10 )
      MiWakeModifiedPageWriter(a1, -1LL);
    if ( *(_BYTE *)(v1 + 106) )
      KeSetEvent((PRKEVENT)(v1 + 104), 0, 0);
  }
}
