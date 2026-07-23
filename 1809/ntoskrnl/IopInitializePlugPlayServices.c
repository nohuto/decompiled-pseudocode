/*
 * XREFs of IopInitializePlugPlayServices @ 0x1409C8608
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x1400063D0 (KeInitializeGuardedMutex.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     KeInitializeSemaphore @ 0x14008A3D0 (KeInitializeSemaphore.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ExInitializeResourceLite @ 0x1400CC570 (ExInitializeResourceLite.c)
 *     IoDeleteDevice @ 0x1400DAB60 (IoDeleteDevice.c)
 *     PnpDiagnosticTrace @ 0x1401372E4 (PnpDiagnosticTrace.c)
 *     PipSetDevNodeState @ 0x140159ED8 (PipSetDevNodeState.c)
 *     PnpRequestDeviceAction @ 0x14015F104 (PnpRequestDeviceAction.c)
 *     PiDmaGuardInitialize @ 0x140181E28 (PiDmaGuardInitialize.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x14059B5A0 (RtlGUIDFromString.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C8C40 (_PnpCtxGetCachedContextBaseKey.c)
 *     IoCreateDevice @ 0x140653B90 (IoCreateDevice.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 *     PsDereferencePrimaryToken @ 0x1406C4CB0 (PsDereferencePrimaryToken.c)
 *     _CmSetDeviceRegProp @ 0x1406E3CC4 (_CmSetDeviceRegProp.c)
 *     PipSetDevNodeFlags @ 0x1406E637C (PipSetDevNodeFlags.c)
 *     _CmAddDeviceToContainer @ 0x1406EBC5C (_CmAddDeviceToContainer.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x1406EC8F0 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     _CmCreateDevice @ 0x1406FE62C (_CmCreateDevice.c)
 *     PipAllocateDeviceNode @ 0x1406FFD7C (PipAllocateDeviceNode.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x14070275C (PnpMapDeviceObjectToDeviceInstance.c)
 *     IopCreateRegistryKeyEx @ 0x14070A964 (IopCreateRegistryKeyEx.c)
 *     PipSetDevNodeUserFlags @ 0x14070F4E0 (PipSetDevNodeUserFlags.c)
 *     IopPortInitialize @ 0x140738B10 (IopPortInitialize.c)
 *     IopMemInitialize @ 0x140738BA8 (IopMemInitialize.c)
 *     IopDmaInitialize @ 0x140738C8C (IopDmaInitialize.c)
 *     IopIrqInitialize @ 0x140738D00 (IopIrqInitialize.c)
 *     IopBusNumberInitialize @ 0x140738D68 (IopBusNumberInitialize.c)
 *     PnpAllocateDeviceInstancePath @ 0x14073B224 (PnpAllocateDeviceInstancePath.c)
 *     PnpCopyDeviceInstancePath @ 0x14073B268 (PnpCopyDeviceInstancePath.c)
 *     IoCreateDriver @ 0x14073B280 (IoCreateDriver.c)
 *     PiPnpRtlInit @ 0x14073B710 (PiPnpRtlInit.c)
 *     IopOpenRegistryKeyEx @ 0x14073D664 (IopOpenRegistryKeyEx.c)
 *     CmRegisterSystemHiveLimitCallback @ 0x140764520 (CmRegisterSystemHiveLimitCallback.c)
 *     TraceLoggingUnregister @ 0x140808B88 (TraceLoggingUnregister.c)
 *     PnpLogEvent @ 0x140828FEC (PnpLogEvent.c)
 *     PiDcHandleSystemFirmwareUpdate @ 0x14082AC1C (PiDcHandleSystemFirmwareUpdate.c)
 *     PnpTraceInitialize @ 0x1409AC2EC (PnpTraceInitialize.c)
 *     PiDmInit @ 0x1409BE6F4 (PiDmInit.c)
 *     IopInitializeResourceMap @ 0x1409C1C58 (IopInitializeResourceMap.c)
 *     PiDmaGuardProcessRegistry @ 0x1409C7344 (PiDmaGuardProcessRegistry.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x1409C736C (IopQueryDeviceResetRegistrySettings.c)
 *     PipHardwareConfigInit @ 0x1409C73FC (PipHardwareConfigInit.c)
 *     PiAuCreateSecurityObjects @ 0x1409C77E0 (PiAuCreateSecurityObjects.c)
 *     PiDqInit @ 0x1409C807C (PiDqInit.c)
 *     PiDeviceDependencyInit @ 0x1409C8100 (PiDeviceDependencyInit.c)
 *     PnpInitializeDeviceActions @ 0x1409C8170 (PnpInitializeDeviceActions.c)
 *     PpProfileInit @ 0x1409C81CC (PpProfileInit.c)
 *     PnpInitializeDeviceEvents @ 0x1409C8260 (PnpInitializeDeviceEvents.c)
 *     PnpInitializeNotification @ 0x1409C8358 (PnpInitializeNotification.c)
 *     PnpBusTypeGuidInitialize @ 0x1409C8498 (PnpBusTypeGuidInitialize.c)
 *     PiSwInit @ 0x1409C8524 (PiSwInit.c)
 *     PiDaInit @ 0x1409C85CC (PiDaInit.c)
 *     PiUEventInit @ 0x1409C9230 (PiUEventInit.c)
 *     PiDcInit @ 0x1409C93CC (PiDcInit.c)
 *     PpInitializeBootDDB @ 0x1409C942C (PpInitializeBootDDB.c)
 *     PnpDiagInitialize @ 0x1409C9614 (PnpDiagInitialize.c)
 *     PipMigratePnpState @ 0x1409C9678 (PipMigratePnpState.c)
 *     PpDevCfgInit @ 0x1409C975C (PpDevCfgInit.c)
 *     PipProcessPendingOperations @ 0x1409C9B20 (PipProcessPendingOperations.c)
 *     PnpInitializePnpWatchdogs @ 0x1409CAF5C (PnpInitializePnpWatchdogs.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1409CB088 (PipCheckSystemFirmwareUpdated.c)
 *     PipResetDevices @ 0x1409CB1C0 (PipResetDevices.c)
 *     PiInitCacheGroupInformation @ 0x1409CB3F8 (PiInitCacheGroupInformation.c)
 *     PipInitDeviceOverrideCache @ 0x1409CB648 (PipInitDeviceOverrideCache.c)
 *     PnpInitializeLegacyBusInformationTable @ 0x1409DB694 (PnpInitializeLegacyBusInformationTable.c)
 *     ArbInitializeOsInaccessibleRange @ 0x1409DDFA0 (ArbInitializeOsInaccessibleRange.c)
 *     PnpDeviceCompletionQueueInitialize @ 0x1409DF8CC (PnpDeviceCompletionQueueInitialize.c)
 *     PiInitFirmwareResources @ 0x1409E01D0 (PiInitFirmwareResources.c)
 *     PiCslInitialize @ 0x1409F727C (PiCslInitialize.c)
 */

__int64 __fastcall IopInitializePlugPlayServices(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rbx
  unsigned int *v4; // rdi
  __int64 result; // rax
  int v6; // edx
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rcx
  int CachedContextBaseKey; // ebx
  int v11; // edx
  __int64 v12; // rcx
  int v13; // edx
  __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // rcx
  PVOID v17; // rbx
  struct _DEVICE_OBJECT *v18; // rdi
  PVOID v19; // rcx
  ULONGLONG v20; // rax
  __int64 v21; // rcx
  __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  PVOID P; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  PVOID v25; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING GuidString; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING v27; // [rsp+78h] [rbp-90h] BYREF
  int v28; // [rsp+88h] [rbp-80h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp-78h] BYREF
  ULONG Disposition; // [rsp+98h] [rbp-70h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v34; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v35; // [rsp+C0h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+108h] [rbp+0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+118h] [rbp+10h] BYREF
  PVOID *v40; // [rsp+138h] [rbp+30h]
  __int64 v41; // [rsp+140h] [rbp+38h]
  PVOID *p_P; // [rsp+148h] [rbp+40h]
  __int64 v43; // [rsp+150h] [rbp+48h]
  __int64 *v44; // [rsp+158h] [rbp+50h]
  __int64 v45; // [rsp+160h] [rbp+58h]
  __int64 *v46; // [rsp+168h] [rbp+60h]
  __int64 v47; // [rsp+170h] [rbp+68h]
  __int64 *v48; // [rsp+178h] [rbp+70h]
  __int64 v49; // [rsp+180h] [rbp+78h]
  __int64 *v50; // [rsp+188h] [rbp+80h]
  __int64 v51; // [rsp+190h] [rbp+88h]
  __int64 *v52; // [rsp+198h] [rbp+90h]
  __int64 v53; // [rsp+1A0h] [rbp+98h]
  UNICODE_STRING *p_DestinationString; // [rsp+1A8h] [rbp+A0h]
  __int64 v55; // [rsp+1B0h] [rbp+A8h]
  UNICODE_STRING *p_GuidString; // [rsp+1B8h] [rbp+B0h]
  __int64 v57; // [rsp+1C0h] [rbp+B8h]

  v25 = 0LL;
  LOBYTE(v22) = 0;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 != 1 )
      return (unsigned int)-1073741584;
    result = PnpDiagInitialize();
    if ( (int)result >= 0 )
    {
      PnpTraceInitialize();
      result = PiDcInit(1LL);
      if ( (int)result >= 0 )
      {
        result = PiUEventInit(1LL);
        if ( (int)result >= 0 )
        {
          v20 = *(_QWORD *)(a1 + 240) + 120LL;
          *(_QWORD *)&UserData.Size = 64LL;
          UserData.Ptr = v20;
          PnpDiagnosticTrace(&KMPnPEvt_OsLoader_Time, 1u, &UserData);
          if ( stru_140401410.LevelPlus1 > 4 && TlgKeywordOn(&stru_140401410, 0x400000000000uLL) )
          {
            v21 = *(_QWORD *)(a1 + 240);
            v25 = *(PVOID *)(v21 + 120);
            P = *(PVOID *)(v21 + 128);
            v31 = *(_QWORD *)(v21 + 136);
            v32 = *(_QWORD *)(v21 + 144);
            v33 = *(_QWORD *)(v21 + 168);
            v34 = *(_QWORD *)(v21 + 176);
            v35 = *(_QWORD *)(v21 + 152);
            *(_QWORD *)&DestinationString.Length = *(_QWORD *)(v21 + 160);
            *(_QWORD *)&GuidString.Length = *(_QWORD *)(v21 + 2456);
            v40 = &v25;
            p_P = &P;
            v44 = &v31;
            v46 = &v32;
            v48 = &v33;
            v50 = &v34;
            v52 = &v35;
            p_DestinationString = &DestinationString;
            p_GuidString = &GuidString;
            v41 = 8LL;
            v43 = 8LL;
            v45 = 8LL;
            v47 = 8LL;
            v49 = 8LL;
            v51 = 8LL;
            v53 = 8LL;
            v55 = 8LL;
            v57 = 8LL;
            TlgWrite(&stru_140401410, &unk_14036E186, 0LL, 0LL, 0xBu, &pData);
          }
          TraceLoggingUnregister(&stru_140401410);
          result = PiPnpRtlInit(1u);
          if ( (int)result >= 0 )
          {
            result = PiCslInitialize();
            if ( (int)result >= 0 )
            {
              CachedContextBaseKey = PiDmaGuardInitialize(1);
              if ( CachedContextBaseKey >= 0 )
              {
                PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 10, 0, 0LL, 0LL, 0LL, 0LL);
                KeInitializeEvent((PRKEVENT)&PnpShutdownEvent, NotificationEvent, 0);
                if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL) & 0x400) == 0 )
                  PpInitializeBootDDB(a1, 1LL);
                return 0;
              }
              return (unsigned int)CachedContextBaseKey;
            }
          }
        }
      }
    }
  }
  else
  {
    PnPInitialized = 0;
    PnpSystemHiveLimits = 80;
    dword_14043D934 = 90;
    CmRegisterSystemHiveLimitCallback(a1, a2, (__int64)&PnpSystemHiveLimits);
    PnpSystemHiveTooLarge = 0;
    ObjectAttributes.ObjectName = &CmRegistryMachineHardwareDescriptionSystemName;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition) >= 0 )
    {
      if ( IopGetRegistryValue(KeyHandle, L"OldSystemBiosDate", 0, &P) >= 0 )
      {
        v3 = (unsigned int *)P;
        if ( P )
        {
          if ( IopGetRegistryValue(KeyHandle, L"SystemBiosDate", 0, &P) >= 0 )
          {
            v4 = (unsigned int *)P;
            if ( P )
            {
              RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v3 + v3[2]));
              RtlInitUnicodeString(&GuidString, (PCWSTR)((char *)v4 + v4[2]));
              PnpLogEvent((const void **)&DestinationString, (const void **)&GuidString, 1073741868, 0LL, 0);
              ExFreePoolWithTag(v4, 0);
            }
          }
          ExFreePoolWithTag(v3, 0);
        }
      }
      ZwClose(KeyHandle);
    }
    result = PnpDeviceCompletionQueueInitialize();
    if ( (int)result >= 0 )
    {
      PiInitFirmwareResources(a1);
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL) & 0x400) == 0 )
        PpInitializeBootDDB(a1, 0LL);
      PipInitDeviceOverrideCache();
      KeInitializeEvent(&PnpSystemDeviceEnumerationComplete, NotificationEvent, 0);
      result = PiInitCacheGroupInformation();
      if ( (int)result >= 0 )
      {
        KeInitializeSemaphore(&PpRegistrySemaphore, 1, 1);
        result = PnpInitializeLegacyBusInformationTable();
        if ( (int)result >= 0 )
        {
          IopInitializeResourceMap(a1);
          IopAllocateBootResourcesRoutine = (__int64)IopReportBootResources;
          IopInitReservedResourceList = 0LL;
          PnpDefaultInterfaceType = 1;
          ArbInitializeOsInaccessibleRange((unsigned int)dword_14043B138);
          CachedContextBaseKey = IopPortInitialize(v7, v6);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          CachedContextBaseKey = IopMemInitialize(v9, v8);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          CachedContextBaseKey = IopDmaInitialize(v12, v11);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          CachedContextBaseKey = IopIrqInitialize(v14, v13);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          CachedContextBaseKey = IopBusNumberInitialize(v16, v15);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          CachedContextBaseKey = PiPnpRtlInit(0);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          PipMigratePnpState();
          CachedContextBaseKey = PiDmInit();
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v25);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          v27.Buffer = L"Control\\Pnp";
          *(_DWORD *)&v27.Length = 1572886;
          if ( (int)IopCreateRegistryKeyEx(&Handle, v25, &v27, 0xF003Fu, 0, 0LL) >= 0 )
          {
            if ( IopGetRegistryValue(Handle, L"AsynchronousOptions", 0, &v25) >= 0 )
            {
              if ( *((_DWORD *)v25 + 1) == 4 && *((_DWORD *)v25 + 3) == 4 )
                PnpAsyncOptions = *(_DWORD *)((char *)v25 + *((unsigned int *)v25 + 2));
              ExFreePoolWithTag(v25, 0);
            }
            if ( IopGetRegistryValue(Handle, L"BootOptions", 0, &v25) >= 0 )
            {
              if ( *((_DWORD *)v25 + 1) == 4 && *((_DWORD *)v25 + 3) == 4 )
                PnpBootOptions = *(_DWORD *)((char *)v25 + *((unsigned int *)v25 + 2));
              ExFreePoolWithTag(v25, 0);
            }
            if ( IopGetRegistryValue(Handle, L"FindBestConfigurationTimeout", 0, &v25) >= 0 )
            {
              if ( *((_DWORD *)v25 + 1) == 4 && *((_DWORD *)v25 + 3) == 4 )
                PnpFindBestConfigurationTimeout = *(_DWORD *)((char *)v25 + *((unsigned int *)v25 + 2));
              ExFreePoolWithTag(v25, 0);
            }
            PiDmaGuardProcessRegistry(Handle);
            IopQueryDeviceResetRegistrySettings(Handle);
            ZwClose(Handle);
          }
          *(_DWORD *)&v27.Length = 4063292;
          v27.Buffer = L"\\Registry\\Machine\\System\\Setup";
          if ( IopOpenRegistryKeyEx(&Handle, 0LL, &v27, 0x20019u) >= 0 )
          {
            if ( IopGetRegistryValue(Handle, L"SystemSetupInProgress", 0, &P) >= 0 )
            {
              if ( *((_DWORD *)P + 1) == 4
                && *((_DWORD *)P + 3) == 4
                && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
              {
                PnpSetupInProgress = 1;
              }
              ExFreePoolWithTag(P, 0);
            }
            if ( IopGetRegistryValue(Handle, L"SetupPhase", 0, &P) >= 0 )
            {
              if ( *((_DWORD *)P + 1) == 4
                && *((_DWORD *)P + 3) == 4
                && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
              {
                PnpSetupPhaseInProgress = 1;
              }
              ExFreePoolWithTag(P, 0);
            }
            if ( IopGetRegistryValue(Handle, L"SetupType", 0, &P) >= 0 )
            {
              if ( *((_DWORD *)P + 1) == 4
                && *((_DWORD *)P + 3) == 4
                && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
              {
                PnpSetupTypeInProgress = 1;
              }
              ExFreePoolWithTag(P, 0);
            }
            if ( IopGetRegistryValue(Handle, L"OOBEInProgress", 0, &P) >= 0 )
            {
              if ( *((_DWORD *)P + 1) == 4
                && *((_DWORD *)P + 3) == 4
                && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
              {
                PnpSetupOOBEInProgress = 1;
              }
              ExFreePoolWithTag(P, 0);
            }
            if ( IopGetRegistryValue(Handle, L"Upgrade", 0, &P) >= 0 )
            {
              if ( *((_DWORD *)P + 1) == 4
                && *((_DWORD *)P + 3) == 4
                && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
              {
                PnpSetupUpgradeInProgress = 1;
              }
              ExFreePoolWithTag(P, 0);
            }
            if ( IopGetRegistryValue(Handle, L"RollbackActive", 0, &P) >= 0 )
            {
              if ( *((_DWORD *)P + 1) == 4
                && *((_DWORD *)P + 3) == 4
                && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
              {
                PnpSetupRollbackActiveInProgress = 1;
              }
              ExFreePoolWithTag(P, 0);
            }
            ZwClose(Handle);
          }
          CachedContextBaseKey = PipHardwareConfigInit((GUID *)(*(_QWORD *)(a1 + 240) + 2528LL));
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          PipCheckSystemFirmwareUpdated(&v22);
          CachedContextBaseKey = PiDcInit(0LL);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          CachedContextBaseKey = PiAuCreateSecurityObjects();
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          CachedContextBaseKey = PiDqInit();
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          CachedContextBaseKey = PpDevCfgInit();
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          PipResetDevices();
          CachedContextBaseKey = CmCreateDevice(
                                   *(__int64 *)&PiPnpRtlCtx,
                                   (__int64)L"HTREE\\ROOT\\0",
                                   983103,
                                   &v25,
                                   0LL,
                                   0);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          v17 = v25;
          CmSetDeviceRegProp(
            *(__int64 *)&PiPnpRtlCtx,
            (__int64)L"HTREE\\ROOT\\0",
            (__int64)v25,
            0x25u,
            1u,
            (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
            0x4Eu,
            0);
          v28 = 0;
          CmSetDeviceRegProp(
            *(__int64 *)&PiPnpRtlCtx,
            (__int64)L"HTREE\\ROOT\\0",
            (__int64)v17,
            0xBu,
            4u,
            (__int64)&v28,
            4u,
            0);
          ZwClose(v17);
          qword_140435CB8 = (__int64)&IopPendingEjects;
          IopPendingEjects = (__int64)&IopPendingEjects;
          qword_140435CA8 = (__int64)&IopPendingSurpriseRemovals;
          IopPendingSurpriseRemovals = &IopPendingSurpriseRemovals;
          ExInitializeResourceLite(&IopDeviceTreeLock);
          ExInitializeResourceLite(&IopSurpriseRemoveListLock);
          ExInitializeResourceLite(&PnpDevicePropertyLock);
          ExInitializeResourceLite(&PiEngineLock);
          PnpSpinLock = 0LL;
          KeInitializeGuardedMutex(&PiResourceListLock);
          CachedContextBaseKey = PiDeviceDependencyInit();
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          CachedContextBaseKey = PnpInitializeDeviceActions();
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          PpProfileInit();
          IopWarmEjectPdo = 0LL;
          KeInitializeEvent(&IopWarmEjectLock, SynchronizationEvent, 1u);
          *(_DWORD *)&v27.Length = 2490404;
          v27.Buffer = L"\\Driver\\PnpManager";
          CachedContextBaseKey = IoCreateDriver(&v27, (__int64 (__fastcall *)(PVOID, _QWORD))PipPnPDriverEntry);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          CachedContextBaseKey = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0, 0, (PDEVICE_OBJECT *)&v25);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          v18 = (struct _DEVICE_OBJECT *)v25;
          v19 = v25;
          *((_DWORD *)v25 + 12) |= 0x1000u;
          CachedContextBaseKey = PipAllocateDeviceNode((__int64)v19, (void **)&IopRootDeviceNode);
          if ( !IopRootDeviceNode )
          {
            IoDeleteDevice(v18);
            PsDereferencePrimaryToken(PnpDriverObject);
LABEL_93:
            if ( CachedContextBaseKey >= 0 )
            {
              CachedContextBaseKey = CmAddDeviceToContainer(
                                       *(__int64 *)&PiPnpRtlCtx,
                                       (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                                       (const WCHAR *)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                                       L"HTREE\\ROOT\\0",
                                       0LL);
              if ( CachedContextBaseKey >= 0 )
              {
                if ( (_BYTE)v22 )
                  PiDcHandleSystemFirmwareUpdate();
                PnpInitializePnpWatchdogs();
                CachedContextBaseKey = PnpInitializeDeviceEvents();
                if ( CachedContextBaseKey >= 0 )
                {
                  PnpInitializeNotification();
                  CachedContextBaseKey = PnpBusTypeGuidInitialize();
                  if ( CachedContextBaseKey >= 0 )
                  {
                    KeInitializeEvent(&PnpReplaceEvent, SynchronizationEvent, 1u);
                    CachedContextBaseKey = PiSwInit();
                    if ( CachedContextBaseKey >= 0 )
                    {
                      CachedContextBaseKey = PiUEventInit(0LL);
                      if ( CachedContextBaseKey >= 0 )
                      {
                        CachedContextBaseKey = PiDaInit();
                        if ( CachedContextBaseKey >= 0 )
                        {
                          CachedContextBaseKey = PiDmaGuardInitialize(0);
                          if ( CachedContextBaseKey >= 0 )
                          {
                            PipProcessPendingOperations();
                            PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 10, 0, 0LL, 0LL, 0LL, 0LL);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            return (unsigned int)CachedContextBaseKey;
          }
          PipSetDevNodeFlags(IopRootDeviceNode, 305);
          PipSetDevNodeUserFlags(IopRootDeviceNode, 10);
          *(_DWORD *)(IopRootDeviceNode + 660) = -2;
          CachedContextBaseKey = PnpAllocateDeviceInstancePath(IopRootDeviceNode, 0x1Au);
          if ( CachedContextBaseKey >= 0 )
          {
            *(_DWORD *)&GuidString.Length = 1703960;
            GuidString.Buffer = (wchar_t *)L"HTREE\\ROOT\\0";
            PnpCopyDeviceInstancePath(IopRootDeviceNode, &GuidString);
            CachedContextBaseKey = PnpMapDeviceObjectToDeviceInstance(
                                     *(_QWORD *)(IopRootDeviceNode + 32),
                                     IopRootDeviceNode + 40);
            if ( CachedContextBaseKey >= 0 )
            {
              *(_DWORD *)&GuidString.Length = 5111884;
              GuidString.Buffer = (wchar_t *)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}";
              RtlGUIDFromString(&GuidString, (GUID *)(IopRootDeviceNode + 664));
              PnpQueryAndSaveDeviceNodeCapabilities(IopRootDeviceNode);
              PipSetDevNodeState(IopRootDeviceNode, 776);
              goto LABEL_93;
            }
          }
          return (unsigned int)CachedContextBaseKey;
        }
      }
    }
  }
  return result;
}
