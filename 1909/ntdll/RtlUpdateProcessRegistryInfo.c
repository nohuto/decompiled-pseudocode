/*
 * XREFs of RtlUpdateProcessRegistryInfo @ 0x18008B30C
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180013B50 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008B1B0 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpSetPreferredUILanguages @ 0x1800EDCD0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiFreeLangRegistryInfo @ 0x180005F10 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x1800085C8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpInitMuiCriticalSection @ 0x180012D4C (RtlpInitMuiCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 */

__int64 RtlUpdateProcessRegistryInfo()
{
  int v0; // ebx
  __int64 v1; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( !g_RegInfo || *(_DWORD *)(g_RegInfo + 12) != MEMORY[0x7FFE03A4] )
  {
    v3 = 0LL;
    v0 = RtlpMuiRegCreateAndLoadRegistryInfo(&v3);
    if ( v0 >= 0 )
    {
      RtlpInitMuiCriticalSection();
      RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
      if ( g_RegInfo && *(_DWORD *)(g_RegInfo + 12) == MEMORY[0x7FFE03A4] )
      {
        RtlpMuiFreeLangRegistryInfo(v3);
      }
      else
      {
        v1 = v3;
        *(_QWORD *)(v3 + 104) = g_RegInfo;
        if ( g_RegInfo )
          *(_QWORD *)(v1 + 72) = *(_QWORD *)(g_RegInfo + 72);
        g_RegInfo = v1;
      }
      RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect);
    }
  }
  return (unsigned int)v0;
}
