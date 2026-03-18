/*
 * XREFs of RtlCompareMemory @ 0x1401CCD70
 * Callers:
 *     SepIsPackageSid @ 0x140086D2C (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x140086D84 (SepIsCapabilitySid.c)
 *     SepNormalAccessCheck @ 0x1400A7380 (SepNormalAccessCheck.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1400EEA50 (IoReportTargetDeviceChangeAsynchronous.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x14017DA68 (PpmPerfCalculateQosClassPolicies.c)
 *     RtlpStdLogCapturedStackTrace @ 0x14030B8CC (RtlpStdLogCapturedStackTrace.c)
 *     RtlpHpSizeHeap @ 0x14031B0FC (RtlpHpSizeHeap.c)
 *     EtwpTraceStackKey @ 0x140334068 (EtwpTraceStackKey.c)
 *     WheaGetErrPacketFromErrRecord @ 0x14033F654 (WheaGetErrPacketFromErrRecord.c)
 *     WbInitializeEncryptionSegment @ 0x1405B4710 (WbInitializeEncryptionSegment.c)
 *     PnpIsNullGuid @ 0x1405B6474 (PnpIsNullGuid.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x1405E0410 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140621638 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140631140 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     NtAlpcOpenSenderProcess @ 0x14065A520 (NtAlpcOpenSenderProcess.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140693238 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpCalculateUpdateNotification @ 0x140693B2C (EtwpCalculateUpdateNotification.c)
 *     PnpNotifyTargetDeviceChange @ 0x140698EEC (PnpNotifyTargetDeviceChange.c)
 *     RtlGetAppContainerSidType @ 0x14069CAF0 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x14069D16C (RtlIsCapabilitySid.c)
 *     PopArePowerSettingsEqual @ 0x14069E280 (PopArePowerSettingsEqual.c)
 *     RtlIsPackageSid @ 0x14069E928 (RtlIsPackageSid.c)
 *     ExUpdateLicenseDataInternal @ 0x1406A2590 (ExUpdateLicenseDataInternal.c)
 *     sub_1406B05A0 @ 0x1406B05A0 (sub_1406B05A0.c)
 *     SepCheckCapabilities @ 0x1406D58A0 (SepCheckCapabilities.c)
 *     NtAlpcOpenSenderThread @ 0x1406DA870 (NtAlpcOpenSenderThread.c)
 *     ObpCompareEntryLevel2 @ 0x1406DFD40 (ObpCompareEntryLevel2.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x14070896C (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PnpBusTypeGuidGetIndex @ 0x14071CEDC (PnpBusTypeGuidGetIndex.c)
 *     PipGenerateContainerID @ 0x14071D8E8 (PipGenerateContainerID.c)
 *     IopPnPDispatch @ 0x140722DA0 (IopPnPDispatch.c)
 *     IoReportTargetDeviceChange @ 0x14072DB60 (IoReportTargetDeviceChange.c)
 *     EtwpTrackDebugIdForSession @ 0x14073689C (EtwpTrackDebugIdForSession.c)
 *     PnpNotifyDeviceClassChange @ 0x140737AD8 (PnpNotifyDeviceClassChange.c)
 *     PopInitSIdle @ 0x140747214 (PopInitSIdle.c)
 *     PnpCompareInterruptInformation @ 0x140747BC0 (PnpCompareInterruptInformation.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x14074911C (ExCovReadjustUnloadedModuleEntry.c)
 *     CmpFilterAcpiDockingState @ 0x140761224 (CmpFilterAcpiDockingState.c)
 *     CmpTransUowIsEqual @ 0x14082F11C (CmpTransUowIsEqual.c)
 *     PnpNotifyHwProfileChange @ 0x14085F82C (PnpNotifyHwProfileChange.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14085FAF4 (PnpRequestHwProfileChangeNotification.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140878CFC (PiDrvDbQuerySyncNodesUpdated.c)
 *     MiCompareUserSidHotPatchNodes @ 0x14088D724 (MiCompareUserSidHotPatchNodes.c)
 *     ObpGetTraceIndex @ 0x14089F260 (ObpGetTraceIndex.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1408B1D10 (PpmCompareAndApplyPolicySettings.c)
 *     CompareNamesCaseSensitive @ 0x1408CFB28 (CompareNamesCaseSensitive.c)
 *     SepIsAclEqual @ 0x1408E3014 (SepIsAclEqual.c)
 *     WmipParseSysIdTable @ 0x1408EFCA0 (WmipParseSysIdTable.c)
 *     EtwpTrackBinaryForSession @ 0x1408FF588 (EtwpTrackBinaryForSession.c)
 *     ExpCovIsModulePresent @ 0x1409142E4 (ExpCovIsModulePresent.c)
 *     sub_14091D794 @ 0x14091D794 (sub_14091D794.c)
 *     BiUpdateBcdObject @ 0x140932050 (BiUpdateBcdObject.c)
 *     VfUtilEqualUnicodeString @ 0x140964580 (VfUtilEqualUnicodeString.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x140965E18 (ViDdiDispatchWmiQueryAllData.c)
 *     ViCheckTag @ 0x14096B82C (ViCheckTag.c)
 *     ViCopyBackModifiedBuffer @ 0x14096B97C (ViCopyBackModifiedBuffer.c)
 *     PipMigratePnpState @ 0x140A212F4 (PipMigratePnpState.c)
 *     VhdiInitializeBootDisk @ 0x140A3EE10 (VhdiInitializeBootDisk.c)
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
