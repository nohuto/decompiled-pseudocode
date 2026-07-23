/*
 * XREFs of RtlpMuiFreeLangRegistryInfo @ 0x180005F10
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180013B50 (RtlGetThreadPreferredUILanguages.c)
 *     RtlGetUILanguageInfo @ 0x180083E70 (RtlGetUILanguageInfo.c)
 *     sub_18008AC6C @ 0x18008AC6C (sub_18008AC6C.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDBE0 (RtlpSetUserPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegFreeRegistryInfo @ 0x180008810 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpMuiFreeLangRegistryInfo(PVOID BaseAddress)
{
  unsigned int v2; // ebx

  if ( !BaseAddress )
    return 3221225485LL;
  v2 = RtlpMuiRegFreeRegistryInfo(BaseAddress, 4095LL);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return v2;
}
