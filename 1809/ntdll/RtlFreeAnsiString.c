/*
 * XREFs of RtlFreeAnsiString @ 0x18002A5F0
 * Callers:
 *     sxsisol_RespectDotLocal @ 0x180002A5C (sxsisol_RespectDotLocal.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18000B060 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18000B588 (sxsisol_SearchActCtxForDllName.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180022CBC (LdrpSnapKernelBaseExtensions.c)
 *     RtlOpenCurrentUser @ 0x1800297E0 (RtlOpenCurrentUser.c)
 *     RtlDosSearchPath_Ustr @ 0x180029E60 (RtlDosSearchPath_Ustr.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180033504 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     LdrResSearchResource @ 0x180037450 (LdrResSearchResource.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18003F560 (RtlFormatCurrentUserKeyPath.c)
 *     RtlEqualDomainName @ 0x180046420 (RtlEqualDomainName.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1800480C0 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlpGetTokenNamedObjectPath @ 0x18004AB60 (RtlpGetTokenNamedObjectPath.c)
 *     RtlCreateServiceSid @ 0x18004B3A0 (RtlCreateServiceSid.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x18004B61C (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x18004B6A4 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlCreateVirtualAccountSid @ 0x18004CC20 (RtlCreateVirtualAccountSid.c)
 *     EtwpCreateFile @ 0x180051BEC (EtwpCreateFile.c)
 *     EtwpInitLoggerContext @ 0x180051D88 (EtwpInitLoggerContext.c)
 *     RtlpGetRegistryHandle @ 0x180053FCC (RtlpGetRegistryHandle.c)
 *     LdrpLogDllStateEx2 @ 0x180054588 (LdrpLogDllStateEx2.c)
 *     LdrpQuerySxSMUIFile @ 0x1800584B4 (LdrpQuerySxSMUIFile.c)
 *     EtwpFreeLoggerContext @ 0x18005A9DC (EtwpFreeLoggerContext.c)
 *     LdrpCodeAuthzInitialize @ 0x18007FC18 (LdrpCodeAuthzInitialize.c)
 *     LdrSetDllDirectory @ 0x1800835B0 (LdrSetDllDirectory.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x180084B78 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     EtwpGenerateFileName @ 0x1800888D4 (EtwpGenerateFileName.c)
 *     RtlpTpIoDllLoaded @ 0x18008BAB8 (RtlpTpIoDllLoaded.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800D0F84 (LdrpLogEtwDllSearchResults.c)
 *     LdrpCheckAppDirType @ 0x1800D266C (LdrpCheckAppDirType.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800E47CC (RtlpCreateIFEOKeyFilterKey.c)
 *     RtlIsNameInExpression @ 0x1800FB580 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1800FB630 (RtlIsNameInUnUpcasedExpression.c)
 *     EtwpFlushUmLogger @ 0x18010F3E0 (EtwpFlushUmLogger.c)
 *     EtwpUpdateUmLogger @ 0x18010F7A8 (EtwpUpdateUmLogger.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800178B0 (NtdllpFreeStringRoutine.c)
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
