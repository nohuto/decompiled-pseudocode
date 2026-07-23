/*
 * XREFs of RtlCompareMemory @ 0x1401C5D30
 * Callers:
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140006400 (IoReportTargetDeviceChangeAsynchronous.c)
 *     SepNormalAccessCheck @ 0x1400AB2B0 (SepNormalAccessCheck.c)
 *     RtlpHpSizeHeap @ 0x1400BEA50 (RtlpHpSizeHeap.c)
 *     SepIsPackageSid @ 0x14011F570 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x140120E2C (SepIsCapabilitySid.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x140174170 (PpmPerfCalculateQosClassPolicies.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1402ED88C (RtlpStdLogCapturedStackTrace.c)
 *     EtwpTraceStackKey @ 0x140315E04 (EtwpTraceStackKey.c)
 *     WheaGetErrPacketFromErrRecord @ 0x14031FE38 (WheaGetErrPacketFromErrRecord.c)
 *     WbInitializeEncryptionSegment @ 0x140585B2C (WbInitializeEncryptionSegment.c)
 *     PopArePowerSettingsEqual @ 0x14058C790 (PopArePowerSettingsEqual.c)
 *     PnpNotifyTargetDeviceChange @ 0x14059046C (PnpNotifyTargetDeviceChange.c)
 *     PnpIsNullGuid @ 0x1405911B0 (PnpIsNullGuid.c)
 *     ExUpdateLicenseDataInternal @ 0x1405A1AD0 (ExUpdateLicenseDataInternal.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1405BB094 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1405C5D5C (EtwpClearSessionAndUnreferenceEntry.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1405CE560 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     NtAlpcOpenSenderProcess @ 0x140614400 (NtAlpcOpenSenderProcess.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x140634690 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     RtlIsPackageSid @ 0x140655400 (RtlIsPackageSid.c)
 *     RtlGetAppContainerSidType @ 0x140655D20 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x1406566F8 (RtlIsCapabilitySid.c)
 *     EtwpCalculateUpdateNotification @ 0x140658BC8 (EtwpCalculateUpdateNotification.c)
 *     sub_14069226C @ 0x14069226C (sub_14069226C.c)
 *     SepCheckCapabilities @ 0x1406B44E8 (SepCheckCapabilities.c)
 *     NtAlpcOpenSenderThread @ 0x1406B8720 (NtAlpcOpenSenderThread.c)
 *     ObpCompareEntryLevel2 @ 0x1406BEF70 (ObpCompareEntryLevel2.c)
 *     PnpBusTypeGuidGetIndex @ 0x1406DBE84 (PnpBusTypeGuidGetIndex.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1406E6E60 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     IoReportTargetDeviceChange @ 0x1407008E0 (IoReportTargetDeviceChange.c)
 *     PipGenerateContainerID @ 0x140701C00 (PipGenerateContainerID.c)
 *     IopPnPDispatch @ 0x140703DD0 (IopPnPDispatch.c)
 *     EtwpTrackDebugIdForSession @ 0x14070B458 (EtwpTrackDebugIdForSession.c)
 *     PnpNotifyDeviceClassChange @ 0x14070B7F4 (PnpNotifyDeviceClassChange.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1407106A4 (ExCovReadjustUnloadedModuleEntry.c)
 *     PopInitSIdle @ 0x14071D85C (PopInitSIdle.c)
 *     PnpCompareInterruptInformation @ 0x14071E6A4 (PnpCompareInterruptInformation.c)
 *     CmpFilterAcpiDockingState @ 0x1407325B4 (CmpFilterAcpiDockingState.c)
 *     CmpTransUowIsEqual @ 0x1407F76F0 (CmpTransUowIsEqual.c)
 *     PnpNotifyHwProfileChange @ 0x140826EE4 (PnpNotifyHwProfileChange.c)
 *     PnpRequestHwProfileChangeNotification @ 0x1408271A4 (PnpRequestHwProfileChangeNotification.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14083F388 (PiDrvDbQuerySyncNodesUpdated.c)
 *     MiCompareUserSidHotPatchNodes @ 0x140855D08 (MiCompareUserSidHotPatchNodes.c)
 *     ObpGetTraceIndex @ 0x140864228 (ObpGetTraceIndex.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140876994 (PpmCompareAndApplyPolicySettings.c)
 *     CompareNamesCaseSensitive @ 0x140893200 (CompareNamesCaseSensitive.c)
 *     SepIsAclEqual @ 0x1408A4DFC (SepIsAclEqual.c)
 *     WmipParseSysIdTable @ 0x1408B4114 (WmipParseSysIdTable.c)
 *     EtwpTrackBinaryForSession @ 0x1408C3CE4 (EtwpTrackBinaryForSession.c)
 *     ExpCovIsModulePresent @ 0x1408D88B4 (ExpCovIsModulePresent.c)
 *     sub_1408E1E28 @ 0x1408E1E28 (sub_1408E1E28.c)
 *     BiUpdateBcdObject @ 0x1408F5BA8 (BiUpdateBcdObject.c)
 *     VfUtilEqualUnicodeString @ 0x1409270F0 (VfUtilEqualUnicodeString.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x1409288F8 (ViDdiDispatchWmiQueryAllData.c)
 *     ViCheckTag @ 0x14092DFBC (ViCheckTag.c)
 *     ViCopyBackModifiedBuffer @ 0x14092E10C (ViCopyBackModifiedBuffer.c)
 *     PipMigratePnpState @ 0x1409C9678 (PipMigratePnpState.c)
 *     VhdiInitializeBootDisk @ 0x1409FA480 (VhdiInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall RtlCompareMemory(const void *Source1, const void *Source2, SIZE_T Length)
{
  _BYTE *v3; // rsi
  _BYTE *v4; // rdi
  __int64 v5; // rcx
  bool v6; // zf
  SIZE_T v7; // rcx
  bool v8; // zf
  bool v9; // zf
  SIZE_T v10; // r8
  SIZE_T v11; // rcx
  bool v13; // zf
  SIZE_T v14; // rcx

  v3 = Source1;
  v4 = Source2;
  if ( (((unsigned __int8)Source1 ^ (unsigned __int8)Source2) & 7) != 0 || Length < 8 )
  {
    v13 = Length == 0;
    if ( Length )
    {
      v14 = Length;
      do
      {
        if ( !v14 )
          break;
        v13 = *v3++ == *v4++;
        --v14;
      }
      while ( v13 );
      if ( !v13 )
        Length -= v14 + 1;
    }
    return Length;
  }
  else
  {
    v5 = -(int)Source1 & 7;
    if ( (_DWORD)v5 )
    {
      Length -= (unsigned int)v5;
      v6 = Length == 0;
      do
      {
        if ( !v5 )
          break;
        v6 = *v3++ == *v4++;
        --v5;
      }
      while ( v6 );
      if ( !v6 )
        goto LABEL_19;
    }
    v7 = Length & 0xFFFFFFFFFFFFFFF8uLL;
    if ( (Length & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      Length -= v7;
      v7 >>= 3;
      v8 = v7 == 0;
      do
      {
        if ( !v7 )
          break;
        v8 = *(_QWORD *)v3 == *(_QWORD *)v4;
        v3 += 8;
        v4 += 8;
        --v7;
      }
      while ( v8 );
      if ( !v8 )
      {
        v3 -= 8;
        v4 -= 8;
        v7 = 8 * (v7 + 1);
      }
    }
    v9 = v7 + Length == 0;
    v10 = v7 + Length;
    if ( v10 )
    {
      v11 = v10;
      do
      {
        if ( !v11 )
          break;
        v9 = *v3++ == *v4++;
        --v11;
      }
      while ( v9 );
      if ( !v9 )
LABEL_19:
        --v4;
    }
    return v4 - (_BYTE *)Source2;
  }
}
