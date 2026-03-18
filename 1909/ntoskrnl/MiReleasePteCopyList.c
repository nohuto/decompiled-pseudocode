/*
 * XREFs of MiReleasePteCopyList @ 0x1401322E8
 * Callers:
 *     MiFindContiguousPages @ 0x1400B9E60 (MiFindContiguousPages.c)
 *     MiAddPagesToEnclave @ 0x1402D2F88 (MiAddPagesToEnclave.c)
 *     MmRelocatePfnList @ 0x14089250C (MmRelocatePfnList.c)
 *     MiCopyPagesIntoEnclave @ 0x140892BA4 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x1408987B4 (MiFillPerSessionProtos.c)
 *     MiReleaseScrubPacket @ 0x14089CA50 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiReleasePtes @ 0x14006B160 (MiReleasePtes.c)
 */

__int64 __fastcall MiReleasePteCopyList(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
    return MiReleasePtes((__int64)&qword_1404666C0, *(_QWORD *)(a1 + 16), v1);
  return result;
}
