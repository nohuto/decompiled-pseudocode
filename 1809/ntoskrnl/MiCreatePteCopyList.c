/*
 * XREFs of MiCreatePteCopyList @ 0x14012ECB0
 * Callers:
 *     MiFindContiguousPages @ 0x14009A050 (MiFindContiguousPages.c)
 *     MiAddPagesToEnclave @ 0x1402BCAD4 (MiAddPagesToEnclave.c)
 *     MiGetPteMappingPair @ 0x1402CE358 (MiGetPteMappingPair.c)
 *     MiCopyDirectMapHeader @ 0x140853E04 (MiCopyDirectMapHeader.c)
 *     MiCopyPagesIntoEnclave @ 0x14085A6EC (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x14085D65C (MiFillPerSessionProtos.c)
 *     MmRelocatePfnList @ 0x140860568 (MmRelocatePfnList.c)
 *     MiInitializeScrubPacket @ 0x140860BE8 (MiInitializeScrubPacket.c)
 * Callees:
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MiCreatePteCopyList(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdx
  ULONG_PTR result; // rax
  int v6; // eax
  bool v7; // zf

  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 4) = 0;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_WORD *)(a3 + 8) = 17;
  if ( a1 > a2 >> 1 )
    v4 = (unsigned int)a2 & 0xFFFFFFFE;
  else
    v4 = (unsigned int)(2 * a1);
  *(_DWORD *)(a3 + 4) = v4;
  do
  {
    result = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)v4);
    *(_QWORD *)(a3 + 16) = result;
    if ( result )
      break;
    v6 = *(_DWORD *)(a3 + 4);
    v7 = v6 == 2;
    result = (unsigned int)(v6 - 2);
    *(_DWORD *)(a3 + 4) = result;
    v4 = (unsigned int)result;
  }
  while ( !v7 );
  return result;
}
