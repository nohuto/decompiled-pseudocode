/*
 * XREFs of MmAllocateDumpHibernateResources @ 0x140747DD8
 * Callers:
 *     PopHiberInitializeResources @ 0x140726638 (PopHiberInitializeResources.c)
 *     PopEnableHiberFile @ 0x14074AAD0 (PopEnableHiberFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x140859EF8 (IopLiveDumpAllocateMappingResources.c)
 * Callees:
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MmAllocateDumpHibernateResources(unsigned __int64 a1)
{
  ULONG_PTR result; // rax

  result = MiReservePtes(
             (__int64)&qword_1404669C0,
             (unsigned __int64 *)((unsigned int)(a1 >> 12) + ((a1 & 0xFFF) != 0)));
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
