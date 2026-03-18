/*
 * XREFs of MiGetAweInfoPartition @ 0x14084FEF0
 * Callers:
 *     MiFreePhysicalPageChain @ 0x1402B04BC (MiFreePhysicalPageChain.c)
 *     MiAllocateAweInfo @ 0x14084F4FC (MiAllocateAweInfo.c)
 *     MiCreateAweInfoBitMap @ 0x14084F8E4 (MiCreateAweInfoBitMap.c)
 *     MiDeleteAweInfoPages @ 0x14084FD58 (MiDeleteAweInfoPages.c)
 *     NtAllocateUserPhysicalPages @ 0x1408506B0 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140850F30 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14004D19C (MiGetProcessPartition.c)
 *     MiGetControlAreaPartition @ 0x1400938A8 (MiGetControlAreaPartition.c)
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
