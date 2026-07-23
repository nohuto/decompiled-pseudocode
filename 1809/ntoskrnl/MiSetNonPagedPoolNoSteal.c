/*
 * XREFs of MiSetNonPagedPoolNoSteal @ 0x14015EDF4
 * Callers:
 *     MiGetPhysicalAddress @ 0x1401211C8 (MiGetPhysicalAddress.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 */

signed __int64 __fastcall MiSetNonPagedPoolNoSteal(unsigned __int64 a1)
{
  signed __int64 result; // rax
  volatile signed __int64 *v2; // r9
  signed __int64 v3; // rtt

  result = MI_READ_PTE_LOCK_FREE(a1);
  do
  {
    if ( (result & 0x200) != 0 )
      break;
    v3 = result;
    result = _InterlockedCompareExchange64(v2, result | 0x220, result);
  }
  while ( v3 != result );
  return result;
}
