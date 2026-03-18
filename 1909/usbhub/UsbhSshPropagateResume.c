/*
 * XREFs of UsbhSshPropagateResume @ 0x1C000285C
 * Callers:
 *     UsbhBusIf_ResumeChildHub @ 0x1C0001140 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhSshResumePort @ 0x1C0007180 (UsbhSshResumePort.c)
 * Callees:
 *     UsbhSendSynchronousUsbIoctlRequest @ 0x1C0002740 (UsbhSendSynchronousUsbIoctlRequest.c)
 *     UsbhSet_Pdo_Dx @ 0x1C0002974 (UsbhSet_Pdo_Dx.c)
 *     UsbhAcquirePdoStateLock @ 0x1C0002AEC (UsbhAcquirePdoStateLock.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001C210 (UsbhEtwLogHubIrpEvent.c)
 */

__int64 __fastcall UsbhSshPropagateResume(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rbp
  __int64 v8; // rcx
  int v9; // ebx

  v6 = 0;
  v7 = PdoExt(a3);
  Log(a1, 0x10000, 1400066130, a1, (__int64)a3);
  if ( (*(_DWORD *)(v7 + 1420) & 4) != 0 )
  {
    v6 = UsbhSendSynchronousUsbIoctlRequest(a1, a3, 0x220FA3u);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_PROPAGATE, *(unsigned __int16 *)(v7 + 1428), v6);
    UsbhAcquirePdoStateLock(v8, a2, 26LL);
    v9 = *(_DWORD *)(PdoExt(a3) + 1124);
    *(_DWORD *)(a2 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a2 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a2 + 132));
    if ( (unsigned int)(v9 - 1) <= 2 )
      UsbhSet_Pdo_Dx(a3, (POWER_STATE)1);
  }
  return v6;
}
