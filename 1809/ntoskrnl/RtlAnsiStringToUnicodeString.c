/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x1405AADA0
 * Callers:
 *     CmpInitializeLoadOptions @ 0x140180DA8 (CmpInitializeLoadOptions.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x14018DF90 (IopCreateUnicodeFromAnsiBuffer.c)
 *     HvlDebuggerSupportInitialize @ 0x140193F14 (HvlDebuggerSupportInitialize.c)
 *     CmLogMcUpdateStatus @ 0x14026C5A8 (CmLogMcUpdateStatus.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1402DC710 (PopEmUpdateDeviceConstraintCallback.c)
 *     PopEmModuleAddressMatchCallback @ 0x1402E51F0 (PopEmModuleAddressMatchCallback.c)
 *     ExpSystemErrorHandler2 @ 0x14057E930 (ExpSystemErrorHandler2.c)
 *     PopAnsiStringToUnicodeString @ 0x140588D18 (PopAnsiStringToUnicodeString.c)
 *     RtlIntegerToUnicodeString @ 0x1405A8E00 (RtlIntegerToUnicodeString.c)
 *     RtlInt64ToUnicodeString @ 0x1405AAD00 (RtlInt64ToUnicodeString.c)
 *     PspInsertProcess @ 0x1406093A8 (PspInsertProcess.c)
 *     MiResolveImageReferences @ 0x140678FB0 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x140679434 (MiSnapThunk.c)
 *     PiUEventHandleVetoEvent @ 0x1406FF7D0 (PiUEventHandleVetoEvent.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140706574 (CmpAddRemoveContainerToCLFSLog.c)
 *     SepInitializationPhase1 @ 0x140726F24 (SepInitializationPhase1.c)
 *     KsepStringAnsiToUnicode @ 0x1407283B4 (KsepStringAnsiToUnicode.c)
 *     CmpAddProcessorConfigurationEntry @ 0x140731DE0 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x1407321F8 (CmpInitializeRegistryNode.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14073251C (RtlCreateUnicodeStringFromAsciiz.c)
 *     CmpSetVersionData @ 0x140733078 (CmpSetVersionData.c)
 *     CmpFindControlSet @ 0x14073D2BC (CmpFindControlSet.c)
 *     IopCopyBootLogRegistryToFile @ 0x140745708 (IopCopyBootLogRegistryToFile.c)
 *     PiGetDefaultMessageString @ 0x1407537DC (PiGetDefaultMessageString.c)
 *     WmipQueryWmiRegInfo @ 0x140763E00 (WmipQueryWmiRegInfo.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1407FBD58 (CmpCreateHwProfileFriendlyName.c)
 *     IopInitializeBootLogging @ 0x14081A014 (IopInitializeBootLogging.c)
 *     PnpLogVetoInformation @ 0x1408330D0 (PnpLogVetoInformation.c)
 *     MiLogFailedDriverLoad @ 0x14084E968 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x1408BD780 (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x1408D4F80 (NtQuerySystemEnvironmentValue.c)
 *     ExpCovReadFriendlyName @ 0x1408D7FD8 (ExpCovReadFriendlyName.c)
 *     AslStringAnsiToUnicode @ 0x1408E9264 (AslStringAnsiToUnicode.c)
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
 *     IopGetBootDiskInformation @ 0x1409F4AA4 (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x1409F4F40 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x1409F51A0 (PipCriticalDeviceWaitCallback.c)
 *     RamdiskStart @ 0x1409F9D4C (RamdiskStart.c)
 * Callees:
 *     ExFreePool @ 0x14034D780 (ExFreePool.c)
 *     RtlMultiByteToUnicodeN @ 0x1405AAE90 (RtlMultiByteToUnicodeN.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x1405AAF20 (RtlxAnsiStringToUnicodeSize.c)
 *     ExpAllocateStringRoutine @ 0x1406B2100 (ExpAllocateStringRoutine.c)
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
