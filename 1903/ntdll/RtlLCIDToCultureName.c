/*
 * XREFs of RtlLCIDToCultureName @ 0x180016330
 * Callers:
 *     sub_180013124 @ 0x180013124 (sub_180013124.c)
 *     sub_1800136CC @ 0x1800136CC (sub_1800136CC.c)
 *     sub_1800159B8 @ 0x1800159B8 (sub_1800159B8.c)
 *     sub_180015F28 @ 0x180015F28 (sub_180015F28.c)
 *     sub_180015FD0 @ 0x180015FD0 (sub_180015FD0.c)
 *     sub_180016414 @ 0x180016414 (sub_180016414.c)
 *     sub_180018A84 @ 0x180018A84 (sub_180018A84.c)
 *     RtlGetFileMUIPath @ 0x180059D90 (RtlGetFileMUIPath.c)
 *     sub_18006FDFC @ 0x18006FDFC (sub_18006FDFC.c)
 *     RtlpGetNameFromLangInfoNode @ 0x180081A40 (RtlpGetNameFromLangInfoNode.c)
 *     RtlGetUILanguageInfo @ 0x180083E70 (RtlGetUILanguageInfo.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008AB10 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     sub_1800EB91C @ 0x1800EB91C (sub_1800EB91C.c)
 *     sub_1800EBD90 @ 0x1800EBD90 (sub_1800EBD90.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC2E0 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800EC9F0 (RtlpConvertLCIDsToCultureNames.c)
 *     sub_1800ECD5C @ 0x1800ECD5C (sub_1800ECD5C.c)
 *     RtlpSetInstallLanguage @ 0x1800ED520 (RtlpSetInstallLanguage.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDBE0 (RtlpSetUserPreferredUILanguages.c)
 *     sub_1800FD708 @ 0x1800FD708 (sub_1800FD708.c)
 *     sub_1800FDDB4 @ 0x1800FDDB4 (sub_1800FDDB4.c)
 *     sub_1800FE0F8 @ 0x1800FE0F8 (sub_1800FE0F8.c)
 *     sub_1800FE558 @ 0x1800FE558 (sub_1800FE558.c)
 *     sub_180100128 @ 0x180100128 (sub_180100128.c)
 *     sub_18010058C @ 0x18010058C (sub_18010058C.c)
 *     sub_18010062C @ 0x18010062C (sub_18010062C.c)
 * Callees:
 *     sub_180016414 @ 0x180016414 (sub_180016414.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlLcidToLocaleName @ 0x180016AF0 (RtlLcidToLocaleName.c)
 *     sub_180016F74 @ 0x180016F74 (sub_180016F74.c)
 */

BOOLEAN __cdecl RtlLCIDToCultureName(LCID Lcid, PUNICODE_STRING String)
{
  BOOLEAN v2; // bl
  __int64 v6; // rcx
  __int64 v7; // rax
  USHORT Length; // si
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  __int16 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( Lcid && String && Lcid != 4096 )
  {
    if ( qword_180166098
      && (int)sub_180016414(qword_180166098, (unsigned __int16)Lcid, 0LL, &v10) >= 0
      && (v6 = 28LL * v10, v7 = *(_QWORD *)(*((_QWORD *)qword_180166098 + 3) + 16LL), *(__int16 *)(v7 + v6 + 6) > 0) )
    {
      RtlInitUnicodeString(
        &DestinationString,
        (PCWSTR)(*(_QWORD *)(*((_QWORD *)qword_180166098 + 4) + 24LL)
               + 2LL
               * *(__int16 *)(*(_QWORD *)(*((_QWORD *)qword_180166098 + 4) + 16LL) + 2LL * *(__int16 *)(v7 + v6 + 6))));
      Length = DestinationString.Length;
      if ( DestinationString.Length <= String->MaximumLength
        && (int)sub_180016F74(String->Buffer, String->MaximumLength, DestinationString.Buffer) >= 0 )
      {
        String->Length = Length;
        return 1;
      }
    }
    else if ( RtlLcidToLocaleName(Lcid, String, 2u, 0) >= 0 )
    {
      return 1;
    }
  }
  return v2;
}
