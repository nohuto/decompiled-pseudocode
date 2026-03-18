/*
 * XREFs of MiGetAweInfoPartition @ 0x140896848
 * Callers:
 *     MiFreePhysicalPageChain @ 0x1402D5CE0 (MiFreePhysicalPageChain.c)
 *     MiGetAweVadPartition @ 0x1402D6504 (MiGetAweVadPartition.c)
 *     MiAllocateAweInfo @ 0x140895E58 (MiAllocateAweInfo.c)
 *     MiCreateAweInfoBitMap @ 0x140896244 (MiCreateAweInfoBitMap.c)
 *     MiDeleteAweInfoPages @ 0x1408966B0 (MiDeleteAweInfoPages.c)
 *     NtAllocateUserPhysicalPages @ 0x140896E60 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140897730 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     MiGetProcessPartition @ 0x140052438 (MiGetProcessPartition.c)
 *     MiGetControlAreaPartition @ 0x1400A9178 (MiGetControlAreaPartition.c)
 */

__int64 __fastcall MiGetAweInfoPartition(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 )
    return MiGetControlAreaPartition(v1);
  else
    return MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
}
