/*
 * XREFs of RtlpMuiRegFreeStringPool @ 0x180005F60
 * Callers:
 *     RtlCleanUpTEBLangLists @ 0x180005DD0 (RtlCleanUpTEBLangLists.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x180008810 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpLoadLanguageConfigList @ 0x180008A20 (RtlpLoadLanguageConfigList.c)
 *     RtlpUpdateTEBLanguage @ 0x18007C858 (RtlpUpdateTEBLanguage.c)
 *     RtlpMuiRegResizeStringPool @ 0x1800FEF0C (RtlpMuiRegResizeStringPool.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpMuiRegFreeStringPool(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
  return result;
}
