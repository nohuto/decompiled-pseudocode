/*
 * XREFs of RtlpMuiFreeLangRegistryInfo @ 0x18004CBA0
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x18003CC60 (RtlGetThreadPreferredUILanguages.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18004CD34 (RtlUpdateProcessRegistryInfo.c)
 *     RtlGetUILanguageInfo @ 0x1800EEC40 (RtlGetUILanguageInfo.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F0D10 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18004BA00 (RtlpMuiRegFreeRegistryInfo.c)
 */

__int64 __fastcall RtlpMuiFreeLangRegistryInfo(unsigned __int64 a1)
{
  unsigned int v2; // ebx

  if ( !a1 )
    return 3221225485LL;
  v2 = RtlpMuiRegFreeRegistryInfo(a1, 0xFFFu);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return v2;
}
