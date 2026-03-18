/*
 * XREFs of UsbhBusPause_Action @ 0x1C00094A0
 * Callers:
 *     Usbh_BS_BusRun @ 0x1C00093C0 (Usbh_BS_BusRun.c)
 * Callees:
 *     UsbhCancelEnumeration @ 0x1C000A060 (UsbhCancelEnumeration.c)
 *     UsbhSsh_CheckHubIdle @ 0x1C000A0F8 (UsbhSsh_CheckHubIdle.c)
 *     UsbhDerefPdo @ 0x1C000EF60 (UsbhDerefPdo.c)
 *     UsbhPostInterrupt @ 0x1C0010330 (UsbhPostInterrupt.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0015250 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhUnlatchPdo @ 0x1C001BFF0 (UsbhUnlatchPdo.c)
 *     UsbhRefPdo @ 0x1C001CFB0 (UsbhRefPdo.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0041A74 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbhBusPause_Action(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  __int64 v4; // rdi
  unsigned __int16 i; // bp
  unsigned __int8 *DeviceExtension; // rdx
  __int64 v7; // rcx
  unsigned __int8 *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r13
  __int64 v11; // rcx
  void *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  void *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // r15
  void *v19; // rdx
  __int64 v20; // rcx
  KIRQL v21; // di
  void *v22; // rdx
  __int64 v23; // rcx
  unsigned __int8 *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // r8d
  void *v28; // rdx
  __int64 v29; // rcx
  void *v30; // rdx
  __int64 v31; // rcx
  unsigned __int8 *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r10
  __int64 v35; // rcx
  _DWORD *v36; // rdx
  void *v37; // rdx
  __int64 v38; // rcx
  void *v39; // rdx
  __int64 v40; // rcx
  unsigned __int8 *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r15
  __int64 v44; // rcx
  __int64 v45; // rsi
  unsigned __int16 v46; // di
  void *v47; // rdx
  __int64 v48; // rcx
  KIRQL v49; // r12
  void *v50; // rdx
  __int64 v51; // rcx
  unsigned __int8 *v52; // rdx
  __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v57; // rdi
  __int64 v58; // rdx
  KIRQL v59; // di
  __int64 v60; // [rsp+78h] [rbp-40h]

  v4 = FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 2048, 1885435185, 0, 0LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 2712), 0xFFFFFFFF) == 1 )
  {
    Log((_DWORD)DeviceObject, 2048, 1667320145, *(_QWORD *)(v4 + 2664), 0LL);
    IoCancelIrp(*(PIRP *)(v4 + 2664));
  }
  KeWaitForSingleObject((PVOID)(v4 + 2688), Executive, 0, 0, 0LL);
  if ( *(_DWORD *)(a2 + 128) == 2 && (int)UsbhSsh_CheckHubIdle(DeviceObject) < 0 )
  {
    *(_DWORD *)(v4 + 2712) = 0;
    KeResetEvent((PRKEVENT)(v4 + 2688));
    UsbhPostInterrupt(DeviceObject);
    return 3221225473LL;
  }
  else
  {
    for ( i = 1; ; ++i )
    {
      if ( !DeviceObject )
        UsbhTrapFatal_Dbg(0LL, 0LL);
      DeviceExtension = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !DeviceExtension )
LABEL_121:
        UsbhTrapFatal_Dbg(DeviceObject, 0LL);
      if ( *(_DWORD *)DeviceExtension != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, DeviceExtension);
      if ( i > DeviceExtension[2938] )
        break;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v7 = *((_QWORD *)DeviceExtension + 111)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v7 = 1413771367;
        *(_QWORD *)(v7 + 16) = i;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 24) = 0LL;
      }
      if ( i )
      {
        v8 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v8 )
          goto LABEL_121;
        if ( *(_DWORD *)v8 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v8);
        if ( i > v8[2938] )
        {
          v10 = 0LL;
        }
        else
        {
          v9 = *((_QWORD *)v8 + 382);
          if ( v9 )
          {
            v10 = 2928LL * i + v9 - 2928;
            if ( (UsbhLogMask & 8) != 0 )
            {
              v11 = *((_QWORD *)v8 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v8 + 220) & *((_DWORD *)v8 + 221));
              *(_DWORD *)v11 = 1044672615;
              *(_QWORD *)(v11 + 8) = 0LL;
              *(_QWORD *)(v11 + 16) = i;
              *(_QWORD *)(v11 + 24) = v10;
            }
          }
          else
          {
            v10 = 0LL;
          }
        }
      }
      else
      {
        v10 = 0LL;
      }
      if ( (UsbhLogMask & 0x800) != 0 )
      {
        v12 = DeviceObject->DeviceExtension;
        if ( v12 )
        {
          v13 = *((_QWORD *)v12 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v12 + 220) & *((_DWORD *)v12 + 221));
          *(_DWORD *)v13 = 1467310448;
          *(_QWORD *)(v13 + 24) = i;
          *(_QWORD *)(v13 + 8) = 0LL;
          *(_QWORD *)(v13 + 16) = 0LL;
        }
      }
      if ( v10 )
      {
        v14 = *(int *)(v10 + 696);
        if ( (UsbhLogMask & 0x800) != 0 )
        {
          v15 = DeviceObject->DeviceExtension;
          if ( v15 )
          {
            v16 = *((_QWORD *)v15 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v15 + 220) & *((_DWORD *)v15 + 221));
            *(_DWORD *)v16 = 846553456;
            *(_QWORD *)(v16 + 24) = i;
            *(_QWORD *)(v16 + 8) = 0LL;
            *(_QWORD *)(v16 + 16) = v14;
          }
        }
      }
      v17 = a2;
      if ( *(_DWORD *)(a2 + 128) == 6 )
        KeWaitForSingleObject((PVOID)(v10 + 520), Executive, 0, 0, 0LL);
      v18 = 0LL;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        v19 = DeviceObject->DeviceExtension;
        if ( v19 )
        {
          v20 = *((_QWORD *)v19 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v19 + 220) & *((_DWORD *)v19 + 221));
          *(_DWORD *)v20 = 1329877100;
          *(_QWORD *)(v20 + 16) = i;
          *(_QWORD *)(v20 + 8) = 0LL;
          *(_QWORD *)(v20 + 24) = 1348564304LL;
        }
      }
      v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v22 = DeviceObject->DeviceExtension;
        if ( v22 )
        {
          v23 = *((_QWORD *)v22 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v22 + 220) & *((_DWORD *)v22 + 221));
          *(_DWORD *)v23 = 1413771367;
          *(_QWORD *)(v23 + 16) = i;
          *(_QWORD *)(v23 + 8) = 0LL;
          *(_QWORD *)(v23 + 24) = 0LL;
        }
      }
      if ( i )
      {
        v24 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v24 )
          goto LABEL_121;
        if ( *(_DWORD *)v24 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v24);
        if ( i <= v24[2938] )
        {
          v25 = *((_QWORD *)v24 + 382);
          if ( v25 )
          {
            v26 = 2928LL * i + v25 - 2928;
            if ( (UsbhLogMask & 8) != 0 )
            {
              v25 = *((_QWORD *)v24 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v24 + 220) & *((_DWORD *)v24 + 221));
              *(_DWORD *)v25 = 1044672615;
              *(_QWORD *)(v25 + 8) = 0LL;
              *(_QWORD *)(v25 + 16) = i;
              *(_QWORD *)(v25 + 24) = v26;
            }
            if ( v26 )
            {
              v18 = *(_QWORD *)(v26 + 392);
              if ( v18 )
                v18 = UsbhRefPdo(v25, v18, 0LL, 1348564304LL);
            }
          }
        }
      }
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v21);
      if ( v18 )
      {
        v57 = PdoExt(v18);
        KeWaitForSingleObject((PVOID)(v57 + 2896), Executive, 0, 0, 0LL);
        *(_DWORD *)(v57 + 1420) |= 0x10000000u;
        KeSetEvent((PRKEVENT)(v57 + 2896), 0, 0);
        UsbhUnlatchPdo(DeviceObject, v18, 0LL, 1348564304LL);
        v17 = a2;
      }
      HIDWORD(v60) = 0;
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v28 = DeviceObject->DeviceExtension;
        if ( v28 )
        {
          v29 = *((_QWORD *)v28 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v28 + 220) & *((_DWORD *)v28 + 221));
          *(_DWORD *)v29 = 829912937;
          *(_QWORD *)(v29 + 24) = i;
          *(_QWORD *)(v29 + 8) = 0LL;
          *(_QWORD *)(v29 + 16) = v17;
        }
      }
      LODWORD(v60) = 0x80000;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          79,
          (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
          i);
      if ( (UsbhLogMask & 8) != 0 )
      {
        v30 = DeviceObject->DeviceExtension;
        if ( v30 )
        {
          v31 = *((_QWORD *)v30 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v30 + 220) & *((_DWORD *)v30 + 221));
          *(_DWORD *)v31 = 1413771367;
          *(_QWORD *)(v31 + 16) = i;
          *(_QWORD *)(v31 + 8) = 0LL;
          *(_QWORD *)(v31 + 24) = 0LL;
        }
      }
      if ( i )
      {
        v32 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v32 )
          goto LABEL_121;
        if ( *(_DWORD *)v32 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v32);
        if ( i <= v32[2938] )
        {
          v33 = *((_QWORD *)v32 + 382);
          if ( v33 )
          {
            v27 = i;
            v34 = 2928LL * i + v33 - 2928;
            if ( (UsbhLogMask & 8) != 0 )
            {
              v35 = *((_QWORD *)v32 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v32 + 220) & *((_DWORD *)v32 + 221));
              *(_DWORD *)v35 = 1044672615;
              *(_QWORD *)(v35 + 8) = 0LL;
              *(_QWORD *)(v35 + 16) = i;
              *(_QWORD *)(v35 + 24) = v34;
            }
            if ( v34 )
              UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v34, 4, v17, v60, 0, 0LL, 0LL);
          }
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          80,
          (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
          i);
      v36 = DeviceObject->DeviceExtension;
      if ( !v36 )
        goto LABEL_121;
      if ( *v36 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v36);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v36,
          v27,
          66,
          (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
          i,
          v17);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v37 = DeviceObject->DeviceExtension;
        if ( v37 )
        {
          v38 = *((_QWORD *)v37 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v37 + 220) & *((_DWORD *)v37 + 221));
          *(_DWORD *)v38 = 842024272;
          *(_QWORD *)(v38 + 24) = i;
          *(_QWORD *)(v38 + 8) = 0LL;
          *(_QWORD *)(v38 + 16) = 0LL;
        }
      }
      if ( (UsbhLogMask & 8) != 0 )
      {
        v39 = DeviceObject->DeviceExtension;
        if ( v39 )
        {
          v40 = *((_QWORD *)v39 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v39 + 220) & *((_DWORD *)v39 + 221));
          *(_DWORD *)v40 = 1413771367;
          *(_QWORD *)(v40 + 16) = i;
          *(_QWORD *)(v40 + 8) = 0LL;
          *(_QWORD *)(v40 + 24) = 0LL;
        }
      }
      if ( i )
      {
        v41 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v41 )
          goto LABEL_121;
        if ( *(_DWORD *)v41 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v41);
        if ( i <= v41[2938] )
        {
          v42 = *((_QWORD *)v41 + 382);
          if ( v42 )
          {
            v43 = 2928LL * i + v42 - 2928;
            if ( (UsbhLogMask & 8) != 0 )
            {
              v44 = *((_QWORD *)v41 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v41 + 220) & *((_DWORD *)v41 + 221));
              *(_DWORD *)v44 = 1044672615;
              *(_QWORD *)(v44 + 8) = 0LL;
              *(_QWORD *)(v44 + 16) = i;
              *(_QWORD *)(v44 + 24) = v43;
            }
            if ( v43 )
            {
              UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v43, 2, v17, 0LL, 0, 0LL, 0LL);
              v45 = 0LL;
              v46 = *(_WORD *)(v43 + 4);
              if ( (UsbhLogMask & 0x100) != 0 )
              {
                v47 = DeviceObject->DeviceExtension;
                if ( v47 )
                {
                  v48 = *((_QWORD *)v47 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v47 + 220) & *((_DWORD *)v47 + 221));
                  *(_DWORD *)v48 = 1329877100;
                  *(_QWORD *)(v48 + 16) = v46;
                  *(_QWORD *)(v48 + 8) = 0LL;
                  *(_QWORD *)(v48 + 24) = 1884308559LL;
                }
              }
              v49 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
              WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
              if ( (UsbhLogMask & 8) != 0 )
              {
                v50 = DeviceObject->DeviceExtension;
                if ( v50 )
                {
                  v51 = *((_QWORD *)v50 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v50 + 220) & *((_DWORD *)v50 + 221));
                  *(_DWORD *)v51 = 1413771367;
                  *(_QWORD *)(v51 + 16) = v46;
                  *(_QWORD *)(v51 + 8) = 0LL;
                  *(_QWORD *)(v51 + 24) = 0LL;
                }
              }
              if ( v46 )
              {
                v52 = (unsigned __int8 *)DeviceObject->DeviceExtension;
                if ( !v52 )
                  goto LABEL_121;
                if ( *(_DWORD *)v52 != 541218120 )
                  UsbhTrapFatal_Dbg(DeviceObject, v52);
                if ( v46 <= v52[2938] )
                {
                  v53 = *((_QWORD *)v52 + 382);
                  if ( v53 )
                  {
                    v54 = 2928LL * v46;
                    v55 = v54 + v53 - 2928;
                    if ( (UsbhLogMask & 8) != 0 )
                    {
                      v54 = *((_QWORD *)v52 + 111)
                          + 32LL
                          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v52 + 220) & *((_DWORD *)v52 + 221));
                      *(_DWORD *)v54 = 1044672615;
                      *(_QWORD *)(v54 + 16) = v46;
                      *(_QWORD *)(v54 + 8) = 0LL;
                      *(_QWORD *)(v54 + 24) = v55;
                    }
                    if ( v55 )
                    {
                      v45 = *(_QWORD *)(v55 + 392);
                      if ( v45 )
                        v45 = UsbhRefPdo(v54, v45, 0LL, 1884308559LL);
                    }
                  }
                }
              }
              WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v49);
              if ( v45 )
              {
                v58 = *(unsigned int *)(v43 + 400);
                *(_QWORD *)(v43 + 376) = v43 + 24;
                *(_DWORD *)(v43 + 416) = 1;
                UsbhCancelEnumeration(DeviceObject, v58, v43, v45);
                *(_QWORD *)(v43 + 376) = 0LL;
                if ( *(_DWORD *)(v43 + 416) )
                {
                  Log((_DWORD)DeviceObject, 1024, 1970032689, v45, v43);
                  v59 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
                  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
                  *(_DWORD *)(v43 + 416) = 0;
                  Log((_DWORD)DeviceObject, 1024, 1970032690, v45, v43);
                  UsbhDerefPdo(DeviceObject, v45, 0LL, 1884308559LL);
                  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
                  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v59);
                }
                else
                {
                  *(_DWORD *)(v43 + 400) = 0;
                }
              }
            }
          }
        }
      }
      if ( *(_DWORD *)(a2 + 128) == 6 )
        KeSetEvent((PRKEVENT)(v10 + 520), 0, 0);
    }
    Log((_DWORD)DeviceObject, 2048, 1885435198, 0, 0LL);
    return 0LL;
  }
}
