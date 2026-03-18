/*
 * XREFs of RtlCompareMemory @ 0x1401CC1F0
 * Callers:
 *     SepIsPackageSid @ 0x14008690C (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x140086964 (SepIsCapabilitySid.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x14009AE00 (IoReportTargetDeviceChangeAsynchronous.c)
 *     SepNormalAccessCheck @ 0x1400C7500 (SepNormalAccessCheck.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x14017D378 (PpmPerfCalculateQosClassPolicies.c)
 *     RtlpStdLogCapturedStackTrace @ 0x14030BE1C (RtlpStdLogCapturedStackTrace.c)
 *     RtlpHpSizeHeap @ 0x14031B6AC (RtlpHpSizeHeap.c)
 *     EtwpTraceStackKey @ 0x140334608 (EtwpTraceStackKey.c)
 *     WheaGetErrPacketFromErrRecord @ 0x14033FBF4 (WheaGetErrPacketFromErrRecord.c)
 *     WbInitializeEncryptionSegment @ 0x1405B4334 (WbInitializeEncryptionSegment.c)
 *     PnpIsNullGuid @ 0x1405B6094 (PnpIsNullGuid.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x1405DFBE0 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14061FB18 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x14062D2F0 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     NtAlpcOpenSenderProcess @ 0x1406467C0 (NtAlpcOpenSenderProcess.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140665E24 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpCalculateUpdateNotification @ 0x140666718 (EtwpCalculateUpdateNotification.c)
 *     PnpNotifyTargetDeviceChange @ 0x14066C01C (PnpNotifyTargetDeviceChange.c)
 *     RtlGetAppContainerSidType @ 0x14067FA50 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x1406800CC (RtlIsCapabilitySid.c)
 *     RtlIsPackageSid @ 0x140680488 (RtlIsPackageSid.c)
 *     PopArePowerSettingsEqual @ 0x1406A1740 (PopArePowerSettingsEqual.c)
 *     ExUpdateLicenseDataInternal @ 0x1406ABBE0 (ExUpdateLicenseDataInternal.c)
 *     sub_1406AE670 @ 0x1406AE670 (sub_1406AE670.c)
 *     SepCheckCapabilities @ 0x1406D6070 (SepCheckCapabilities.c)
 *     NtAlpcOpenSenderThread @ 0x1406D9F70 (NtAlpcOpenSenderThread.c)
 *     ObpCompareEntryLevel2 @ 0x1406DEA30 (ObpCompareEntryLevel2.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x140706B8C (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PnpBusTypeGuidGetIndex @ 0x14071B0EC (PnpBusTypeGuidGetIndex.c)
 *     PipGenerateContainerID @ 0x14071BAF8 (PipGenerateContainerID.c)
 *     IopPnPDispatch @ 0x140720F00 (IopPnPDispatch.c)
 *     IoReportTargetDeviceChange @ 0x14072BCC0 (IoReportTargetDeviceChange.c)
 *     EtwpTrackDebugIdForSession @ 0x14073463C (EtwpTrackDebugIdForSession.c)
 *     PnpNotifyDeviceClassChange @ 0x140735878 (PnpNotifyDeviceClassChange.c)
 *     PopInitSIdle @ 0x140745314 (PopInitSIdle.c)
 *     PnpCompareInterruptInformation @ 0x140745CC0 (PnpCompareInterruptInformation.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x14074721C (ExCovReadjustUnloadedModuleEntry.c)
 *     CmpFilterAcpiDockingState @ 0x14075CAA4 (CmpFilterAcpiDockingState.c)
 *     CmpTransUowIsEqual @ 0x14082F2AC (CmpTransUowIsEqual.c)
 *     PnpNotifyHwProfileChange @ 0x14086012C (PnpNotifyHwProfileChange.c)
 *     PnpRequestHwProfileChangeNotification @ 0x1408603F4 (PnpRequestHwProfileChangeNotification.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408795FC (PiDrvDbQuerySyncNodesUpdated.c)
 *     MiCompareUserSidHotPatchNodes @ 0x14088DF04 (MiCompareUserSidHotPatchNodes.c)
 *     ObpGetTraceIndex @ 0x14089FA20 (ObpGetTraceIndex.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1408B24B0 (PpmCompareAndApplyPolicySettings.c)
 *     CompareNamesCaseSensitive @ 0x1408D0228 (CompareNamesCaseSensitive.c)
 *     SepIsAclEqual @ 0x1408E2F9C (SepIsAclEqual.c)
 *     WmipParseSysIdTable @ 0x1408F0390 (WmipParseSysIdTable.c)
 *     EtwpTrackBinaryForSession @ 0x1408FFC28 (EtwpTrackBinaryForSession.c)
 *     ExpCovIsModulePresent @ 0x140914884 (ExpCovIsModulePresent.c)
 *     sub_14091DD34 @ 0x14091DD34 (sub_14091DD34.c)
 *     BiUpdateBcdObject @ 0x1409325DC (BiUpdateBcdObject.c)
 *     VfUtilEqualUnicodeString @ 0x140964580 (VfUtilEqualUnicodeString.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x140965E18 (ViDdiDispatchWmiQueryAllData.c)
 *     ViCheckTag @ 0x14096B82C (ViCheckTag.c)
 *     ViCopyBackModifiedBuffer @ 0x14096B97C (ViCopyBackModifiedBuffer.c)
 *     PipMigratePnpState @ 0x140A21114 (PipMigratePnpState.c)
 *     VhdiInitializeBootDisk @ 0x140A3F040 (VhdiInitializeBootDisk.c)
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
