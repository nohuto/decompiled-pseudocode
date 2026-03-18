/*
 * XREFs of PopFreeUnicodeString @ 0x1405882E0
 * Callers:
 *     PopAvlDeleteStatsForPowerRequest @ 0x14058883C (PopAvlDeleteStatsForPowerRequest.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1405890BC (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopAvlFindOrMakeStatsForAudio @ 0x1406DB758 (PopAvlFindOrMakeStatsForAudio.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeUnicodeString(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)a1 = 0;
}
