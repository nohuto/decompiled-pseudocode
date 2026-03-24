/*
 * XREFs of MiReleasePteCopyList @ 0x140131860
 * Callers:
 *     MiFindContiguousPages @ 0x14009A110 (MiFindContiguousPages.c)
 *     MiAddPagesToEnclave @ 0x1402BC8E4 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x14085948C (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x14085C3FC (MiFillPerSessionProtos.c)
 *     MmRelocatePfnList @ 0x14085F308 (MmRelocatePfnList.c)
 *     MiReleaseScrubPacket @ 0x14085FAA4 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 */

__int64 __fastcall MiReleasePteCopyList(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
    return MiReleasePtes((__int64)&qword_14043AFA0, *(_QWORD *)(a1 + 16), v1);
  return result;
}
