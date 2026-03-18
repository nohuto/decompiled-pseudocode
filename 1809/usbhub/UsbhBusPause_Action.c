/*
 * XREFs of UsbhBusPause_Action @ 0x1C0008F50
 * Callers:
 *     Usbh_BS_BusRun @ 0x1C0008E80 (Usbh_BS_BusRun.c)
 * Callees:
 *     UsbhCancelEnumeration @ 0x1C0009AFC (UsbhCancelEnumeration.c)
 *     UsbhSsh_CheckHubIdle @ 0x1C0009B84 (UsbhSsh_CheckHubIdle.c)
 *     UsbhDerefPdo @ 0x1C000EAA0 (UsbhDerefPdo.c)
 *     UsbhPostInterrupt @ 0x1C000FCA0 (UsbhPostInterrupt.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014BA0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhUnlatchPdo @ 0x1C001B520 (UsbhUnlatchPdo.c)
 *     UsbhRefPdo @ 0x1C001C4B0 (UsbhRefPdo.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C004044C (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbhBusPause_Action(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  __int64 v4; // rbx
  unsigned __int16 i; // si
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
  __int64 v17; // r14
  void *v18; // rdx
  __int64 v19; // rcx
  KIRQL v20; // bl
  void *v21; // rdx
  __int64 v22; // rcx
  unsigned __int8 *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r8d
  void *v27; // rdx
  __int64 v28; // rcx
  void *v29; // rdx
  __int64 v30; // rcx
  unsigned __int8 *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r10
  __int64 v34; // rcx
  _DWORD *v35; // rdx
  void *v36; // rdx
  __int64 v37; // rcx
  void *v38; // rdx
  __int64 v39; // rcx
  unsigned __int8 *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r14
  __int64 v43; // rcx
  __int64 v44; // rdi
  unsigned __int16 v45; // bx
  void *v46; // rdx
  __int64 v47; // rcx
  KIRQL v48; // r15
  void *v49; // rdx
  __int64 v50; // rcx
  unsigned __int8 *v51; // rdx
  __int64 v52; // r8
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v56; // rbx
  __int64 v57; // rdx
  KIRQL v58; // bl

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
LABEL_119:
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
          goto LABEL_119;
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
      if ( *(_DWORD *)(a2 + 128) == 6 )
        KeWaitForSingleObject((PVOID)(v10 + 520), Executive, 0, 0, 0LL);
      v17 = 0LL;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        v18 = DeviceObject->DeviceExtension;
        if ( v18 )
        {
          v19 = *((_QWORD *)v18 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v18 + 220) & *((_DWORD *)v18 + 221));
          *(_DWORD *)v19 = 1329877100;
          *(_QWORD *)(v19 + 16) = i;
          *(_QWORD *)(v19 + 8) = 0LL;
          *(_QWORD *)(v19 + 24) = 1348564304LL;
        }
      }
      v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v21 = DeviceObject->DeviceExtension;
        if ( v21 )
        {
          v22 = *((_QWORD *)v21 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v21 + 220) & *((_DWORD *)v21 + 221));
          *(_DWORD *)v22 = 1413771367;
          *(_QWORD *)(v22 + 16) = i;
          *(_QWORD *)(v22 + 8) = 0LL;
          *(_QWORD *)(v22 + 24) = 0LL;
        }
      }
      if ( i )
      {
        v23 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v23 )
          goto LABEL_119;
        if ( *(_DWORD *)v23 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v23);
        if ( i <= v23[2938] )
        {
          v24 = *((_QWORD *)v23 + 382);
          if ( v24 )
          {
            v25 = 2928LL * i + v24 - 2928;
            if ( (UsbhLogMask & 8) != 0 )
            {
              v24 = *((_QWORD *)v23 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v23 + 220) & *((_DWORD *)v23 + 221));
              *(_DWORD *)v24 = 1044672615;
              *(_QWORD *)(v24 + 8) = 0LL;
              *(_QWORD *)(v24 + 16) = i;
              *(_QWORD *)(v24 + 24) = v25;
            }
            if ( v25 )
            {
              v17 = *(_QWORD *)(v25 + 392);
              if ( v17 )
                v17 = UsbhRefPdo(v24, v17, 0LL, 1348564304LL);
            }
          }
        }
      }
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v20);
      if ( v17 )
      {
        v56 = PdoExt(v17);
        KeWaitForSingleObject((PVOID)(v56 + 2896), Executive, 0, 0, 0LL);
        *(_DWORD *)(v56 + 1420) |= 0x10000000u;
        KeSetEvent((PRKEVENT)(v56 + 2896), 0, 0);
        UsbhUnlatchPdo(DeviceObject, v17, 0LL, 1348564304LL);
      }
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v27 = DeviceObject->DeviceExtension;
        if ( v27 )
        {
          v28 = *((_QWORD *)v27 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v27 + 220) & *((_DWORD *)v27 + 221));
          *(_DWORD *)v28 = 829912937;
          *(_QWORD *)(v28 + 24) = i;
          *(_QWORD *)(v28 + 8) = 0LL;
          *(_QWORD *)(v28 + 16) = a2;
        }
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          79,
          (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
          i);
      if ( (UsbhLogMask & 8) != 0 )
      {
        v29 = DeviceObject->DeviceExtension;
        if ( v29 )
        {
          v30 = *((_QWORD *)v29 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v29 + 220) & *((_DWORD *)v29 + 221));
          *(_DWORD *)v30 = 1413771367;
          *(_QWORD *)(v30 + 16) = i;
          *(_QWORD *)(v30 + 8) = 0LL;
          *(_QWORD *)(v30 + 24) = 0LL;
        }
      }
      if ( i )
      {
        v31 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v31 )
          goto LABEL_119;
        if ( *(_DWORD *)v31 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v31);
        if ( i <= v31[2938] )
        {
          v32 = *((_QWORD *)v31 + 382);
          if ( v32 )
          {
            v26 = i;
            v33 = 2928LL * i + v32 - 2928;
            if ( (UsbhLogMask & 8) != 0 )
            {
              v34 = *((_QWORD *)v31 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v31 + 220) & *((_DWORD *)v31 + 221));
              *(_DWORD *)v34 = 1044672615;
              *(_QWORD *)(v34 + 8) = 0LL;
              *(_QWORD *)(v34 + 16) = i;
              *(_QWORD *)(v34 + 24) = v33;
            }
            if ( v33 )
              UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v33, 4, a2, 0x80000LL, 0, 0LL, 0LL);
          }
        }
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          80,
          (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
          i);
      v35 = DeviceObject->DeviceExtension;
      if ( !v35 )
        goto LABEL_119;
      if ( *v35 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v35);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v35,
          v26,
          66,
          (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
          i,
          a2);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v36 = DeviceObject->DeviceExtension;
        if ( v36 )
        {
          v37 = *((_QWORD *)v36 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v36 + 220) & *((_DWORD *)v36 + 221));
          *(_DWORD *)v37 = 842024272;
          *(_QWORD *)(v37 + 24) = i;
          *(_QWORD *)(v37 + 8) = 0LL;
          *(_QWORD *)(v37 + 16) = 0LL;
        }
      }
      if ( (UsbhLogMask & 8) != 0 )
      {
        v38 = DeviceObject->DeviceExtension;
        if ( v38 )
        {
          v39 = *((_QWORD *)v38 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v38 + 220) & *((_DWORD *)v38 + 221));
          *(_DWORD *)v39 = 1413771367;
          *(_QWORD *)(v39 + 16) = i;
          *(_QWORD *)(v39 + 8) = 0LL;
          *(_QWORD *)(v39 + 24) = 0LL;
        }
      }
      if ( i )
      {
        v40 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v40 )
          goto LABEL_119;
        if ( *(_DWORD *)v40 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v40);
        if ( i <= v40[2938] )
        {
          v41 = *((_QWORD *)v40 + 382);
          if ( v41 )
          {
            v42 = 2928LL * i + v41 - 2928;
            if ( (UsbhLogMask & 8) != 0 )
            {
              v43 = *((_QWORD *)v40 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v40 + 220) & *((_DWORD *)v40 + 221));
              *(_DWORD *)v43 = 1044672615;
              *(_QWORD *)(v43 + 8) = 0LL;
              *(_QWORD *)(v43 + 16) = i;
              *(_QWORD *)(v43 + 24) = v42;
            }
            if ( v42 )
            {
              UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v42, 2, a2, 0LL, 0, 0LL, 0LL);
              v44 = 0LL;
              v45 = *(_WORD *)(v42 + 4);
              if ( (UsbhLogMask & 0x100) != 0 )
              {
                v46 = DeviceObject->DeviceExtension;
                if ( v46 )
                {
                  v47 = *((_QWORD *)v46 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v46 + 220) & *((_DWORD *)v46 + 221));
                  *(_DWORD *)v47 = 1329877100;
                  *(_QWORD *)(v47 + 16) = v45;
                  *(_QWORD *)(v47 + 8) = 0LL;
                  *(_QWORD *)(v47 + 24) = 1884308559LL;
                }
              }
              v48 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
              WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
              if ( (UsbhLogMask & 8) != 0 )
              {
                v49 = DeviceObject->DeviceExtension;
                if ( v49 )
                {
                  v50 = *((_QWORD *)v49 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v49 + 220) & *((_DWORD *)v49 + 221));
                  *(_DWORD *)v50 = 1413771367;
                  *(_QWORD *)(v50 + 16) = v45;
                  *(_QWORD *)(v50 + 8) = 0LL;
                  *(_QWORD *)(v50 + 24) = 0LL;
                }
              }
              if ( v45 )
              {
                v51 = (unsigned __int8 *)DeviceObject->DeviceExtension;
                if ( !v51 )
                  goto LABEL_119;
                if ( *(_DWORD *)v51 != 541218120 )
                  UsbhTrapFatal_Dbg(DeviceObject, v51);
                if ( v45 <= v51[2938] )
                {
                  v52 = *((_QWORD *)v51 + 382);
                  if ( v52 )
                  {
                    v53 = 2928LL * v45;
                    v54 = v53 + v52 - 2928;
                    if ( (UsbhLogMask & 8) != 0 )
                    {
                      v53 = *((_QWORD *)v51 + 111)
                          + 32LL
                          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v51 + 220) & *((_DWORD *)v51 + 221));
                      *(_DWORD *)v53 = 1044672615;
                      *(_QWORD *)(v53 + 16) = v45;
                      *(_QWORD *)(v53 + 8) = 0LL;
                      *(_QWORD *)(v53 + 24) = v54;
                    }
                    if ( v54 )
                    {
                      v44 = *(_QWORD *)(v54 + 392);
                      if ( v44 )
                        v44 = UsbhRefPdo(v53, v44, 0LL, 1884308559LL);
                    }
                  }
                }
              }
              WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v48);
              if ( v44 )
              {
                v57 = *(unsigned int *)(v42 + 400);
                *(_QWORD *)(v42 + 376) = v42 + 24;
                *(_DWORD *)(v42 + 416) = 1;
                UsbhCancelEnumeration(DeviceObject, v57, v42, v44);
                *(_QWORD *)(v42 + 376) = 0LL;
                if ( *(_DWORD *)(v42 + 416) )
                {
                  Log((_DWORD)DeviceObject, 1024, 1970032689, v44, v42);
                  v58 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
                  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
                  *(_DWORD *)(v42 + 416) = 0;
                  Log((_DWORD)DeviceObject, 1024, 1970032690, v44, v42);
                  UsbhDerefPdo(DeviceObject, v44, 0LL, 1884308559LL);
                  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
                  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v58);
                }
                else
                {
                  *(_DWORD *)(v42 + 400) = 0;
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
