/*
 * XREFs of IopInitializePlugPlayServices @ 0x1409F8558
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeInitializeSemaphore @ 0x14000A390 (KeInitializeSemaphore.c)
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ExInitializeResourceLite @ 0x1400476D0 (ExInitializeResourceLite.c)
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     KeInitializeGuardedMutex @ 0x14009ADD0 (KeInitializeGuardedMutex.c)
 *     IoDeleteDevice @ 0x1400B3E60 (IoDeleteDevice.c)
 *     PipSetDevNodeState @ 0x14014568C (PipSetDevNodeState.c)
 *     PnpDiagnosticTrace @ 0x140153D94 (PnpDiagnosticTrace.c)
 *     PnpRequestDeviceAction @ 0x14015D184 (PnpRequestDeviceAction.c)
 *     PiDmaGuardInitialize @ 0x140189734 (PiDmaGuardInitialize.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x1405C15F0 (RtlGUIDFromString.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C37DC (_PnpCtxGetCachedContextBaseKey.c)
 *     IoCreateDevice @ 0x140681110 (IoCreateDevice.c)
 *     IopGetRegistryValue @ 0x14069A450 (IopGetRegistryValue.c)
 *     IopCreateRegistryKeyEx @ 0x1406E8650 (IopCreateRegistryKeyEx.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x140700474 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     _CmSetDeviceRegProp @ 0x140703BE0 (_CmSetDeviceRegProp.c)
 *     PipSetDevNodeFlags @ 0x14070618C (PipSetDevNodeFlags.c)
 *     _CmAddDeviceToContainer @ 0x14070ACE0 (_CmAddDeviceToContainer.c)
 *     _CmCreateDevice @ 0x1407195D0 (_CmCreateDevice.c)
 *     IopOpenRegistryKeyEx @ 0x14071BDB0 (IopOpenRegistryKeyEx.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140722ABC (PnpMapDeviceObjectToDeviceInstance.c)
 *     PipAllocateDeviceNode @ 0x140723244 (PipAllocateDeviceNode.c)
 *     PipSetDevNodeUserFlags @ 0x14073AB78 (PipSetDevNodeUserFlags.c)
 *     PnpAllocateDeviceInstancePath @ 0x140754A84 (PnpAllocateDeviceInstancePath.c)
 *     PnpCopyDeviceInstancePath @ 0x140754AC8 (PnpCopyDeviceInstancePath.c)
 *     IoCreateDriver @ 0x140754B70 (IoCreateDriver.c)
 *     PiPnpRtlInit @ 0x140755F28 (PiPnpRtlInit.c)
 *     IopPortInitialize @ 0x140760EC4 (IopPortInitialize.c)
 *     IopMemInitialize @ 0x140760F5C (IopMemInitialize.c)
 *     IopDmaInitialize @ 0x140761040 (IopDmaInitialize.c)
 *     IopIrqInitialize @ 0x1407610B4 (IopIrqInitialize.c)
 *     IopBusNumberInitialize @ 0x14076111C (IopBusNumberInitialize.c)
 *     PipUpdateSetupInProgress @ 0x140788C48 (PipUpdateSetupInProgress.c)
 *     CmRegisterSystemHiveLimitCallback @ 0x140789CB4 (CmRegisterSystemHiveLimitCallback.c)
 *     TraceLoggingUnregister @ 0x14084122C (TraceLoggingUnregister.c)
 *     IoDeleteDriver @ 0x140856480 (IoDeleteDriver.c)
 *     PipUpdateSetupInProgressNotify @ 0x14085D358 (PipUpdateSetupInProgressNotify.c)
 *     PnpLogEvent @ 0x1408621D8 (PnpLogEvent.c)
 *     PiDcHandleSystemFirmwareUpdate @ 0x14086417C (PiDcHandleSystemFirmwareUpdate.c)
 *     PnpTraceInitialize @ 0x1409ED51C (PnpTraceInitialize.c)
 *     IopInitializeResourceMap @ 0x1409F4CB8 (IopInitializeResourceMap.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1409F6E88 (PipCheckSystemFirmwareUpdated.c)
 *     PiAuCreateSecurityObjects @ 0x1409F6FBC (PiAuCreateSecurityObjects.c)
 *     PiDqInit @ 0x1409F7878 (PiDqInit.c)
 *     PpDevCfgInit @ 0x1409F78FC (PpDevCfgInit.c)
 *     PipResetDevices @ 0x1409F7B38 (PipResetDevices.c)
 *     PiDeviceDependencyInit @ 0x1409F7D34 (PiDeviceDependencyInit.c)
 *     PnpInitializeDeviceActions @ 0x1409F7DA4 (PnpInitializeDeviceActions.c)
 *     PpProfileInit @ 0x1409F7E00 (PpProfileInit.c)
 *     PnpInitializePnpWatchdogs @ 0x1409F7E94 (PnpInitializePnpWatchdogs.c)
 *     PnpInitializeDeviceEvents @ 0x1409F7ED8 (PnpInitializeDeviceEvents.c)
 *     PnpInitializeNotification @ 0x1409F7FD0 (PnpInitializeNotification.c)
 *     PnpBusTypeGuidInitialize @ 0x1409F8110 (PnpBusTypeGuidInitialize.c)
 *     PiSwInit @ 0x1409F819C (PiSwInit.c)
 *     PiDaInit @ 0x1409F8248 (PiDaInit.c)
 *     PipProcessPendingOperations @ 0x1409F8284 (PipProcessPendingOperations.c)
 *     PnpDiagInitialize @ 0x1409F83BC (PnpDiagInitialize.c)
 *     PiKsrInitialize @ 0x1409F8420 (PiKsrInitialize.c)
 *     PiUEventInit @ 0x1409F90FC (PiUEventInit.c)
 *     PiDcInit @ 0x1409F9298 (PiDcInit.c)
 *     PpInitializeBootDDB @ 0x1409F92F8 (PpInitializeBootDDB.c)
 *     PiDmInit @ 0x1409F93E4 (PiDmInit.c)
 *     PiInitCacheGroupInformation @ 0x140A1719C (PiInitCacheGroupInformation.c)
 *     PiDmaGuardProcessRegistry @ 0x140A17D50 (PiDmaGuardProcessRegistry.c)
 *     PipInitDeviceOverrideCache @ 0x140A1BE74 (PipInitDeviceOverrideCache.c)
 *     PipHardwareConfigInit @ 0x140A1C298 (PipHardwareConfigInit.c)
 *     PnpInitializeLegacyBusInformationTable @ 0x140A1D5D4 (PnpInitializeLegacyBusInformationTable.c)
 *     ArbInitializeOsInaccessibleRange @ 0x140A1F984 (ArbInitializeOsInaccessibleRange.c)
 *     PipMigratePnpState @ 0x140A21114 (PipMigratePnpState.c)
 *     PnpDeviceCompletionQueueInitialize @ 0x140A223D4 (PnpDeviceCompletionQueueInitialize.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x140A226C4 (IopQueryDeviceResetRegistrySettings.c)
 *     PiInitFirmwareResources @ 0x140A22754 (PiInitFirmwareResources.c)
 *     PiCslInitialize @ 0x140A3B87C (PiCslInitialize.c)
 */

__int64 __fastcall IopInitializePlugPlayServices(__int64 a1, int a2)
{
  ETWENABLECALLBACK *v4; // rdx
  __int64 v5; // rcx
  unsigned int *v6; // rbx
  unsigned int *v7; // rdi
  __int64 result; // rax
  int v9; // edx
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // rcx
  int CachedContextBaseKey; // ebx
  int v14; // edx
  __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // rcx
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rcx
  PVOID v21; // rbx
  struct _DEVICE_OBJECT *v22; // rsi
  PVOID v23; // rcx
  ULONGLONG v24; // rax
  __int64 v25; // rcx
  __int64 v26; // [rsp+48h] [rbp-C0h] BYREF
  PVOID v27; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  PVOID P; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING v30; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+78h] [rbp-90h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING GuidString; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v34; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING v36; // [rsp+B8h] [rbp-50h] BYREF
  ULONG Disposition; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v38; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v39; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v40; // [rsp+E0h] [rbp-28h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E8h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+118h] [rbp+10h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+128h] [rbp+20h] BYREF
  PVOID *v44; // [rsp+148h] [rbp+40h]
  __int64 v45; // [rsp+150h] [rbp+48h]
  PVOID *p_P; // [rsp+158h] [rbp+50h]
  __int64 v47; // [rsp+160h] [rbp+58h]
  __int64 *v48; // [rsp+168h] [rbp+60h]
  __int64 v49; // [rsp+170h] [rbp+68h]
  __int64 *v50; // [rsp+178h] [rbp+70h]
  __int64 v51; // [rsp+180h] [rbp+78h]
  __int64 *v52; // [rsp+188h] [rbp+80h]
  __int64 v53; // [rsp+190h] [rbp+88h]
  UNICODE_STRING *p_DestinationString; // [rsp+198h] [rbp+90h]
  __int64 v55; // [rsp+1A0h] [rbp+98h]
  UNICODE_STRING *v56; // [rsp+1A8h] [rbp+A0h]
  __int64 v57; // [rsp+1B0h] [rbp+A8h]
  UNICODE_STRING *p_GuidString; // [rsp+1B8h] [rbp+B0h]
  __int64 v59; // [rsp+1C0h] [rbp+B8h]
  UNICODE_STRING *v60; // [rsp+1C8h] [rbp+C0h]
  __int64 v61; // [rsp+1D0h] [rbp+C8h]

  *(_QWORD *)&v30.Length = 0LL;
  v30.Buffer = 0LL;
  v27 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v36.Length = 0LL;
  v36.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_DWORD *)(&v34.MaximumLength + 1) = 0;
  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  LOBYTE(v26) = 0;
  if ( a2 )
  {
    if ( a2 != 1 )
      return (unsigned int)-1073741584;
    result = PnpDiagInitialize(v5, v4);
    if ( (int)result >= 0 )
    {
      PnpTraceInitialize();
      result = PiDcInit(1LL);
      if ( (int)result >= 0 )
      {
        result = PiUEventInit(1LL);
        if ( (int)result >= 0 )
        {
          v24 = *(_QWORD *)(a1 + 240) + 120LL;
          *(_QWORD *)&UserData.Size = 80LL;
          UserData.Ptr = v24;
          PnpDiagnosticTrace(&KMPnPEvt_OsLoader_Time, 1u, &UserData);
          if ( stru_140426750.LevelPlus1 > 4 && TlgKeywordOn(&stru_140426750, 0x400000000000uLL) )
          {
            v25 = *(_QWORD *)(a1 + 240);
            v27 = *(PVOID *)(v25 + 120);
            P = *(PVOID *)(v25 + 128);
            v38 = *(_QWORD *)(v25 + 136);
            v39 = *(_QWORD *)(v25 + 144);
            v40 = *(_QWORD *)(v25 + 168);
            *(_QWORD *)&DestinationString.Length = *(_QWORD *)(v25 + 176);
            *(_QWORD *)&v36.Length = *(_QWORD *)(v25 + 152);
            *(_QWORD *)&GuidString.Length = *(_QWORD *)(v25 + 160);
            *(_QWORD *)&v34.Length = *(_QWORD *)(v25 + 2480);
            v44 = &v27;
            p_P = &P;
            v48 = &v38;
            v50 = &v39;
            v52 = &v40;
            p_DestinationString = &DestinationString;
            v56 = &v36;
            p_GuidString = &GuidString;
            v60 = &v34;
            v45 = 8LL;
            v47 = 8LL;
            v49 = 8LL;
            v51 = 8LL;
            v53 = 8LL;
            v55 = 8LL;
            v57 = 8LL;
            v59 = 8LL;
            v61 = 8LL;
            TlgWrite(&stru_140426750, &unk_14038CBEF, 0LL, 0LL, 0xBu, &pData);
          }
          TraceLoggingUnregister(&stru_140426750);
          result = PiPnpRtlInit(1u);
          if ( (int)result >= 0 )
          {
            result = PiCslInitialize();
            if ( (int)result >= 0 )
            {
              CachedContextBaseKey = PiDmaGuardInitialize(1);
              if ( CachedContextBaseKey >= 0 )
              {
                result = PiKsrInitialize();
                if ( (int)result < 0 )
                  return result;
                PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 10, 0, 0LL, 0LL, 0LL, 0LL);
                KeInitializeEvent(&PnpShutdownEvent, NotificationEvent, 0);
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
    dword_1404683DC = 90;
    CmRegisterSystemHiveLimitCallback(v5, (__int64)v4, (__int64)&PnpSystemHiveLimits);
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
        v6 = (unsigned int *)P;
        if ( P )
        {
          if ( IopGetRegistryValue(KeyHandle, L"SystemBiosDate", 0, &P) >= 0 )
          {
            v7 = (unsigned int *)P;
            if ( P )
            {
              RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v6 + v6[2]));
              RtlInitUnicodeString(&v36, (PCWSTR)((char *)v7 + v7[2]));
              PnpLogEvent((const void **)&DestinationString, (const void **)&v36, 1073741868, 0LL, 0);
              ExFreePoolWithTag(v7, 0);
            }
          }
          ExFreePoolWithTag(v6, 0);
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
          ArbInitializeOsInaccessibleRange((unsigned int)dword_140465A9C);
          CachedContextBaseKey = IopPortInitialize(v10, v9);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          CachedContextBaseKey = IopMemInitialize(v12, v11);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          CachedContextBaseKey = IopDmaInitialize(v15, v14);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          CachedContextBaseKey = IopIrqInitialize(v17, v16);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          CachedContextBaseKey = IopBusNumberInitialize(v19, v18);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          CachedContextBaseKey = PiPnpRtlInit(0);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          PipMigratePnpState();
          CachedContextBaseKey = PiDmInit();
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v27);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          v30.Buffer = L"Control\\Pnp";
          *(_DWORD *)&v30.Length = 1572886;
          if ( (int)IopCreateRegistryKeyEx(&Handle, v27, &v30, 0xF003Fu, 0, 0LL) >= 0 )
          {
            if ( IopGetRegistryValue(Handle, L"AsynchronousOptions", 0, &v27) >= 0 )
            {
              if ( *((_DWORD *)v27 + 1) == 4 && *((_DWORD *)v27 + 3) == 4 )
                PnpAsyncOptions = *(_DWORD *)((char *)v27 + *((unsigned int *)v27 + 2));
              ExFreePoolWithTag(v27, 0);
            }
            if ( IopGetRegistryValue(Handle, L"BootOptions", 0, &v27) >= 0 )
            {
              if ( *((_DWORD *)v27 + 1) == 4 && *((_DWORD *)v27 + 3) == 4 )
                PnpBootOptions = *(_DWORD *)((char *)v27 + *((unsigned int *)v27 + 2));
              ExFreePoolWithTag(v27, 0);
            }
            if ( IopGetRegistryValue(Handle, L"FindBestConfigurationTimeout", 0, &v27) >= 0 )
            {
              if ( *((_DWORD *)v27 + 1) == 4 && *((_DWORD *)v27 + 3) == 4 )
                PnpFindBestConfigurationTimeout = *(_DWORD *)((char *)v27 + *((unsigned int *)v27 + 2));
              ExFreePoolWithTag(v27, 0);
            }
            PiDmaGuardProcessRegistry(Handle);
            IopQueryDeviceResetRegistrySettings(Handle);
            ZwClose(Handle);
          }
          *(_DWORD *)&v30.Length = 4063292;
          v30.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\Setup";
          if ( IopOpenRegistryKeyEx(&Handle, 0LL, &v30, 0x20019u) >= 0 )
          {
            PipUpdateSetupInProgress(Handle);
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
            if ( PnpSetupInProgress || PnpSetupOOBEInProgress )
            {
              qword_140461450 = (__int64)PipUpdateSetupInProgressCallback;
              qword_140461458 = (__int64)Handle;
              *(_QWORD *)PnpSetupWorkItem = 0LL;
              PipUpdateSetupInProgressNotify(Handle, 0);
            }
            else
            {
              ZwClose(Handle);
            }
            Handle = 0LL;
          }
          CachedContextBaseKey = PipHardwareConfigInit((GUID *)(*(_QWORD *)(a1 + 240) + 2552LL));
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          PipCheckSystemFirmwareUpdated(&v26);
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
          PipResetDevices(v20);
          CachedContextBaseKey = CmCreateDevice(
                                   *(__int64 *)&PiPnpRtlCtx,
                                   (__int64)L"HTREE\\ROOT\\0",
                                   983103,
                                   &v27,
                                   0LL,
                                   0);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          v21 = v27;
          CmSetDeviceRegProp(
            *(__int64 *)&PiPnpRtlCtx,
            (__int64)L"HTREE\\ROOT\\0",
            (__int64)v27,
            0x25u,
            1u,
            (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
            0x4Eu,
            0);
          LODWORD(v31) = 0;
          CmSetDeviceRegProp(
            *(__int64 *)&PiPnpRtlCtx,
            (__int64)L"HTREE\\ROOT\\0",
            (__int64)v21,
            0xBu,
            4u,
            (__int64)&v31,
            4u,
            0);
          ZwClose(v21);
          qword_1404608F8 = (__int64)&IopPendingEjects;
          IopPendingEjects = (__int64)&IopPendingEjects;
          qword_1404608E8 = (__int64)&IopPendingSurpriseRemovals;
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
          *(_DWORD *)&v30.Length = 2490404;
          v30.Buffer = L"\\Driver\\PnpManager";
          CachedContextBaseKey = IoCreateDriver(&v30, (__int64 (__fastcall *)(PVOID, _QWORD))PipPnPDriverEntry);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          CachedContextBaseKey = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0, 0, (PDEVICE_OBJECT *)&v27);
          if ( CachedContextBaseKey < 0 )
            return (unsigned int)CachedContextBaseKey;
          v22 = (struct _DEVICE_OBJECT *)v27;
          v23 = v27;
          *((_DWORD *)v27 + 12) |= 0x1000u;
          CachedContextBaseKey = PipAllocateDeviceNode((__int64)v23, &IopRootDeviceNode);
          if ( !IopRootDeviceNode )
          {
            IoDeleteDevice(v22);
            IoDeleteDriver(&PnpDriverObject->Type);
LABEL_73:
            if ( CachedContextBaseKey >= 0 )
            {
              CachedContextBaseKey = CmAddDeviceToContainer(
                                       *(__int64 *)&PiPnpRtlCtx,
                                       (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                                       (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                                       (__int64)L"HTREE\\ROOT\\0",
                                       0LL);
              if ( CachedContextBaseKey >= 0 )
              {
                if ( (_BYTE)v26 )
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
                            PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 10, 0, 0LL, 0LL, 0LL, 0LL);
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
          PipSetDevNodeFlags((__int64)IopRootDeviceNode, 305);
          PipSetDevNodeUserFlags((__int64)IopRootDeviceNode, 10);
          *((_DWORD *)IopRootDeviceNode + 165) = -2;
          CachedContextBaseKey = PnpAllocateDeviceInstancePath((__int64)IopRootDeviceNode, 0x1Au);
          if ( CachedContextBaseKey >= 0 )
          {
            *(_DWORD *)&v34.Length = 1703960;
            v34.Buffer = (wchar_t *)L"HTREE\\ROOT\\0";
            PnpCopyDeviceInstancePath((__int64)IopRootDeviceNode, &v34);
            CachedContextBaseKey = PnpMapDeviceObjectToDeviceInstance(
                                     *((_QWORD *)IopRootDeviceNode + 4),
                                     (__int64)IopRootDeviceNode + 40);
            if ( CachedContextBaseKey >= 0 )
            {
              *(_DWORD *)&GuidString.Length = 5111884;
              GuidString.Buffer = L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}";
              RtlGUIDFromString(&GuidString, (GUID *)((char *)IopRootDeviceNode + 664));
              PnpQueryAndSaveDeviceNodeCapabilities((__int64)IopRootDeviceNode);
              PipSetDevNodeState((__int64)IopRootDeviceNode, 776);
              goto LABEL_73;
            }
          }
          return (unsigned int)CachedContextBaseKey;
        }
      }
    }
  }
  return result;
}
