/*
 * XREFs of MiMappingHasIoReferences @ 0x140118D10
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14002FA50 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x140118AF4 (MiMapContiguousMemory.c)
 *     MmProtectMdlSystemAddress @ 0x1402C15B0 (MmProtectMdlSystemAddress.c)
 *     MmMapMdl @ 0x1402C5460 (MmMapMdl.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005EF80 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 */

signed __int64 __fastcall MiMappingHasIoReferences(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  int i; // eax
  signed __int64 result; // rax
  signed __int64 v4; // rtt

  v1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  for ( i = MI_IS_PHYSICAL_ADDRESS(a1); i; --i )
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  result = MI_READ_PTE_LOCK_FREE(v1);
  do
  {
    v4 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)v1, result | 0x200, result);
  }
  while ( v4 != result );
  return result;
}
