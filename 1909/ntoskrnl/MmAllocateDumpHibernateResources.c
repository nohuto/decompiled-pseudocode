/*
 * XREFs of MmAllocateDumpHibernateResources @ 0x140749CD8
 * Callers:
 *     PopHiberInitializeResources @ 0x1407284D8 (PopHiberInitializeResources.c)
 *     PopEnableHiberFile @ 0x140759E1C (PopEnableHiberFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x1408595F8 (IopLiveDumpAllocateMappingResources.c)
 * Callees:
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MmAllocateDumpHibernateResources(unsigned __int64 a1)
{
  ULONG_PTR result; // rax

  result = MiReservePtes(
             (__int64)&qword_1404666C0,
             (unsigned __int64 *)((unsigned int)(a1 >> 12) + ((a1 & 0xFFF) != 0)));
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
