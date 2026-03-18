/*
 * XREFs of PopFreeUnicodeString @ 0x14069DCF4
 * Callers:
 *     PopAvlDeleteStatsForPowerRequest @ 0x14069E29C (PopAvlDeleteStatsForPowerRequest.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x14069F35C (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopAvlFindOrMakeStatsForAudio @ 0x14071E358 (PopAvlFindOrMakeStatsForAudio.c)
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
