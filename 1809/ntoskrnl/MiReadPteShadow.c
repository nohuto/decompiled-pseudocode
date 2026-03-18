/*
 * XREFs of MiReadPteShadow @ 0x14006C550
 * Callers:
 *     MiSetProtectionOnSection @ 0x140071E80 (MiSetProtectionOnSection.c)
 *     MiConvertHiberPhasePte @ 0x14056C080 (MiConvertHiberPhasePte.c)
 *     MiPfPrepareReadList @ 0x1405DFDE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1405EBA20 (MiPfPrepareSequentialReadList.c)
 *     MmProtectVirtualMemory @ 0x1405EDFD0 (MmProtectVirtualMemory.c)
 *     MiIsRangeFullyCommitted @ 0x140618858 (MiIsRangeFullyCommitted.c)
 *     MiChargeSegmentCommit @ 0x14061E0D0 (MiChargeSegmentCommit.c)
 *     MiPrefetchDriverPages @ 0x14061F120 (MiPrefetchDriverPages.c)
 *     MmHardFaultBytesRequired @ 0x140638920 (MmHardFaultBytesRequired.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReadPteShadow(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rax

  if ( (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (a2 & 1) != 0
    && ((a2 & 0x20) == 0 || (a2 & 0x42) == 0) )
  {
    v3 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 8 * ((a1 >> 3) & 0x1FF));
      if ( (v4 & 0x20) != 0 )
        a2 |= 0x20uLL;
      if ( (v4 & 0x42) != 0 )
        return a2 | 0x42;
    }
  }
  return a2;
}
