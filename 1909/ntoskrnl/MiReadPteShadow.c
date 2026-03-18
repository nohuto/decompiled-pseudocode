/*
 * XREFs of MiReadPteShadow @ 0x14004B4D0
 * Callers:
 *     MiConvertHiberPhasePte @ 0x14059BC00 (MiConvertHiberPhasePte.c)
 *     MmProtectVirtualMemory @ 0x140605BE0 (MmProtectVirtualMemory.c)
 *     MiPfPrepareSequentialReadList @ 0x140607B90 (MiPfPrepareSequentialReadList.c)
 *     MiChargeSegmentCommit @ 0x140648780 (MiChargeSegmentCommit.c)
 *     MmHardFaultBytesRequired @ 0x14064DEA0 (MmHardFaultBytesRequired.c)
 *     MiPfPrepareReadList @ 0x14064E070 (MiPfPrepareReadList.c)
 *     MiIsRangeFullyCommitted @ 0x14065FC38 (MiIsRangeFullyCommitted.c)
 *     MiPrefetchDriverPages @ 0x1406A5520 (MiPrefetchDriverPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReadPteShadow(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v4; // rax

  if ( (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (a2 & 1) != 0
    && ((a2 & 0x20) == 0 || (a2 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v4 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((a1 >> 3) & 0x1FF));
      if ( (v4 & 0x20) != 0 )
        a2 |= 0x20uLL;
      if ( (v4 & 0x42) != 0 )
        return a2 | 0x42;
    }
  }
  return a2;
}
