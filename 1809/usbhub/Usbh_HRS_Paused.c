/*
 * XREFs of Usbh_HRS_Paused @ 0x1C000C464
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1C001BF30 (UsbhDispatch_HardResetEvent.c)
 * Callees:
 *     UsbhReleaseResetLock @ 0x1C000F610 (UsbhReleaseResetLock.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Usbh_HRS_Paused(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned int v5; // edi
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx

  v3 = a2;
  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  FdoExt(*(_QWORD *)(a1 + 8));
  v5 = *(_DWORD *)(a1 + 68);
  Log(*(_QWORD *)(a1 + 8), 16, 1920159827, a1, v3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_738362dee15c3420c39abe3a25a3b3ea_Traceguids,
      v3);
  v6 = v3 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( !v7 )
    {
      v5 = 1;
      return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v5);
    }
    v8 = v7 - 1;
    if ( v8 && (v9 = v8 - 6) != 0 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 != 1 )
          return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v5);
        goto LABEL_9;
      }
    }
    else
    {
      *(_DWORD *)(v4 + 2560) |= 0x10u;
    }
    v5 = 6;
    return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v5);
  }
LABEL_9:
  if ( (*(_DWORD *)(v4 + 2560) & 0x10) != 0 )
  {
    KeResetEvent((PRKEVENT)(v4 + 2848));
    IoQueueWorkItem(*(PIO_WORKITEM *)(v4 + 1184), UsbhHardResetWorker, DelayedWorkQueue, 0LL);
    v5 = 3;
  }
  else
  {
    v5 = 2;
  }
  return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v5);
}
