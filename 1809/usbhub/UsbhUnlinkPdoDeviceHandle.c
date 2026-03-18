/*
 * XREFs of UsbhUnlinkPdoDeviceHandle @ 0x1C0008C18
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C000873C (UsbhSyncResetDeviceInternal.c)
 *     UsbhInitializeDevice @ 0x1C0010C7C (UsbhInitializeDevice.c)
 *     UsbhReset2Complete @ 0x1C0012680 (UsbhReset2Complete.c)
 *     UsbhDeregisterPdo @ 0x1C0046F90 (UsbhDeregisterPdo.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C0048C88 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C004972C (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhPortDisconnect @ 0x1C00553C0 (UsbhPortDisconnect.c)
 *     UsbhReset2Timeout @ 0x1C00562F0 (UsbhReset2Timeout.c)
 *     UsbhDeletePdo @ 0x1C005898C (UsbhDeletePdo.c)
 *     UsbhPdoPnp_StopDevice @ 0x1C00597E0 (UsbhPdoPnp_StopDevice.c)
 * Callees:
 *     Usbh_HubDerefDeviceHandle @ 0x1C000CE24 (Usbh_HubDerefDeviceHandle.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     Usbh_HubRemoveUsbDevice @ 0x1C0049494 (Usbh_HubRemoveUsbDevice.c)
 *     UsbhBusIf_SetClearRootPortResumeTime @ 0x1C00549A4 (UsbhBusIf_SetClearRootPortResumeTime.c)
 */

void __fastcall UsbhUnlinkPdoDeviceHandle(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v8; // rbp
  KSPIN_LOCK *v9; // r14
  KIRQL v10; // r12
  __int64 v11; // rdi
  int v12; // r10d
  int v13; // r10d
  int v14; // eax

  v8 = 0LL;
  v9 = (KSPIN_LOCK *)(FdoExt(a1) + 3720);
  v10 = KeAcquireSpinLockRaiseToDpc(v9);
  v11 = PdoExt(a2);
  Log(a1, 256, 1970032708, 0, 0LL);
  Log(a1, v12, a3, a2, 0LL);
  v14 = *(_DWORD *)(v11 + 1152);
  if ( v14 >= 0 )
  {
    if ( v14 <= 1 )
    {
      Log(a1, v13, 1970032689, 0, *(int *)(v11 + 1152));
    }
    else if ( v14 == 2 )
    {
      if ( (*(_DWORD *)(v11 + 1420) & 0x20000000) != 0 )
      {
        UsbhBusIf_SetClearRootPortResumeTime(a1, *(_QWORD *)(v11 + 1160), 0LL, 0LL);
        *(_DWORD *)(v11 + 1420) &= ~0x20000000u;
        v13 = 256;
      }
      v8 = *(_QWORD *)(v11 + 1160);
      *(_QWORD *)(v11 + 1160) = 0xFEFEFEFEFEFEFEFEuLL;
      *(_DWORD *)(v11 + 1152) = 1;
      Log(a1, v13, 1970032690, 0, v8);
      Usbh_HubDerefDeviceHandle(a1, v8, a2, 1212441712LL);
    }
  }
  KeReleaseSpinLock(v9, v10);
  if ( v8 )
  {
    if ( a4 )
      Usbh_HubRemoveUsbDevice(a1, v8);
  }
}
