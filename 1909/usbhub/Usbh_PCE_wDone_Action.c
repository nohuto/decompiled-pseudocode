/*
 * XREFs of Usbh_PCE_wDone_Action @ 0x1C0015EB0
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0015250 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhFlushPortChangeQueue @ 0x1C000B044 (UsbhFlushPortChangeQueue.c)
 *     UsbhHubQueueProcessChangeWorker @ 0x1C000BCC8 (UsbhHubQueueProcessChangeWorker.c)
 *     UsbhLogSignalSuspendEvent @ 0x1C000CB78 (UsbhLogSignalSuspendEvent.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0041A74 (WPP_RECORDER_SF_dq.c)
 *     UsbhSetPcqEventStatus @ 0x1C0046E50 (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0046F54 (UsbhUnlockPcqWithTag.c)
 */

void __fastcall Usbh_PCE_wDone_Action(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  KIRQL v9; // al
  __int64 v10; // rdx
  unsigned __int16 v11; // r8
  KIRQL v12; // r14
  unsigned __int16 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  unsigned __int16 v22; // r8
  unsigned __int16 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // r8d
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rdx
  int v44; // r8d
  int v45; // r8d
  int v46; // r8d
  __int64 v47; // rax
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // [rsp+20h] [rbp-48h]

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6);
  v7 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v8 = *(_QWORD *)(v6 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
    *(_DWORD *)v8 = 812660319;
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_QWORD *)(v8 + 16) = a2;
    *(_QWORD *)(v8 + 24) = v7;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      36,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v11 = *(_WORD *)(a2 + 4);
  v12 = v9;
  *(_DWORD *)(a2 + 448) = 1;
  v13 = v11;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 64);
    if ( v10 )
    {
      v14 = *(_QWORD *)(v10 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
      *(_DWORD *)v14 = 724267376;
      *(_QWORD *)(v14 + 24) = v11;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 16) = 6LL;
      v13 = *(_WORD *)(a2 + 4);
    }
  }
  v15 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 64);
    if ( v10 )
    {
      v16 = *(_QWORD *)(v10 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
      *(_DWORD *)v16 = 724267376;
      *(_QWORD *)(v16 + 24) = v13;
      *(_QWORD *)(v16 + 8) = 0LL;
      *(_QWORD *)(v16 + 16) = v15;
    }
  }
  v17 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v17;
  v18 = a2 + 32 * (v17 + 43);
  *(_DWORD *)v18 = 6;
  *(_DWORD *)(v18 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v18 + 8) = -1;
  *(_QWORD *)(v18 + 12) = 0LL;
  *(_QWORD *)(v18 + 20) = 0LL;
  *(_DWORD *)(v18 + 28) = 0;
  v19 = *(int *)(a2 + 12);
  v20 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 64);
    if ( v10 )
    {
      v21 = *(_QWORD *)(v10 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
      *(_DWORD *)v21 = 829437535;
      *(_QWORD *)(v21 + 8) = 0LL;
      *(_QWORD *)(v21 + 16) = v19;
      *(_QWORD *)(v21 + 24) = v20;
    }
  }
  if ( (_DWORD)v19 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        3,
        38,
        (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
        *(_WORD *)(a2 + 4),
        a2);
    v30 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v31 = *(_QWORD *)(a1 + 64);
      if ( v31 )
      {
        v32 = *(_QWORD *)(v31 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884));
        *(_DWORD *)v32 = 879769183;
        *(_QWORD *)(v32 + 8) = 0LL;
        *(_QWORD *)(v32 + 16) = 0LL;
        *(_QWORD *)(v32 + 24) = v30;
      }
    }
    v33 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 2;
    *(_DWORD *)(v33 + a2 + 1384) = 2;
    *(_QWORD *)(a2 + 384) = 0LL;
    goto LABEL_34;
  }
  if ( (_DWORD)v19 == 12 )
  {
    v22 = *(_WORD *)(a2 + 4);
    v23 = v22;
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v24 = *(_QWORD *)(a1 + 64);
      if ( v24 )
      {
        v25 = *(_QWORD *)(v24 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
        *(_DWORD *)v25 = 862991967;
        *(_QWORD *)(v25 + 24) = v22;
        *(_QWORD *)(v25 + 8) = 0LL;
        *(_QWORD *)(v25 + 16) = 0LL;
        v23 = *(_WORD *)(a2 + 4);
      }
    }
    v26 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v27 = *(_QWORD *)(a1 + 64);
      if ( v27 )
      {
        v28 = *(_QWORD *)(v27 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
        *(_DWORD *)v28 = 1986359664;
        *(_QWORD *)(v28 + 24) = v23;
        *(_QWORD *)(v28 + 8) = 0LL;
        *(_QWORD *)(v28 + 16) = v26;
      }
    }
    *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 30;
    KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
    v29 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_QWORD *)(a2 + 384) = 0LL;
    *(_DWORD *)(a2 + 12) = 6;
    *(_DWORD *)(v29 + a2 + 1384) = 6;
LABEL_34:
    v34 = *(int *)(a2 + 12);
    v35 = *(unsigned __int16 *)(a2 + 4);
    v36 = *(_DWORD *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v37 = *(_QWORD *)(a1 + 64);
      if ( v37 )
      {
        v38 = *(_QWORD *)(v37 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v37 + 880)) & *(_DWORD *)(v37 + 884));
        *(_DWORD *)v38 = 757952880;
        *(_QWORD *)(v38 + 8) = 0LL;
        *(_QWORD *)(v38 + 16) = v34;
        *(_QWORD *)(v38 + 24) = v35;
        v36 = *(_DWORD *)(a2 + 12);
      }
    }
    v39 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v39 + a2 + 1384) = v36;
LABEL_38:
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v12);
    return;
  }
  v40 = v19 - 8;
  if ( !v40 )
  {
    Log(a1, 512, 1597403190, a2, *(unsigned __int16 *)(a2 + 4));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        40,
        (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
        *(_WORD *)(a2 + 4));
    Log(a1, 16, 1886479734, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 30;
    KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
    v41 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_QWORD *)(a2 + 384) = 0LL;
    *(_DWORD *)(a2 + 12) = 7;
    *(_DWORD *)(v41 + a2 + 1384) = 7;
    if ( (unsigned int)UsbhLogSignalSuspendEvent(a1, a2) )
    {
      Log(a1, 16, 1886479734, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
      *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 16) = 30;
    }
    Log(a1, 16, 1886465325, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    v42 = *(_DWORD *)(a2 + 12);
    v43 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v43 + a2 + 1384) = v42;
    goto LABEL_38;
  }
  v44 = v40 - 2;
  if ( v44 )
  {
    v45 = v44 - 3;
    if ( !v45 )
    {
      Log(a1, 512, 1597403186, a2, *(unsigned __int16 *)(a2 + 4));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          37,
          (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
          *(_WORD *)(a2 + 4));
      UsbhSetPcqEventStatus(a1, a2, 2LL);
      KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
      v53 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 6;
      *(_DWORD *)(v53 + a2 + 1384) = 6;
      goto LABEL_66;
    }
    v46 = v45 - 1;
    if ( v46 )
    {
      v56 = *(unsigned __int16 *)(a2 + 4);
      if ( v46 != 3 )
      {
        Log(a1, 512, 1597403224, a2, v56);
        v47 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v47 + a2 + 1384) = 19;
LABEL_67:
        UsbhUnlockPcqWithTag(a1, a2, v12, 0LL);
        return;
      }
      Log(a1, 512, 1597403186, a2, v56);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          42,
          (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
          *(_WORD *)(a2 + 4));
      UsbhSetPcqEventStatus(a1, a2, 2LL);
      KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
      v50 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 15;
      *(_DWORD *)(v50 + a2 + 1384) = 15;
LABEL_66:
      UsbhFlushPortChangeQueue(a1, a2, v48, v49);
      *(_QWORD *)(a2 + 384) = 0LL;
      goto LABEL_67;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        0,
        39,
        (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
        *(_WORD *)(a2 + 4),
        a2);
    Log(a1, 512, 1597403189, 0LL, *(unsigned __int16 *)(a2 + 4));
    v52 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 4;
    *(_DWORD *)(v52 + a2 + 1384) = 4;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        0,
        41,
        (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
        *(_WORD *)(a2 + 4),
        a2);
    Log(a1, 512, 1597403191, 0LL, *(unsigned __int16 *)(a2 + 4));
    v54 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 9;
    *(_DWORD *)(v54 + a2 + 1384) = 9;
  }
  *(_QWORD *)(a2 + 384) = 0LL;
  UsbhUnlockPcqWithTag(a1, a2, v12, v51);
  UsbhHubQueueProcessChangeWorker(v55, a2);
}
