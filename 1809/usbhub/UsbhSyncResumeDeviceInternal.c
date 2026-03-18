/*
 * XREFs of UsbhSyncResumeDeviceInternal @ 0x1C0048618
 * Callers:
 *     UsbhPdoSetD0 @ 0x1C0003620 (UsbhPdoSetD0.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C004972C (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C004AA00 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C00595F0 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     UsbhLatchPdo @ 0x1C0001BDC (UsbhLatchPdo.c)
 *     UsbhSet_Pdo_Dx @ 0x1C0002838 (UsbhSet_Pdo_Dx.c)
 *     UsbhAcquirePdoStateLock @ 0x1C00029B0 (UsbhAcquirePdoStateLock.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhUnlatchPdo @ 0x1C001B520 (UsbhUnlatchPdo.c)
 *     UsbhSyncResumePort @ 0x1C0048790 (UsbhSyncResumePort.c)
 */

__int64 __fastcall UsbhSyncResumeDeviceInternal(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3)
{
  _DWORD *v6; // rbx
  __int64 v7; // rsi
  _DWORD *v8; // rax
  __int64 v9; // rcx
  int v10; // ebx

  v6 = PdoExt((__int64)a3);
  v7 = UsbhLatchPdo(a1, *((_WORD *)v6 + 714), 0LL, 0x70534D52u);
  Log(a1, 8, 1920167280, *((unsigned __int16 *)v6 + 714), v7);
  v8 = FdoExt(a1);
  if ( v7 && a3 == (struct _DEVICE_OBJECT *)v7 && (v8[640] & 0x10) == 0 )
  {
    UsbhAcquirePdoStateLock(v9, a2, 15);
    if ( PdoExt((__int64)a3)[281] == 3 )
    {
      *(_DWORD *)(a2 + 136) = 0;
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      *(_DWORD *)(a2 + 88) = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a2 + 132));
      v10 = UsbhSyncResumePort(a1);
    }
    else
    {
      *(_DWORD *)(a2 + 136) = 0;
      v10 = -1073741810;
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      *(_DWORD *)(a2 + 88) = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a2 + 132));
    }
  }
  else
  {
    v10 = -1073741810;
  }
  if ( v7 )
    UsbhUnlatchPdo(a1, v7, 0LL, 0x70534D52u);
  if ( v10 >= 0 )
    UsbhSet_Pdo_Dx(a3, (POWER_STATE)1);
  return (unsigned int)v10;
}
