/*
 * XREFs of DllInitialize @ 0x1C00208A0
 * Callers:
 *     <none>
 * Callees:
 *     RaidCheckD3AllowedOnCurrentPlatform @ 0x1C00213B0 (RaidCheckD3AllowedOnCurrentPlatform.c)
 *     RaidLoadATADeviceIdMappings @ 0x1C002141C (RaidLoadATADeviceIdMappings.c)
 *     RaidLoadEnclosureIdMappings @ 0x1C00214FC (RaidLoadEnclosureIdMappings.c)
 *     RaidpIsCurrentOsInstallationUpgrade @ 0x1C00215DC (RaidpIsCurrentOsInstallationUpgrade.c)
 *     RaidpIsControlledUpdateOSEnvironment @ 0x1C0021714 (RaidpIsControlledUpdateOSEnvironment.c)
 *     RaidpIsControlledWinPEEnvironment @ 0x1C0021900 (RaidpIsControlledWinPEEnvironment.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 *     RaidDecodeSmRegistryBlob @ 0x1C0051F58 (RaidDecodeSmRegistryBlob.c)
 *     StorpRegisterShim @ 0x1C0070208 (StorpRegisterShim.c)
 *     SpVerifierInitialization @ 0x1C0075A24 (SpVerifierInitialization.c)
 */

__int64 DllInitialize()
{
  int v0; // ecx
  int v1; // eax
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  __int64 OutputBuffer; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v7; // [rsp+60h] [rbp-A8h] BYREF
  int v8; // [rsp+64h] [rbp-A4h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v10[4]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v11[12]; // [rsp+9Ch] [rbp-6Ch] BYREF
  _DWORD SystemInformation[16]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+E8h] [rbp-20h] BYREF
  int v14; // [rsp+ECh] [rbp-1Ch]
  UCHAR Buffer[260]; // [rsp+F4h] [rbp-14h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  LOBYTE(OutputBuffer) = 0;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  v8 = 0;
  v7 = 4;
  if ( ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u) >= 0 && (_BYTE)OutputBuffer )
    IsSystemAoAC = 1;
  g_InWinPE = RaidpIsControlledWinPEEnvironment();
  RaidpIsControlledUpdateOSEnvironment();
  g_OSisUpgrade = RaidpIsCurrentOsInstallationUpgrade();
  RtlInitUnicodeString(&DestinationString, L"SMR-HostManaged-Enabled");
  if ( (int)ZwQueryLicenseValue(&DestinationString, v10, &v8, v7, &v7) >= 0 && v8 == 1 )
    IsSMREnabled = 1;
  if ( !_InterlockedExchangeAdd(&NumDllInitialize, 1u) )
  {
    StorpRegisterShim();
    qword_1C0062738 = (__int64)&EnclosureIdList;
    EnclosureIdList = (__int64)&EnclosureIdList;
    ExInitializeResourceLite((PERESOURCE)&WPP_MAIN_CB.Dpc.DpcData);
    RaidLoadEnclosureIdMappings();
    WPP_MAIN_CB.DeviceQueue.Lock = (unsigned __int64)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
    WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = (_LIST_ENTRY *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
    ExInitializeResourceLite((PERESOURCE)&WPP_MAIN_CB.DeviceExtension);
    RaidLoadATADeviceIdMappings();
  }
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"LogControlEnable");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v14 == 11
      && ResultLength[0] >= 8 )
    {
      qword_1C00622B0 = *(_QWORD *)Buffer;
      if ( !*(_QWORD *)Buffer )
        RaidLogListSize = 0;
    }
    RtlInitUnicodeString(&DestinationString, L"LogSize");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v14 == 4
      && ResultLength[0] >= 4 )
    {
      v0 = *(_DWORD *)Buffer;
      RaidLogListSize = *(_DWORD *)Buffer;
      if ( *(_DWORD *)Buffer <= 0x60000u )
      {
        if ( !*(_DWORD *)Buffer )
          goto LABEL_24;
        if ( *(_DWORD *)Buffer < 0x40u )
        {
          RaidLogListSize = 64;
          v0 = 64;
        }
        if ( !v0 )
LABEL_24:
          qword_1C00622B0 = 0LL;
      }
      else
      {
        RaidLogListSize = 393216;
      }
    }
    RtlInitUnicodeString(&DestinationString, L"DpcCompletionLimit");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v14 == 4
      && ResultLength[0] >= 4 )
    {
      DpcCompletionLimit = *(_DWORD *)Buffer;
      if ( !*(_DWORD *)Buffer )
        DpcCompletionLimit = -1;
    }
    RtlInitUnicodeString(&DestinationString, L"HiberFileHybridPriority");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v14 == 3 )
    {
      HiberFileHybridPriority = RaidDecodeSmRegistryBlob(Buffer);
    }
    RtlInitUnicodeString(&DestinationString, L"HmbAllocationPolicy");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v14 == 4 )
    {
      HmbAllocationPolicy = *(_DWORD *)Buffer;
    }
    RtlInitUnicodeString(&DestinationString, L"HmbMaximumSizeInBytes");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v14 == 4 )
    {
      v1 = *(_DWORD *)Buffer;
      HmbMaximumSize = *(_DWORD *)Buffer;
      if ( *(_DWORD *)Buffer > 0x4000000u )
      {
        HmbMaximumSize = 0x4000000;
        v1 = 0x4000000;
      }
      if ( (v1 & 0xFFF) != 0 )
        HmbMaximumSize = v1 & 0xFFFFF000;
    }
    RtlInitUnicodeString(&DestinationString, L"MiniportBugActionPolicy");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v14 == 4 )
    {
      MiniportBugActionPolicy = *(_DWORD *)Buffer;
      if ( *(_DWORD *)Buffer >= 3u )
        MiniportBugActionPolicy = 1;
    }
    RtlInitUnicodeString(&DestinationString, L"TelemetryPerformanceHighResolutionTimer");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v14 == 4
      && ResultLength[0] >= 4 )
    {
      g_StorpTraceLoggingPerformanceHighResolutionTimer = *(_DWORD *)Buffer;
    }
    RtlInitUnicodeString(&DestinationString, L"TelemetryPerformanceEnabled");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v14 == 4
      && ResultLength[0] >= 4 )
    {
      g_StorpTraceLoggingPerformanceEnabled = *(_DWORD *)Buffer;
    }
    RtlInitUnicodeString(&DestinationString, L"TelemetryErrorDataEnabled");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v14 == 4
      && ResultLength[0] >= 4 )
    {
      g_StorpTraceLoggingErrorDataEnabled = *(_DWORD *)Buffer;
    }
    RtlInitUnicodeString(&DestinationString, L"TelemetryDeviceHealthEnabled");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v14 == 4
      && ResultLength[0] >= 4 )
    {
      g_StorpTraceLoggingDeviceHealthEnabled = *(_DWORD *)Buffer;
    }
    RtlInitUnicodeString(&DestinationString, L"TelemetryCriticalEventEnabled");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v14 == 4
      && ResultLength[0] >= 4 )
    {
      g_StorpTraceLoggingCriticalEventEnabled = *(_DWORD *)Buffer;
      g_StorpTraceLoggingCriticalEventEnabledSetByRegistry = 1;
    }
    RtlInitUnicodeString(&DestinationString, L"TelemetryCriticalEventMaximum");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v14 == 4
      && ResultLength[0] >= 4 )
    {
      g_StorpTraceLoggingCriticalEventMaximum = *(_DWORD *)Buffer;
    }
    RtlInitUnicodeString(&DestinationString, L"ExtendedDSMCommandsSupported");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v14 == 4
      && ResultLength[0] >= 4 )
    {
      ExtendedDSMCommandsSupported = *(_DWORD *)Buffer != 0;
    }
    RtlInitUnicodeString(&DestinationString, L"FUAEnable");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v14 == 4
      && ResultLength[0] >= 4 )
    {
      FUAEnabled = *(_DWORD *)Buffer != 0;
    }
    RtlInitUnicodeString(&DestinationString, L"QoSFlags");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v14 == 4
      && ResultLength[0] >= 4 )
    {
      g_QosFlags = *(_DWORD *)Buffer;
    }
    RtlInitUnicodeString(&DestinationString, L"MaxPreAllocatedIoResourceCount");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v14 == 4
      && ResultLength[0] >= 4
      && *(_DWORD *)Buffer )
    {
      StorPreAllocatedMaxIoResourceCount = *(_DWORD *)Buffer;
    }
    ZwClose(KeyHandle);
  }
  if ( SpVrfyLevel != -1 )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\Verifier");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"VerifyLevel");
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x110u,
             ResultLength) >= 0
        && v14 == 4
        && ResultLength[0] >= 4 )
      {
        SpVrfyLevel |= *(_DWORD *)Buffer;
        if ( SpVrfyLevel != -1 && !StorPortVerifierInitialized && (unsigned __int8)SpVerifierInitialization() )
        {
          StorPortVerifierInitialized = 1;
          RaidVerifierEnabled = 1;
        }
      }
      ZwClose(KeyHandle);
    }
    if ( (unsigned __int8)RaidCheckD3AllowedOnCurrentPlatform() )
      StorageD3AllowedOnCurrentPlatform = 1;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Storage");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"StorageD3InModernStandby");
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x110u,
             ResultLength) >= 0
        && v14 == 4
        && ResultLength[0] >= 4 )
      {
        StorageD3RegistryState = *(_DWORD *)Buffer != 0;
      }
      ZwClose(KeyHandle);
    }
    if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) >= 0 )
    {
      HighestPhysicalAddress = (unsigned __int64)SystemInformation[5] << 12;
      PhysicalMemorySize = (unsigned __int64)SystemInformation[3] << 12;
    }
    ExQueryTimerResolution(&StorMaximumTimeInterval, &StorMinimumTimeInterval, v11);
  }
  return 0LL;
}
