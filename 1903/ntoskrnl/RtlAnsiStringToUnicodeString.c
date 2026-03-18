/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x14063CAA0
 * Callers:
 *     IopCreateUnicodeFromAnsiBuffer @ 0x14018967C (IopCreateUnicodeFromAnsiBuffer.c)
 *     CmpInitializeLoadOptions @ 0x14018CF44 (CmpInitializeLoadOptions.c)
 *     HvlDebuggerSupportInitialize @ 0x14019DD68 (HvlDebuggerSupportInitialize.c)
 *     CmLogMcUpdateStatus @ 0x140280008 (CmLogMcUpdateStatus.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1402F8EC0 (PopEmUpdateDeviceConstraintCallback.c)
 *     PopEmModuleAddressMatchCallback @ 0x140301D60 (PopEmModuleAddressMatchCallback.c)
 *     ExpSystemErrorHandler2 @ 0x1405AE830 (ExpSystemErrorHandler2.c)
 *     RtlInt64ToUnicodeString @ 0x14063C9F0 (RtlInt64ToUnicodeString.c)
 *     RtlIntegerToUnicodeString @ 0x14063E630 (RtlIntegerToUnicodeString.c)
 *     ObCheckRefTraceProcess @ 0x140672700 (ObCheckRefTraceProcess.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1406984FC (CmpAddRemoveContainerToCLFSLog.c)
 *     PopAnsiStringToUnicodeString @ 0x14069E0AC (PopAnsiStringToUnicodeString.c)
 *     MiResolveImageReferences @ 0x14070EE20 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x14070F2B8 (MiSnapThunk.c)
 *     PiUEventHandleVetoEvent @ 0x14072C730 (PiUEventHandleVetoEvent.c)
 *     SepInitializationPhase1 @ 0x140758140 (SepInitializationPhase1.c)
 *     KsepStringAnsiToUnicode @ 0x14075932C (KsepStringAnsiToUnicode.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14075D508 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x14075D954 (CmpInitializeRegistryNode.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14075DCB0 (RtlCreateUnicodeStringFromAsciiz.c)
 *     CmpSetVersionData @ 0x14075E648 (CmpSetVersionData.c)
 *     CmpFindControlSet @ 0x14076516C (CmpFindControlSet.c)
 *     IopCopyBootLogRegistryToFile @ 0x140769BE0 (IopCopyBootLogRegistryToFile.c)
 *     PiGetDefaultMessageString @ 0x140779578 (PiGetDefaultMessageString.c)
 *     WmipQueryWmiRegInfo @ 0x14078A4F0 (WmipQueryWmiRegInfo.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140835168 (CmpCreateHwProfileFriendlyName.c)
 *     IopInitializeBootLogging @ 0x140853F14 (IopInitializeBootLogging.c)
 *     PnpLogVetoInformation @ 0x14086DA20 (PnpLogVetoInformation.c)
 *     MiLogFailedDriverLoad @ 0x14088AA58 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x1408FA35C (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x140912840 (NtQuerySystemEnvironmentValue.c)
 *     ExpCovReadFriendlyName @ 0x140915220 (ExpCovReadFriendlyName.c)
 *     AslStringAnsiToUnicode @ 0x140925EE0 (AslStringAnsiToUnicode.c)
 *     IopCreateArcNamesCd @ 0x1409F51F8 (IopCreateArcNamesCd.c)
 *     IopCreateArcNames @ 0x1409F5418 (IopCreateArcNames.c)
 *     IopMarkBootPartition @ 0x1409F5560 (IopMarkBootPartition.c)
 *     PipSmBiosGetString @ 0x1409F6CC0 (PipSmBiosGetString.c)
 *     EmpParseEntryTypes @ 0x1409FA004 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x1409FAE54 (EmpInfParseGetGuidFromName.c)
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 *     CmpInitializeDriverStores @ 0x140A0B094 (CmpInitializeDriverStores.c)
 *     CmpSetVideoBiosInformation @ 0x140A0C038 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A0C210 (CmpSetSystemBiosInformation.c)
 *     WmipDriverEntry @ 0x140A18760 (WmipDriverEntry.c)
 *     IopGetBootDiskInformation @ 0x140A39FEC (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x140A3A4B4 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140A3A730 (PipCriticalDeviceWaitCallback.c)
 *     RamdiskStart @ 0x140A3F940 (RamdiskStart.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlMultiByteToUnicodeN @ 0x14063CB90 (RtlMultiByteToUnicodeN.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x14063CC30 (RtlxAnsiStringToUnicodeSize.c)
 *     ExpAllocateStringRoutine @ 0x1406D4F60 (ExpAllocateStringRoutine.c)
 */

NTSTATUS __stdcall RtlAnsiStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCANSI_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  unsigned __int64 v7; // rcx
  ULONG v8; // edx
  int v9; // edi
  wchar_t *StringRoutine; // rax
  ULONG BytesInUnicodeString; // [rsp+78h] [rbp+20h] BYREF

  v6 = RtlxAnsiStringToUnicodeSize(SourceString);
  if ( v6 > 0xFFFE )
    return -1073741584;
  DestinationString->Length = v6 - 2;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v6;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v6);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else
  {
    v7 = (unsigned __int16)(v6 - 2) + 2LL;
    if ( v7 > DestinationString->MaximumLength || v7 < 2 )
      return -2147483643;
  }
  v9 = RtlMultiByteToUnicodeN(
         DestinationString->Buffer,
         DestinationString->Length,
         &BytesInUnicodeString,
         SourceString->Buffer,
         SourceString->Length);
  if ( v9 >= 0 )
  {
    DestinationString->Buffer[(unsigned __int64)BytesInUnicodeString >> 1] = 0;
    v9 = 0;
  }
  if ( v9 < 0 )
  {
    if ( AllocateDestinationString )
    {
      ExFreePoolWithTag(DestinationString->Buffer, v8);
      DestinationString->Buffer = 0LL;
    }
  }
  return v9;
}
