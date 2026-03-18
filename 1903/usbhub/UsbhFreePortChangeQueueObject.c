/*
 * XREFs of UsbhFreePortChangeQueueObject @ 0x1C000B110
 * Callers:
 *     Usbh_PCE_psPAUSED_Action @ 0x1C000A370 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhFlushPortChangeQueue @ 0x1C000B044 (UsbhFlushPortChangeQueue.c)
 *     UsbhCancelQueuedTimeout @ 0x1C000E460 (UsbhCancelQueuedTimeout.c)
 *     UsbhFlushQueuedDriverReset @ 0x1C0048BB0 (UsbhFlushQueuedDriverReset.c)
 * Callees:
 *     UsbhiSignalResumeEvent @ 0x1C0001E88 (UsbhiSignalResumeEvent.c)
 *     UsbhSignalPauseEvent @ 0x1C000B264 (UsbhSignalPauseEvent.c)
 *     UsbhLogSignalDriverResetEvent @ 0x1C000C7A8 (UsbhLogSignalDriverResetEvent.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C000CFB4 (UsbhSignalSyncDeviceResetPdo.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhUnlatchPdo @ 0x1C001BFF0 (UsbhUnlatchPdo.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x1C00458A8 (UsbhFreePortChangeQueueTimeoutObject.c)
 *     UsbhSetPcqEventStatus @ 0x1C0046E50 (UsbhSetPcqEventStatus.c)
 *     UsbhiSignalSuspendEvent @ 0x1C004807C (UsbhiSignalSuspendEvent.c)
 */

void __fastcall UsbhFreePortChangeQueueObject(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // r9
  int v9; // ecx
  __int16 v10; // r8
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // r8

  Log(a1, 512, 1969836099, 0, *(unsigned __int16 *)(a2 + 4));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      54,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      *(_WORD *)(a2 + 4));
  FdoExt(a1);
  v9 = *(_DWORD *)(a3 + 8);
  v10 = *(_WORD *)(a2 + 420);
  v11 = ((unsigned __int8)*(_DWORD *)(a2 + 856) + 1) & 0xF;
  v12 = *(_DWORD *)(a2 + 400);
  *(_DWORD *)(a2 + 856) = v11;
  v13 = a2 + 32 * (v11 + 27);
  *(_DWORD *)v13 = v12;
  *(_DWORD *)(v13 + 4) = v9;
  *(_WORD *)(v13 + 18) = 256;
  *(_WORD *)(v13 + 16) = v10;
  *(_QWORD *)(v13 + 8) = 0LL;
  *(_DWORD *)(v13 + 20) = 0;
  *(_DWORD *)(v13 + 28) = 1;
  if ( a4 )
  {
    v14 = *(_DWORD *)(a3 + 8);
    if ( v14 == 4 )
    {
      UsbhiSignalResumeEvent(a1, a2);
      v14 = *(_DWORD *)(a3 + 8);
    }
    if ( v14 == 0x80000 )
    {
      UsbhSignalPauseEvent(a1, a2);
      v14 = *(_DWORD *)(a3 + 8);
    }
    if ( v14 == 4 )
      UsbhiSignalSuspendEvent(a1, a2);
  }
  if ( *(_DWORD *)(a3 + 48) == 1 )
  {
    if ( a4 )
    {
      UsbhSignalSyncDeviceResetPdo(a1, *(_QWORD *)(a3 + 40), 3221225473LL);
      if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2) )
        UsbhSetPcqEventStatus(a1, a2, 3LL);
    }
  }
  else if ( *(_DWORD *)(a3 + 48) == 2 )
  {
    v15 = *(_QWORD *)(a3 + 40);
    LOBYTE(v8) = a4;
    *(_QWORD *)(a3 + 40) = 0LL;
    UsbhFreePortChangeQueueTimeoutObject(a1, a2, v15, v8);
  }
  if ( *(_DWORD *)(a3 + 48) == 1 )
    UsbhUnlatchPdo(a1, *(_QWORD *)(a3 + 40), a3, 1230065731LL);
  Log(a1, 512, 1718767684, a2, a3);
  ExFreePoolWithTag((PVOID)a3, 0);
}
