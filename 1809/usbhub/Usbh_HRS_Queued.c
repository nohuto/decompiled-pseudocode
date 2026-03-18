/*
 * XREFs of Usbh_HRS_Queued @ 0x1C004B5B4
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1C001BF30 (UsbhDispatch_HardResetEvent.c)
 * Callees:
 *     UsbhSyncBusPause @ 0x1C0003E08 (UsbhSyncBusPause.c)
 *     UsbhReleaseResetLock @ 0x1C000F610 (UsbhReleaseResetLock.c)
 *     UsbhQueueWorkItemEx @ 0x1C00111F0 (UsbhQueueWorkItemEx.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B740 (UsbhEtwLogHubIrpEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     UsbhSyncBusDisconnect @ 0x1C0042AB8 (UsbhSyncBusDisconnect.c)
 *     UsbhHardReset_Action @ 0x1C004AF18 (UsbhHardReset_Action.c)
 *     UsbhIncrementConcurrentResetCounter @ 0x1C004B1A4 (UsbhIncrementConcurrentResetCounter.c)
 *     UsbhResetNotifyDownstreamHub @ 0x1C005034C (UsbhResetNotifyDownstreamHub.c)
 */

__int64 __fastcall Usbh_HRS_Queued(__int64 a1, int a2)
{
  __int64 v3; // rbx
  _DWORD *v4; // rsi
  unsigned int v5; // ebp
  int v6; // ebx
  unsigned int v7; // r8d
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // r8d
  struct _DEVICE_OBJECT *v15; // rbx
  unsigned int v16; // ebx
  int v17; // ebx
  int v18; // eax
  __int64 v20; // [rsp+28h] [rbp-30h]

  v3 = a2;
  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  FdoExt(*(_QWORD *)(a1 + 8));
  v5 = *(_DWORD *)(a1 + 68);
  Log(*(_QWORD *)(a1 + 8), 16, 1920160085, a1, v3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xFu,
      (__int64)&WPP_738362dee15c3420c39abe3a25a3b3ea_Traceguids,
      v3);
  v6 = v3 - 2;
  if ( !v6 )
  {
    v12 = *(_QWORD *)(a1 + 8);
    v14 = 5;
    v13 = a1;
    goto LABEL_27;
  }
  v7 = 3;
  v8 = v6 - 1;
  if ( !v8 )
  {
LABEL_13:
    v12 = *(_QWORD *)(a1 + 8);
    v13 = a1;
    return (unsigned int)UsbhReleaseResetLock(v12, v13, v7);
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 3;
    if ( v10 )
    {
      v11 = v10 - 2;
      if ( v11 )
      {
        v12 = *(_QWORD *)(a1 + 8);
        v13 = a1;
        if ( v11 != 1 )
        {
          v7 = v5;
          return (unsigned int)UsbhReleaseResetLock(v12, v13, v7);
        }
        v14 = 7;
LABEL_27:
        v16 = UsbhReleaseResetLock(v12, v13, v14);
        KeWaitForSingleObject(v4 + 712, Executive, 0, 0, 0LL);
        return v16;
      }
      goto LABEL_13;
    }
    v15 = *(struct _DEVICE_OBJECT **)(a1 + 8);
    FdoExt((__int64)v15);
    UsbhSyncBusPause((__int64)v15, a1, 6);
    UsbhSyncBusDisconnect(v15, a1);
LABEL_12:
    v7 = 4;
    goto LABEL_13;
  }
  UsbhEtwLogHubIrpEvent(*(_QWORD *)(a1 + 8), 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_HARD_RESET_START);
  v17 = UsbhHardReset_Action(*(struct _DEVICE_OBJECT **)(a1 + 8), a1);
  if ( *((_BYTE *)v4 + 5268) && _InterlockedExchange(v4 + 1315, 0) )
  {
    do
    {
      UsbhResetNotifyDownstreamHub(*(_QWORD *)(a1 + 8));
      v17 = UsbhHardReset_Action(*(struct _DEVICE_OBJECT **)(a1 + 8), a1);
      UsbhIncrementConcurrentResetCounter(*(_QWORD *)(a1 + 8));
    }
    while ( _InterlockedExchange(v4 + 1315, 0) );
  }
  UsbhEtwLogHubIrpEvent(*(_QWORD *)(a1 + 8), 0LL, 0LL, (const EVENT_DESCRIPTOR *)"1");
  if ( v17 < 0 && !*((_BYTE *)v4 + 5268) )
    goto LABEL_12;
  v18 = UsbhQueueWorkItemEx(*(_QWORD *)(a1 + 8), 1u, (int)UsbhUpdateRegHubHardResetCount, 0LL, 0, 1230467954, 0LL);
  if ( (v18 & 0xC0000000) == 0xC0000000 && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v20) = v18;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x10u,
      (__int64)&WPP_738362dee15c3420c39abe3a25a3b3ea_Traceguids,
      v20);
  }
  v16 = UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, 2u);
  if ( *((_BYTE *)v4 + 5268) && v4[1315] )
  {
    UsbhResetNotifyDownstreamHub(*(_QWORD *)(a1 + 8));
    UsbhHardReset_Action(*(struct _DEVICE_OBJECT **)(a1 + 8), a1);
    UsbhIncrementConcurrentResetCounter(*(_QWORD *)(a1 + 8));
  }
  return v16;
}
