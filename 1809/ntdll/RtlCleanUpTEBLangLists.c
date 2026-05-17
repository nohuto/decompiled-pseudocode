/*
 * XREFs of RtlCleanUpTEBLangLists @ 0x18003A5D0
 * Callers:
 *     RtlpCleanupRegistryKeys @ 0x1800EF6F0 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18003C3D8 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpMuiRegFreeStringPool @ 0x18004CB74 (RtlpMuiRegFreeStringPool.c)
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
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)UserPrefLanguages);
  }
  NtCurrentTeb()->UserPrefLanguages = 0LL;
  RtlpMuiRegFreeLanguageList(NtCurrentTeb()->PreferredLanguages);
  NtCurrentTeb()->PreferredLanguages = 0LL;
  result = NtCurrentTeb();
  if ( result->ResourceRetValue )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)NtCurrentTeb()->ResourceRetValue);
    result = NtCurrentTeb();
    result->ResourceRetValue = 0LL;
  }
  return result;
}
