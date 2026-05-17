/*
 * XREFs of memmove @ 0x1800A32C0
 * Callers:
 *     RtlQueryImageMitigationPolicy @ 0x180001140 (RtlQueryImageMitigationPolicy.c)
 *     RtlLargeIntegerToChar @ 0x1800018F0 (RtlLargeIntegerToChar.c)
 *     RtlNtPathNameToDosPathName @ 0x1800021A0 (RtlNtPathNameToDosPathName.c)
 *     sub_180003870 @ 0x180003870 (sub_180003870.c)
 *     sub_180003C3C @ 0x180003C3C (sub_180003C3C.c)
 *     sub_1800041A8 @ 0x1800041A8 (sub_1800041A8.c)
 *     sub_180004BA8 @ 0x180004BA8 (sub_180004BA8.c)
 *     sub_1800090D4 @ 0x1800090D4 (sub_1800090D4.c)
 *     sub_180009998 @ 0x180009998 (sub_180009998.c)
 *     sub_18000B0D4 @ 0x18000B0D4 (sub_18000B0D4.c)
 *     A_SHAUpdate @ 0x18000C640 (A_SHAUpdate.c)
 *     sub_18000D8F4 @ 0x18000D8F4 (sub_18000D8F4.c)
 *     sub_18000F5AC @ 0x18000F5AC (sub_18000F5AC.c)
 *     sub_18000FB7C @ 0x18000FB7C (sub_18000FB7C.c)
 *     sub_1800100C4 @ 0x1800100C4 (sub_1800100C4.c)
 *     sub_18001167C @ 0x18001167C (sub_18001167C.c)
 *     sub_180011C80 @ 0x180011C80 (sub_180011C80.c)
 *     sub_180012128 @ 0x180012128 (sub_180012128.c)
 *     sub_180012DAC @ 0x180012DAC (sub_180012DAC.c)
 *     sub_180014518 @ 0x180014518 (sub_180014518.c)
 *     sub_180014840 @ 0x180014840 (sub_180014840.c)
 *     RtlCopySid @ 0x180014AC0 (RtlCopySid.c)
 *     RtlCopyUnicodeString @ 0x1800150A0 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     sub_1800167FC @ 0x1800167FC (sub_1800167FC.c)
 *     RtlCultureNameToLCID @ 0x1800168B0 (RtlCultureNameToLCID.c)
 *     sub_180016CBC @ 0x180016CBC (sub_180016CBC.c)
 *     sub_180019D38 @ 0x180019D38 (sub_180019D38.c)
 *     sub_18001A0D8 @ 0x18001A0D8 (sub_18001A0D8.c)
 *     RtlQueryEnvironmentVariable @ 0x18001A270 (RtlQueryEnvironmentVariable.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     sub_180020E1C @ 0x180020E1C (sub_180020E1C.c)
 *     RtlIntegerToChar @ 0x1800212C0 (RtlIntegerToChar.c)
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     sub_180025788 @ 0x180025788 (sub_180025788.c)
 *     sub_18002580C @ 0x18002580C (sub_18002580C.c)
 *     RtlDosSearchPath_Ustr @ 0x180025850 (RtlDosSearchPath_Ustr.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     sub_1800267DC @ 0x1800267DC (sub_1800267DC.c)
 *     sub_1800276A8 @ 0x1800276A8 (sub_1800276A8.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180029690 (RtlMultiAppendUnicodeStringBuffer.c)
 *     sub_180029CEC @ 0x180029CEC (sub_180029CEC.c)
 *     sub_18002AB70 @ 0x18002AB70 (sub_18002AB70.c)
 *     sub_18002B144 @ 0x18002B144 (sub_18002B144.c)
 *     RtlIpv6StringToAddressW @ 0x18002BAA0 (RtlIpv6StringToAddressW.c)
 *     RtlCreateUnicodeString @ 0x18002BE80 (RtlCreateUnicodeString.c)
 *     sub_18002BFC0 @ 0x18002BFC0 (sub_18002BFC0.c)
 *     sub_18002C944 @ 0x18002C944 (sub_18002C944.c)
 *     RtlInitializeResource @ 0x1800338D0 (RtlInitializeResource.c)
 *     sub_180033A40 @ 0x180033A40 (sub_180033A40.c)
 *     sub_1800356E0 @ 0x1800356E0 (sub_1800356E0.c)
 *     sub_180043550 @ 0x180043550 (sub_180043550.c)
 *     sub_180045F38 @ 0x180045F38 (sub_180045F38.c)
 *     sub_180046E9C @ 0x180046E9C (sub_180046E9C.c)
 *     sub_1800484A8 @ 0x1800484A8 (sub_1800484A8.c)
 *     sub_180048958 @ 0x180048958 (sub_180048958.c)
 *     sub_18004B6C4 @ 0x18004B6C4 (sub_18004B6C4.c)
 *     sub_18004B7B4 @ 0x18004B7B4 (sub_18004B7B4.c)
 *     sub_18004BD54 @ 0x18004BD54 (sub_18004BD54.c)
 *     CsrCaptureMessageString @ 0x18004C0D0 (CsrCaptureMessageString.c)
 *     CsrCaptureMessageBuffer @ 0x18004C290 (CsrCaptureMessageBuffer.c)
 *     sub_18004E460 @ 0x18004E460 (sub_18004E460.c)
 *     RtlIpv6AddressToStringExW @ 0x180051AC0 (RtlIpv6AddressToStringExW.c)
 *     RtlFormatMessageEx @ 0x180051EE0 (RtlFormatMessageEx.c)
 *     sub_18005300C @ 0x18005300C (sub_18005300C.c)
 *     sub_180053DE8 @ 0x180053DE8 (sub_180053DE8.c)
 *     sub_180054AFC @ 0x180054AFC (sub_180054AFC.c)
 *     sub_1800558E4 @ 0x1800558E4 (sub_1800558E4.c)
 *     sub_180055D84 @ 0x180055D84 (sub_180055D84.c)
 *     sub_18005611C @ 0x18005611C (sub_18005611C.c)
 *     LdrResSearchResource @ 0x180056760 (LdrResSearchResource.c)
 *     sub_180056AC0 @ 0x180056AC0 (sub_180056AC0.c)
 *     RtlGetFileMUIPath @ 0x180059D90 (RtlGetFileMUIPath.c)
 *     sub_18005A3AC @ 0x18005A3AC (sub_18005A3AC.c)
 *     sub_18005AAF0 @ 0x18005AAF0 (sub_18005AAF0.c)
 *     RtlQueryAtomInAtomTable @ 0x18005B120 (RtlQueryAtomInAtomTable.c)
 *     RtlAddAtomToAtomTable_0 @ 0x18005B32C (RtlAddAtomToAtomTable_0.c)
 *     sub_18005BEE0 @ 0x18005BEE0 (sub_18005BEE0.c)
 *     sub_18005C3BC @ 0x18005C3BC (sub_18005C3BC.c)
 *     sub_18005C8BC @ 0x18005C8BC (sub_18005C8BC.c)
 *     sub_18005C988 @ 0x18005C988 (sub_18005C988.c)
 *     RtlCreateEnvironmentEx @ 0x18005CB80 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18005CDD0 (RtlSetEnvironmentVar.c)
 *     MD5Update @ 0x180061070 (MD5Update.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x180063FD0 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlInsertElementGenericTableFull @ 0x180064780 (RtlInsertElementGenericTableFull.c)
 *     sub_1800667F8 @ 0x1800667F8 (sub_1800667F8.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x1800674F0 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     RtlCopySecurityDescriptor @ 0x180067DE0 (RtlCopySecurityDescriptor.c)
 *     RtlSelfRelativeToAbsoluteSD @ 0x180067EA0 (RtlSelfRelativeToAbsoluteSD.c)
 *     RtlMakeSelfRelativeSD @ 0x180068080 (RtlMakeSelfRelativeSD.c)
 *     sub_18006B63C @ 0x18006B63C (sub_18006B63C.c)
 *     sub_18006BB94 @ 0x18006BB94 (sub_18006BB94.c)
 *     sub_18006D83C @ 0x18006D83C (sub_18006D83C.c)
 *     RtlGetPersistedStateLocation @ 0x18006FCC0 (RtlGetPersistedStateLocation.c)
 *     sub_18006FDFC @ 0x18006FDFC (sub_18006FDFC.c)
 *     sub_180070290 @ 0x180070290 (sub_180070290.c)
 *     sub_180070C28 @ 0x180070C28 (sub_180070C28.c)
 *     sub_1800711E8 @ 0x1800711E8 (sub_1800711E8.c)
 *     sub_180071608 @ 0x180071608 (sub_180071608.c)
 *     sub_180071730 @ 0x180071730 (sub_180071730.c)
 *     LdrAddLoadAsDataTable @ 0x180072080 (LdrAddLoadAsDataTable.c)
 *     RtlConvertDeviceFamilyInfoToString @ 0x180074C70 (RtlConvertDeviceFamilyInfoToString.c)
 *     sub_180076000 @ 0x180076000 (sub_180076000.c)
 *     sub_180076258 @ 0x180076258 (sub_180076258.c)
 *     RtlGetCurrentDirectory_U @ 0x1800767A0 (RtlGetCurrentDirectory_U.c)
 *     sub_180076A04 @ 0x180076A04 (sub_180076A04.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180077860 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlDuplicateUnicodeString @ 0x180077A90 (RtlDuplicateUnicodeString.c)
 *     RtlIpv4AddressToStringExW @ 0x180077FB0 (RtlIpv4AddressToStringExW.c)
 *     LdrQueryImageFileKeyOption @ 0x180079A80 (LdrQueryImageFileKeyOption.c)
 *     sub_180079ED0 @ 0x180079ED0 (sub_180079ED0.c)
 *     RtlIpv6StringToAddressA @ 0x18007A930 (RtlIpv6StringToAddressA.c)
 *     RtlpNtQueryValueKey @ 0x18007AD10 (RtlpNtQueryValueKey.c)
 *     sub_18007B540 @ 0x18007B540 (sub_18007B540.c)
 *     sub_18007C668 @ 0x18007C668 (sub_18007C668.c)
 *     sub_18007CDAC @ 0x18007CDAC (sub_18007CDAC.c)
 *     sub_18007E3F0 @ 0x18007E3F0 (sub_18007E3F0.c)
 *     RtlSetProtectedPolicy @ 0x18007F090 (RtlSetProtectedPolicy.c)
 *     RtlpEnsureBufferSize @ 0x18007F3B0 (RtlpEnsureBufferSize.c)
 *     RtlpNtEnumerateSubKey @ 0x18007F700 (RtlpNtEnumerateSubKey.c)
 *     RtlAddAttributeActionToRXact @ 0x18007FF90 (RtlAddAttributeActionToRXact.c)
 *     RtlCreateBoundaryDescriptor @ 0x180080740 (RtlCreateBoundaryDescriptor.c)
 *     RtlSetEnvironmentStrings @ 0x180080C20 (RtlSetEnvironmentStrings.c)
 *     sub_180082368 @ 0x180082368 (sub_180082368.c)
 *     sub_180082DD0 @ 0x180082DD0 (sub_180082DD0.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x1800836A0 (RtlpMergeSecurityAttributeInformation.c)
 *     sub_180084200 @ 0x180084200 (sub_180084200.c)
 *     RtlCopyString @ 0x1800844A0 (RtlCopyString.c)
 *     sub_18008567C @ 0x18008567C (sub_18008567C.c)
 *     sub_1800859B4 @ 0x1800859B4 (sub_1800859B4.c)
 *     sub_180085AF0 @ 0x180085AF0 (sub_180085AF0.c)
 *     RtlReplaceSystemDirectoryInPath @ 0x180085FA0 (RtlReplaceSystemDirectoryInPath.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x180086610 (RtlCreateSystemVolumeInformationFolder.c)
 *     sub_180086A04 @ 0x180086A04 (sub_180086A04.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x180087090 (RtlSelfRelativeToAbsoluteSD2.c)
 *     sub_18008745C @ 0x18008745C (sub_18008745C.c)
 *     sub_180088680 @ 0x180088680 (sub_180088680.c)
 *     sub_1800891A4 @ 0x1800891A4 (sub_1800891A4.c)
 *     sub_1800892EC @ 0x1800892EC (sub_1800892EC.c)
 *     RtlDosSearchPath_U @ 0x18008A1B0 (RtlDosSearchPath_U.c)
 *     sub_18008A700 @ 0x18008A700 (sub_18008A700.c)
 *     RtlConnectToSm @ 0x18008AD10 (RtlConnectToSm.c)
 *     LdrAddDllDirectory @ 0x18008C200 (LdrAddDllDirectory.c)
 *     RtlInitializeNtUserPfn @ 0x18008C500 (RtlInitializeNtUserPfn.c)
 *     sub_180094CC0 @ 0x180094CC0 (sub_180094CC0.c)
 *     memcpy_s @ 0x180097970 (memcpy_s.c)
 *     memmove_s @ 0x180097A10 (memmove_s.c)
 *     sub_18009A918 @ 0x18009A918 (sub_18009A918.c)
 *     sub_1800CBCD0 @ 0x1800CBCD0 (sub_1800CBCD0.c)
 *     sub_1800CE068 @ 0x1800CE068 (sub_1800CE068.c)
 *     sub_1800CEDF8 @ 0x1800CEDF8 (sub_1800CEDF8.c)
 *     sub_1800D02E4 @ 0x1800D02E4 (sub_1800D02E4.c)
 *     sub_1800D11F4 @ 0x1800D11F4 (sub_1800D11F4.c)
 *     sub_1800D16F0 @ 0x1800D16F0 (sub_1800D16F0.c)
 *     sub_1800D4B50 @ 0x1800D4B50 (sub_1800D4B50.c)
 *     sub_1800D5064 @ 0x1800D5064 (sub_1800D5064.c)
 *     RtlComputePrivatizedDllName_U @ 0x1800D59C0 (RtlComputePrivatizedDllName_U.c)
 *     RtlQuerySecurityObject @ 0x1800D6FD0 (RtlQuerySecurityObject.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D7300 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D7490 (RtlQueryProcessHeapInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800D7B10 (RtlSetProcessDebugInformation.c)
 *     sub_1800D7D40 @ 0x1800D7D40 (sub_1800D7D40.c)
 *     sub_1800D8B78 @ 0x1800D8B78 (sub_1800D8B78.c)
 *     RtlWerpReportException_0 @ 0x1800DB7E4 (RtlWerpReportException_0.c)
 *     LdrUpdatePackageSearchPath @ 0x1800DDB00 (LdrUpdatePackageSearchPath.c)
 *     sub_1800DDDE8 @ 0x1800DDDE8 (sub_1800DDDE8.c)
 *     sub_1800DE4C8 @ 0x1800DE4C8 (sub_1800DE4C8.c)
 *     sub_1800DE690 @ 0x1800DE690 (sub_1800DE690.c)
 *     sub_1800DEB44 @ 0x1800DEB44 (sub_1800DEB44.c)
 *     sub_1800DEDD4 @ 0x1800DEDD4 (sub_1800DEDD4.c)
 *     sub_1800DF114 @ 0x1800DF114 (sub_1800DF114.c)
 *     sub_1800E00A8 @ 0x1800E00A8 (sub_1800E00A8.c)
 *     sub_1800E0728 @ 0x1800E0728 (sub_1800E0728.c)
 *     sub_1800E0820 @ 0x1800E0820 (sub_1800E0820.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E0BA0 (RtlSetImageMitigationPolicy.c)
 *     sub_1800E1DF8 @ 0x1800E1DF8 (sub_1800E1DF8.c)
 *     sub_1800E2A9C @ 0x1800E2A9C (sub_1800E2A9C.c)
 *     RtlReplaceSidInSd @ 0x1800E4D10 (RtlReplaceSidInSd.c)
 *     sub_1800E52F0 @ 0x1800E52F0 (sub_1800E52F0.c)
 *     RtlConvertToAutoInheritSecurityObject_0 @ 0x1800E5B2C (RtlConvertToAutoInheritSecurityObject_0.c)
 *     sub_1800E6098 @ 0x1800E6098 (sub_1800E6098.c)
 *     sub_1800E62D4 @ 0x1800E62D4 (sub_1800E62D4.c)
 *     RtlAddAccessFilterAce @ 0x1800E6EC0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E7240 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800E7840 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800E7BB0 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlAppendAsciizToString @ 0x1800E8D60 (RtlAppendAsciizToString.c)
 *     RtlAppendStringToString @ 0x1800E8DD0 (RtlAppendStringToString.c)
 *     RtlCopyBitMap @ 0x1800E8F50 (RtlCopyBitMap.c)
 *     RtlExtractBitMap @ 0x1800E9160 (RtlExtractBitMap.c)
 *     sub_1800EA2A8 @ 0x1800EA2A8 (sub_1800EA2A8.c)
 *     sub_1800EA800 @ 0x1800EA800 (sub_1800EA800.c)
 *     sub_1800EAFC8 @ 0x1800EAFC8 (sub_1800EAFC8.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1800EB340 (RtlQueryRegistryValueWithFallback.c)
 *     sub_1800EB4E0 @ 0x1800EB4E0 (sub_1800EB4E0.c)
 *     sub_1800EBE9C @ 0x1800EBE9C (sub_1800EBE9C.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC2E0 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800EC9F0 (RtlpConvertLCIDsToCultureNames.c)
 *     sub_1800ED05C @ 0x1800ED05C (sub_1800ED05C.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDBE0 (RtlpSetUserPreferredUILanguages.c)
 *     sub_1800EFFA0 @ 0x1800EFFA0 (sub_1800EFFA0.c)
 *     sub_1800F02D0 @ 0x1800F02D0 (sub_1800F02D0.c)
 *     sub_1800F0E40 @ 0x1800F0E40 (sub_1800F0E40.c)
 *     sub_1800F46F8 @ 0x1800F46F8 (sub_1800F46F8.c)
 *     RtlIpv4AddressToStringExA @ 0x1800F5810 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x1800F58D0 (RtlIpv6AddressToStringExA.c)
 *     RtlWriteNonVolatileMemory @ 0x1800F6030 (RtlWriteNonVolatileMemory.c)
 *     RtlGenerate8dot3Name @ 0x1800F62E0 (RtlGenerate8dot3Name.c)
 *     sub_1800F6F14 @ 0x1800F6F14 (sub_1800F6F14.c)
 *     sub_1800F8464 @ 0x1800F8464 (sub_1800F8464.c)
 *     sub_1800F88D8 @ 0x1800F88D8 (sub_1800F88D8.c)
 *     RtlRemoteCall @ 0x1800F8C90 (RtlRemoteCall.c)
 *     sub_1800FB3AC @ 0x1800FB3AC (sub_1800FB3AC.c)
 *     sub_1800FC3A4 @ 0x1800FC3A4 (sub_1800FC3A4.c)
 *     sub_1800FE790 @ 0x1800FE790 (sub_1800FE790.c)
 *     sub_1800FEE2C @ 0x1800FEE2C (sub_1800FEE2C.c)
 *     sub_1801023D0 @ 0x1801023D0 (sub_1801023D0.c)
 *     sub_180103FDC @ 0x180103FDC (sub_180103FDC.c)
 *     sub_180104440 @ 0x180104440 (sub_180104440.c)
 *     sub_180106798 @ 0x180106798 (sub_180106798.c)
 *     sub_18010825C @ 0x18010825C (sub_18010825C.c)
 *     sub_1801087F0 @ 0x1801087F0 (sub_1801087F0.c)
 *     sub_180108990 @ 0x180108990 (sub_180108990.c)
 *     sub_18010AD30 @ 0x18010AD30 (sub_18010AD30.c)
 *     MD4Update @ 0x18010C8E0 (MD4Update.c)
 *     EtwTraceEventInstance @ 0x18010CE90 (EtwTraceEventInstance.c)
 *     sub_18010DA90 @ 0x18010DA90 (sub_18010DA90.c)
 *     sub_18010DD34 @ 0x18010DD34 (sub_18010DD34.c)
 *     sub_18010E144 @ 0x18010E144 (sub_18010E144.c)
 *     sub_18010E320 @ 0x18010E320 (sub_18010E320.c)
 *     sub_18010E4F4 @ 0x18010E4F4 (sub_18010E4F4.c)
 *     sub_18010E8E8 @ 0x18010E8E8 (sub_18010E8E8.c)
 *     sub_180111530 @ 0x180111530 (sub_180111530.c)
 *     sub_1801118C0 @ 0x1801118C0 (sub_1801118C0.c)
 *     sub_1801122B0 @ 0x1801122B0 (sub_1801122B0.c)
 *     sub_1801155A4 @ 0x1801155A4 (sub_1801155A4.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  __m128i *v3; // r11
  bool v4; // cf
  unsigned __int64 v5; // rdx
  size_t k; // r9
  __int64 v7; // rax
  size_t m; // r8
  char v9; // al
  unsigned int v11; // ecx
  size_t v12; // r9
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  int v15; // eax
  int v16; // eax
  __m128i v17; // xmm1
  __m128i v18; // xmm1
  __m128i *v19; // rcx
  size_t i; // r9
  __int64 v21; // rax
  size_t j; // r8
  __int8 v23; // al
  __m128i *v24; // rax
  __int64 v25; // rcx
  size_t v26; // r9
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  int v29; // eax
  int v30; // eax
  __m128i v31; // xmm1
  __m128i v32; // xmm1
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v3 = (__m128i *)a1;
  v4 = Src < a1;
  v5 = (_BYTE *)Src - (_BYTE *)a1;
  if ( v4 )
  {
    v19 = (__m128i *)((char *)a1 + Size);
    if ( Size >= 0x4F )
    {
      if ( v5 > 0xFFFFFFFFFFFFFFF0uLL )
      {
        for ( ; ((unsigned __int8)v19 & 0xF) != 0; v19->m128i_i8[0] = v19->m128i_i8[v5] )
        {
          v19 = (__m128i *)((char *)v19 - 1);
          --Size;
        }
      }
      else
      {
        v24 = v19;
        v25 = (unsigned __int8)v19 & 0xF;
        if ( (_DWORD)v25 )
        {
          Size -= (unsigned int)v25;
          v25 = -(__int64)(unsigned int)v25;
          v24[-1] = _mm_loadu_si128((__m128i *)((char *)v24 + v5 - 16));
        }
        v19 = (__m128i *)((char *)v24 + v25);
      }
      v26 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 > 0xFFFFFFFFFFFFFE00uLL )
        goto LABEL_38;
      do
      {
        v29 = 4;
        do
        {
          v19 -= 8;
          _mm_prefetch(&v19->m128i_i8[v5], 0);
          _mm_prefetch(&v19[4].m128i_i8[v5], 0);
          --v29;
        }
        while ( v29 );
        v19 += 32;
        v30 = 8;
        do
        {
          v31 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          _mm_stream_si128(v19 - 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16)));
          _mm_stream_si128(v19 - 2, v31);
          v19 -= 4;
          v32 = _mm_loadu_si128((__m128i *)((char *)v19 + v5));
          _mm_stream_si128(v19 + 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 + 16)));
          _mm_stream_si128(v19, v32);
          --v30;
        }
        while ( v30 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v26 = Size >> 5;
      if ( Size >> 5 )
      {
LABEL_38:
        Size &= 0x1Fu;
        do
        {
          v27 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16));
          v28 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          v19 -= 2;
          v19[1] = v27;
          *v19 = v28;
          --v26;
        }
        while ( v26 );
      }
    }
    for ( i = Size >> 3; i; v19->m128i_i64[0] = v21 )
    {
      v21 = *(__int64 *)((char *)&v19->m128i_i64[-1] + v5);
      v19 = (__m128i *)((char *)v19 - 8);
      --i;
    }
    for ( j = Size & 7; j; v19->m128i_i8[0] = v23 )
    {
      v23 = v19->m128i_i8[v5 - 1];
      v19 = (__m128i *)((char *)v19 - 1);
      --j;
    }
    return v3;
  }
  else
  {
    if ( Size >= 0x4F )
    {
      if ( v5 < 0x10 )
      {
        for ( ; ((unsigned __int8)a1 & 0xF) != 0; a1 = (char *)a1 + 1 )
        {
          --Size;
          *(_BYTE *)a1 = *((_BYTE *)a1 + v5);
        }
      }
      else
      {
        v11 = -(int)a1 & 0xF;
        if ( v11 )
        {
          Size -= v11;
          *v3 = _mm_loadu_si128((__m128i *)((char *)v3 + v5));
        }
        a1 = &v3->m128i_i8[v11];
      }
      v12 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 < 0x200 )
        goto LABEL_13;
      do
      {
        v15 = 4;
        do
        {
          _mm_prefetch((const char *)a1 + v5, 0);
          _mm_prefetch((const char *)a1 + v5 + 64, 0);
          a1 = (char *)a1 + 128;
          --v15;
        }
        while ( v15 );
        a1 = (char *)a1 - 512;
        v16 = 8;
        do
        {
          v17 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          _mm_stream_si128((__m128i *)a1, _mm_loadu_si128((const __m128i *)((char *)a1 + v5)));
          _mm_stream_si128((__m128i *)a1 + 1, v17);
          a1 = (char *)a1 + 64;
          v18 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 16));
          _mm_stream_si128((__m128i *)a1 - 2, _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 32)));
          _mm_stream_si128((__m128i *)a1 - 1, v18);
          --v16;
        }
        while ( v16 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v12 = Size >> 5;
      if ( Size >> 5 )
      {
LABEL_13:
        Size &= 0x1Fu;
        do
        {
          v13 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5));
          v14 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          a1 = (char *)a1 + 32;
          *((__m128i *)a1 - 2) = v13;
          *((__m128i *)a1 - 1) = v14;
          --v12;
        }
        while ( v12 );
      }
    }
    for ( k = Size >> 3; k; *((_QWORD *)a1 - 1) = v7 )
    {
      v7 = *(_QWORD *)((char *)a1 + v5);
      a1 = (char *)a1 + 8;
      --k;
    }
    for ( m = Size & 7; m; *((char *)a1 - 1) = v9 )
    {
      v9 = *((_BYTE *)a1 + v5);
      a1 = (char *)a1 + 1;
      --m;
    }
    return v3;
  }
}
