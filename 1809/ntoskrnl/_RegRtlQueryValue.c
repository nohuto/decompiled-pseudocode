/*
 * XREFs of _RegRtlQueryValue @ 0x1405C79A8
 * Callers:
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x14059E1B8 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x14059EE90 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PiCMValidateDeviceInstance @ 0x14059F414 (PiCMValidateDeviceInstance.c)
 *     _PnpRegQueryValueIndirect @ 0x1406A2FC0 (_PnpRegQueryValueIndirect.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406D29E4 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetRegValueMappedProperty @ 0x1406D3A7C (DrvDbGetRegValueMappedProperty.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1406DC1FC (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmAddDeviceToContainerWorker @ 0x1406E8174 (_CmAddDeviceToContainerWorker.c)
 *     _CmIsDeviceInContainer @ 0x1406EA808 (_CmIsDeviceInContainer.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1406F161C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1406F17C8 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406FA548 (_PnpGetGenericStorePropertyKeys.c)
 *     _SysCtxOpenControlSet @ 0x14073BC98 (_SysCtxOpenControlSet.c)
 *     PnpGetServiceStartType @ 0x14073BD40 (PnpGetServiceStartType.c)
 *     PipHardwareConfigGetIndex @ 0x14073C190 (PipHardwareConfigGetIndex.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14073C21C (PnpHardwareConfigCreateBootDriverFlags.c)
 *     _PnpCtxRegQueryValue @ 0x14073C304 (_PnpCtxRegQueryValue.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14074AE80 (_CmDeviceClassesSubkeyCallback.c)
 *     PipHardwareConfigGetLastUseTime @ 0x140822EB8 (PipHardwareConfigGetLastUseTime.c)
 *     PnpCheckDriverDependencies @ 0x140827948 (PnpCheckDriverDependencies.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x14082885C (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14083D7E8 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x14083DD8C (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14083E128 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmAddPanelDeviceWorker @ 0x1408FB214 (_CmAddPanelDeviceWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x1408FE268 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x1409014A8 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x1409018EC (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x140901A58 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140901BC4 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1409032E4 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1401B8470 (ZwQueryValueKey.c)
 *     memmove @ 0x1401D1540 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
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
