/*
 * XREFs of _RegRtlQueryValue @ 0x1405C89A8
 * Callers:
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x14059F1B8 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x14059FE90 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PiCMValidateDeviceInstance @ 0x1405A0414 (PiCMValidateDeviceInstance.c)
 *     _PnpRegQueryValueIndirect @ 0x1406A4260 (_PnpRegQueryValueIndirect.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406D3C84 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetRegValueMappedProperty @ 0x1406D4D1C (DrvDbGetRegValueMappedProperty.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1406DD49C (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmAddDeviceToContainerWorker @ 0x1406E9414 (_CmAddDeviceToContainerWorker.c)
 *     _CmIsDeviceInContainer @ 0x1406EBAA8 (_CmIsDeviceInContainer.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1406F28BC (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1406F2A68 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406FB7E8 (_PnpGetGenericStorePropertyKeys.c)
 *     _SysCtxOpenControlSet @ 0x14073CE88 (_SysCtxOpenControlSet.c)
 *     PnpGetServiceStartType @ 0x14073CF30 (PnpGetServiceStartType.c)
 *     PipHardwareConfigGetIndex @ 0x14073D380 (PipHardwareConfigGetIndex.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14073D40C (PnpHardwareConfigCreateBootDriverFlags.c)
 *     _PnpCtxRegQueryValue @ 0x14073D4F4 (_PnpCtxRegQueryValue.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14074C070 (_CmDeviceClassesSubkeyCallback.c)
 *     PipHardwareConfigGetLastUseTime @ 0x1408240B8 (PipHardwareConfigGetLastUseTime.c)
 *     PnpCheckDriverDependencies @ 0x140828B48 (PnpCheckDriverDependencies.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140829A5C (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14083EA48 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x14083EFEC (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14083F388 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmAddPanelDeviceWorker @ 0x1408FC4D4 (_CmAddPanelDeviceWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x1408FF528 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140902768 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x140902BAC (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x140902D18 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140902E84 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1409045A4 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RegRtlQueryValue(HANDLE KeyHandle, const WCHAR *a2, _DWORD *a3, void *a4, unsigned int *a5)
{
  void *v8; // rsi
  unsigned int inited; // ebx
  char *p_KeyValueInformation; // rdi
  ULONG Length; // ebp
  NTSTATUS v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // eax
  unsigned int v16; // eax
  PVOID PoolWithTag; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-E8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-E0h] BYREF
  char KeyValueInformation; // [rsp+48h] [rbp-D0h] BYREF

  v8 = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( (inited & 0x80000000) != 0 )
    return inited;
  if ( !a4 || *a5 <= 0x80 )
  {
    p_KeyValueInformation = &KeyValueInformation;
    Length = 140;
LABEL_5:
    v12 = ZwQueryValueKey(
            KeyHandle,
            &DestinationString,
            KeyValuePartialInformation,
            p_KeyValueInformation,
            Length,
            &ResultLength);
    inited = v12;
    if ( !v12 || v12 == -2147483643 )
    {
      v13 = *a5;
      v14 = *((_DWORD *)p_KeyValueInformation + 2);
      *a5 = v14;
      if ( v13 < v14 )
        inited = -1073741789;
      else
        memmove(a4, p_KeyValueInformation + 12, *((unsigned int *)p_KeyValueInformation + 2));
      if ( a3 )
        *a3 = *((_DWORD *)p_KeyValueInformation + 1);
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    return inited;
  }
  v16 = *a5 + 12;
  Length = -1;
  if ( v16 >= 0xC )
    Length = *a5 + 12;
  inited = *a5 >= 0xFFFFFFF4 ? 0xC0000095 : 0;
  if ( v16 >= 0xC )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x4C474552u);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    p_KeyValueInformation = (char *)PoolWithTag;
    goto LABEL_5;
  }
  return inited;
}
