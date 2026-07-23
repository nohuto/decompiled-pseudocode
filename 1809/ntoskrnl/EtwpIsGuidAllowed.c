/*
 * XREFs of EtwpIsGuidAllowed @ 0x1405C660C
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x1405C3750 (EtwpAddRegEntryToGroup.c)
 *     EtwpIsRegEntryAllowed @ 0x140658A84 (EtwpIsRegEntryAllowed.c)
 *     EtwpDisallowedGuidAddition @ 0x1408B6364 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1408B6618 (EtwpDisallowedGuidRemoval.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     bsearch @ 0x140195E10 (bsearch.c)
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
