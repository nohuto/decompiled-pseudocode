/*
 * XREFs of RtlAppendUnicodeToString @ 0x180015120
 * Callers:
 *     RtlpGetRegistryHandle @ 0x180003D40 (RtlpGetRegistryHandle.c)
 *     RtlpGetTokenNamedObjectPath @ 0x18000BCF8 (RtlpGetTokenNamedObjectPath.c)
 *     GetOverlayRootFolder @ 0x180012E38 (GetOverlayRootFolder.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180013800 (RtlFormatCurrentUserKeyPath.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpFindKnownDll @ 0x18002934C (LdrpFindKnownDll.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x18005A44C (RtlpGetMUIRedirectedFilePathInternal.c)
 *     GetOverlayFilePath @ 0x18005BC10 (GetOverlayFilePath.c)
 *     WerpGlobalFlagsForProcess @ 0x18006B88C (WerpGlobalFlagsForProcess.c)
 *     LdrpCodeAuthzInitialize @ 0x18007AA5C (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180081390 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpLoadWow64 @ 0x1800822AC (LdrpLoadWow64.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800D9738 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DA090 (AVrfpLoadAndInitializeProvider.c)
 *     WerEscalationLazyInit @ 0x1800DD0D0 (WerEscalationLazyInit.c)
 *     LdrpMUIEtwOutput @ 0x1800E062C (LdrpMUIEtwOutput.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180115E78 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

__int64 __fastcall RtlAppendUnicodeToString(unsigned __int16 *a1, _WORD *a2)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // esi
  void *v5; // r14

  if ( !a2 )
    return 0LL;
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  if ( v3 <= 0x7FFE )
  {
    v4 = (unsigned __int16)(2 * v3);
    if ( *a1 + v4 <= a1[1] )
    {
      v5 = (void *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1));
      memmove(v5, a2, (unsigned __int16)(2 * v3));
      *a1 += v4;
      if ( (unsigned int)*a1 + 1 < a1[1] )
        *((_WORD *)v5 + ((unsigned __int64)v4 >> 1)) = 0;
      return 0LL;
    }
  }
  return 3221225507LL;
}
