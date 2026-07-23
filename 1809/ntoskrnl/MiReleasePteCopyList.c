/*
 * XREFs of MiReleasePteCopyList @ 0x140131930
 * Callers:
 *     MiFindContiguousPages @ 0x14009A050 (MiFindContiguousPages.c)
 *     MiAddPagesToEnclave @ 0x1402BCAD4 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x14085A6EC (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x14085D65C (MiFillPerSessionProtos.c)
 *     MmRelocatePfnList @ 0x140860568 (MmRelocatePfnList.c)
 *     MiReleaseScrubPacket @ 0x140860D04 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 */

__int64 __fastcall MiReleasePteCopyList(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
    return MiReleasePtes((__int64)&qword_14043C060, *(_QWORD *)(a1 + 16), v1);
  return result;
}
