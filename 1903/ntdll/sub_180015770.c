/*
 * XREFs of sub_180015770 @ 0x180015770
 * Callers:
 *     RtlCleanUpTEBLangLists @ 0x180005DD0 (RtlCleanUpTEBLangLists.c)
 *     RtlpQueryDefaultUILanguage @ 0x180007B50 (RtlpQueryDefaultUILanguage.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x180008810 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180012A10 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180013B50 (RtlGetThreadPreferredUILanguages.c)
 *     sub_180015318 @ 0x180015318 (sub_180015318.c)
 *     sub_1800159B8 @ 0x1800159B8 (sub_1800159B8.c)
 *     sub_18006A9F8 @ 0x18006A9F8 (sub_18006A9F8.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180074270 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x18007B110 (RtlGetUserPreferredUILanguages.c)
 *     sub_18007C1B8 @ 0x18007C1B8 (sub_18007C1B8.c)
 *     RtlSetProcessPreferredUILanguages @ 0x1800849D0 (RtlSetProcessPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_180015770(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( (*(_BYTE *)(a1 + 40) & 0x40) == 0 )
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
  }
  return result;
}
