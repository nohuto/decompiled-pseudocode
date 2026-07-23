/*
 * XREFs of IopInitializeBootDrivers @ 0x1409CC0BC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlStringCbCatW @ 0x140007428 (RtlStringCbCatW.c)
 *     RtlStringCchPrintfExW @ 0x140015EF4 (RtlStringCchPrintfExW.c)
 *     RtlStringCbPrintfW @ 0x1400161B0 (RtlStringCbPrintfW.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     HeadlessKernelAddLogEntry @ 0x1400F52E8 (HeadlessKernelAddLogEntry.c)
 *     PnpUnlockDeviceActionQueue @ 0x140135460 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140135504 (PnpLockDeviceActionQueue.c)
 *     PnpDiagnosticTrace @ 0x1401372E4 (PnpDiagnosticTrace.c)
 *     PnpRequestDeviceAction @ 0x14015F104 (PnpRequestDeviceAction.c)
 *     PnpBootDeviceWait @ 0x14018252C (PnpBootDeviceWait.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     strstr @ 0x140195000 (strstr.c)
 *     _memicmp @ 0x1401B2ED0 (_memicmp.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     McTemplateK0dzd @ 0x140287794 (McTemplateK0dzd.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlStringFromGUID @ 0x14058C220 (RtlStringFromGUID.c)
 *     PnpUnicodeStringToWstrFree @ 0x1405990AC (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14059ACA8 (PnpUnicodeStringToWstr.c)
 *     RtlCompareUnicodeString @ 0x1405C0F20 (RtlCompareUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     IopGetDriverNameFromKeyNode @ 0x140681500 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 *     _PnpCtxRegCreateKey @ 0x1406E7704 (_PnpCtxRegCreateKey.c)
 *     PipHardwareConfigGetIndex @ 0x14073D380 (PipHardwareConfigGetIndex.c)
 *     _PnpCtxRegCloseKey @ 0x14073D52C (_PnpCtxRegCloseKey.c)
 *     IopOpenRegistryKeyEx @ 0x14073D664 (IopOpenRegistryKeyEx.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x14073D6A4 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14073D6D0 (PnpWaitForEmptyDeviceActionQueue.c)
 *     PiCreateDriverRedirectedStateKey @ 0x1407583E8 (PiCreateDriverRedirectedStateKey.c)
 *     _PnpCtxRegSetValue @ 0x1408F71A8 (_PnpCtxRegSetValue.c)
 *     IopAllocateLegacyBootResources @ 0x1409C19B8 (IopAllocateLegacyBootResources.c)
 *     PipInitComputerIds @ 0x1409C9C60 (PipInitComputerIds.c)
 *     PipInitializeCoreDriversAndElam @ 0x1409CB89C (PipInitializeCoreDriversAndElam.c)
 *     PnpWaitForDevicesToStart @ 0x1409CB968 (PnpWaitForDevicesToStart.c)
 *     PipInitializeDriverDependentDLLs @ 0x1409CBB40 (PipInitializeDriverDependentDLLs.c)
 *     PipGetDriverTagPriority @ 0x1409CBF08 (PipGetDriverTagPriority.c)
 *     PnpInitializeBootStartDriver @ 0x1409CC918 (PnpInitializeBootStartDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x1409CCF98 (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x1409CD0A0 (PipCheckDependencies.c)
 *     PipLookupGroupName @ 0x1409CD0EC (PipLookupGroupName.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x1409CD25C (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     IopCreateArcNames @ 0x1409D7694 (IopCreateArcNames.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x1409DA820 (PiCreateDriverDataDirectoryRoot.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x1409DB5EC (IopCallBootDriverReinitializationRoutines.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x1409DF194 (PipUnloadEarlyLaunchDrivers.c)
 *     PipAddDevicesToBootDriver @ 0x1409F6178 (PipAddDevicesToBootDriver.c)
 *     VhdiGetDiskParameters @ 0x1409FA138 (VhdiGetDiskParameters.c)
 *     VhdiMountVhdFile @ 0x1409FA784 (VhdiMountVhdFile.c)
 *     RamdiskStart @ 0x1409FAD4C (RamdiskStart.c)
 *     SbpAddTransportToInstance @ 0x1409FB08C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1409FB274 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x1409FB64C (SbpWaitForVmbus.c)
 */

__int64 __fastcall IopInitializeBootDrivers(void *a1)
{
  NTSTATUS RegistryValue; // ebx
  PVOID Object; // [rsp+60h] [rbp-A8h]
  HANDLE Handle[4]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID P; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v7; // [rsp+C0h] [rbp-48h] BYREF
  UNICODE_STRING Destination; // [rsp+D0h] [rbp-38h] BYREF
  int v9; // [rsp+E0h] [rbp-28h] BYREF
  const wchar_t *v10; // [rsp+E8h] [rbp-20h]

  Handle[2] = a1;
  Object = 0LL;
  PnpDiagnosticTrace(&KMPnPEvt_BootStart_Start, 0, 0LL);
  PnpDriverImageLoadPolicy = 3;
  v7.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Policies\\EarlyLaunch";
  *(_DWORD *)&v7.Length = 8388734;
  if ( IopOpenRegistryKeyEx(Handle, 0LL, &v7, 0x20019u) >= 0
    || (*(_DWORD *)&v7.Length = 8257660,
        v7.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\EarlyLaunch",
        IopOpenRegistryKeyEx(Handle, 0LL, &v7, 0x20019u) >= 0) )
  {
    RegistryValue = IopGetRegistryValue(Handle[0], L"DriverLoadPolicy", 0, &P);
    ZwClose(Handle[0]);
    if ( RegistryValue >= 0 )
    {
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
        PnpDriverImageLoadPolicy = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
      ExFreePoolWithTag(P, 0);
    }
  }
  if ( PnpDriverImageLoadPolicy == 8 )
  {
    PnpDriverImageLoadPolicy = 0;
  }
  else if ( (PnpDriverImageLoadPolicy & 0xFFFFFFF8) != 0 )
  {
    PnpDriverImageLoadPolicy = 3;
  }
  PipInitializeCoreDriversAndElam((__int64)a1);
  PipInitComputerIds((__int64)a1);
  v9 = 2097182;
  v10 = L"\\FileSystem\\RAW";
  Destination.Buffer = (wchar_t *)qword_1409E22F0;
  *(_DWORD *)&Destination.Length = 0x20000;
  PnpInitializeBootStartDriver(
    (unsigned int)&v9,
    (unsigned int)&Destination,
    (unsigned int)RawInitialize,
    0,
    (__int64)a1 + 16,
    0,
    0);
  return 0LL;
}
