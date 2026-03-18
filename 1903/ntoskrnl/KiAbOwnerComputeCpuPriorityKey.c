/*
 * XREFs of KiAbOwnerComputeCpuPriorityKey @ 0x14009F478
 * Callers:
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140060B90 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbProcessThreadLocks @ 0x14009E090 (KiAbProcessThreadLocks.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x14009EFB4 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x14009F340 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbForceProcessLockEntry @ 0x14016B534 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     <none>
 */

char __fastcall KiAbOwnerComputeCpuPriorityKey(__int64 a1)
{
  __int16 v1; // ax
  char v2; // dl
  char v3; // r8
  unsigned int v5; // edx

  v1 = *(_WORD *)(a1 + 88);
  if ( (v1 & 0x7FFF) != 0 )
  {
    _BitScanReverse(&v5, v1 & 0x7FFF);
    v2 = v5 + 1;
  }
  else
  {
    v2 = 0;
  }
  v3 = *(_BYTE *)(a1 - 16LL * *(unsigned __int8 *)(a1 + 24) + 563);
  if ( v3 > v2 )
  {
    v2 = *(_BYTE *)(a1 - 16LL * *(unsigned __int8 *)(a1 + 24) + 563);
    if ( v3 > 15 )
      return 15;
  }
  return v2;
}
