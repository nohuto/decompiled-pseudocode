/*
 * XREFs of UsbhBusResume_Action @ 0x1C0014B40
 * Callers:
 *     UsbhReleaseBusStateLock @ 0x1C001BAC0 (UsbhReleaseBusStateLock.c)
 * Callees:
 *     UsbhPostInterrupt @ 0x1C0010330 (UsbhPostInterrupt.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0015250 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhDecHubBusy @ 0x1C001AEC0 (UsbhDecHubBusy.c)
 *     UsbhUnlatchPdo @ 0x1C001BFF0 (UsbhUnlatchPdo.c)
 *     UsbhRefPdo @ 0x1C001CFB0 (UsbhRefPdo.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhBusResume_Action(PDEVICE_OBJECT DeviceObject, int a2)
{
  struct _KEVENT *DeviceExtension; // rbx
  unsigned __int16 i; // bp
  unsigned __int8 *v6; // rdx
  void *v7; // rdx
  __int64 v8; // rcx
  void *v9; // rdx
  __int64 v10; // rcx
  unsigned __int8 *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // rcx
  _DWORD *v15; // rdx
  void *v16; // rdx
  __int64 v17; // rcx
  void *v18; // rdx
  __int64 v19; // rcx
  unsigned __int8 *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r10
  __int64 v23; // rcx
  __int64 v24; // r15
  void *v25; // rdx
  __int64 v26; // rcx
  KIRQL v27; // bl
  void *v28; // rdx
  __int64 v29; // rcx
  unsigned __int8 *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  volatile __int64 *v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rdx
  _DWORD *v37; // rbx

  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = (struct _KEVENT *)DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    goto LABEL_76;
  if ( DeviceExtension->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceExtension);
  Log((__int64)DeviceObject, 2048, 1919251262, 0LL, 0LL);
  LODWORD(DeviceExtension[110].Header.WaitListHead.Blink) = 0;
  KeResetEvent(DeviceExtension + 112);
  DeviceExtension[113].Header.LockNV = 0;
  for ( i = 1; ; ++i )
  {
    v6 = (unsigned __int8 *)DeviceObject->DeviceExtension;
    if ( !v6 )
      goto LABEL_76;
    if ( *(_DWORD *)v6 != 541218120 )
      UsbhTrapFatal_Dbg(DeviceObject, v6);
    if ( i > v6[2938] )
      break;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        59,
        (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
        i);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v7 = DeviceObject->DeviceExtension;
      if ( v7 )
      {
        v8 = *((_QWORD *)v7 + 111)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v7 + 220) & *((_DWORD *)v7 + 221));
        *(_DWORD *)v8 = 858801488;
        *(_QWORD *)(v8 + 24) = i;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = 0LL;
      }
    }
    if ( (UsbhLogMask & 8) != 0 )
    {
      v9 = DeviceObject->DeviceExtension;
      if ( v9 )
      {
        v10 = *((_QWORD *)v9 + 111)
            + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v9 + 220) & *((_DWORD *)v9 + 221));
        *(_DWORD *)v10 = 1413771367;
        *(_QWORD *)(v10 + 16) = i;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 24) = 0LL;
      }
    }
    if ( i )
    {
      v11 = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !v11 )
        goto LABEL_76;
      if ( *(_DWORD *)v11 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v11);
      if ( i <= v11[2938] )
      {
        v12 = *((_QWORD *)v11 + 382);
        if ( v12 )
        {
          v13 = 2928LL * i + v12 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v14 = *((_QWORD *)v11 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v11 + 220) & *((_DWORD *)v11 + 221));
            *(_DWORD *)v14 = 1044672615;
            *(_QWORD *)(v14 + 8) = 0LL;
            *(_QWORD *)(v14 + 16) = i;
            *(_QWORD *)(v14 + 24) = v13;
          }
          if ( v13 )
            UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v13, 3, a2, 0LL, 0, 0LL, 0LL);
        }
      }
    }
    v15 = DeviceObject->DeviceExtension;
    if ( !v15 )
      goto LABEL_76;
    if ( *v15 != 541218120 )
      UsbhTrapFatal_Dbg(DeviceObject, v15);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        56,
        (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
        i);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v16 = DeviceObject->DeviceExtension;
      if ( v16 )
      {
        v17 = *((_QWORD *)v16 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v16 + 220) & *((_DWORD *)v16 + 221));
        *(_DWORD *)v17 = 825247056;
        *(_QWORD *)(v17 + 24) = i;
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_QWORD *)(v17 + 16) = 0LL;
      }
    }
    if ( (UsbhLogMask & 8) != 0 )
    {
      v18 = DeviceObject->DeviceExtension;
      if ( v18 )
      {
        v19 = *((_QWORD *)v18 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v18 + 220) & *((_DWORD *)v18 + 221));
        *(_DWORD *)v19 = 1413771367;
        *(_QWORD *)(v19 + 16) = i;
        *(_QWORD *)(v19 + 8) = 0LL;
        *(_QWORD *)(v19 + 24) = 0LL;
      }
    }
    if ( i )
    {
      v20 = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !v20 )
        goto LABEL_76;
      if ( *(_DWORD *)v20 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v20);
      if ( i <= v20[2938] )
      {
        v21 = *((_QWORD *)v20 + 382);
        if ( v21 )
        {
          v22 = 2928LL * i + v21 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v23 = *((_QWORD *)v20 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v20 + 220) & *((_DWORD *)v20 + 221));
            *(_DWORD *)v23 = 1044672615;
            *(_QWORD *)(v23 + 8) = 0LL;
            *(_QWORD *)(v23 + 16) = i;
            *(_QWORD *)(v23 + 24) = v22;
          }
          if ( v22 )
            UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v22, 1, a2, 0LL, 0, 0LL, 0LL);
        }
      }
    }
    v24 = 0LL;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v25 = DeviceObject->DeviceExtension;
      if ( v25 )
      {
        v26 = *((_QWORD *)v25 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v25 + 220) & *((_DWORD *)v25 + 221));
        *(_DWORD *)v26 = 1329877100;
        *(_QWORD *)(v26 + 16) = i;
        *(_QWORD *)(v26 + 8) = 0LL;
        *(_QWORD *)(v26 + 24) = 1382380368LL;
      }
    }
    v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v28 = DeviceObject->DeviceExtension;
      if ( v28 )
      {
        v29 = *((_QWORD *)v28 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v28 + 220) & *((_DWORD *)v28 + 221));
        *(_DWORD *)v29 = 1413771367;
        *(_QWORD *)(v29 + 16) = i;
        *(_QWORD *)(v29 + 8) = 0LL;
        *(_QWORD *)(v29 + 24) = 0LL;
      }
    }
    if ( i )
    {
      v30 = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !v30 )
        goto LABEL_76;
      if ( *(_DWORD *)v30 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v30);
      if ( i <= v30[2938] )
      {
        v31 = *((_QWORD *)v30 + 382);
        if ( v31 )
        {
          v32 = 2928LL * i + v31 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v31 = *((_QWORD *)v30 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v30 + 220) & *((_DWORD *)v30 + 221));
            *(_DWORD *)v31 = 1044672615;
            *(_QWORD *)(v31 + 8) = 0LL;
            *(_QWORD *)(v31 + 16) = i;
            *(_QWORD *)(v31 + 24) = v32;
          }
          if ( v32 )
          {
            v24 = *(_QWORD *)(v32 + 392);
            if ( v24 )
              v24 = UsbhRefPdo(v31, v24, 0LL, 1382380368LL);
          }
        }
      }
    }
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v27);
    if ( v24 )
    {
      v37 = PdoExt(v24);
      KeWaitForSingleObject(v37 + 724, Executive, 0, 0, 0LL);
      v37[355] &= ~0x10000000u;
      KeSetEvent((PRKEVENT)(v37 + 724), 0, 0);
      UsbhUnlatchPdo(DeviceObject, v24, 0LL, 1382380368LL);
    }
  }
  UsbhPostInterrupt(DeviceObject);
  v33 = (volatile __int64 *)DeviceObject->DeviceExtension;
  if ( !v33 )
LABEL_76:
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( *(_DWORD *)v33 != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  v34 = _InterlockedExchange64(v33 + 411, 0LL);
  Log((__int64)DeviceObject, 2048, 1114863917, 0LL, v34);
  return UsbhDecHubBusy(DeviceObject, v35, v34);
}
