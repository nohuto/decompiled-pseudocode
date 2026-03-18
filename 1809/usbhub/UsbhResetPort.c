/*
 * XREFs of UsbhResetPort @ 0x1C0010FF0
 * Callers:
 *     UsbhDriverResetPort @ 0x1C0001CB0 (UsbhDriverResetPort.c)
 *     UsbhReset1Complete @ 0x1C000F680 (UsbhReset1Complete.c)
 *     UsbhReset2Complete @ 0x1C0012680 (UsbhReset2Complete.c)
 *     UsbhPortConnect @ 0x1C001EEA0 (UsbhPortConnect.c)
 *     UsbhReset1Timeout @ 0x1C0055D50 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C00562F0 (UsbhReset2Timeout.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C00047AC (Usb_Disconnected.c)
 *     UsbhReferenceListRemove @ 0x1C000E0A0 (UsbhReferenceListRemove.c)
 *     UsbhReferenceListAdd @ 0x1C000E1D0 (UsbhReferenceListAdd.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x1C000E2F4 (Usbh_CheckPortHwPendingStatus.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C0017B10 (UsbhSyncSendCommand.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

void __fastcall UsbhResetPort(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r15
  int v7; // edx
  KIRQL v8; // al
  KIRQL v9; // r12
  __int64 v10; // rax
  int v11; // ecx
  int v12; // r15d
  ULONG TimeIncrement; // eax
  int v14; // edx
  int v15; // [rsp+20h] [rbp-30h]
  int v16; // [rsp+48h] [rbp-8h]
  int v17; // [rsp+98h] [rbp+48h] BYREF
  int v18; // [rsp+A0h] [rbp+50h] BYREF
  int v19; // [rsp+A8h] [rbp+58h] BYREF
  __int16 v20; // [rsp+ACh] [rbp+5Ch]
  __int16 v21; // [rsp+AEh] [rbp+5Eh]

  v18 = 0;
  Log(a1, 4, 1919242324, a2, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      26,
      (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
      *(_WORD *)(a2 + 4));
  v6 = FdoExt(a1);
  v20 = *(_WORD *)(a2 + 4);
  LOWORD(v17) = 0;
  v19 = 262947;
  v21 = 0;
  v7 = UsbhSyncSendCommand(a1, (unsigned int)&v19, 0, (unsigned int)&v17, v15, (__int64)&v18);
  if ( (v7 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v7) )
  {
    LOBYTE(v16) = 0;
    UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 19, 0, 0, v14, v18, usbfile_bus_c, 2486, v16);
  }
  Log(a1, 4, 1919242360, *(unsigned __int16 *)(a2 + 4), *(int *)(a2 + 696));
  Usbh_CheckPortHwPendingStatus(a1, a2);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 4944));
  *(_DWORD *)(a2 + 696) = 1;
  v9 = v8;
  v10 = FdoExt(a1);
  if ( *(_QWORD *)(v10 + 4592) )
  {
    (*(void (__fastcall **)(_QWORD, int *))(v10 + 4592))(*(_QWORD *)(v10 + 4560), &v17);
    v11 = v17;
  }
  else
  {
    v11 = 0;
  }
  *(_DWORD *)(a2 + 852) = v11;
  *(_DWORD *)(a2 + 848) = v11;
  *(_DWORD *)(a3 + 4) = v11;
  Log(a1, 4, 1919242580, a2, a3);
  *(_QWORD *)(a2 + 680) = a3;
  KeResetEvent((PRKEVENT)(a2 + 768));
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 4944), v9);
  v12 = *((_DWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 1);
  if ( (UsbhReferenceListAdd(a1, a2 + 552, 1380799602) & 0xC0000000) != 0xC0000000 )
  {
    TimeIncrement = KeQueryTimeIncrement();
    if ( KeSetTimer((PKTIMER)(a2 + 552), (LARGE_INTEGER)(int)(1 - 10000 * v12 - TimeIncrement), (PKDPC)(a2 + 616)) )
      UsbhReferenceListRemove(a1, a2 + 552);
  }
}
