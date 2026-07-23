/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x1405ABDA0
 * Callers:
 *     CmpInitializeLoadOptions @ 0x140180EE8 (CmpInitializeLoadOptions.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x14018E0D0 (IopCreateUnicodeFromAnsiBuffer.c)
 *     HvlDebuggerSupportInitialize @ 0x140194054 (HvlDebuggerSupportInitialize.c)
 *     CmLogMcUpdateStatus @ 0x14026C798 (CmLogMcUpdateStatus.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1402DC900 (PopEmUpdateDeviceConstraintCallback.c)
 *     PopEmModuleAddressMatchCallback @ 0x1402E53E0 (PopEmModuleAddressMatchCallback.c)
 *     ExpSystemErrorHandler2 @ 0x14057F930 (ExpSystemErrorHandler2.c)
 *     PopAnsiStringToUnicodeString @ 0x140589D18 (PopAnsiStringToUnicodeString.c)
 *     RtlIntegerToUnicodeString @ 0x1405A9E00 (RtlIntegerToUnicodeString.c)
 *     RtlInt64ToUnicodeString @ 0x1405ABD00 (RtlInt64ToUnicodeString.c)
 *     PspInsertProcess @ 0x14060A3A8 (PspInsertProcess.c)
 *     MiResolveImageReferences @ 0x14067A170 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x14067A5F4 (MiSnapThunk.c)
 *     PiUEventHandleVetoEvent @ 0x140700A70 (PiUEventHandleVetoEvent.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140707814 (CmpAddRemoveContainerToCLFSLog.c)
 *     SepInitializationPhase1 @ 0x1407281C4 (SepInitializationPhase1.c)
 *     KsepStringAnsiToUnicode @ 0x1407295A4 (KsepStringAnsiToUnicode.c)
 *     CmpAddProcessorConfigurationEntry @ 0x140732FD0 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x1407333E8 (CmpInitializeRegistryNode.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14073370C (RtlCreateUnicodeStringFromAsciiz.c)
 *     CmpSetVersionData @ 0x140734268 (CmpSetVersionData.c)
 *     CmpFindControlSet @ 0x14073E4AC (CmpFindControlSet.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407468F8 (IopCopyBootLogRegistryToFile.c)
 *     PiGetDefaultMessageString @ 0x1407549CC (PiGetDefaultMessageString.c)
 *     WmipQueryWmiRegInfo @ 0x140764FF0 (WmipQueryWmiRegInfo.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1407FCF58 (CmpCreateHwProfileFriendlyName.c)
 *     IopInitializeBootLogging @ 0x14081B214 (IopInitializeBootLogging.c)
 *     PnpLogVetoInformation @ 0x140834330 (PnpLogVetoInformation.c)
 *     MiLogFailedDriverLoad @ 0x14084FBC8 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x1408BEA40 (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x1408D6240 (NtQuerySystemEnvironmentValue.c)
 *     ExpCovReadFriendlyName @ 0x1408D9298 (ExpCovReadFriendlyName.c)
 *     AslStringAnsiToUnicode @ 0x1408EA524 (AslStringAnsiToUnicode.c)
 *     InitBootProcessor @ 0x1409B5EDC (InitBootProcessor.c)
 *     EmpParseEntryTypes @ 0x1409BF0E8 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x1409BFF08 (EmpInfParseGetGuidFromName.c)
 *     CmpInitializeDriverStores @ 0x1409C2534 (CmpInitializeDriverStores.c)
 *     CmpSetVideoBiosInformation @ 0x1409C3418 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x1409C35D4 (CmpSetSystemBiosInformation.c)
 *     PipSmBiosGetString @ 0x1409CADA0 (PipSmBiosGetString.c)
 *     WmipDriverEntry @ 0x1409D5020 (WmipDriverEntry.c)
 *     IopMarkBootPartition @ 0x1409D7100 (IopMarkBootPartition.c)
 *     IopCreateArcNames @ 0x1409D7694 (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x1409D7910 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x1409F5AA4 (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x1409F5F40 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x1409F61A0 (PipCriticalDeviceWaitCallback.c)
 *     RamdiskStart @ 0x1409FAD4C (RamdiskStart.c)
 * Callees:
 *     ExFreePool @ 0x14034E780 (ExFreePool.c)
 *     RtlMultiByteToUnicodeN @ 0x1405ABE90 (RtlMultiByteToUnicodeN.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x1405ABF20 (RtlxAnsiStringToUnicodeSize.c)
 *     ExpAllocateStringRoutine @ 0x1406B33A0 (ExpAllocateStringRoutine.c)
 */

NTSTATUS __stdcall RtlAnsiStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCANSI_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  unsigned __int64 v7; // rcx
  int v8; // edi
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
  v8 = RtlMultiByteToUnicodeN(
         DestinationString->Buffer,
         DestinationString->Length,
         &BytesInUnicodeString,
         SourceString->Buffer,
         SourceString->Length);
  if ( v8 >= 0 )
  {
    DestinationString->Buffer[(unsigned __int64)BytesInUnicodeString >> 1] = 0;
    v8 = 0;
  }
  if ( v8 < 0 )
  {
    if ( AllocateDestinationString )
    {
      ExFreePool(DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
    }
  }
  return v8;
}
