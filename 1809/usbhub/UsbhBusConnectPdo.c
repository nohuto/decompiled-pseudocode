/*
 * XREFs of UsbhBusConnectPdo @ 0x1C000EBD0
 * Callers:
 *     UsbhReset2Complete @ 0x1C0012680 (UsbhReset2Complete.c)
 *     UsbhSetEnumerationFailed @ 0x1C0056594 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhSignalDriverResetEvent @ 0x1C000BFCC (UsbhSignalDriverResetEvent.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C000C848 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhEtwGetDeviceInfo @ 0x1C000EA28 (UsbhEtwGetDeviceInfo.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhEtwWrite @ 0x1C001FE60 (UsbhEtwWrite.c)
 *     UsbhBusIoInvalidateDeviceRelations @ 0x1C002AB18 (UsbhBusIoInvalidateDeviceRelations.c)
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C004044C (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_S @ 0x1C0049AD4 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_c @ 0x1C0049BF8 (WPP_RECORDER_SF_c.c)
 */

void __fastcall UsbhBusConnectPdo(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r14
  int v9; // edx
  int v10; // r8d
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // edx
  int v16; // r8d
  _BYTE v17[48]; // [rsp+78h] [rbp-70h] BYREF

  v2 = *(_QWORD *)(a2 + 376);
  *(_BYTE *)(v2 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(v2 + 136) = 1;
  *(_DWORD *)(v2 + 88) = 2018460752;
  *(_DWORD *)(v2 + 92) = 2;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v2;
  *(_QWORD *)(v2 + 24) = KeGetCurrentThread();
  v5 = *(_QWORD *)(a2 + 392);
  if ( v5 )
  {
    v6 = *(int *)(PdoExt(v5) + 1124);
    v7 = FdoExt(a1);
    _InterlockedExchange((volatile __int32 *)(a2 + 428), 1);
    v8 = PdoExt(v5);
    Log(a1, 4, 1919248208, v5, v6);
    if ( (_DWORD)v6 == 3 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)WPP_GLOBAL_Control,
          v10,
          41,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          *(_WORD *)(a2 + 4),
          *(_QWORD *)(a2 + 392));
      *(_DWORD *)(v2 + 136) = 0;
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      *(_DWORD *)(v2 + 88) = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v2 + 132));
      UsbhSignalSyncDeviceResetPdo(a1, v5, 0);
      UsbhSignalDriverResetEvent(a1, a2);
    }
    else
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          v9,
          v10,
          42,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          *(_WORD *)(v8 + 1428),
          v5);
      v11 = *(_QWORD **)(v7 + 4816);
      v12 = (_QWORD *)(v8 + 1320);
      if ( *v11 != v7 + 4808 )
        __fastfail(3u);
      *v12 = v7 + 4808;
      *(_QWORD *)(v8 + 1328) = v11;
      *v11 = v12;
      *(_QWORD *)(v7 + 4816) = v12;
      if ( dword_1C006E650 )
      {
        FdoExt(*(_QWORD *)(v8 + 1184));
        UsbhEtwGetDeviceInfo(v8, (__int64)v17);
        UsbhEtwWrite(&USBHUB_ETW_EVENT_DEVICE_ADD, 0LL);
      }
      v13 = PdoExt(v5);
      v14 = ((unsigned __int8)*(_DWORD *)(v13 + 4) + 1) & 7;
      *(_DWORD *)(v13 + 4) = v14;
      v14 *= 32LL;
      *(_DWORD *)(v14 + v13 + 16) = 2;
      *(_DWORD *)(v14 + v13 + 20) = *(_DWORD *)(v13 + 1124);
      *(_DWORD *)(v14 + v13 + 24) = 2;
      *(_DWORD *)(v13 + 1124) = 2;
      *(_DWORD *)(v7 + 904) = 1;
      *(_DWORD *)(v2 + 136) = 0;
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      *(_DWORD *)(v2 + 88) = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v2 + 132));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          43,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids);
      if ( (*(_DWORD *)(v8 + 1420) & 0x100) != 0 && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          44,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          45,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          46,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          *(_BYTE *)(v8 + 1400));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_c(
          WPP_GLOBAL_Control->DeviceExtension,
          v15,
          v16,
          47,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          *(_BYTE *)(v8 + 1401));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          48,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          *(_WORD *)(v8 + 1402));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_c(
          WPP_GLOBAL_Control->DeviceExtension,
          v15,
          v16,
          49,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          *(_BYTE *)(v8 + 1168));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          50,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          *(_BYTE *)(v8 + 1404));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          51,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          *(_BYTE *)(v8 + 1405));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          52,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          *(_BYTE *)(v8 + 1406));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          53,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          *(_BYTE *)(v8 + 1407));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          54,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          *(_WORD *)(v8 + 1408));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          55,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          *(_WORD *)(v8 + 1410));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          56,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          *(_WORD *)(v8 + 1412));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          57,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          *(_BYTE *)(v8 + 1414));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          58,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          *(_BYTE *)(v8 + 1415));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          59,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          *(_BYTE *)(v8 + 1416));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          60,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          *(_BYTE *)(v8 + 1417));
      if ( *(_QWORD *)(v8 + 2088) && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          v15,
          v16,
          61,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          *(_QWORD *)(v8 + 2088));
      if ( *(_QWORD *)(v8 + 2104) && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          v15,
          v16,
          62,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          *(_QWORD *)(v8 + 2104));
      if ( *(_QWORD *)(v8 + 2120) && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          v15,
          v16,
          63,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          *(_QWORD *)(v8 + 2120));
      if ( *(_QWORD *)(v8 + 2152) && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          v15,
          v16,
          64,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          *(_QWORD *)(v8 + 2152));
      if ( *(_QWORD *)(v8 + 2136) && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          v15,
          v16,
          65,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          *(_QWORD *)(v8 + 2136));
      if ( *(_QWORD *)(v8 + 2168) && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          v15,
          v16,
          66,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          *(_QWORD *)(v8 + 2168));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          67,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          68,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids);
      UsbhBusIoInvalidateDeviceRelations(a1, v2);
    }
  }
  else
  {
    *(_DWORD *)(v2 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(v2 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v2 + 132));
  }
}
