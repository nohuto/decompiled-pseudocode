/*
 * XREFs of DrvSetPruneFlag @ 0x1C0105384
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C004B98C (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     DrvGetDeviceFromName @ 0x1C0015070 (DrvGetDeviceFromName.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJG@Z @ 0x1C001BD10 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x1C0049B60 (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvSetPruneFlag(const UNICODE_STRING *a1, unsigned __int8 a2, int a3)
{
  wchar_t *DeviceFromName; // rax
  wchar_t *v6; // rdi
  HANDLE RegistryHandleFromDeviceMap; // rbp
  NTSTATUS v9; // ebx
  __int64 v10; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  int Data; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 )
    return 4294967291LL;
  DeviceFromName = DrvGetDeviceFromName(a1);
  v6 = DeviceFromName;
  if ( !DeviceFromName || a3 && !*((_QWORD *)DeviceFromName + 17) && (*((_DWORD *)DeviceFromName + 40) & 0x6000008) == 0 )
    return 4294967291LL;
  if ( DrvIsPermanentSettingChangesDisabled() )
    return 4294967293LL;
  Data = a2;
  RegistryHandleFromDeviceMap = DrvGetRegistryHandleFromDeviceMap(v6, 0, 0LL, 0LL, 0, 0LL, gProtocolType);
  if ( !RegistryHandleFromDeviceMap )
    return 0xFFFFFFFFLL;
  RtlInitUnicodeString(&DestinationString, L"PruningMode");
  v9 = ZwSetValueKey(RegistryHandleFromDeviceMap, &DestinationString, 0, 4u, &Data, 4u);
  ZwClose(RegistryHandleFromDeviceMap);
  if ( v9 < 0 )
    return 0xFFFFFFFFLL;
  if ( (*((_DWORD *)v6 + 40) & 0x800000) != 0
    && (LOBYTE(v10) = a2 == 0, (int)((__int64 (__fastcall *)(__int64))qword_1C01CD990)(v10) < 0) )
  {
    return 0xFFFFFFFFLL;
  }
  else
  {
    return 0LL;
  }
}
