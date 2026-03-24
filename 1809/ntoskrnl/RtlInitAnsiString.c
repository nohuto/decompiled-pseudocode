/*
 * XREFs of RtlInitAnsiString @ 0x1400EED90
 * Callers:
 *     IopCheckDiskName @ 0x14017FB40 (IopCheckDiskName.c)
 *     CmpInitializeLoadOptions @ 0x140180DA8 (CmpInitializeLoadOptions.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x14018DF90 (IopCreateUnicodeFromAnsiBuffer.c)
 *     CmLogMcUpdateStatus @ 0x14026C5A8 (CmLogMcUpdateStatus.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1402DC710 (PopEmUpdateDeviceConstraintCallback.c)
 *     ExpSystemErrorHandler2 @ 0x14057E930 (ExpSystemErrorHandler2.c)
 *     PspInsertProcess @ 0x1406093A8 (PspInsertProcess.c)
 *     EtwpBuildProcessEvent @ 0x14066CA2C (EtwpBuildProcessEvent.c)
 *     MiResolveImageReferences @ 0x140678FB0 (MiResolveImageReferences.c)
 *     PiUEventHandleVetoEvent @ 0x1406FF7D0 (PiUEventHandleVetoEvent.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140706574 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpAddProcessorConfigurationEntry @ 0x140731DE0 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x1407321F8 (CmpInitializeRegistryNode.c)
 *     CmpSetVersionData @ 0x140733078 (CmpSetVersionData.c)
 *     IopCopyBootLogRegistryToFile @ 0x140745708 (IopCopyBootLogRegistryToFile.c)
 *     PiGetDefaultMessageString @ 0x1407537DC (PiGetDefaultMessageString.c)
 *     WmipQueryWmiRegInfo @ 0x140763E00 (WmipQueryWmiRegInfo.c)
 *     PnpLogVetoInformation @ 0x1408330D0 (PnpLogVetoInformation.c)
 *     KsepGetModuleInfoByName @ 0x140848B8C (KsepGetModuleInfoByName.c)
 *     MiLogFailedDriverLoad @ 0x14084E968 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x1408BD780 (EtwWmitraceWorker.c)
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x1409B4EDC (InitBootProcessor.c)
 *     IopGetBootDiskInformationLite @ 0x1409BDED8 (IopGetBootDiskInformationLite.c)
 *     EmpParseEntryTypes @ 0x1409BE0E8 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x1409BEF08 (EmpInfParseGetGuidFromName.c)
 *     CmpInitializeDriverStores @ 0x1409C1534 (CmpInitializeDriverStores.c)
 *     CmpSetVideoBiosInformation @ 0x1409C2418 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x1409C25D4 (CmpSetSystemBiosInformation.c)
 *     WmipDriverEntry @ 0x1409D4020 (WmipDriverEntry.c)
 *     IopMarkBootPartition @ 0x1409D6100 (IopMarkBootPartition.c)
 *     IopCreateArcNames @ 0x1409D6694 (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x1409D6910 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x1409F4AA4 (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x1409F4F40 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x1409F51A0 (PipCriticalDeviceWaitCallback.c)
 *     RamdiskStart @ 0x1409F9D4C (RamdiskStart.c)
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
