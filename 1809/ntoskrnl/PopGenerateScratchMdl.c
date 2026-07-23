/*
 * XREFs of PopGenerateScratchMdl @ 0x140144BA0
 * Callers:
 *     PopGenerateUnHibernatedMdl @ 0x14056CCDC (PopGenerateUnHibernatedMdl.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x140010EE0 (MmAllocatePagesForMdlEx.c)
 */

PMDL __fastcall PopGenerateScratchMdl(__int64 a1, __int64 a2)
{
  PMDL result; // rax

  result = MmAllocatePagesForMdlEx(
             (PHYSICAL_ADDRESS)0x1000000LL,
             (PHYSICAL_ADDRESS)0xFFFFFFFFFFFLL,
             0LL,
             a2 << 12,
             MmCached,
             5u);
  if ( result )
  {
    result->Next = *(struct _MDL **)(a1 + 128);
    *(_QWORD *)(a1 + 136) += a2;
    *(_QWORD *)(a1 + 128) = result;
  }
  return result;
}
