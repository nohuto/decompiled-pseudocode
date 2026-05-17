/*
 * XREFs of RtlpMuiRegFreeStringPool @ 0x18004CB74
 * Callers:
 *     RtlCleanUpTEBLangLists @ 0x18003A5D0 (RtlCleanUpTEBLangLists.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18004BA00 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpLoadLanguageConfigList @ 0x18004BC10 (RtlpLoadLanguageConfigList.c)
 *     RtlpUpdateTEBLanguage @ 0x180080C90 (RtlpUpdateTEBLanguage.c)
 *     RtlpMuiRegResizeStringPool @ 0x180101760 (RtlpMuiRegResizeStringPool.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpMuiRegFreeStringPool(unsigned __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return result;
}
