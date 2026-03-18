/*
 * XREFs of PopFreeUnicodeString @ 0x1406E1654
 * Callers:
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1406B409C (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x1406E158C (PopAvlDeleteStatsForPowerRequest.c)
 *     PopAvlFindOrMakeStatsForAudio @ 0x1407201E8 (PopAvlFindOrMakeStatsForAudio.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
