/*
 * XREFs of _RegRtlQueryValue @ 0x1405C32E4
 * Callers:
 *     _PnpRegQueryValueIndirect @ 0x1405B5400 (_PnpRegQueryValueIndirect.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x140623620 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x140625B98 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     DrvDbGetRegValueMappedProperty @ 0x1406F2FB8 (DrvDbGetRegValueMappedProperty.c)
 *     _PnpCtxRegQueryValue @ 0x1406F30B4 (_PnpCtxRegQueryValue.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1406FE230 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1406FE794 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmIsDeviceInContainer @ 0x14070B6CC (_CmIsDeviceInContainer.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140715D4C (_PnpGetGenericStorePropertyKeys.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1407233C4 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     PipHardwareConfigGetIndex @ 0x140754558 (PipHardwareConfigGetIndex.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1407545E4 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     _SysCtxOpenControlSet @ 0x1407555F8 (_SysCtxOpenControlSet.c)
 *     PnpGetServiceStartType @ 0x140764538 (PnpGetServiceStartType.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140768870 (_CmDeviceClassesSubkeyCallback.c)
 *     PipHardwareConfigGetLastUseTime @ 0x14085D1F4 (PipHardwareConfigGetLastUseTime.c)
 *     PnpCheckDriverDependencies @ 0x140861D28 (PnpCheckDriverDependencies.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140862D98 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDrvDbOverlayCopyKeys @ 0x140878C3C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x1408791D4 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408795FC (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmAddPanelDeviceWorker @ 0x140938F00 (_CmAddPanelDeviceWorker.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x14093F7FC (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x14093FC6C (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x14093FDF8 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x14093FF84 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RegRtlQueryValue(HANDLE KeyHandle, const WCHAR *a2, _DWORD *a3, void *a4, unsigned int *a5)
{
  void *v8; // rsi
  NTSTATUS inited; // ebx
  char *p_KeyValueInformation; // rdi
  ULONG Length; // ebx
  NTSTATUS v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // eax
  PVOID PoolWithTag; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-E8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-E0h] BYREF
  char KeyValueInformation; // [rsp+48h] [rbp-D0h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v8 = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited >= 0 )
  {
    if ( a4 && *a5 > 0x80 )
    {
      Length = *a5 + 12;
      if ( Length < 0xC )
        return (unsigned int)-1073741675;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x4C474552u);
      v8 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      p_KeyValueInformation = (char *)PoolWithTag;
    }
    else
    {
      p_KeyValueInformation = &KeyValueInformation;
      Length = 140;
    }
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
  }
  return (unsigned int)inited;
}
