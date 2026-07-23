/*
 * XREFs of MiEnablePagingTheExecutive @ 0x1409BDDDC
 * Callers:
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 * Callees:
 *     MiEnablePagingOfDriver @ 0x14072C760 (MiEnablePagingOfDriver.c)
 *     MiLockPagableSections @ 0x1409BDE2C (MiLockPagableSections.c)
 */

__int64 MiEnablePagingTheExecutive()
{
  PVOID *i; // rbx
  __int64 result; // rax

  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    *((_DWORD *)i + 26) |= 0x400000u;
    MiEnablePagingOfDriver(i);
    result = MiLockPagableSections(i, 1LL);
  }
  return result;
}
