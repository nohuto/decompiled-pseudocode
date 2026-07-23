/*
 * XREFs of MiContractWsSwapPageFile @ 0x14066C944
 * Callers:
 *     MmInSwapWorkingSet @ 0x1400E4F04 (MmInSwapWorkingSet.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402B8C60 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmCleanProcessAddressSpace @ 0x1405F2BC8 (MmCleanProcessAddressSpace.c)
 *     MmInSwapVirtualAddresses @ 0x14085FF3C (MmInSwapVirtualAddresses.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x140090C28 (PsReferencePartitionSafe.c)
 *     ExQueueWorkItemToPartition @ 0x1400D2F6C (ExQueueWorkItemToPartition.c)
 *     MiWsSwapPageFileNumber @ 0x1400E4EC8 (MiWsSwapPageFileNumber.c)
 *     MiNumberWsSwapPagefiles @ 0x1400F0508 (MiNumberWsSwapPagefiles.c)
 */

char __fastcall MiContractWsSwapPageFile(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // r11
  __int64 v3; // r11
  _QWORD *v4; // rcx
  __int64 v5; // r11

  LODWORD(v1) = MiNumberWsSwapPagefiles(a1);
  if ( (_DWORD)v1 )
  {
    LODWORD(v1) = MiWsSwapPageFileNumber(v2);
    v4 = *(_QWORD **)(v3 + 8LL * (unsigned int)v1 + 7136);
    if ( v4[3] >= 0x10000uLL && v4[6] >= 0x10000uLL )
    {
      v1 = *v4 - 0x10000LL;
      if ( v1 >= v4[2] )
      {
        LODWORD(v1) = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 1104), 1, 0);
        if ( !(_DWORD)v1 )
        {
          LOBYTE(v1) = PsReferencePartitionSafe(*(_QWORD *)(v3 + 168));
          if ( (_BYTE)v1 )
            LOBYTE(v1) = ExQueueWorkItemToPartition((__int64 *)(v5 + 1072), 3, 0xFFFFFFFF, *(_QWORD *)(v5 + 168));
          else
            _InterlockedExchange((volatile __int32 *)(v5 + 1104), 0);
        }
      }
    }
  }
  return v1;
}
