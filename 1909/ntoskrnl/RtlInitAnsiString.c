/*
 * XREFs of RtlInitAnsiString @ 0x1400EA030
 * Callers:
 *     IopCreateUnicodeFromAnsiBuffer @ 0x140189C2C (IopCreateUnicodeFromAnsiBuffer.c)
 *     IopCheckDiskName @ 0x140189D18 (IopCheckDiskName.c)
 *     CmpInitializeLoadOptions @ 0x14018D7C4 (CmpInitializeLoadOptions.c)
 *     CmLogMcUpdateStatus @ 0x14027FD68 (CmLogMcUpdateStatus.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1402F8970 (PopEmUpdateDeviceConstraintCallback.c)
 *     ExpSystemErrorHandler2 @ 0x1405AE810 (ExpSystemErrorHandler2.c)
 *     ObCheckRefTraceProcess @ 0x140677E14 (ObCheckRefTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x140684214 (EtwpBuildProcessEvent.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14068BA6C (CmpAddRemoveContainerToCLFSLog.c)
 *     MiResolveImageReferences @ 0x140710C00 (MiResolveImageReferences.c)
 *     PiUEventHandleVetoEvent @ 0x14072E5D0 (PiUEventHandleVetoEvent.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407595AC (IopCopyBootLogRegistryToFile.c)
 *     CmpAddProcessorConfigurationEntry @ 0x140761C88 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x1407620D4 (CmpInitializeRegistryNode.c)
 *     CmpSetVersionData @ 0x140762F6C (CmpSetVersionData.c)
 *     PiGetDefaultMessageString @ 0x14077CB58 (PiGetDefaultMessageString.c)
 *     WmipQueryWmiRegInfo @ 0x14078C990 (WmipQueryWmiRegInfo.c)
 *     PnpLogVetoInformation @ 0x14086D120 (PnpLogVetoInformation.c)
 *     KsepGetModuleInfoByName @ 0x14088375C (KsepGetModuleInfoByName.c)
 *     MiLogFailedDriverLoad @ 0x14088A278 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x1408F9D3C (EtwWmitraceWorker.c)
 *     IopCreateArcNamesCd @ 0x1409F5108 (IopCreateArcNamesCd.c)
 *     IopCreateArcNames @ 0x1409F5328 (IopCreateArcNames.c)
 *     IopMarkBootPartition @ 0x1409F5470 (IopMarkBootPartition.c)
 *     IopGetBootDiskInformationLite @ 0x1409F9CD4 (IopGetBootDiskInformationLite.c)
 *     EmpParseEntryTypes @ 0x1409F9F14 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x1409FAD64 (EmpInfParseGetGuidFromName.c)
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
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
