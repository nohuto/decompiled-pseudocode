/*
 * XREFs of RtlCleanUpTEBLangLists @ 0x180005DD0
 * Callers:
 *     RtlpCleanupRegistryKeys @ 0x1800EC3D0 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlpMuiRegFreeStringPool @ 0x180005F60 (RtlpMuiRegFreeStringPool.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180015770 (RtlpMuiRegFreeLanguageList.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

struct _TEB *RtlCleanUpTEBLangLists()
{
  _QWORD *UserPrefLanguages; // rbx
  struct _TEB *result; // rax

  RtlpMuiRegFreeLanguageList(NtCurrentTeb()->MergedPrefLanguages);
  NtCurrentTeb()->MergedPrefLanguages = 0LL;
  UserPrefLanguages = NtCurrentTeb()->UserPrefLanguages;
  if ( UserPrefLanguages )
  {
    if ( *UserPrefLanguages )
      RtlpMuiRegFreeLanguageList(*UserPrefLanguages);
    if ( UserPrefLanguages[1] )
      RtlpMuiRegFreeStringPool();
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, UserPrefLanguages);
  }
  NtCurrentTeb()->UserPrefLanguages = 0LL;
  RtlpMuiRegFreeLanguageList(NtCurrentTeb()->PreferredLanguages);
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
