/*
 * XREFs of RtlCleanUpTEBLangLists @ 0x180005DD0
 * Callers:
 *     RtlpCleanupRegistryKeys @ 0x1800EC2E0 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     sub_180005F60 @ 0x180005F60 (sub_180005F60.c)
 *     sub_180015770 @ 0x180015770 (sub_180015770.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

void RtlCleanUpTEBLangLists(void)
{
  PVOID *UserPrefLanguages; // rbx
  PVOID v1; // rcx

  sub_180015770(NtCurrentTeb()->MergedPrefLanguages);
  NtCurrentTeb()->MergedPrefLanguages = 0LL;
  UserPrefLanguages = (PVOID *)NtCurrentTeb()->UserPrefLanguages;
  if ( UserPrefLanguages )
  {
    if ( *UserPrefLanguages )
      sub_180015770(*UserPrefLanguages);
    v1 = UserPrefLanguages[1];
    if ( v1 )
      sub_180005F60(v1);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, UserPrefLanguages);
  }
  NtCurrentTeb()->UserPrefLanguages = 0LL;
  sub_180015770(NtCurrentTeb()->PreferredLanguages);
  NtCurrentTeb()->PreferredLanguages = 0LL;
  if ( NtCurrentTeb()->ResourceRetValue )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, NtCurrentTeb()->ResourceRetValue);
    NtCurrentTeb()->ResourceRetValue = 0LL;
  }
}
