/*
 * XREFs of UsbhCreatePdo @ 0x1C0022330
 * Callers:
 *     UsbhPortConnect @ 0x1C001EEA0 (UsbhPortConnect.c)
 * Callees:
 *     UsbhSshSetPortsBusyState @ 0x1C0010320 (UsbhSshSetPortsBusyState.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhIncPdoIoCount @ 0x1C001C590 (UsbhIncPdoIoCount.c)
 *     UsbhGetLocationIdString @ 0x1C0021E10 (UsbhGetLocationIdString.c)
 *     UsbhBuildDeviceID @ 0x1C0023DF0 (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x1C0024050 (UsbhBuildHardwareID.c)
 *     UsbhSetPortData @ 0x1C00255E0 (UsbhSetPortData.c)
 *     UsbhConnectPdoToHub @ 0x1C00256C8 (UsbhConnectPdoToHub.c)
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 *     memset @ 0x1C002B800 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C004051C (WPP_RECORDER_SF_q.c)
 *     Usbh_ErrorDisconnect_PdoEvent @ 0x1C0049368 (Usbh_ErrorDisconnect_PdoEvent.c)
 */

__int64 __fastcall UsbhCreatePdo(__int64 a1, __int64 a2)
{
  ULONG v3; // esi
  _DWORD *v5; // r13
  WCHAR *PoolWithTag; // rax
  WCHAR *v7; // rdi
  __int128 v8; // xmm1
  NTSTATUS appended; // ebx
  __int64 v10; // r9
  char *DeviceExtension; // rbx
  struct _UNICODE_STRING v12; // xmm0
  _DWORD *v13; // rax
  __int64 v14; // rdx
  POOL_TYPE v15; // ecx
  __int64 v16; // r9
  __int64 v17; // r10
  WCHAR *v18; // rsi
  ULONG v19; // ecx
  __int64 v20; // rdi
  int v21; // eax
  int v22; // eax
  _QWORD *v23; // rax
  int v24; // eax
  __int64 v25; // r9
  __int64 v26; // r10
  int v27; // r8d
  __int64 v28; // r9
  __int64 v29; // r10
  int v30; // eax
  __int64 v31; // r8
  int v32; // edx
  _DWORD *v33; // rax
  __int64 v34; // rdx
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-89h] BYREF
  __int128 v37; // [rsp+48h] [rbp-81h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-71h] BYREF
  struct _UNICODE_STRING String; // [rsp+68h] [rbp-61h] BYREF
  struct _UNICODE_STRING v40; // [rsp+78h] [rbp-51h] BYREF
  __int128 v41; // [rsp+88h] [rbp-41h]
  WCHAR SourceString[32]; // [rsp+A0h] [rbp-29h] BYREF

  DeviceObject = 0LL;
  v3 = 0;
  Log(a1, 256, 1666204751, a2, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      26,
      (__int64)&WPP_f2aca5edc47035375c4b9957b65d3b97_Traceguids);
  v5 = FdoExt(a1);
  while ( 1 )
  {
    v37 = *(_OWORD *)L"\\Device\\USBPDO-";
    v41 = *(_OWORD *)L"USBPDO-";
    memset(SourceString, 0, sizeof(SourceString));
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x60uLL, 0x42554855u);
    v7 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    memset(PoolWithTag, 0, 0x60uLL);
    v8 = v41;
    *(_OWORD *)v7 = v37;
    *((_OWORD *)v7 + 1) = v8;
    RtlInitUnicodeString(&DestinationString, v7);
    DestinationString.MaximumLength = 96;
    RtlInitUnicodeString(&String, SourceString);
    String.MaximumLength = 64;
    appended = RtlIntegerToUnicodeString(v3, 0xAu, &String);
    if ( appended >= 0 )
      appended = RtlAppendUnicodeStringToString(&DestinationString, &String);
    if ( (appended & 0xC0000000) == 0xC0000000 )
      ExFreePoolWithTag(v7, 0);
    if ( appended >= 0 )
    {
      appended = IoCreateDevice(
                   (PDRIVER_OBJECT)WPP_MAIN_CB.Queue.ListEntry.Blink,
                   0xBF8u,
                   &DestinationString,
                   0x22u,
                   0,
                   0,
                   &DeviceObject);
      if ( appended >= 0 )
        goto LABEL_13;
      RtlFreeUnicodeString(&DestinationString);
    }
    ++v3;
    if ( appended != -1073741771 )
      goto LABEL_13;
  }
  appended = -1073741670;
LABEL_13:
  Log(a1, 256, 1668310065, a2, appended);
  if ( !DeviceObject )
    return (unsigned int)-1073741670;
  if ( appended < 0 )
    return (unsigned int)appended;
  DeviceObject->StackSize = *(_BYTE *)(*((_QWORD *)v5 + 151) + 76LL) + 1;
  DeviceObject->Flags |= 0x2000u;
  Log(a1, 256, 1666204721, v10, (__int64)DeviceObject);
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  *(_DWORD *)DeviceExtension = 1329877064;
  v12 = DestinationString;
  *((_QWORD *)DeviceExtension + 145) = 0xFEFEFEFEFEFEFEFEuLL;
  *((_DWORD *)DeviceExtension + 288) = 0;
  *((struct _UNICODE_STRING *)DeviceExtension + 167) = v12;
  *((_DWORD *)DeviceExtension + 588) = -1;
  *((_DWORD *)DeviceExtension + 295) = *(_DWORD *)(*((_QWORD *)v5 + 377) + 4LL * *(unsigned __int16 *)(a2 + 4));
  *((_DWORD *)DeviceExtension + 196) = 1;
  *((_DWORD *)DeviceExtension + 596) = 1;
  *((_DWORD *)DeviceExtension + 742) = 1000;
  v13 = PdoExt((__int64)DeviceObject);
  v14 = ((unsigned __int8)v13[1] + 1) & 7;
  v13[1] = v14;
  v14 *= 32LL;
  *(_DWORD *)((char *)v13 + v14 + 16) = 7;
  *(_DWORD *)((char *)v13 + v14 + 20) = v13[281];
  *(_DWORD *)((char *)v13 + v14 + 24) = 1;
  v13[281] = 1;
  *((_QWORD *)DeviceExtension + 120) = DeviceObject;
  *((_DWORD *)DeviceExtension + 236) = 2017613128;
  *((_DWORD *)DeviceExtension + 237) = 1;
  *((_QWORD *)DeviceExtension + 119) = a1;
  *((_DWORD *)DeviceExtension + 264) = 1734964085;
  *((_DWORD *)DeviceExtension + 252) = 1734964085;
  *((_DWORD *)DeviceExtension + 248) = 1734964085;
  *((_DWORD *)DeviceExtension + 244) = 1734964085;
  *((_DWORD *)DeviceExtension + 255) = 1734964085;
  *((_DWORD *)DeviceExtension + 258) = 1734964085;
  *((_DWORD *)DeviceExtension + 261) = 1734964085;
  *((_DWORD *)DeviceExtension + 266) = 1734964085;
  *((_QWORD *)DeviceExtension + 120) = DeviceObject;
  *((_QWORD *)DeviceExtension + 317) = MEMORY[0xFFFFF78000000014];
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2360), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2920), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 1240), NotificationEvent, 0);
  *((_QWORD *)DeviceExtension + 154) = DeviceExtension + 1224;
  *((_QWORD *)DeviceExtension + 153) = DeviceExtension + 1224;
  KeInitializeEvent((PRKEVENT)DeviceExtension + 54, NotificationEvent, 1u);
  *((_QWORD *)DeviceExtension + 160) = DeviceExtension + 1272;
  *((_QWORD *)DeviceExtension + 159) = DeviceExtension + 1272;
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2056), SynchronizationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2944), SynchronizationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2896), SynchronizationEvent, 1u);
  KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 351);
  KeInitializeEvent((PRKEVENT)DeviceExtension + 115, SynchronizationEvent, 0);
  Log(a1, 0x2000, 1768843604, (__int64)(DeviceExtension + 1704), (__int64)UsbhDriverNotFoundTimer);
  v15 = ExDefaultNonPagedPoolType;
  *(_QWORD *)v16 = 1332899156LL;
  *(_QWORD *)(v16 + 48) = v17;
  *(_DWORD *)(v16 + 8) = 0;
  *(_DWORD *)(v16 + 72) = 1145980532;
  v18 = (WCHAR *)ExAllocatePoolWithTag(v15, 0x10uLL, 0x42554855u);
  if ( v18 )
  {
    *(_QWORD *)v18 = 0LL;
    *((_QWORD *)v18 + 1) = 0LL;
    RtlInitUnicodeString(&v40, v18);
    v19 = *(unsigned __int16 *)(a2 + 4);
    v40.MaximumLength = 16;
    LODWORD(v20) = RtlIntegerToUnicodeString(v19, 0xAu, &v40);
    if ( (v20 & 0xC0000000) == 0xC0000000 )
    {
      ExFreePoolWithTag(v18, 0);
    }
    else
    {
      *((_QWORD *)DeviceExtension + 269) = v18;
      *((_DWORD *)DeviceExtension + 537) = v40.MaximumLength;
      Log(a1, 256, 1668310066, a2, (__int64)v18);
      v21 = UsbhBuildDeviceID(a1, 0LL, DeviceExtension + 2080);
      LODWORD(v20) = v21;
      if ( (v21 & 0xC0000000) == 0xC0000000 )
      {
        Log(a1, 256, 1668302129, (__int64)DeviceObject, v21);
      }
      else
      {
        v22 = UsbhBuildHardwareID(a1, 0LL, DeviceExtension + 2096);
        LODWORD(v20) = v22;
        if ( (v22 & 0xC0000000) == 0xC0000000 )
        {
          Log(a1, 256, 1668302130, (__int64)DeviceObject, v22);
        }
        else
        {
          Log(a1, 4096, 1667451204, 0LL, 0LL);
          v23 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x1AuLL, 0x42554855u);
          if ( v23 )
          {
            LODWORD(v20) = 0;
            *v23 = 0LL;
            v23[1] = 0LL;
            v23[2] = 0LL;
            *((_WORD *)v23 + 12) = 0;
            *(_OWORD *)v23 = *(_OWORD *)L"USB\\UNKNOWN";
            *((_DWORD *)v23 + 4) = *(_DWORD *)L"OWN";
            *((_WORD *)v23 + 10) = aUsbUnknown[10];
            *((_QWORD *)DeviceExtension + 265) = v23;
            *((_DWORD *)DeviceExtension + 529) = 26;
          }
          else
          {
            LODWORD(v20) = -1073741670;
          }
          if ( (v20 & 0xC0000000) == 0xC0000000 )
          {
            Log(a1, 256, 1668302131, (__int64)DeviceObject, (int)v20);
          }
          else
          {
            v24 = UsbhConnectPdoToHub(DeviceObject, a1);
            LODWORD(v20) = v24;
            if ( (v24 & 0xC0000000) == 0xC0000000 )
            {
              Log(a1, 256, 1668302132, (__int64)DeviceObject, v24);
            }
            else
            {
              KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 152);
              KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 293);
              *((_QWORD *)DeviceExtension + 284) = DeviceExtension + 2264;
              *((_QWORD *)DeviceExtension + 283) = DeviceExtension + 2264;
              IoCsqInitialize(
                (PIO_CSQ)(DeviceExtension + 2280),
                (PIO_CSQ_INSERT_IRP)UsbhInsertPdoWakeIrp,
                (PIO_CSQ_REMOVE_IRP)UsbhRemovePdoWakeIrp,
                (PIO_CSQ_PEEK_NEXT_IRP)UsbhPeekNextPdoWakeIrp,
                (PIO_CSQ_ACQUIRE_LOCK)UsbhAcquirePdoWakeIrpLock,
                (PIO_CSQ_RELEASE_LOCK)UsbhReleasePdoWakeIrpLock,
                (PIO_CSQ_COMPLETE_CANCELED_IRP)UsbhCompleteCanceledPdoWakeIrp);
              KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 191);
              KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 256);
              *((_QWORD *)DeviceExtension + 182) = DeviceExtension + 1448;
              *((_QWORD *)DeviceExtension + 181) = DeviceExtension + 1448;
              IoCsqInitialize(
                (PIO_CSQ)(DeviceExtension + 1464),
                UsbhInsertPdoIdleIrp,
                UsbhRemovePdoIdleIrp,
                (PIO_CSQ_PEEK_NEXT_IRP)UsbhPeekNextPdoIdleIrp,
                (PIO_CSQ_ACQUIRE_LOCK)UsbhAcquirePdoIdleIrpLock,
                (PIO_CSQ_RELEASE_LOCK)UsbhReleasePdoIdleIrpLock,
                UsbhCompleteCanceledPdoIdleIrp);
              Log(a1, 0x2000, 1768843604, (__int64)(DeviceExtension + 1544), (__int64)UsbhIdleIrpRetryTimer);
              *(_QWORD *)(v25 + 48) = v26;
              *(_QWORD *)v25 = 1332899156LL;
              *(_DWORD *)(v25 + 8) = 0;
              *(_DWORD *)(v25 + 72) = 1231318117;
              Log(a1, 0x2000, v27, (__int64)(DeviceExtension + 1624), (__int64)UsbhSS_WakeIrpRetryTimer);
              *(_QWORD *)v28 = 1332899156LL;
              *(_QWORD *)(v28 + 48) = v29;
              *(_DWORD *)(v28 + 8) = 0;
              *(_DWORD *)(v28 + 72) = 1144018785;
              KeInitializeSemaphore((PRKSEMAPHORE)(DeviceExtension + 2568), 1, 1);
              *((_QWORD *)DeviceExtension + 114) = -1LL;
              *((_QWORD *)DeviceExtension + 115) = -1LL;
              *(_QWORD *)(DeviceExtension + 892) = -1LL;
              *(_QWORD *)(DeviceExtension + 900) = -1LL;
              v30 = UsbhIncPdoIoCount((__int64)DeviceObject, (__int64)DeviceObject, 1162637161, 0);
              v20 = v30;
              if ( (v30 & 0xC0000000) != 0xC0000000 )
              {
                *((_DWORD *)DeviceExtension + 356) |= 1u;
                *((_QWORD *)DeviceExtension + 105) = DeviceObject;
                *((_WORD *)DeviceExtension + 714) = *(_WORD *)(a2 + 4);
                *((_QWORD *)DeviceExtension + 382) = *(_QWORD *)(a2 + 2920);
                *((_DWORD *)DeviceExtension + 298) = v5[1259];
                *((_DWORD *)DeviceExtension + 282) = 1;
                *((_DWORD *)DeviceExtension + 197) = 1;
                *((_DWORD *)DeviceExtension + 198) = 1;
                *((_DWORD *)DeviceExtension + 684) = 0;
                DeviceExtension[2740] = 0;
                DWORD1(v37) = 0;
                LOBYTE(v37) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
                DWORD1(v37) = 1;
                WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
                UsbhSetPortData(a1, DeviceObject, &v37);
                UsbhGetLocationIdString(a1, (__int64)DeviceObject, v31, (__int64)(DeviceExtension + 2224));
                DWORD1(v37) = 0;
                WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
                KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v37);
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_q(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v32,
                    1,
                    27,
                    (__int64)&WPP_f2aca5edc47035375c4b9957b65d3b97_Traceguids,
                    (char)DeviceObject);
                Log(a1, 256, 1346654051, (__int64)DeviceObject, v20);
              }
            }
          }
        }
      }
    }
  }
  else
  {
    LODWORD(v20) = -1073741670;
  }
  if ( (v20 & 0xC0000000) == 0xC0000000 )
  {
    Log(a1, 256, 1346653985, (__int64)DeviceObject, (int)v20);
    Usbh_ErrorDisconnect_PdoEvent(a1, DeviceObject, a2 + 24);
  }
  else
  {
    DeviceObject->Flags &= ~0x80u;
    UsbhSshSetPortsBusyState(a1, *(_WORD *)(a2 + 4), 2, 1u);
    v33 = PdoExt((__int64)DeviceObject);
    v34 = ((unsigned __int8)v33[3] + 1) & 7;
    v33[3] = v34;
    v34 *= 32LL;
    *(_DWORD *)((char *)v33 + v34 + 528) = 6;
    *(_DWORD *)((char *)v33 + v34 + 532) = v33[280];
    *(_DWORD *)((char *)v33 + v34 + 536) = 100;
    v33[280] = 100;
  }
  return (unsigned int)v20;
}
