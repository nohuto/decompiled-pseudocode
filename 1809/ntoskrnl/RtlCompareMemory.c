/*
 * XREFs of RtlCompareMemory @ 0x1401C5BD0
 * Callers:
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140006400 (IoReportTargetDeviceChangeAsynchronous.c)
 *     SepNormalAccessCheck @ 0x1400AB370 (SepNormalAccessCheck.c)
 *     RtlpHpSizeHeap @ 0x1400BEB10 (RtlpHpSizeHeap.c)
 *     SepIsPackageSid @ 0x14011F500 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x140120D5C (SepIsCapabilitySid.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x140174070 (PpmPerfCalculateQosClassPolicies.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1402ED69C (RtlpStdLogCapturedStackTrace.c)
 *     EtwpTraceStackKey @ 0x140315C14 (EtwpTraceStackKey.c)
 *     WheaGetErrPacketFromErrRecord @ 0x14031FC48 (WheaGetErrPacketFromErrRecord.c)
 *     WbInitializeEncryptionSegment @ 0x140584B2C (WbInitializeEncryptionSegment.c)
 *     PopArePowerSettingsEqual @ 0x14058B790 (PopArePowerSettingsEqual.c)
 *     PnpNotifyTargetDeviceChange @ 0x14058F46C (PnpNotifyTargetDeviceChange.c)
 *     PnpIsNullGuid @ 0x1405901B0 (PnpIsNullGuid.c)
 *     ExUpdateLicenseDataInternal @ 0x1405A0AD0 (ExUpdateLicenseDataInternal.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1405BA094 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1405C4D5C (EtwpClearSessionAndUnreferenceEntry.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1405CD560 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     NtAlpcOpenSenderProcess @ 0x140613400 (NtAlpcOpenSenderProcess.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x140633670 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     RtlIsPackageSid @ 0x140654240 (RtlIsPackageSid.c)
 *     RtlGetAppContainerSidType @ 0x140654B60 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x140655538 (RtlIsCapabilitySid.c)
 *     EtwpCalculateUpdateNotification @ 0x140657A08 (EtwpCalculateUpdateNotification.c)
 *     sub_1406910AC @ 0x1406910AC (sub_1406910AC.c)
 *     SepCheckCapabilities @ 0x1406B3248 (SepCheckCapabilities.c)
 *     NtAlpcOpenSenderThread @ 0x1406B7480 (NtAlpcOpenSenderThread.c)
 *     ObpCompareEntryLevel2 @ 0x1406BDCD0 (ObpCompareEntryLevel2.c)
 *     PnpBusTypeGuidGetIndex @ 0x1406DABE4 (PnpBusTypeGuidGetIndex.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1406E5BC0 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     IoReportTargetDeviceChange @ 0x1406FF640 (IoReportTargetDeviceChange.c)
 *     PipGenerateContainerID @ 0x140700960 (PipGenerateContainerID.c)
 *     IopPnPDispatch @ 0x140702B30 (IopPnPDispatch.c)
 *     EtwpTrackDebugIdForSession @ 0x14070A1B8 (EtwpTrackDebugIdForSession.c)
 *     PnpNotifyDeviceClassChange @ 0x14070A554 (PnpNotifyDeviceClassChange.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x14070F404 (ExCovReadjustUnloadedModuleEntry.c)
 *     PopInitSIdle @ 0x14071C5BC (PopInitSIdle.c)
 *     PnpCompareInterruptInformation @ 0x14071D404 (PnpCompareInterruptInformation.c)
 *     CmpFilterAcpiDockingState @ 0x1407313C4 (CmpFilterAcpiDockingState.c)
 *     CmpTransUowIsEqual @ 0x1407F64F0 (CmpTransUowIsEqual.c)
 *     PnpNotifyHwProfileChange @ 0x140825CE4 (PnpNotifyHwProfileChange.c)
 *     PnpRequestHwProfileChangeNotification @ 0x140825FA4 (PnpRequestHwProfileChangeNotification.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14083E128 (PiDrvDbQuerySyncNodesUpdated.c)
 *     MiCompareUserSidHotPatchNodes @ 0x140854AA8 (MiCompareUserSidHotPatchNodes.c)
 *     ObpGetTraceIndex @ 0x140862FC8 (ObpGetTraceIndex.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140875734 (PpmCompareAndApplyPolicySettings.c)
 *     CompareNamesCaseSensitive @ 0x140891FA0 (CompareNamesCaseSensitive.c)
 *     SepIsAclEqual @ 0x1408A3B9C (SepIsAclEqual.c)
 *     WmipParseSysIdTable @ 0x1408B2EB4 (WmipParseSysIdTable.c)
 *     EtwpTrackBinaryForSession @ 0x1408C2A24 (EtwpTrackBinaryForSession.c)
 *     ExpCovIsModulePresent @ 0x1408D75F4 (ExpCovIsModulePresent.c)
 *     sub_1408E0B68 @ 0x1408E0B68 (sub_1408E0B68.c)
 *     BiUpdateBcdObject @ 0x1408F48E8 (BiUpdateBcdObject.c)
 *     VfUtilEqualUnicodeString @ 0x1409260F0 (VfUtilEqualUnicodeString.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x1409278F8 (ViDdiDispatchWmiQueryAllData.c)
 *     ViCheckTag @ 0x14092CFBC (ViCheckTag.c)
 *     ViCopyBackModifiedBuffer @ 0x14092D10C (ViCopyBackModifiedBuffer.c)
 *     PipMigratePnpState @ 0x1409C8678 (PipMigratePnpState.c)
 *     VhdiInitializeBootDisk @ 0x1409F9480 (VhdiInitializeBootDisk.c)
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
