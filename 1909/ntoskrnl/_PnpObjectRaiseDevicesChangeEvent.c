/*
 * XREFs of _PnpObjectRaiseDevicesChangeEvent @ 0x14070A908
 * Callers:
 *     _CmAddDeviceToContainer @ 0x14070CAC0 (_CmAddDeviceToContainer.c)
 *     _CmRemoveDeviceFromContainer @ 0x140936E84 (_CmRemoveDeviceFromContainer.c)
 *     _CmAddPanelDevice @ 0x14093882C (_CmAddPanelDevice.c)
 *     _CmRemovePanelDevice @ 0x140939B58 (_CmRemovePanelDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     _PnpContainerRaiseDevicesChangeEvent @ 0x14070A94C (_PnpContainerRaiseDevicesChangeEvent.c)
 */

__int64 __fastcall PnpObjectRaiseDevicesChangeEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v3)(__int64, __int64, __int64); // r11
  __int64 result; // rax

  v3 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 496);
  result = 0LL;
  if ( v3 )
  {
    if ( (_DWORD)a3 == 5 )
    {
      return PnpContainerRaiseDevicesChangeEvent(a1, a2, v3);
    }
    else
    {
      if ( (_DWORD)a3 == 6 )
        a3 = 6LL;
      return v3(a1, a2, a3);
    }
  }
  return result;
}
