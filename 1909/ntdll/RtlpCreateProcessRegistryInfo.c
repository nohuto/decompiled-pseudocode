/*
 * XREFs of RtlpCreateProcessRegistryInfo @ 0x1800141C0
 * Callers:
 *     RtlpQueryDefaultUILanguage @ 0x180007B50 (RtlpQueryDefaultUILanguage.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180012A10 (RtlSetThreadPreferredUILanguages.c)
 *     LdrpSetThreadPreferredLangList @ 0x180013968 (LdrpSetThreadPreferredLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180013B50 (RtlGetThreadPreferredUILanguages.c)
 *     RtlGetFileMUIPath @ 0x180059E30 (RtlGetFileMUIPath.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x180073650 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlGetSystemPreferredUILanguages @ 0x1800746F0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x18007B7B0 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetUILanguageInfo @ 0x180084510 (RtlGetUILanguageInfo.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180085070 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetProcessPreferredUILanguages @ 0x180089150 (RtlGetProcessPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008B1B0 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC3D0 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800ED610 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800EDCD0 (RtlpSetPreferredUILanguages.c)
 *     RtlpRefreshCachedUILanguage @ 0x1800FF4A0 (RtlpRefreshCachedUILanguage.c)
 * Callees:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x1800085C8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpInitMuiCriticalSection @ 0x180012D4C (RtlpInitMuiCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall RtlpCreateProcessRegistryInfo(_QWORD *a1)
{
  PVOID v1; // rax
  PVOID v2; // rbx
  int RegistryInfo; // edi

  v1 = g_RegInfo;
  v2 = 0LL;
  RegistryInfo = 0;
  if ( !g_RegInfo )
  {
    RtlpInitMuiCriticalSection();
    RtlEnterCriticalSection(&RegistryInfoCritSect);
    if ( !g_RegInfo )
      RegistryInfo = RtlpMuiRegCreateAndLoadRegistryInfo(&g_RegInfo);
    RtlLeaveCriticalSection(&RegistryInfoCritSect);
    v1 = g_RegInfo;
  }
  if ( a1 )
  {
    if ( RegistryInfo >= 0 )
      v2 = v1;
    *a1 = v2;
  }
  return (unsigned int)RegistryInfo;
}
