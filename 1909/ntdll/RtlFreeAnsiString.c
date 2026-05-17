/*
 * XREFs of RtlFreeAnsiString @ 0x180029BA0
 * Callers:
 *     EtwpGenerateFileName @ 0x180002740 (EtwpGenerateFileName.c)
 *     RtlpGetRegistryHandle @ 0x180003D40 (RtlpGetRegistryHandle.c)
 *     EtwpInitLoggerContext @ 0x18000471C (EtwpInitLoggerContext.c)
 *     EtwpCreateFile @ 0x180005268 (EtwpCreateFile.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x180009910 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x180009998 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlCreateServiceSid @ 0x18000B430 (RtlCreateServiceSid.c)
 *     RtlpGetTokenNamedObjectPath @ 0x18000BCF8 (RtlpGetTokenNamedObjectPath.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180013800 (RtlFormatCurrentUserKeyPath.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x180021450 (RtlDeriveCapabilitySidsFromName.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180021B60 (LdrpSnapKernelBaseExtensions.c)
 *     RtlDosSearchPath_Ustr @ 0x180025850 (RtlDosSearchPath_Ustr.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800263C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x1800267DC (sxsisol_SearchActCtxForDllName.c)
 *     RtlOpenCurrentUser @ 0x180029AC0 (RtlOpenCurrentUser.c)
 *     RtlEqualDomainName @ 0x18002AE10 (RtlEqualDomainName.c)
 *     LdrpLogDllStateEx2 @ 0x180032198 (LdrpLogDllStateEx2.c)
 *     LdrResSearchResource @ 0x180056800 (LdrResSearchResource.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180070E78 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     LdrpQuerySxSMUIFile @ 0x180077758 (LdrpQuerySxSMUIFile.c)
 *     LdrpCodeAuthzInitialize @ 0x18007AA5C (LdrpCodeAuthzInitialize.c)
 *     LdrSetDllDirectory @ 0x18007F5E0 (LdrSetDllDirectory.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x18008120C (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     RtlCreateVirtualAccountSid @ 0x180083050 (RtlCreateVirtualAccountSid.c)
 *     EtwpFreeLoggerContext @ 0x180087B98 (EtwpFreeLoggerContext.c)
 *     RtlpTpIoDllLoaded @ 0x180089228 (RtlpTpIoDllLoaded.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800CF854 (LdrpLogEtwDllSearchResults.c)
 *     LdrpCheckAppDirType @ 0x1800D0E3C (LdrpCheckAppDirType.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 *     sxsisol_RespectDotLocal @ 0x1800DE750 (sxsisol_RespectDotLocal.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800E1B6C (RtlpCreateIFEOKeyFilterKey.c)
 *     RtlIsNameInExpression @ 0x1800F4F50 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1800F5000 (RtlIsNameInUnUpcasedExpression.c)
 *     EtwpFlushUmLogger @ 0x18010D4B0 (EtwpFlushUmLogger.c)
 *     EtwpUpdateUmLogger @ 0x18010D9C8 (EtwpUpdateUmLogger.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180115E78 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x18006D930 (NtdllpFreeStringRoutine.c)
 */

void __stdcall RtlFreeAnsiString(PUNICODE_STRING UnicodeString)
{
  wchar_t *Buffer; // rcx

  Buffer = UnicodeString->Buffer;
  if ( Buffer )
  {
    NtdllpFreeStringRoutine(Buffer);
    *(_QWORD *)&UnicodeString->Length = 0LL;
    UnicodeString->Buffer = 0LL;
  }
}
