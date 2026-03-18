/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x1405AADA0
 * Callers:
 *     CmpInitializeLoadOptions @ 0x140180D88 (CmpInitializeLoadOptions.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x14018DF70 (IopCreateUnicodeFromAnsiBuffer.c)
 *     HvlDebuggerSupportInitialize @ 0x140193EF4 (HvlDebuggerSupportInitialize.c)
 *     CmLogMcUpdateStatus @ 0x14026C4A8 (CmLogMcUpdateStatus.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1402DC610 (PopEmUpdateDeviceConstraintCallback.c)
 *     PopEmModuleAddressMatchCallback @ 0x1402E50F0 (PopEmModuleAddressMatchCallback.c)
 *     ExpSystemErrorHandler2 @ 0x14057E930 (ExpSystemErrorHandler2.c)
 *     PopAnsiStringToUnicodeString @ 0x140588D18 (PopAnsiStringToUnicodeString.c)
 *     RtlIntegerToUnicodeString @ 0x1405A8E00 (RtlIntegerToUnicodeString.c)
 *     RtlInt64ToUnicodeString @ 0x1405AAD00 (RtlInt64ToUnicodeString.c)
 *     PspInsertProcess @ 0x1406093A8 (PspInsertProcess.c)
 *     MiResolveImageReferences @ 0x140678FD0 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x140679454 (MiSnapThunk.c)
 *     PiUEventHandleVetoEvent @ 0x1406FF7F0 (PiUEventHandleVetoEvent.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140706594 (CmpAddRemoveContainerToCLFSLog.c)
 *     SepInitializationPhase1 @ 0x140726F44 (SepInitializationPhase1.c)
 *     KsepStringAnsiToUnicode @ 0x1407283D4 (KsepStringAnsiToUnicode.c)
 *     CmpAddProcessorConfigurationEntry @ 0x140731E00 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x140732218 (CmpInitializeRegistryNode.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14073253C (RtlCreateUnicodeStringFromAsciiz.c)
 *     CmpSetVersionData @ 0x140733098 (CmpSetVersionData.c)
 *     CmpFindControlSet @ 0x14073D2DC (CmpFindControlSet.c)
 *     IopCopyBootLogRegistryToFile @ 0x140745728 (IopCopyBootLogRegistryToFile.c)
 *     PiGetDefaultMessageString @ 0x1407537FC (PiGetDefaultMessageString.c)
 *     WmipQueryWmiRegInfo @ 0x140763E20 (WmipQueryWmiRegInfo.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1407FBD78 (CmpCreateHwProfileFriendlyName.c)
 *     IopInitializeBootLogging @ 0x14081A034 (IopInitializeBootLogging.c)
 *     PnpLogVetoInformation @ 0x1408330F0 (PnpLogVetoInformation.c)
 *     MiLogFailedDriverLoad @ 0x14084E988 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x1408BD7A0 (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x1408D4FA0 (NtQuerySystemEnvironmentValue.c)
 *     ExpCovReadFriendlyName @ 0x1408D7FF8 (ExpCovReadFriendlyName.c)
 *     AslStringAnsiToUnicode @ 0x1408E9284 (AslStringAnsiToUnicode.c)
 *     InitBootProcessor @ 0x1409B4EDC (InitBootProcessor.c)
 *     EmpParseEntryTypes @ 0x1409BE0E8 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x1409BEF08 (EmpInfParseGetGuidFromName.c)
 *     CmpInitializeDriverStores @ 0x1409C1534 (CmpInitializeDriverStores.c)
 *     CmpSetVideoBiosInformation @ 0x1409C2418 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x1409C25D4 (CmpSetSystemBiosInformation.c)
 *     PipSmBiosGetString @ 0x1409C9DA0 (PipSmBiosGetString.c)
 *     WmipDriverEntry @ 0x1409D4020 (WmipDriverEntry.c)
 *     IopMarkBootPartition @ 0x1409D6100 (IopMarkBootPartition.c)
 *     IopCreateArcNames @ 0x1409D6694 (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x1409D6910 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x1409F4A94 (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x1409F4F30 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x1409F5190 (PipCriticalDeviceWaitCallback.c)
 *     RamdiskStart @ 0x1409F9D3C (RamdiskStart.c)
 * Callees:
 *     ExFreePool @ 0x14034D780 (ExFreePool.c)
 *     RtlMultiByteToUnicodeN @ 0x1405AAE90 (RtlMultiByteToUnicodeN.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x1405AAF20 (RtlxAnsiStringToUnicodeSize.c)
 *     ExpAllocateStringRoutine @ 0x1406B2120 (ExpAllocateStringRoutine.c)
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
