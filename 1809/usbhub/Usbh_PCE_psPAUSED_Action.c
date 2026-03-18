/*
 * XREFs of Usbh_PCE_psPAUSED_Action @ 0x1C0009E00
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014BA0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhFlushPortChangeQueue @ 0x1C000AA88 (UsbhFlushPortChangeQueue.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C000AB44 (UsbhFreePortChangeQueueObject.c)
 *     UsbhSignalPauseEvent @ 0x1C000AC88 (UsbhSignalPauseEvent.c)
 *     UsbhSignalDriverResetEvent @ 0x1C000BFCC (UsbhSignalDriverResetEvent.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C000C848 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000E368 (UsbhReleaseEnumBusLockEx.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     UsbhCancelResetTimeout @ 0x1C0010D90 (UsbhCancelResetTimeout.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhRefPdo @ 0x1C001C4B0 (UsbhRefPdo.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C004044C (WPP_RECORDER_SF_dq.c)
 *     UsbhUnlockPcqWithTag @ 0x1C004572C (UsbhUnlockPcqWithTag.c)
 *     UsbhBusUnlatchPdo @ 0x1C0054B38 (UsbhBusUnlatchPdo.c)
 */

void __fastcall Usbh_PCE_psPAUSED_Action(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r15
  unsigned __int16 v6; // dx
  __int16 v7; // cx
  __int64 v8; // rcx
  KIRQL v9; // al
  unsigned __int16 v10; // r8
  KIRQL v11; // r13
  unsigned __int16 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // esi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  KSPIN_LOCK *v24; // rsi
  KIRQL v25; // r14
  __int64 v26; // r9
  _DWORD *v27; // rdx
  _QWORD **v28; // rsi
  _QWORD *v29; // r8
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int16 v36; // si
  __int64 v37; // r14
  __int64 v38; // rdx
  __int64 v39; // rcx
  KIRQL v40; // r12
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // esi
  int v50; // esi
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  KSPIN_LOCK *v55; // r15
  KIRQL v56; // si
  int v57; // r9d

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5 )
    goto LABEL_74;
  if ( *(_DWORD *)v5 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v6 = *(_WORD *)(a2 + 4);
  LOBYTE(v7) = v6;
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v8 = *(_QWORD *)(v5 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
    *(_DWORD *)v8 = 812661041;
    *(_QWORD *)(v8 + 24) = v6;
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_QWORD *)(v8 + 16) = a2;
    v7 = *(_WORD *)(a2 + 4);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)WPP_GLOBAL_Control,
      a3,
      45,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      v7,
      a3);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v10 = *(_WORD *)(a2 + 4);
  v11 = v9;
  *(_DWORD *)(a2 + 448) = 1;
  v12 = v10;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 64);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
      *(_DWORD *)v14 = 724267376;
      *(_QWORD *)(v14 + 24) = v10;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 16) = 19LL;
      v12 = *(_WORD *)(a2 + 4);
    }
  }
  v15 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v16 = *(_QWORD *)(a1 + 64);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
      *(_DWORD *)v17 = 724267376;
      *(_QWORD *)(v17 + 24) = v12;
      *(_QWORD *)(v17 + 8) = 0LL;
      *(_QWORD *)(v17 + 16) = v15;
    }
  }
  v18 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v18;
  v19 = a2 + 32 * (v18 + 43);
  *(_DWORD *)v19 = 19;
  *(_DWORD *)(v19 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v19 + 8) = -1;
  *(_QWORD *)(v19 + 12) = 0LL;
  *(_QWORD *)(v19 + 20) = 0LL;
  *(_DWORD *)(v19 + 28) = 0;
  v20 = *(_DWORD *)(a2 + 12);
  if ( v20 != 12 && (v20 < 5 || v20 > 6 && v20 != 16) )
  {
    UsbhFlushPortChangeQueue(a1, a2);
    v49 = v20 - 10;
    if ( v49 )
    {
      v50 = v49 - 3;
      if ( v50 )
      {
        if ( v50 == 1 )
        {
          v51 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 3;
          *(_DWORD *)(v51 + a2 + 1384) = 3;
        }
      }
      else
      {
        v52 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 12;
        *(_DWORD *)(v52 + a2 + 1384) = 12;
      }
    }
    else
    {
      v53 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 8;
      *(_DWORD *)(v53 + a2 + 1384) = 8;
    }
    UsbhSignalPauseEvent(a1, a2);
    UsbhUnlockPcqWithTag(a1, a2, v11, 0LL);
    return;
  }
  *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1384) = v20;
  v21 = *(_QWORD *)(a1 + 64);
  if ( !v21 )
    goto LABEL_74;
  if ( *(_DWORD *)v21 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v21);
  v22 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v23 = *(_QWORD *)(v21 + 888)
        + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
    *(_DWORD *)v23 = 1397778803;
    *(_QWORD *)(v23 + 8) = 0LL;
    *(_QWORD *)(v23 + 16) = 0LL;
    *(_QWORD *)(v23 + 24) = v22;
  }
  v24 = (KSPIN_LOCK *)(v21 + 4944);
  v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v21 + 4944));
  if ( *(_QWORD *)(a2 + 792) )
  {
    *(_QWORD *)(a2 + 792) = 0LL;
    KeSetEvent((PRKEVENT)(a2 + 800), 0, 0);
  }
  KeReleaseSpinLock(v24, v25);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      55,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      *(_WORD *)(a2 + 4));
  v27 = *(_DWORD **)(a1 + 64);
  if ( !v27 )
    goto LABEL_74;
  if ( *v27 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v27);
  v28 = (_QWORD **)(a2 + 456);
  while ( 1 )
  {
    v29 = *v28;
    if ( *v28 == v28 )
      break;
    if ( (_QWORD **)v29[1] != v28 || (v54 = (_QWORD *)*v29, *(_QWORD **)(*v29 + 8LL) != v29) )
      __fastfail(3u);
    *v28 = v54;
    LOBYTE(v26) = 1;
    v54[1] = v28;
    UsbhFreePortChangeQueueObject(a1, a2, v29 - 2, v26);
  }
  v30 = *(int *)(a2 + 12);
  v31 = *(unsigned __int16 *)(a2 + 4);
  v32 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 2876) = 0;
  *(_BYTE *)(a2 + 2839) = 0;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v33 = *(_QWORD *)(a1 + 64);
    if ( v33 )
    {
      v34 = *(_QWORD *)(v33 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
      *(_DWORD *)v34 = 757952880;
      *(_QWORD *)(v34 + 8) = 0LL;
      *(_QWORD *)(v34 + 16) = v30;
      *(_QWORD *)(v34 + 24) = v31;
      v32 = *(_DWORD *)(a2 + 12);
    }
  }
  v35 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 448) = 0;
  *(_DWORD *)(v35 + a2 + 1384) = v32;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v11);
  v36 = *(_WORD *)(a2 + 4);
  v37 = 0LL;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v38 = *(_QWORD *)(a1 + 64);
    if ( v38 )
    {
      v39 = *(_QWORD *)(v38 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
      *(_DWORD *)v39 = 1329877100;
      *(_QWORD *)(v39 + 16) = v36;
      *(_QWORD *)(v39 + 8) = 0LL;
      *(_QWORD *)(v39 + 24) = 1884308559LL;
    }
  }
  v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v41 = *(_QWORD *)(a1 + 64);
    if ( v41 )
    {
      v42 = *(_QWORD *)(v41 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v41 + 880)) & *(_DWORD *)(v41 + 884));
      *(_DWORD *)v42 = 1413771367;
      *(_QWORD *)(v42 + 16) = v36;
      *(_QWORD *)(v42 + 8) = 0LL;
      *(_QWORD *)(v42 + 24) = 0LL;
    }
  }
  if ( !v36 )
    goto LABEL_46;
  v43 = *(_QWORD *)(a1 + 64);
  if ( !v43 )
LABEL_74:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v43 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v43);
  if ( v36 <= *(unsigned __int8 *)(v43 + 2938) )
  {
    v44 = *(_QWORD *)(v43 + 3056);
    if ( v44 )
    {
      v45 = 2928LL * v36;
      v46 = v45 + v44 - 2928;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v45 = *(_QWORD *)(v43 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v43 + 880)) & *(_DWORD *)(v43 + 884));
        *(_DWORD *)v45 = 1044672615;
        *(_QWORD *)(v45 + 16) = v36;
        *(_QWORD *)(v45 + 8) = 0LL;
        *(_QWORD *)(v45 + 24) = v46;
      }
      if ( v46 )
      {
        v37 = *(_QWORD *)(v46 + 392);
        if ( v37 )
          v37 = UsbhRefPdo(v45, v37, 0LL, 1884308559LL);
      }
    }
  }
LABEL_46:
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v40);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v47 = *(_QWORD *)(a1 + 64);
    if ( v47 )
    {
      v48 = *(_QWORD *)(v47 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v47 + 880)) & *(_DWORD *)(v47 + 884));
      *(_DWORD *)v48 = 1634744625;
      *(_QWORD *)(v48 + 8) = 0LL;
      *(_QWORD *)(v48 + 16) = a2;
      *(_QWORD *)(v48 + 24) = v37;
    }
  }
  if ( v37 )
  {
    v55 = (KSPIN_LOCK *)(v5 + 5168);
    *(_DWORD *)(a2 + 416) = 1;
    v56 = KeAcquireSpinLockRaiseToDpc(v55);
    if ( *(_QWORD *)(PdoExt(v37) + 864) )
    {
      Log(a1, 4, 825847906, v37, 0LL);
      KeReleaseSpinLock(v55, v56);
      UsbhCancelResetTimeout(a1, a2, 1LL);
      UsbhReleaseEnumBusLockEx(a1, a3, *(unsigned __int16 *)(a2 + 4));
      UsbhSignalSyncDeviceResetPdo(a1, v37, 3221225473LL);
      UsbhSignalDriverResetEvent(a1, a2);
    }
    else
    {
      KeReleaseSpinLock(v55, v56);
    }
    UsbhBusUnlatchPdo(a1, v37, a2, v57, 0LL);
  }
}
