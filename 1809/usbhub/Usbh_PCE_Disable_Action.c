/*
 * XREFs of Usbh_PCE_Disable_Action @ 0x1C000A410
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014BA0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhFlushPortChangeQueue @ 0x1C000AA88 (UsbhFlushPortChangeQueue.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C0019870 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C004044C (WPP_RECORDER_SF_dq.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C0045530 (UsbhRemoveQueuedSuspend.c)
 *     UsbhSetPcqEventStatus @ 0x1C0045628 (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C004572C (UsbhUnlockPcqWithTag.c)
 *     UsbhiSignalSuspendEvent @ 0x1C00467F4 (UsbhiSignalSuspendEvent.c)
 */

__int64 __fastcall Usbh_PCE_Disable_Action(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdx
  KIRQL v5; // al
  __int64 v6; // rdx
  unsigned __int16 v7; // r8
  __int64 v8; // r9
  KIRQL v9; // r15
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // ecx
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 result; // rax
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_DWORD **)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v4 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v4);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v7 = *(_WORD *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v8 = v7;
  v9 = v5;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 64);
    if ( v6 )
    {
      v10 = *(_QWORD *)(v6 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
      *(_DWORD *)v10 = 724267376;
      *(_QWORD *)(v10 + 24) = v7;
      *(_QWORD *)(v10 + 8) = 0LL;
      *(_QWORD *)(v10 + 16) = 2LL;
      v8 = *(unsigned __int16 *)(a2 + 4);
    }
  }
  v11 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 64);
    if ( v6 )
    {
      v12 = *(_QWORD *)(v6 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
      *(_DWORD *)v12 = 724267376;
      *(_QWORD *)(v12 + 24) = (unsigned __int16)v8;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = v11;
    }
  }
  v13 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v13;
  v14 = a2 + 32 * (v13 + 43);
  *(_DWORD *)v14 = 2;
  *(_DWORD *)(v14 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v14 + 8) = -1;
  *(_QWORD *)(v14 + 12) = 0LL;
  *(_QWORD *)(v14 + 20) = 0LL;
  *(_DWORD *)(v14 + 28) = 0;
  v15 = *(int *)(a2 + 12);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v11,
      11,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      *(_WORD *)(a2 + 4),
      a2);
  v16 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v17 = *(_QWORD *)(a1 + 64);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
      *(_DWORD *)v18 = 812659295;
      *(_QWORD *)(v18 + 8) = 0LL;
      *(_QWORD *)(v18 + 16) = v15;
      *(_QWORD *)(v18 + 24) = v16;
    }
  }
  if ( (_DWORD)v15 == 4 )
  {
    v19 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v20 = *(_QWORD *)(a1 + 64);
      if ( v20 )
      {
        v21 = *(_QWORD *)(v20 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
        *(_DWORD *)v21 = 862990943;
        *(_QWORD *)(v21 + 8) = 0LL;
        *(_QWORD *)(v21 + 16) = 4LL;
        *(_QWORD *)(v21 + 24) = v19;
      }
    }
    v22 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 5;
    *(_DWORD *)(v22 + a2 + 1384) = 5;
    v23 = *(unsigned __int16 *)(a2 + 4);
    v24 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v25 = *(_QWORD *)(a1 + 64);
      if ( v25 )
      {
        v26 = *(_QWORD *)(v25 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
        *(_DWORD *)v26 = 1986359664;
        *(_QWORD *)(v26 + 8) = 0LL;
        *(_QWORD *)(v26 + 16) = v24;
        *(_QWORD *)(v26 + 24) = v23;
      }
    }
    *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 20;
    v27 = *(int *)(a2 + 12);
    v28 = *(_DWORD *)(a2 + 12);
    v29 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v30 = *(_QWORD *)(a1 + 64);
      if ( v30 )
      {
        v31 = *(_QWORD *)(v30 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v30 + 880)) & *(_DWORD *)(v30 + 884));
        *(_DWORD *)v31 = 757952880;
        *(_QWORD *)(v31 + 8) = 0LL;
        *(_QWORD *)(v31 + 16) = v27;
        *(_QWORD *)(v31 + 24) = v29;
        v28 = *(_DWORD *)(a2 + 12);
      }
    }
    v32 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v32 + a2 + 1384) = v28;
LABEL_26:
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v9);
  }
  else
  {
    switch ( (int)v15 )
    {
      case 1:
      case 2:
      case 18:
        Log(a1, 512, 1597141042, v15, *(unsigned __int16 *)(a2 + 4));
        v43 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 6;
        *(_DWORD *)(v43 + a2 + 1384) = 6;
        UsbhSetPcqEventStatus(a1, a2, 2LL);
        UsbhFlushPortChangeQueue(a1, a2);
        goto LABEL_43;
      case 3:
      case 12:
        Log(a1, 512, 1597141044, v15, *(unsigned __int16 *)(a2 + 4));
        UsbhSetPcqEventStatus(a1, a2, 2LL);
        v45 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 12;
        *(_DWORD *)(v45 + a2 + 1384) = 12;
        break;
      case 5:
      case 16:
      case 17:
        Log(a1, 512, 1597141048, v15, *(unsigned __int16 *)(a2 + 4));
        UsbhSetPcqEventStatus(a1, a2, 2LL);
        v49 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = v15;
        *(_DWORD *)(v49 + a2 + 1384) = v15;
        break;
      case 6:
      case 11:
      case 15:
        Log(a1, 512, 1597141045, v15, *(unsigned __int16 *)(a2 + 4));
        UsbhFlushPortChangeQueue(a1, a2);
        UsbhSetPcqEventStatus(a1, a2, 2LL);
LABEL_43:
        KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
        break;
      case 7:
        Log(a1, 512, 1597141041, v15, *(unsigned __int16 *)(a2 + 4));
        Log(a1, 16, 1886479734, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
        *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 30;
        v40 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 11;
        *(_DWORD *)(v40 + a2 + 1384) = 11;
        UsbhFlushPortChangeQueue(a1, a2);
        KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
        Log(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
        v41 = *(_DWORD *)(a2 + 12);
        v42 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 448) = 0;
        *(_DWORD *)(v42 + a2 + 1384) = v41;
        goto LABEL_26;
      case 8:
        UsbhRemoveQueuedSuspend(a1, a2, v16, v8);
        UsbhiSignalSuspendEvent(a1, a2);
        Log(a1, 512, 1597141047, v15, *(unsigned __int16 *)(a2 + 4));
        UsbhSetPcqEventStatus(a1, a2, 2LL);
        v47 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 12;
        *(_DWORD *)(v47 + a2 + 1384) = 12;
        break;
      case 9:
        UsbhRemoveQueuedSuspend(a1, a2, v16, v8);
        Log(a1, 512, 1597141046, v15, *(unsigned __int16 *)(a2 + 4));
        UsbhSetPcqEventStatus(a1, a2, 2LL);
        v46 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 5;
        *(_DWORD *)(v46 + a2 + 1384) = 5;
        break;
      case 10:
        UsbhRemoveQueuedSuspend(a1, a2, v16, v8);
        UsbhiSignalSuspendEvent(a1, a2);
        Log(a1, 512, 1597141047, v15, *(unsigned __int16 *)(a2 + 4));
        UsbhSetPcqEventStatus(a1, a2, 2LL);
        v48 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 13;
        *(_DWORD *)(v48 + a2 + 1384) = 13;
        break;
      case 13:
      case 14:
        Log(a1, 512, 1597141049, v15, *(unsigned __int16 *)(a2 + 4));
        UsbhSetPcqEventStatus(a1, a2, 2LL);
        v50 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 13;
        *(_DWORD *)(v50 + a2 + 1384) = 13;
        break;
      default:
        v44 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v44 + a2 + 1384) = 19;
        UsbhSetPcqEventStatus(a1, a2, 2LL);
        break;
    }
    UsbhUnlockPcqWithTag(a1, a2, v9, 0LL);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      *(_WORD *)(a2 + 4));
  v33 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v34 = *(_QWORD *)(a1 + 64);
    if ( v34 )
    {
      v35 = *(_QWORD *)(v34 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v34 + 880)) & *(_DWORD *)(v34 + 884));
      *(_DWORD *)v35 = 1129346859;
      *(_QWORD *)(v35 + 8) = 0LL;
      *(_QWORD *)(v35 + 16) = 0LL;
      *(_QWORD *)(v35 + 24) = v33;
    }
  }
  result = UsbhWaitEventWithTimeoutEx(a1, a2 + 472, 660000LL, 729239619LL, 6, a2);
  v37 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v38 = *(_QWORD *)(a1 + 64);
    if ( v38 )
    {
      result = 1129346861LL;
      v39 = *(_QWORD *)(v38 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
      *(_DWORD *)v39 = 1129346861;
      *(_QWORD *)(v39 + 8) = 0LL;
      *(_QWORD *)(v39 + 16) = 0LL;
      *(_QWORD *)(v39 + 24) = v37;
    }
  }
  return result;
}
