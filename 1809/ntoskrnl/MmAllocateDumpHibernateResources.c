/*
 * XREFs of MmAllocateDumpHibernateResources @ 0x140720238
 * Callers:
 *     PopHiberInitializeResources @ 0x1406E04E4 (PopHiberInitializeResources.c)
 *     PopEnableHiberFile @ 0x14074716C (PopEnableHiberFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x140821088 (IopLiveDumpAllocateMappingResources.c)
 * Callees:
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MmAllocateDumpHibernateResources(unsigned __int64 a1)
{
  ULONG_PTR result; // rax

  result = MiReservePtes(
             (__int64)&qword_14043C060,
             (unsigned __int64 *)((unsigned int)(a1 >> 12) + ((a1 & 0xFFF) != 0)));
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
