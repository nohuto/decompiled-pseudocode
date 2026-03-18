/*
 * XREFs of RtlInitAnsiString @ 0x1400E5090
 * Callers:
 *     IopCreateUnicodeFromAnsiBuffer @ 0x14018967C (IopCreateUnicodeFromAnsiBuffer.c)
 *     IopCheckDiskName @ 0x140189768 (IopCheckDiskName.c)
 *     CmpInitializeLoadOptions @ 0x14018CF44 (CmpInitializeLoadOptions.c)
 *     CmLogMcUpdateStatus @ 0x140280008 (CmLogMcUpdateStatus.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1402F8EC0 (PopEmUpdateDeviceConstraintCallback.c)
 *     ExpSystemErrorHandler2 @ 0x1405AE830 (ExpSystemErrorHandler2.c)
 *     ObCheckRefTraceProcess @ 0x140672700 (ObCheckRefTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x140690CA4 (EtwpBuildProcessEvent.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1406984FC (CmpAddRemoveContainerToCLFSLog.c)
 *     MiResolveImageReferences @ 0x14070EE20 (MiResolveImageReferences.c)
 *     PiUEventHandleVetoEvent @ 0x14072C730 (PiUEventHandleVetoEvent.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14075D508 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x14075D954 (CmpInitializeRegistryNode.c)
 *     CmpSetVersionData @ 0x14075E648 (CmpSetVersionData.c)
 *     IopCopyBootLogRegistryToFile @ 0x140769BE0 (IopCopyBootLogRegistryToFile.c)
 *     PiGetDefaultMessageString @ 0x140779578 (PiGetDefaultMessageString.c)
 *     WmipQueryWmiRegInfo @ 0x14078A4F0 (WmipQueryWmiRegInfo.c)
 *     PnpLogVetoInformation @ 0x14086DA20 (PnpLogVetoInformation.c)
 *     KsepGetModuleInfoByName @ 0x14088405C (KsepGetModuleInfoByName.c)
 *     MiLogFailedDriverLoad @ 0x14088AA58 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x1408FA35C (EtwWmitraceWorker.c)
 *     IopCreateArcNamesCd @ 0x1409F51F8 (IopCreateArcNamesCd.c)
 *     IopCreateArcNames @ 0x1409F5418 (IopCreateArcNames.c)
 *     IopMarkBootPartition @ 0x1409F5560 (IopMarkBootPartition.c)
 *     IopGetBootDiskInformationLite @ 0x1409F9DC4 (IopGetBootDiskInformationLite.c)
 *     EmpParseEntryTypes @ 0x1409FA004 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x1409FAE54 (EmpInfParseGetGuidFromName.c)
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
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
 *     <none>
 */

void __stdcall RtlInitAnsiString(PANSI_STRING DestinationString, PCSZ SourceString)
{
  unsigned __int64 v2; // rax

  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = (char *)SourceString;
  if ( SourceString )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( SourceString[v2] );
    if ( v2 >= 0xFFFF )
      LOWORD(v2) = -2;
    DestinationString->Length = v2;
    DestinationString->MaximumLength = v2 + 1;
  }
}
