/*
 * XREFs of MiGetAweInfoPartition @ 0x140896068
 * Callers:
 *     MiFreePhysicalPageChain @ 0x1402D5A40 (MiFreePhysicalPageChain.c)
 *     MiGetAweVadPartition @ 0x1402D6264 (MiGetAweVadPartition.c)
 *     MiAllocateAweInfo @ 0x140895678 (MiAllocateAweInfo.c)
 *     MiCreateAweInfoBitMap @ 0x140895A64 (MiCreateAweInfoBitMap.c)
 *     MiDeleteAweInfoPages @ 0x140895ED0 (MiDeleteAweInfoPages.c)
 *     NtAllocateUserPhysicalPages @ 0x140896680 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140896F50 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     MiGetProcessPartition @ 0x1400524D8 (MiGetProcessPartition.c)
 *     MiGetControlAreaPartition @ 0x1400979D0 (MiGetControlAreaPartition.c)
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
