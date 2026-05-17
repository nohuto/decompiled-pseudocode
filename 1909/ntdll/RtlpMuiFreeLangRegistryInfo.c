/*
 * XREFs of RtlpMuiFreeLangRegistryInfo @ 0x180005F10
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180013B50 (RtlGetThreadPreferredUILanguages.c)
 *     RtlGetUILanguageInfo @ 0x180084510 (RtlGetUILanguageInfo.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18008B30C (RtlUpdateProcessRegistryInfo.c)
 *     RtlpSetPreferredUILanguages @ 0x1800EDCD0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegFreeRegistryInfo @ 0x180008810 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpMuiFreeLangRegistryInfo(__int64 a1)
{
  unsigned int v2; // ebx

  if ( !a1 )
    return 3221225485LL;
  v2 = RtlpMuiRegFreeRegistryInfo(a1, 4095LL);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
  return v2;
}
