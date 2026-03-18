/*
 * XREFs of MiReadPteShadow @ 0x14004B430
 * Callers:
 *     MiConvertHiberPhasePte @ 0x14059C380 (MiConvertHiberPhasePte.c)
 *     MmProtectVirtualMemory @ 0x1406040D0 (MmProtectVirtualMemory.c)
 *     MiPfPrepareSequentialReadList @ 0x140606080 (MiPfPrepareSequentialReadList.c)
 *     MiIsRangeFullyCommitted @ 0x14064BFA8 (MiIsRangeFullyCommitted.c)
 *     MiChargeSegmentCommit @ 0x14066ED20 (MiChargeSegmentCommit.c)
 *     MmHardFaultBytesRequired @ 0x140687CD0 (MmHardFaultBytesRequired.c)
 *     MiPfPrepareReadList @ 0x140687EA0 (MiPfPrepareReadList.c)
 *     MiPrefetchDriverPages @ 0x1406A5C90 (MiPrefetchDriverPages.c)
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
