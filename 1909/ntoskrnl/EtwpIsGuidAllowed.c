/*
 * XREFs of EtwpIsGuidAllowed @ 0x1405C5AA0
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x1405C4BE0 (EtwpAddRegEntryToGroup.c)
 *     EtwpIsRegEntryAllowed @ 0x140692EB0 (EtwpIsRegEntryAllowed.c)
 *     EtwpDisallowedGuidAddition @ 0x1408F1864 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1408F1B18 (EtwpDisallowedGuidRemoval.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     bsearch @ 0x1401A0BC0 (bsearch.c)
 */

bool __fastcall EtwpIsGuidAllowed(__int64 a1, const void *a2)
{
  signed __int64 *v2; // rbx
  unsigned __int16 v5; // ax
  bool v6; // di

  v2 = (signed __int64 *)(a1 + 704);
  ExAcquirePushLockSharedEx(a1 + 704, 0LL);
  v5 = *(_WORD *)(a1 + 1048);
  if ( v5 )
    v6 = bsearch(a2, *(const void **)(a1 + 1056), v5, 0x10uLL, EtwpCompareGuid) == 0LL;
  else
    v6 = 1;
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return v6;
}
