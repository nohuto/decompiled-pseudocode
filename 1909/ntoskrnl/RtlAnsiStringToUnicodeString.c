/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x14063FB50
 * Callers:
 *     IopCreateUnicodeFromAnsiBuffer @ 0x140189C2C (IopCreateUnicodeFromAnsiBuffer.c)
 *     CmpInitializeLoadOptions @ 0x14018D7C4 (CmpInitializeLoadOptions.c)
 *     HvlDebuggerSupportInitialize @ 0x14019E488 (HvlDebuggerSupportInitialize.c)
 *     CmLogMcUpdateStatus @ 0x14027FD68 (CmLogMcUpdateStatus.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1402F8970 (PopEmUpdateDeviceConstraintCallback.c)
 *     PopEmModuleAddressMatchCallback @ 0x140301810 (PopEmModuleAddressMatchCallback.c)
 *     ExpSystemErrorHandler2 @ 0x1405AE810 (ExpSystemErrorHandler2.c)
 *     RtlIntegerToUnicodeString @ 0x1406238A0 (RtlIntegerToUnicodeString.c)
 *     RtlInt64ToUnicodeString @ 0x14063FAA0 (RtlInt64ToUnicodeString.c)
 *     ObCheckRefTraceProcess @ 0x140677E14 (ObCheckRefTraceProcess.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14068BA6C (CmpAddRemoveContainerToCLFSLog.c)
 *     PopAnsiStringToUnicodeString @ 0x1406B4224 (PopAnsiStringToUnicodeString.c)
 *     MiResolveImageReferences @ 0x140710C00 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x140711098 (MiSnapThunk.c)
 *     PiUEventHandleVetoEvent @ 0x14072E5D0 (PiUEventHandleVetoEvent.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407595AC (IopCopyBootLogRegistryToFile.c)
 *     SepInitializationPhase1 @ 0x14075C9D4 (SepInitializationPhase1.c)
 *     KsepStringAnsiToUnicode @ 0x14075DBBC (KsepStringAnsiToUnicode.c)
 *     CmpAddProcessorConfigurationEntry @ 0x140761C88 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x1407620D4 (CmpInitializeRegistryNode.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x140762430 (RtlCreateUnicodeStringFromAsciiz.c)
 *     CmpSetVersionData @ 0x140762F6C (CmpSetVersionData.c)
 *     CmpFindControlSet @ 0x140769C6C (CmpFindControlSet.c)
 *     PiGetDefaultMessageString @ 0x14077CB58 (PiGetDefaultMessageString.c)
 *     WmipQueryWmiRegInfo @ 0x14078C990 (WmipQueryWmiRegInfo.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1408347C8 (CmpCreateHwProfileFriendlyName.c)
 *     IopInitializeBootLogging @ 0x140853614 (IopInitializeBootLogging.c)
 *     PnpLogVetoInformation @ 0x14086D120 (PnpLogVetoInformation.c)
 *     MiLogFailedDriverLoad @ 0x14088A278 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x1408F9D3C (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409122A0 (NtQuerySystemEnvironmentValue.c)
 *     ExpCovReadFriendlyName @ 0x140914C80 (ExpCovReadFriendlyName.c)
 *     AslStringAnsiToUnicode @ 0x140925940 (AslStringAnsiToUnicode.c)
 *     IopCreateArcNamesCd @ 0x1409F5108 (IopCreateArcNamesCd.c)
 *     IopCreateArcNames @ 0x1409F5328 (IopCreateArcNames.c)
 *     IopMarkBootPartition @ 0x1409F5470 (IopMarkBootPartition.c)
 *     PipSmBiosGetString @ 0x1409F6BD0 (PipSmBiosGetString.c)
 *     EmpParseEntryTypes @ 0x1409F9F14 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x1409FAD64 (EmpInfParseGetGuidFromName.c)
 *     InitBootProcessor @ 0x140A08698 (InitBootProcessor.c)
 *     CmpInitializeDriverStores @ 0x140A0B5C0 (CmpInitializeDriverStores.c)
 *     CmpSetVideoBiosInformation @ 0x140A0C564 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A0C73C (CmpSetSystemBiosInformation.c)
 *     WmipDriverEntry @ 0x140A18C20 (WmipDriverEntry.c)
 *     IopGetBootDiskInformation @ 0x140A39DBC (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x140A3A284 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140A3A500 (PipCriticalDeviceWaitCallback.c)
 *     RamdiskStart @ 0x140A3F710 (RamdiskStart.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlMultiByteToUnicodeN @ 0x14063FC40 (RtlMultiByteToUnicodeN.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x14063FCE0 (RtlxAnsiStringToUnicodeSize.c)
 *     ExpAllocateStringRoutine @ 0x1406D4640 (ExpAllocateStringRoutine.c)
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
