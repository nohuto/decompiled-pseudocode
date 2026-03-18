/*
 * XREFs of MiContractWsSwapPageFile @ 0x140673854
 * Callers:
 *     MmInSwapWorkingSet @ 0x1400D8F10 (MmInSwapWorkingSet.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402CEB70 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmCleanProcessAddressSpace @ 0x14060B9E8 (MmCleanProcessAddressSpace.c)
 *     MmInSwapVirtualAddresses @ 0x14089B24C (MmInSwapVirtualAddresses.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x140080598 (ExQueueWorkItemToPartition.c)
 *     PsReferencePartitionSafe @ 0x1400C5438 (PsReferencePartitionSafe.c)
 *     MiWsSwapPageFileNumber @ 0x1400D9CC8 (MiWsSwapPageFileNumber.c)
 *     MiNumberWsSwapPagefiles @ 0x1400DA8A4 (MiNumberWsSwapPagefiles.c)
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
    v4 = *(_QWORD **)(v3 + 8LL * (unsigned int)v1 + 7904);
    if ( v4[3] >= 0x10000uLL && v4[6] >= 0x10000uLL )
    {
      v1 = *v4 - 0x10000LL;
      if ( v1 >= v4[2] )
      {
        LODWORD(v1) = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 1112), 1, 0);
        if ( !(_DWORD)v1 )
        {
          LOBYTE(v1) = PsReferencePartitionSafe(*(_QWORD *)(v3 + 168));
          if ( (_BYTE)v1 )
            LOBYTE(v1) = ExQueueWorkItemToPartition((_QWORD *)(v5 + 1080), 3, 0xFFFFFFFF, *(_QWORD *)(v5 + 168));
          else
            _InterlockedExchange((volatile __int32 *)(v5 + 1112), 0);
        }
      }
    }
  }
  return v1;
}
