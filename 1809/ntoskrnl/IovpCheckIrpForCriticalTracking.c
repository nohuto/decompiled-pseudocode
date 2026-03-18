/*
 * XREFs of IovpCheckIrpForCriticalTracking @ 0x14092F484
 * Callers:
 *     VfIrpAllocateCallDriverData @ 0x1409304D4 (VfIrpAllocateCallDriverData.c)
 * Callees:
 *     VfIrpDatabaseEntryFindAndLock @ 0x14093E224 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14093E3A4 (VfIrpDatabaseEntryReleaseLock.c)
 */

_BOOL8 __fastcall IovpCheckIrpForCriticalTracking(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ecx
  __int64 v4; // rcx
  BOOL v5; // ebx

  if ( (*(_DWORD *)(a1 + 16) & 0xC0000000) == 0 )
  {
    v2 = VfIrpDatabaseEntryFindAndLock(a1);
    v3 = *(_DWORD *)(a1 + 16);
    if ( v2 )
    {
      *(_DWORD *)(a1 + 16) = v3 | 0x40000000;
      goto LABEL_6;
    }
    *(_DWORD *)(a1 + 16) = v3 | 0x80000000;
    return 0LL;
  }
  if ( (*(_DWORD *)(a1 + 16) & 0xC0000000) != 0x40000000 )
    return 0LL;
  v2 = VfIrpDatabaseEntryFindAndLock(a1);
LABEL_6:
  v4 = *(_QWORD *)(v2 + 240);
  v5 = v4 != 0;
  if ( !v4 )
    *(_DWORD *)(v2 + 56) |= 0x80000u;
  VfIrpDatabaseEntryReleaseLock(v2);
  return v5;
}
