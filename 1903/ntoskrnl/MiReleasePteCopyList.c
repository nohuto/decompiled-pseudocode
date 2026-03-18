/*
 * XREFs of MiReleasePteCopyList @ 0x140131AD8
 * Callers:
 *     MiFindContiguousPages @ 0x1400D9FE0 (MiFindContiguousPages.c)
 *     MiAddPagesToEnclave @ 0x1402D3228 (MiAddPagesToEnclave.c)
 *     MmRelocatePfnList @ 0x140892CEC (MmRelocatePfnList.c)
 *     MiCopyPagesIntoEnclave @ 0x140893384 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x140898F94 (MiFillPerSessionProtos.c)
 *     MiReleaseScrubPacket @ 0x14089D230 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 */

__int64 __fastcall MiReleasePteCopyList(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
    return MiReleasePtes((__int64)&qword_1404669C0, *(_QWORD *)(a1 + 16), v1);
  return result;
}
