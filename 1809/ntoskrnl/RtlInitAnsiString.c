/*
 * XREFs of RtlInitAnsiString @ 0x1400EEE10
 * Callers:
 *     IopCheckDiskName @ 0x14017FC80 (IopCheckDiskName.c)
 *     CmpInitializeLoadOptions @ 0x140180EE8 (CmpInitializeLoadOptions.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x14018E0D0 (IopCreateUnicodeFromAnsiBuffer.c)
 *     CmLogMcUpdateStatus @ 0x14026C798 (CmLogMcUpdateStatus.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1402DC900 (PopEmUpdateDeviceConstraintCallback.c)
 *     ExpSystemErrorHandler2 @ 0x14057F930 (ExpSystemErrorHandler2.c)
 *     PspInsertProcess @ 0x14060A3A8 (PspInsertProcess.c)
 *     EtwpBuildProcessEvent @ 0x14066DBEC (EtwpBuildProcessEvent.c)
 *     MiResolveImageReferences @ 0x14067A170 (MiResolveImageReferences.c)
 *     PiUEventHandleVetoEvent @ 0x140700A70 (PiUEventHandleVetoEvent.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140707814 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpAddProcessorConfigurationEntry @ 0x140732FD0 (CmpAddProcessorConfigurationEntry.c)
 *     CmpInitializeRegistryNode @ 0x1407333E8 (CmpInitializeRegistryNode.c)
 *     CmpSetVersionData @ 0x140734268 (CmpSetVersionData.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407468F8 (IopCopyBootLogRegistryToFile.c)
 *     PiGetDefaultMessageString @ 0x1407549CC (PiGetDefaultMessageString.c)
 *     WmipQueryWmiRegInfo @ 0x140764FF0 (WmipQueryWmiRegInfo.c)
 *     PnpLogVetoInformation @ 0x140834330 (PnpLogVetoInformation.c)
 *     KsepGetModuleInfoByName @ 0x140849DEC (KsepGetModuleInfoByName.c)
 *     MiLogFailedDriverLoad @ 0x14084FBC8 (MiLogFailedDriverLoad.c)
 *     EtwWmitraceWorker @ 0x1408BEA40 (EtwWmitraceWorker.c)
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x1409B5EDC (InitBootProcessor.c)
 *     IopGetBootDiskInformationLite @ 0x1409BEED8 (IopGetBootDiskInformationLite.c)
 *     EmpParseEntryTypes @ 0x1409BF0E8 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x1409BFF08 (EmpInfParseGetGuidFromName.c)
 *     CmpInitializeDriverStores @ 0x1409C2534 (CmpInitializeDriverStores.c)
 *     CmpSetVideoBiosInformation @ 0x1409C3418 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x1409C35D4 (CmpSetSystemBiosInformation.c)
 *     WmipDriverEntry @ 0x1409D5020 (WmipDriverEntry.c)
 *     IopMarkBootPartition @ 0x1409D7100 (IopMarkBootPartition.c)
 *     IopCreateArcNames @ 0x1409D7694 (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x1409D7910 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x1409F5AA4 (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x1409F5F40 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x1409F61A0 (PipCriticalDeviceWaitCallback.c)
 *     RamdiskStart @ 0x1409FAD4C (RamdiskStart.c)
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
