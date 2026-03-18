/*
 * XREFs of Usbh_BusPnpFreeResources_PdoEvent @ 0x1C004A640
 * Callers:
 *     UsbhAsyncStop @ 0x1C0051120 (UsbhAsyncStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C0052440 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     UsbhAcquirePdoStateLock @ 0x1C0002AEC (UsbhAcquirePdoStateLock.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0009148 (UsbhUnlinkPdoDeviceHandle.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhGetPortData @ 0x1C001C8F0 (UsbhGetPortData.c)
 *     UsbhDeletePdo @ 0x1C005AD0C (UsbhDeletePdo.c)
 */

void __fastcall Usbh_BusPnpFreeResources_PdoEvent(__int64 a1, __int64 a2)
{
  int v4; // r9d
  __int64 v5; // rcx
  unsigned __int16 i; // r14
  __int64 PortData; // rax
  __int64 v8; // rdi
  int v9; // esi
  __int64 v10; // rcx

  Log(a1, 2, 1716671314, 0LL, a2);
  UsbhAcquirePdoStateLock(v5, a2, v4 + 17);
  for ( i = 1; i <= *((unsigned __int8 *)FdoExt(a1) + 2938); ++i )
  {
    PortData = UsbhGetPortData(a1, i);
    if ( PortData )
    {
      v8 = *(_QWORD *)(PortData + 392);
      Log(a1, 4, 2018526258, v8, 0LL);
      if ( v8 )
      {
        v9 = PdoExt(v8)[281];
        PdoExt(v8);
        if ( v9 > 0 )
        {
          if ( v9 <= 2 )
          {
            UsbhDeletePdo(a1, v8, (unsigned int)v9);
          }
          else
          {
            if ( v9 != 3 )
              continue;
            *(_DWORD *)(a2 + 136) = 0;
            WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
            *(_DWORD *)(a2 + 88) = 1734964085;
            KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a2 + 132));
            UsbhUnlinkPdoDeviceHandle(a1, v8, 2017740849, 1);
          }
          UsbhAcquirePdoStateLock(v10, a2, 17);
        }
      }
    }
  }
  *(_DWORD *)(a2 + 136) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  *(_DWORD *)(a2 + 88) = 1734964085;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a2 + 132));
}
