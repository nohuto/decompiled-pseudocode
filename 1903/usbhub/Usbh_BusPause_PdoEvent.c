/*
 * XREFs of Usbh_BusPause_PdoEvent @ 0x1C004A4AC
 * Callers:
 *     UsbhCancelEnumeration @ 0x1C000A060 (UsbhCancelEnumeration.c)
 * Callees:
 *     UsbhAcquirePdoStateLock @ 0x1C0002AEC (UsbhAcquirePdoStateLock.c)
 *     UsbhSignalDriverResetEvent @ 0x1C000C6DC (UsbhSignalDriverResetEvent.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C000CFB4 (UsbhSignalSyncDeviceResetPdo.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     WPP_RECORDER_SF_q @ 0x1C0041B44 (WPP_RECORDER_SF_q.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C0048188 (SET_PDO_HWPNPSTATE.c)
 *     UsbhFlushQueuedDriverReset @ 0x1C0048BB0 (UsbhFlushQueuedDriverReset.c)
 *     UsbhDeletePdo @ 0x1C005AD0C (UsbhDeletePdo.c)
 */

void __fastcall Usbh_BusPause_PdoEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // rdx

  UsbhFlushQueuedDriverReset(a1, a3);
  UsbhAcquirePdoStateLock(v8, a4, 10);
  Log(a1, 2, 1716736630, 0LL, a4);
  v9 = (unsigned int)PdoExt(a2)[281];
  if ( (_DWORD)v9 == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v9,
        1u,
        0x45u,
        (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
        a2);
    Log(a1, 4, 1685283663, a2, a4);
    UsbhDeletePdo(a1, a2, 1LL);
  }
  else if ( (_DWORD)v9 == 2 || (int)v9 > 2 && (int)v9 <= 4 )
  {
    SET_PDO_HWPNPSTATE(a2, v9, 10);
    *(_DWORD *)(a4 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a4 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a4 + 132));
    UsbhSignalSyncDeviceResetPdo(a1, a2, -1073741823);
    UsbhSignalDriverResetEvent(a1, a3);
  }
  else
  {
    *(_DWORD *)(a4 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a4 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a4 + 132));
  }
}
