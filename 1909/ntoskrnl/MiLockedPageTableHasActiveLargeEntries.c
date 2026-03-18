/*
 * XREFs of MiLockedPageTableHasActiveLargeEntries @ 0x140131BBC
 * Callers:
 *     MiWsleFlush @ 0x140025220 (MiWsleFlush.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiLockedPageTableHasActiveLargeEntries(unsigned __int64 a1)
{
  int v2; // ecx
  unsigned __int64 i; // rdx
  int v5; // r9d
  __int64 v6; // r10
  unsigned int v7; // r11d

  v2 = 0;
  for ( i = (__int64)(a1 << 25) >> 16;
        i >= 0xFFFFF68000000000uLL && i <= 0xFFFFF6FFFFFFFFFFuLL;
        i = (__int64)(i << 25) >> 16 )
  {
    ++v2;
  }
  if ( (unsigned int)(v2 - 1) > 1 )
    return 0LL;
  while ( (MI_READ_PTE_LOCK_FREE(a1) & 0x1000000000000081LL) != 0x1000000000000081LL )
  {
    a1 = v6 + 8;
    if ( v7 + v5 >= 0x200 )
      return 0LL;
  }
  return v7;
}
