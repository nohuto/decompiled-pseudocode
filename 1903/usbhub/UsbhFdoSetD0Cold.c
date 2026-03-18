/*
 * XREFs of UsbhFdoSetD0Cold @ 0x1C0007970
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C00047C0 (UsbhFdoD0Worker_Action.c)
 *     UsbhHubStart @ 0x1C001F8E8 (UsbhHubStart.c)
 *     UsbhHardReset_Action @ 0x1C004C888 (UsbhHardReset_Action.c)
 * Callees:
 *     UsbhLatchPdo @ 0x1C0001C9C (UsbhLatchPdo.c)
 *     Usb_Disconnected @ 0x1C0004AFC (Usb_Disconnected.c)
 *     UsbhFdoColdStartCheckPort @ 0x1C00082C0 (UsbhFdoColdStartCheckPort.c)
 *     UsbhSyncBusResume @ 0x1C00083A4 (UsbhSyncBusResume.c)
 *     UsbhSyncBusReset @ 0x1C0008418 (UsbhSyncBusReset.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0008C2C (UsbhSyncResetDeviceInternal.c)
 *     UsbhFdoColdStartPdo @ 0x1C000928C (UsbhFdoColdStartPdo.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhSyncPowerOnPorts @ 0x1C001A780 (UsbhSyncPowerOnPorts.c)
 *     UsbhRawWait @ 0x1C001ACD0 (UsbhRawWait.c)
 *     UsbhUnlatchPdo @ 0x1C001BFF0 (UsbhUnlatchPdo.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001C210 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhRefPdo @ 0x1C001CFB0 (UsbhRefPdo.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0046B5C (UsbhQueueSoftConnectChange.c)
 *     UsbhResetHubUpstreamPort @ 0x1C004CBF0 (UsbhResetHubUpstreamPort.c)
 *     UsbhResetNotifyCompletion @ 0x1C004CC9C (UsbhResetNotifyCompletion.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

__int64 __fastcall UsbhFdoSetD0Cold(struct _DEVICE_OBJECT *a1, __int64 a2, char a3)
{
  __int16 v6; // r9
  unsigned __int16 v7; // r13
  int v8; // eax
  int started; // r12d
  unsigned int v10; // r9d
  unsigned __int16 i; // di
  unsigned __int8 *DeviceExtension; // rdx
  __int64 v13; // rcx
  unsigned __int8 *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rsi
  void *v20; // rdx
  __int64 v21; // rcx
  KIRQL v22; // al
  __int64 v23; // rcx
  KIRQL v24; // r12
  void *v25; // rdx
  unsigned __int8 *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r8
  void *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r14
  unsigned __int8 *v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rcx
  KIRQL v36; // si
  void *v37; // rdx
  __int64 v38; // rcx
  unsigned __int8 *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  void *v42; // rdx
  __int64 v43; // rcx
  void *v44; // rdx
  __int64 v45; // rcx
  unsigned __int8 *v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v51; // rax
  __int64 v52; // rsi
  int v53; // eax
  int v54; // eax
  unsigned int v55; // edi
  int v56; // ecx
  unsigned __int16 j; // di
  __int64 v58; // rax
  __int64 v59; // rsi
  __int64 v60; // rbp
  int v61; // [rsp+48h] [rbp-60h]
  __int64 v62; // [rsp+60h] [rbp-48h]

  v62 = FdoExt(a1);
  Log((_DWORD)a1, 16, 1668246628, 0, 0LL);
  v7 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) != v6 )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      27,
      (__int64)&WPP_d7f5712d72fd3bbd6a7d18dfcf7fb5d1_Traceguids);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_START, 0, 0);
  if ( !a3 || (v54 = UsbhResetHubUpstreamPort(a1), v55 = v54, (v54 & 0xC0000000) != 0xC0000000) )
  {
    UsbhSyncBusReset(a1, a2);
    v8 = UsbhSyncPowerOnPorts((_DWORD)a1);
    started = v8;
    if ( (v8 & 0xC0000000) == 0xC0000000 )
    {
      if ( !Usb_Disconnected(v8) )
      {
        LOBYTE(v61) = 0;
        UsbhException((int)a1, 0, 53, 0, 0, started, 0, usbfile_fdopwr_c, 3298, v61);
      }
LABEL_79:
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_COMPLETE, 0, started);
      return (unsigned int)started;
    }
    Log((_DWORD)a1, 8, 2002872692, 100, 0LL);
    UsbhRawWait(v10);
    for ( i = 1; ; ++i )
    {
      if ( !a1 )
        UsbhTrapFatal_Dbg(0LL, 0LL);
      DeviceExtension = (unsigned __int8 *)a1->DeviceExtension;
      if ( !DeviceExtension )
LABEL_116:
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *(_DWORD *)DeviceExtension != 541218120 )
        UsbhTrapFatal_Dbg(a1, DeviceExtension);
      if ( i > DeviceExtension[2938] )
        break;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v13 = *((_QWORD *)DeviceExtension + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v13 = 1413771367;
        *(_QWORD *)(v13 + 16) = i;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 24) = 0LL;
      }
      if ( i )
      {
        v14 = (unsigned __int8 *)a1->DeviceExtension;
        if ( !v14 )
          goto LABEL_116;
        if ( *(_DWORD *)v14 != 541218120 )
          UsbhTrapFatal_Dbg(a1, v14);
        if ( i <= v14[2938] )
        {
          v15 = *((_QWORD *)v14 + 382);
          if ( v15 )
          {
            v16 = 2928LL * i - 2928;
            v17 = v15 + v16;
            if ( (UsbhLogMask & 8) != 0 )
            {
              v18 = *((_QWORD *)v14 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v14 + 220) & *((_DWORD *)v14 + 221));
              *(_DWORD *)v18 = 1044672615;
              *(_QWORD *)(v18 + 8) = 0LL;
              *(_QWORD *)(v18 + 16) = i;
              *(_QWORD *)(v18 + 24) = v17;
            }
            if ( v17 )
            {
              v19 = 0LL;
              if ( (UsbhLogMask & 0x100) != 0 )
              {
                v20 = a1->DeviceExtension;
                if ( v20 )
                {
                  v21 = *((_QWORD *)v20 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v20 + 220) & *((_DWORD *)v20 + 221));
                  *(_DWORD *)v21 = 1329877100;
                  *(_QWORD *)(v21 + 8) = 0LL;
                  *(_QWORD *)(v21 + 16) = i;
                  *(_QWORD *)(v21 + 24) = 1129270340LL;
                }
              }
              v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
              v23 = (unsigned int)UsbhLogMask;
              v24 = v22;
              WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
              if ( (UsbhLogMask & 8) != 0 )
              {
                v25 = a1->DeviceExtension;
                if ( v25 )
                {
                  v23 = *((_QWORD *)v25 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v25 + 220) & *((_DWORD *)v25 + 221));
                  *(_DWORD *)v23 = 1413771367;
                  *(_QWORD *)(v23 + 8) = 0LL;
                  *(_QWORD *)(v23 + 16) = i;
                  *(_QWORD *)(v23 + 24) = 0LL;
                }
              }
              v26 = (unsigned __int8 *)a1->DeviceExtension;
              if ( !v26 )
                goto LABEL_116;
              if ( *(_DWORD *)v26 != 541218120 )
                UsbhTrapFatal_Dbg(a1, v26);
              if ( i <= v26[2938] )
              {
                v27 = *((_QWORD *)v26 + 382);
                if ( v27 )
                {
                  v28 = v27 + v16;
                  if ( (UsbhLogMask & 8) != 0 )
                  {
                    v23 = *((_QWORD *)v26 + 111)
                        + 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v26 + 220) & *((_DWORD *)v26 + 221));
                    *(_DWORD *)v23 = 1044672615;
                    *(_QWORD *)(v23 + 8) = 0LL;
                    *(_QWORD *)(v23 + 16) = i;
                    *(_QWORD *)(v23 + 24) = v28;
                  }
                  if ( v28 )
                  {
                    v19 = *(_QWORD *)(v28 + 392);
                    if ( v19 )
                      v19 = UsbhRefPdo(v23, v19, 0LL, 1129270340LL);
                  }
                }
              }
              WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v24);
              v29 = *(unsigned __int16 *)(v17 + 4);
              if ( (UsbhLogMask & 0x10) != 0 )
              {
                v30 = a1->DeviceExtension;
                if ( v30 )
                {
                  v31 = *((_QWORD *)v30 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v30 + 220) & *((_DWORD *)v30 + 221));
                  *(_DWORD *)v31 = 828664931;
                  *(_QWORD *)(v31 + 8) = 0LL;
                  *(_QWORD *)(v31 + 16) = v29;
                  *(_QWORD *)(v31 + 24) = v19;
                }
              }
              if ( v19 )
              {
                v32 = a2;
                started = UsbhFdoColdStartPdo((_DWORD)a1);
                UsbhUnlatchPdo(a1, v19, 0LL, 1129270340LL);
                if ( (started & 0xC0000000) == 0xC0000000 )
                  goto LABEL_43;
              }
              else
              {
                started = UsbhFdoColdStartCheckPort((_DWORD)a1);
                if ( (started & 0xC0000000) == 0xC0000000 )
                  break;
              }
            }
          }
        }
      }
    }
    v32 = a2;
LABEL_43:
    UsbhSyncBusResume(a1, v32);
    if ( !*(_BYTE *)(v62 + 5268) )
      goto LABEL_44;
    for ( j = 1; j <= *(unsigned __int8 *)(FdoExt(a1) + 2938); ++j )
    {
      v58 = UsbhLatchPdo((__int64)a1, j, 0LL, 0x434C4432u);
      v59 = v58;
      if ( !v58 )
        continue;
      v60 = PdoExt(v58);
      if ( *(_BYTE *)(v60 + 2740) )
      {
        started = UsbhSyncResetDeviceInternal(a1);
        if ( started >= 0 )
        {
          UsbhResetNotifyCompletion(*(_QWORD *)(v32 + 8));
          goto LABEL_104;
        }
        UsbhQueueSoftConnectChange((_DWORD)a1);
        *(_DWORD *)(v60 + 1420) &= ~0x4000u;
        UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_COMPLETE, 0, started);
        UsbhUnlatchPdo(a1, v59, 0LL, 1129071666LL);
        return (unsigned int)started;
      }
LABEL_104:
      UsbhUnlatchPdo(a1, v59, 0LL, 1129071666LL);
    }
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_44:
        v33 = (unsigned __int8 *)a1->DeviceExtension;
        if ( !v33 )
          goto LABEL_116;
        if ( *(_DWORD *)v33 != 541218120 )
          UsbhTrapFatal_Dbg(a1, v33);
        if ( v7 > v33[2938] )
          goto LABEL_79;
        v34 = 0LL;
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          v35 = *((_QWORD *)v33 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v33 + 220) & *((_DWORD *)v33 + 221));
          *(_DWORD *)v35 = 1329877100;
          *(_QWORD *)(v35 + 16) = v7;
          *(_QWORD *)(v35 + 8) = 0LL;
          *(_QWORD *)(v35 + 24) = 1129071666LL;
        }
        v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
        WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
        if ( (UsbhLogMask & 8) != 0 )
        {
          v37 = a1->DeviceExtension;
          if ( v37 )
          {
            v38 = *((_QWORD *)v37 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v37 + 220) & *((_DWORD *)v37 + 221));
            *(_DWORD *)v38 = 1413771367;
            *(_QWORD *)(v38 + 16) = v7;
            *(_QWORD *)(v38 + 8) = 0LL;
            *(_QWORD *)(v38 + 24) = 0LL;
          }
        }
        if ( v7 )
        {
          v39 = (unsigned __int8 *)a1->DeviceExtension;
          if ( !v39 )
            goto LABEL_116;
          if ( *(_DWORD *)v39 != 541218120 )
            UsbhTrapFatal_Dbg(a1, v39);
          if ( v7 <= v39[2938] )
          {
            v40 = *((_QWORD *)v39 + 382);
            if ( v40 )
            {
              v41 = 2928LL * v7 + v40 - 2928;
              if ( (UsbhLogMask & 8) != 0 )
              {
                v40 = *((_QWORD *)v39 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v39 + 220) & *((_DWORD *)v39 + 221));
                *(_DWORD *)v40 = 1044672615;
                *(_QWORD *)(v40 + 8) = 0LL;
                *(_QWORD *)(v40 + 16) = v7;
                *(_QWORD *)(v40 + 24) = v41;
              }
              if ( v41 )
              {
                v34 = *(_QWORD *)(v41 + 392);
                if ( v34 )
                  v34 = UsbhRefPdo(v40, v34, 0LL, 1129071666LL);
              }
            }
          }
        }
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v36);
        if ( (UsbhLogMask & 0x10) != 0 )
        {
          v42 = a1->DeviceExtension;
          if ( v42 )
          {
            v43 = *((_QWORD *)v42 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v42 + 220) & *((_DWORD *)v42 + 221));
            *(_DWORD *)v43 = 829318514;
            *(_QWORD *)(v43 + 16) = v7;
            *(_QWORD *)(v43 + 8) = 0LL;
            *(_QWORD *)(v43 + 24) = v34;
          }
        }
        if ( v34 )
          break;
        if ( (UsbhLogMask & 8) != 0 )
        {
          v44 = a1->DeviceExtension;
          if ( v44 )
          {
            v45 = *((_QWORD *)v44 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v44 + 220) & *((_DWORD *)v44 + 221));
            *(_DWORD *)v45 = 1413771367;
            *(_QWORD *)(v45 + 16) = v7;
            *(_QWORD *)(v45 + 8) = 0LL;
            *(_QWORD *)(v45 + 24) = 0LL;
          }
        }
        if ( v7 )
        {
          v46 = (unsigned __int8 *)a1->DeviceExtension;
          if ( !v46 )
            goto LABEL_116;
          if ( *(_DWORD *)v46 != 541218120 )
            UsbhTrapFatal_Dbg(a1, v46);
          if ( v7 > v46[2938] )
          {
            v48 = 0LL;
          }
          else
          {
            v47 = *((_QWORD *)v46 + 382);
            if ( v47 )
            {
              v48 = 2928LL * v7 + v47 - 2928;
              if ( (UsbhLogMask & 8) != 0 )
              {
                v49 = *((_QWORD *)v46 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v46 + 220) & *((_DWORD *)v46 + 221));
                *(_DWORD *)v49 = 1044672615;
                *(_QWORD *)(v49 + 8) = 0LL;
                *(_QWORD *)(v49 + 16) = v7;
                *(_QWORD *)(v49 + 24) = v48;
              }
            }
            else
            {
              v48 = 0LL;
            }
          }
        }
        else
        {
          v48 = 0LL;
        }
        if ( *(_BYTE *)(v48 + 2841) )
        {
          *(_BYTE *)(v48 + 2841) = 0;
          UsbhQueueSoftConnectChange((_DWORD)a1);
        }
LABEL_78:
        ++v7;
      }
      v51 = PdoExt(v34);
      v52 = v51;
      if ( *(_BYTE *)(v51 + 2740) )
      {
        UsbhUnlatchPdo(a1, v34, 0LL, 1129071666LL);
        goto LABEL_78;
      }
      if ( (*(_DWORD *)(v51 + 1420) & 0x4000) != 0 )
      {
        Log((_DWORD)a1, 16, 1346654803, 0, 0LL);
        UsbhEtwLogHubIrpEvent(
          a1,
          0LL,
          0LL,
          &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_PORT_RESET,
          *(unsigned __int16 *)(v52 + 1428),
          0);
        v53 = UsbhSyncResetDeviceInternal(a1);
        started = v53;
        if ( (v53 & 0xC0000000) == 0xC0000000 )
        {
          Log((_DWORD)a1, 16, 1919249970, 0, v53);
          UsbhQueueSoftConnectChange((_DWORD)a1);
          *(_DWORD *)(v52 + 1420) &= ~0x4000u;
          LOBYTE(v61) = 0;
          UsbhException((int)a1, 0, 88, 0, 0, started, 0, usbfile_fdopwr_c, 3445, v61);
          started = 0;
        }
        else
        {
          *(_DWORD *)(v52 + 1420) &= ~0x4000u;
        }
      }
      UsbhUnlatchPdo(a1, v34, 0LL, 1129071666LL);
      ++v7;
    }
  }
  if ( !Usb_Disconnected(v54) )
  {
    LOBYTE(v61) = 0;
    UsbhException((int)a1, 0, 54, 0, 0, v56, 0, usbfile_fdopwr_c, 3274, v61);
  }
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_COMPLETE, 0, v55);
  return v55;
}
