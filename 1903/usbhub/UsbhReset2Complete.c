/*
 * XREFs of UsbhReset2Complete @ 0x1C0012CC0
 * Callers:
 *     UsbhReset1Complete @ 0x1C000FD00 (UsbhReset1Complete.c)
 * Callees:
 *     UsbhWait @ 0x1C0002048 (UsbhWait.c)
 *     Usb_Disconnected @ 0x1C0004AFC (Usb_Disconnected.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0009148 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhAllocateTimeoutObject @ 0x1C000D44C (UsbhAllocateTimeoutObject.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C000ECA0 (UsbhSyncSendInternalIoctl.c)
 *     UsbhDerefPdo @ 0x1C000EF60 (UsbhDerefPdo.c)
 *     UsbhBusConnectPdo @ 0x1C000F090 (UsbhBusConnectPdo.c)
 *     Usbh_UsbdReadFrameCounter @ 0x1C00100EC (Usbh_UsbdReadFrameCounter.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     UsbhInitializeDevice @ 0x1C00112AC (UsbhInitializeDevice.c)
 *     UsbhCancelResetTimeout @ 0x1C00113C0 (UsbhCancelResetTimeout.c)
 *     UsbhResetPort @ 0x1C0011620 (UsbhResetPort.c)
 *     UsbhAcquireEnumBusLock @ 0x1C0011AF8 (UsbhAcquireEnumBusLock.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhRawWait @ 0x1C001ACD0 (UsbhRawWait.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C001ADB4 (UsbhReleaseEnumBusLockEx.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001C210 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhBusIf_GetContainerIdForPort @ 0x1C001D2C4 (UsbhBusIf_GetContainerIdForPort.c)
 *     UsbhFreeID @ 0x1C001DC1C (UsbhFreeID.c)
 *     UsbhSetupDevice @ 0x1C0021740 (UsbhSetupDevice.c)
 *     UsbhBuildContainerID @ 0x1C0023854 (UsbhBuildContainerID.c)
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     UsbhPCE_Check @ 0x1C0045E1C (UsbhPCE_Check.c)
 *     UsbhDisablePort @ 0x1C0048A8C (UsbhDisablePort.c)
 *     Usbh_Disconnect_PdoEvent @ 0x1C004AC1C (Usbh_Disconnect_PdoEvent.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 *     UsbhBusIf_SetContainerIdForPort @ 0x1C0056C1C (UsbhBusIf_SetContainerIdForPort.c)
 *     UsbhBusUnlatchPdo @ 0x1C0056D28 (UsbhBusUnlatchPdo.c)
 *     UsbhSetEnumerationFailed @ 0x1C0058924 (UsbhSetEnumerationFailed.c)
 */

__int64 __fastcall UsbhReset2Complete(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r15d
  _DWORD *v7; // r13
  KSPIN_LOCK *v8; // rdi
  KIRQL v9; // al
  int FrameCounter; // eax
  __int64 v11; // rcx
  unsigned int v12; // r9d
  __int64 v13; // r14
  char v14; // r12
  unsigned int v15; // r13d
  __int64 v16; // rdi
  KIRQL v17; // al
  __int64 v18; // rax
  int v19; // eax
  KSPIN_LOCK *v20; // rax
  KSPIN_LOCK *v21; // rdi
  _DWORD *v22; // rax
  _DWORD *v23; // rdi
  char v24; // cl
  KIRQL v25; // di
  __int64 v27; // rax
  int v28; // r12d
  KIRQL v29; // al
  _DWORD *v30; // rax
  __int64 v31; // rdx
  int v32; // r9d
  int v33; // r9d
  int v34; // r9d
  __int64 v35; // rdi
  unsigned int v36; // eax
  unsigned __int16 v37; // r8
  __int64 v38; // rdx
  int v39; // r9d
  int v40; // [rsp+20h] [rbp-A8h]
  int v41; // [rsp+28h] [rbp-A0h]
  int v42; // [rsp+30h] [rbp-98h]
  int v43; // [rsp+38h] [rbp-90h]
  int v44; // [rsp+48h] [rbp-80h]
  KIRQL v45; // [rsp+50h] [rbp-78h]
  char v46; // [rsp+51h] [rbp-77h]
  _DWORD *v47; // [rsp+58h] [rbp-70h]
  int v48; // [rsp+64h] [rbp-64h] BYREF
  PVOID P; // [rsp+68h] [rbp-60h] BYREF
  int v50[2]; // [rsp+70h] [rbp-58h] BYREF
  __int16 v51; // [rsp+78h] [rbp-50h]
  __int16 v52; // [rsp+7Ah] [rbp-4Eh]

  v52 = 0;
  v6 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      32,
      (__int64)&WPP_471ec6e8280839848e9d0f8c96351f40_Traceguids,
      *(_WORD *)(a2 + 4));
  Log((_DWORD)a1, 1024, 1884435043, a2, 0LL);
  v47 = FdoExt((__int64)a1);
  v7 = v47;
  v8 = (KSPIN_LOCK *)(FdoExt((__int64)a1) + 766);
  v9 = KeAcquireSpinLockRaiseToDpc(v8);
  KeReleaseSpinLock(v8, v9);
  UsbhCancelResetTimeout((__int64)a1, a2, 0);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET2_COMPLETE, *(unsigned __int16 *)(a2 + 4), 0);
  FrameCounter = Usbh_UsbdReadFrameCounter((__int64)a1);
  v11 = *(unsigned int *)(a2 + 544);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v50[0] = FrameCounter - *(_DWORD *)(a2 + 848);
  LOWORD(FrameCounter) = *(_WORD *)(a2 + 4);
  v50[1] = v11;
  v51 = FrameCounter;
  Log((_DWORD)a1, 1024, 1701720625, a2, v11);
  if ( *(_DWORD *)(a2 + 544) )
  {
    UsbhWait((int)a1, 100);
  }
  else
  {
    Log((_DWORD)a1, 8, 2002872692, 15, 0LL);
    UsbhRawWait(v12);
  }
  v13 = (int)UsbhInitializeDevice((__int64)a1, a3, a2);
  UsbhEtwLogHubIrpEvent(
    a1,
    0LL,
    0LL,
    &USBHUB_ETW_EVENT_HUB_ENUM_INITIALIZE_DEVICE_COMPLETE,
    *(unsigned __int16 *)(a2 + 4),
    0);
  Log((_DWORD)a1, 1024, 1701720626, *(unsigned __int16 *)(a2 + 4), v13);
  if ( (int)v13 < 0 )
  {
LABEL_15:
    if ( (v13 & 0xC0000000) == 0xC0000000 )
    {
      v34 = *(unsigned __int16 *)(a2 + 4);
      P = 0LL;
      Log((_DWORD)a1, 1024, 1936025137, v34, (int)v13);
      v35 = (int)UsbhAllocateTimeoutObject((int)a1, a2, &P);
      v36 = *(_DWORD *)(a2 + 544);
      if ( v36 >= 3 || (int)v35 < 0 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
        UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_COMPLETE, *(unsigned __int16 *)(a2 + 4), v35);
        UsbhSetEnumerationFailed((int)a1, (int)v50, v35, v42, v43, 2065);
        return 0;
      }
      else
      {
        Log((_DWORD)a1, 1024, 1936025138, v36, v35);
        UsbhDisablePort((_DWORD)a1);
        v37 = *(_WORD *)(a2 + 4);
        v38 = *(_QWORD *)(a2 + 376);
        ++*(_DWORD *)(a2 + 544);
        UsbhAcquireEnumBusLock(a1, v38, v37);
        UsbhUnlinkPdoDeviceHandle((__int64)a1, a3, 2017740897, 1);
        UsbhBusUnlatchPdo((_DWORD)a1, a3, a2, v39, 0LL);
        UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY, *(unsigned __int16 *)(a2 + 4), v35);
        UsbhResetPort((__int64)a1, a2, (__int64)P);
      }
    }
    else
    {
      v22 = PdoExt(a3);
      v23 = v22;
      v24 = *((_BYTE *)v22 + 2732);
      if ( v24 )
        goto LABEL_27;
      if ( (v22[355] & 0x200) != 0 )
      {
        v24 = 0;
        if ( (v22[295] & 0x10) == 0 )
        {
          UsbhBuildContainerID(a1, a3);
          v24 = *((_BYTE *)v23 + 2732);
        }
      }
      if ( v24 )
      {
LABEL_27:
        if ( (v7[640] & 1) != 0 )
        {
          UsbhBusIf_SetContainerIdForPort(a1, *((unsigned __int16 *)v23 + 714), v23 + 679);
          v24 = *((_BYTE *)v23 + 2732);
        }
        if ( v24 )
          goto LABEL_28;
      }
      if ( (v7[640] & 1) == 0 )
      {
LABEL_28:
        v6 = 0;
      }
      else
      {
        if ( (int)UsbhBusIf_GetContainerIdForPort(a1, *((unsigned __int16 *)v23 + 714), v23 + 679) >= 0 )
          *((_BYTE *)v23 + 2732) = 1;
        v6 = 0;
        LODWORD(v13) = 0;
      }
      Log((_DWORD)a1, 1024, 1970032689, a3, a2);
      v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
      *(_DWORD *)(a2 + 416) = 0;
      Log((_DWORD)a1, 1024, 1970032690, a3, a2);
      UsbhDerefPdo((__int64)a1, a3, 0LL, 0x7050444Fu);
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v25);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_COMPLETE, *(unsigned __int16 *)(a2 + 4), v13);
      PdoExt(a3)[705] = 0;
      UsbhBusConnectPdo((__int64)a1, a2);
    }
    return v6;
  }
  v14 = 0;
  v46 = 0;
  v15 = 0;
  UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(unsigned __int16 *)(a2 + 4));
  v16 = *(_QWORD *)(a2 + 376);
  v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(v16 + 136) = 1;
  *(_BYTE *)(v16 + 132) = v17;
  *(_DWORD *)(v16 + 88) = 2018460752;
  *(_DWORD *)(v16 + 92) = 12;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v16;
  *(_QWORD *)(v16 + 24) = KeGetCurrentThread();
  if ( a3 && PdoExt(a3)[281] == 3 )
  {
    Log((_DWORD)a1, 1024, 1936999531, a2, *(unsigned __int16 *)(a2 + 4));
    v27 = *(_QWORD *)(a2 + 376);
    LODWORD(v13) = 0;
    v46 = 1;
    v14 = 1;
    *(_DWORD *)(v27 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(v27 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v27 + 132));
  }
  else
  {
    v18 = *(_QWORD *)(a2 + 376);
    *(_DWORD *)(v18 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(v18 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v18 + 132));
    v19 = UsbhSetupDevice((_DWORD)a1);
    v13 = v19;
    UsbhEtwLogHubIrpEvent(
      a1,
      0LL,
      0LL,
      &USBHUB_ETW_EVENT_HUB_ENUM_SETUP_DEVICE_COMPLETE,
      *(unsigned __int16 *)(a2 + 4),
      v19);
    Log((_DWORD)a1, 1024, 1701720627, *(unsigned __int16 *)(a2 + 4), v13);
  }
  while ( 1 )
  {
    if ( (int)v13 >= 0 )
    {
      v13 = UsbhSyncSendInternalIoctl((__int64)a1, 0x220013u, (unsigned __int64)&v48, 0LL);
      Log((_DWORD)a1, 8, 1970303827, v48, v13);
      Log((_DWORD)a1, 1024, 1701720628, *(unsigned __int16 *)(a2 + 4), v13);
    }
    Log((_DWORD)a1, 1024, 1936999534, a2, *(unsigned __int16 *)(a2 + 4));
    if ( (v13 & 0xC0000000) == 0xC0000000 )
      break;
    v20 = (KSPIN_LOCK *)PdoExt(a3);
    v21 = v20;
    if ( (*((_DWORD *)v20 + 355) & 0x200) == 0 || v14 == 1 )
      goto LABEL_14;
    ++v15;
    v28 = 4;
    v29 = KeAcquireSpinLockRaiseToDpc(v20 + 351);
    v45 = v29;
    if ( !*((_DWORD *)v21 + 704) )
    {
      v30 = PdoExt(a3);
      if ( (v30[355] & 0x200) != 0 )
      {
        v42 = (_DWORD)v30 + 2128;
        LOWORD(v41) = *((_WORD *)v30 + 705);
        LOWORD(v40) = *((_WORD *)v30 + 704);
        v28 = USBD_AddDeviceToGlobalList(a3, a1, *((unsigned __int16 *)v30 + 714), 0LL, v40, v41);
        if ( v28 == 1 )
          goto LABEL_34;
      }
      else
      {
        v28 = 1;
LABEL_34:
        *((_DWORD *)v21 + 704) = 1;
      }
      v29 = v45;
    }
    KeReleaseSpinLock(v21 + 351, v29);
    if ( v28 == 3 )
    {
      UsbhEtwLogHubIrpEvent(
        a1,
        0LL,
        0LL,
        &USBHUB_ETW_EVENT_HUB_ENUM_DUPE_SERIAL_NUMBER,
        *(unsigned __int16 *)(a2 + 4),
        -1073741823);
      LOBYTE(v44) = 0;
      UsbhException(
        (int)a1,
        *(unsigned __int16 *)(a2 + 4),
        40,
        v21[267],
        *((_DWORD *)v21 + 533),
        v13,
        0,
        usbfile_busfunc_c,
        1932,
        v44);
      UsbhFreeID(v21 + 266);
      *((_DWORD *)v21 + 355) &= ~0x200u;
      goto LABEL_14;
    }
    if ( v28 != 2 )
    {
      v7 = v47;
      if ( v28 == 4 )
        LODWORD(v13) = -1073741823;
      goto LABEL_15;
    }
    if ( (unsigned int)UsbhPCE_Check(a1, a2, *(_QWORD *)(a2 + 376)) )
    {
      LODWORD(v13) = -1073741823;
      *(_DWORD *)(a2 + 544) = 3;
      goto LABEL_14;
    }
    UsbhWait((int)a1, (int)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
    v14 = v46;
    if ( v15 > HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    {
      LODWORD(v13) = -1073741823;
      UsbhEtwLogHubIrpEvent(
        a1,
        0LL,
        0LL,
        &USBHUB_ETW_EVENT_HUB_ENUM_REPLICANT_TIMEOUT,
        *(unsigned __int16 *)(a2 + 4),
        -1073741823);
      LOBYTE(v44) = 0;
      UsbhException((int)a1, *(unsigned __int16 *)(a2 + 4), 70, 0, 0, -1073741823, 0, usbfile_busfunc_c, 1987, v44);
      PdoExt(a3)[705] = 1073807363;
LABEL_14:
      v7 = v47;
      goto LABEL_15;
    }
  }
  if ( !Usb_Disconnected(v13) )
  {
    Log((_DWORD)a1, 1024, 1701725522, v32, v31);
    UsbhDisablePort((_DWORD)a1);
    goto LABEL_14;
  }
  Log((_DWORD)a1, 1024, 1701720644, v32, v31);
  UsbhBusUnlatchPdo((_DWORD)a1, a3, a2, v33, 0LL);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_HUB_DISCONNECT, *(unsigned __int16 *)(a2 + 4), v13);
  Usbh_Disconnect_PdoEvent(a1, a3, 3LL, *(_QWORD *)(a2 + 376));
  return 3LL;
}
