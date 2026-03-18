/*
 * XREFs of _PnpObjectRaisePropertyChangeEvent @ 0x140708884
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x1407035FC (_CmSetDeviceMappedProperty.c)
 *     _CmRaisePropertyChangeEvent @ 0x140705D24 (_CmRaisePropertyChangeEvent.c)
 *     _PnpSetObjectPropertyWorker @ 0x14070854C (_PnpSetObjectPropertyWorker.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140708810 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _CmAddDeviceToContainerWorker @ 0x14070CC1C (_CmAddDeviceToContainerWorker.c)
 *     IopProcessSetInterfaceState @ 0x140733D08 (IopProcessSetInterfaceState.c)
 *     _CmSetDeviceInterfaceMappedProperty @ 0x1407380B0 (_CmSetDeviceInterfaceMappedProperty.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140936FC4 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x140938970 (_CmAddPanelDeviceWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x140939C9C (_CmRemovePanelDeviceWorker.c)
 *     _CmSetInstallerClassMappedProperty @ 0x14093D2EC (_CmSetInstallerClassMappedProperty.c)
 *     _CmSetInterfaceClassMappedProperty @ 0x14093DA18 (_CmSetInterfaceClassMappedProperty.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x14070896C (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _PnpInterfaceRaisePropertyChangeEventWorker @ 0x140738970 (_PnpInterfaceRaisePropertyChangeEventWorker.c)
 *     _PnpInstallerClassRaisePropertyChangeEventWorker @ 0x140938630 (_PnpInstallerClassRaisePropertyChangeEventWorker.c)
 *     _PnpInterfaceClassRaisePropertyChangeEventWorker @ 0x140938724 (_PnpInterfaceClassRaisePropertyChangeEventWorker.c)
 */

__int64 __fastcall PnpObjectRaisePropertyChangeEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 (__fastcall *v6)(__int64, __int64, __int64, __int64, __int64 *); // rbx
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-18h]

  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64 *))(a1 + 496);
  result = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( v6 )
  {
    switch ( (_DWORD)a3 )
    {
      case 1:
        return PnpDeviceRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, (__int64)v6);
      case 2:
        return PnpInstallerClassRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, (__int64)v6);
      case 3:
        return PnpInterfaceRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, (__int64)v6);
      case 4:
        return PnpInterfaceClassRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, (__int64)v6);
      default:
        v9 = a5;
        v10 = a6;
        v8 = a4;
        return v6(a1, a2, a3, 4LL, &v8);
    }
  }
  return result;
}
