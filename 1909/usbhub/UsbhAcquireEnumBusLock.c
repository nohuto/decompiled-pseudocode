/*
 * XREFs of UsbhAcquireEnumBusLock @ 0x1C0011AF8
 * Callers:
 *     UsbhDriverResetPort @ 0x1C0001D70 (UsbhDriverResetPort.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0008C2C (UsbhSyncResetDeviceInternal.c)
 *     UsbhReset2Complete @ 0x1C0012CC0 (UsbhReset2Complete.c)
 *     UsbhHubDispatchPortEvent @ 0x1C00164A0 (UsbhHubDispatchPortEvent.c)
 *     UsbhPortConnect @ 0x1C001FB60 (UsbhPortConnect.c)
 * Callees:
 *     Usbh_SSH_Event @ 0x1C0010580 (Usbh_SSH_Event.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhIncHubBusy @ 0x1C0019CD0 (UsbhIncHubBusy.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhAcquireEnumBusLock(struct _DEVICE_OBJECT *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // r15
  __int64 v6; // rbx
  KIRQL v7; // al
  KIRQL v8; // r10

  v3 = a3;
  v6 = FdoExt(a1);
  Log((_DWORD)a1, 4, 1631737171, *(_DWORD *)(v6 + 3072), v3);
  Log((_DWORD)a1, 4, 1631734851, *(_DWORD *)(v6 + 3072), a2);
  if ( *(_QWORD *)(v6 + 4392) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 3064));
    if ( *(_DWORD *)(v6 + 3072) == (unsigned __int16)v3 || *(_QWORD *)(v6 + 3080) == a2 )
    {
      Log((_DWORD)a1, 4, 2017613139, *(_DWORD *)(v6 + 3072), (unsigned int)v3);
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 3064), v8);
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 3064), v7);
      Usbh_SSH_Event(a1, 6u, a2);
      (*(void (__fastcall **)(_QWORD))(v6 + 4392))(*(_QWORD *)(v6 + 4232));
      Log((_DWORD)a1, 4, 1816286547, *(_DWORD *)(v6 + 3072), (unsigned int)v3);
      *(_DWORD *)(v6 + 3072) = (unsigned __int16)v3;
      *(_QWORD *)(v6 + 3080) = a2;
      *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 3096));
      *(_QWORD *)(v6 + 3088) = UsbhIncHubBusy((_DWORD)a1, a2, (_DWORD)a1, 1430416236, 1);
    }
  }
}
