/*
 * XREFs of MiEnablePagingTheExecutive @ 0x1409F1488
 * Callers:
 *     MiInitSystem @ 0x1409F0D98 (MiInitSystem.c)
 * Callees:
 *     MiEnablePagingOfDriver @ 0x14074F8AC (MiEnablePagingOfDriver.c)
 *     MiLockPagableSections @ 0x1409F14D8 (MiLockPagableSections.c)
 */

__int64 MiEnablePagingTheExecutive()
{
  PVOID *i; // rbx
  __int64 result; // rax

  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    *((_DWORD *)i + 26) |= 0x400000u;
    MiEnablePagingOfDriver((__int64)i);
    result = MiLockPagableSections(i, 1LL);
  }
  return result;
}
