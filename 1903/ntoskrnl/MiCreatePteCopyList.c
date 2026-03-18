/*
 * XREFs of MiCreatePteCopyList @ 0x14012F194
 * Callers:
 *     MiFindContiguousPages @ 0x1400D9FE0 (MiFindContiguousPages.c)
 *     MiAddPagesToEnclave @ 0x1402D3228 (MiAddPagesToEnclave.c)
 *     MiGetPteMappingPair @ 0x1402E8A6C (MiGetPteMappingPair.c)
 *     MmRelocatePfnList @ 0x140892CEC (MmRelocatePfnList.c)
 *     MiCopyPagesIntoEnclave @ 0x140893384 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x140898F94 (MiFillPerSessionProtos.c)
 *     MiInitializeScrubPacket @ 0x14089D10C (MiInitializeScrubPacket.c)
 * Callees:
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MiCreatePteCopyList(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdx
  ULONG_PTR result; // rax
  int v6; // eax
  bool v7; // zf

  *(_DWORD *)a3 = 0;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_WORD *)(a3 + 8) = 17;
  if ( a1 > a2 >> 1 )
    v4 = (unsigned int)a2 & 0xFFFFFFFE;
  else
    v4 = (unsigned int)(2 * a1);
  *(_DWORD *)(a3 + 4) = v4;
  do
  {
    result = MiReservePtes((__int64)&qword_1404669C0, (unsigned __int64 *)v4);
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
