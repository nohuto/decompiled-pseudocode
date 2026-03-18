/*
 * XREFs of _PnpObjectRaisePropertyChangeEvent @ 0x1406E5B04
 * Callers:
 *     _CmRaisePropertyChangeEvent @ 0x1406E2D9C (_CmRaisePropertyChangeEvent.c)
 *     _PnpSetObjectPropertyWorker @ 0x1406E57BC (_PnpSetObjectPropertyWorker.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1406E5A90 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _CmAddDeviceToContainerWorker @ 0x1406E8194 (_CmAddDeviceToContainerWorker.c)
 *     _CmSetDeviceMappedProperty @ 0x1406E9454 (_CmSetDeviceMappedProperty.c)
 *     _CmSetDeviceInterfaceMappedProperty @ 0x1406FC8A0 (_CmSetDeviceInterfaceMappedProperty.c)
 *     IopProcessSetInterfaceState @ 0x14070F918 (IopProcessSetInterfaceState.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1408F98F4 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x1408FB234 (_CmAddPanelDeviceWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x1408FC594 (_CmRemovePanelDeviceWorker.c)
 *     _CmSetInstallerClassMappedProperty @ 0x1408FF4A0 (_CmSetInstallerClassMappedProperty.c)
 *     _CmSetInterfaceClassMappedProperty @ 0x1408FFBCC (_CmSetInterfaceClassMappedProperty.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     _PnpInterfaceRaisePropertyChangeEventWorker @ 0x1406E5180 (_PnpInterfaceRaisePropertyChangeEventWorker.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1406E5BE0 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _PnpInstallerClassRaisePropertyChangeEventWorker @ 0x1408FAF28 (_PnpInstallerClassRaisePropertyChangeEventWorker.c)
 *     _PnpInterfaceClassRaisePropertyChangeEventWorker @ 0x1408FAFF0 (_PnpInterfaceClassRaisePropertyChangeEventWorker.c)
 */

__int64 __fastcall PnpObjectRaisePropertyChangeEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 (__fastcall *v6)(__int64, __int64, __int64, __int64, _QWORD *); // rbx
  __int64 result; // rax
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF

  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD *))(a1 + 496);
  if ( v6 )
  {
    switch ( (_DWORD)a3 )
    {
      case 1:
        return PnpDeviceRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 496));
      case 2:
        return PnpInstallerClassRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 496));
      case 3:
        return PnpInterfaceRaisePropertyChangeEventWorker(
                 a1,
                 a2,
                 a4,
                 a5,
                 a6,
                 *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 496));
      case 4:
        return PnpInterfaceClassRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 496));
      default:
        v8[1] = a5;
        v8[2] = a6;
        v8[0] = a4;
        return v6(a1, a2, a3, 4LL, v8);
    }
  }
  return result;
}
