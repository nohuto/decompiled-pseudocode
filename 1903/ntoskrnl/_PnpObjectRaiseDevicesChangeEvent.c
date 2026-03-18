/*
 * XREFs of _PnpObjectRaiseDevicesChangeEvent @ 0x140708B28
 * Callers:
 *     _CmAddDeviceToContainer @ 0x14070ACE0 (_CmAddDeviceToContainer.c)
 *     _CmRemoveDeviceFromContainer @ 0x140937414 (_CmRemoveDeviceFromContainer.c)
 *     _CmAddPanelDevice @ 0x140938DBC (_CmAddPanelDevice.c)
 *     _CmRemovePanelDevice @ 0x14093A0E8 (_CmRemovePanelDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     _PnpContainerRaiseDevicesChangeEvent @ 0x140708B6C (_PnpContainerRaiseDevicesChangeEvent.c)
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
