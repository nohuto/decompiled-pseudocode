/*
 * XREFs of RtlCleanUpTEBLangLists @ 0x180005DD0
 * Callers:
 *     RtlpCleanupRegistryKeys @ 0x1800EC2E0 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     sub_180005F60 @ 0x180005F60 (sub_180005F60.c)
 *     sub_180015770 @ 0x180015770 (sub_180015770.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

struct _TEB *RtlCleanUpTEBLangLists()
{
  _QWORD *UserPrefLanguages; // rbx
  struct _TEB *result; // rax

  sub_180015770(NtCurrentTeb()->MergedPrefLanguages);
  NtCurrentTeb()->MergedPrefLanguages = 0LL;
  UserPrefLanguages = NtCurrentTeb()->UserPrefLanguages;
  if ( UserPrefLanguages )
  {
    if ( *UserPrefLanguages )
      sub_180015770(*UserPrefLanguages);
    if ( UserPrefLanguages[1] )
      sub_180005F60();
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, UserPrefLanguages);
  }
  NtCurrentTeb()->UserPrefLanguages = 0LL;
  sub_180015770(NtCurrentTeb()->PreferredLanguages);
  NtCurrentTeb()->PreferredLanguages = 0LL;
  result = NtCurrentTeb();
  if ( result->ResourceRetValue )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, NtCurrentTeb()->ResourceRetValue);
    result = NtCurrentTeb();
    result->ResourceRetValue = 0LL;
  }
  return result;
}
