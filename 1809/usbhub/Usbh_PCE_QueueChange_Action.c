/*
 * XREFs of Usbh_PCE_QueueChange_Action @ 0x1C0013140
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014BA0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhFlushPortChangeQueue @ 0x1C000AA88 (UsbhFlushPortChangeQueue.c)
 *     UsbhLogSignalDriverResetEvent @ 0x1C000C098 (UsbhLogSignalDriverResetEvent.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C000C848 (UsbhSignalSyncDeviceResetPdo.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C0012D90 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0040248 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_dq @ 0x1C004044C (WPP_RECORDER_SF_dq.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x1C00441B8 (UsbhFreePortChangeQueueTimeoutObject.c)
 *     UsbhSetPcqEventStatus @ 0x1C0045628 (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C004572C (UsbhUnlockPcqWithTag.c)
 *     WPP_RECORDER_SF_dc @ 0x1C0046834 (WPP_RECORDER_SF_dc.c)
 */

void Usbh_PCE_QueueChange_Action(__int64 a1, __int64 a2, char a3, ...)
{
  _DWORD *v6; // rdx
  KIRQL v7; // al
  __int64 v8; // rdx
  unsigned __int16 v9; // r8
  KIRQL v10; // r15
  unsigned __int16 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  KSPIN_LOCK *v17; // r14
  unsigned __int16 v18; // r12
  int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  KIRQL v24; // r15
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rbp
  int v29; // r14d
  int v30; // eax
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // r8
  int v38; // ecx
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  KIRQL v43; // bp
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rdx
  int v47; // edx
  int v48; // r8d
  int v49; // r9d
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // r9
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // r11
  PDEVICE_OBJECT v56; // rcx
  __int16 v57; // r9
  int v58; // r9d
  __int64 v59; // r11
  __int16 v60; // r9
  __int64 v61; // rax
  __int64 v62; // r9
  int v63; // r10d
  void *v64; // r11
  __int64 v65; // r9
  __int16 v66; // r9
  __int64 v67; // rax
  __int64 v68; // r9
  __int64 v69; // rax
  int v70; // edx
  __int64 v71; // r9
  char v72; // r10
  int v73; // [rsp+20h] [rbp-68h]
  int v74; // [rsp+40h] [rbp-48h]
  KIRQL v75; // [rsp+90h] [rbp+8h]
  __int64 v76; // [rsp+A8h] [rbp+20h] BYREF
  va_list va; // [rsp+A8h] [rbp+20h]
  __int64 v78; // [rsp+B0h] [rbp+28h]
  __int64 v79; // [rsp+B8h] [rbp+30h]
  va_list va1; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v76 = va_arg(va1, _QWORD);
  v78 = va_arg(va1, _QWORD);
  v79 = va_arg(va1, _QWORD);
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_DWORD **)(a1 + 64);
  if ( !v6 )
    goto LABEL_89;
  if ( *v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v9 = *(_WORD *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v10 = v7;
  v11 = v9;
  v75 = v7;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v12 = *(_QWORD *)(v8 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v12 = 724267376;
      *(_QWORD *)(v12 + 24) = v9;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = 4LL;
      v11 = *(_WORD *)(a2 + 4);
    }
  }
  v13 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v14 = *(_QWORD *)(v8 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v14 = 724267376;
      *(_QWORD *)(v14 + 24) = v11;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 16) = v13;
    }
  }
  v15 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v15;
  v16 = a2 + 32 * (v15 + 43);
  *(_DWORD *)v16 = 4;
  *(_DWORD *)(v16 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v16 + 12) = v76;
  *(_DWORD *)(v16 + 8) = -1;
  *(_QWORD *)(v16 + 16) = 0LL;
  *(_QWORD *)(v16 + 24) = 0LL;
  v17 = (KSPIN_LOCK *)*(int *)(a2 + 12);
  v18 = *(_WORD *)(a2 + 4);
  v74 = *(_DWORD *)(a2 + 12);
  v19 = v18;
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v20 = *(_QWORD *)(v8 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v20 = 812659807;
      *(_QWORD *)(v20 + 24) = v18;
      *(_QWORD *)(v20 + 8) = 0LL;
      *(_QWORD *)(v20 + 16) = v17;
      v19 = *(unsigned __int16 *)(a2 + 4);
    }
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v21 = *(_QWORD *)(v8 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v21 = 812147537;
        *(_QWORD *)(v21 + 24) = (unsigned __int16)v19;
        *(_QWORD *)(v21 + 8) = 0LL;
        *(_QWORD *)(v21 + 16) = a2;
      }
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v8 = *(_QWORD *)(a1 + 64);
        if ( v8 )
        {
          v22 = *(_QWORD *)(v8 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
          *(_DWORD *)v22 = 812147537;
          *(_QWORD *)(v22 + 24) = (unsigned int)v76;
          *(_QWORD *)(v22 + 8) = 0LL;
          *(_QWORD *)(v22 + 16) = a2;
        }
      }
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      v19,
      19,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  if ( (v76 & 0x80000) != 0 )
  {
    v23 = *(_QWORD *)(a1 + 64);
    if ( v23 )
    {
      if ( *(_DWORD *)v23 != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      v17 = (KSPIN_LOCK *)(v23 + 4944);
      v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v23 + 4944));
      v25 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v26 = *(_QWORD *)(a1 + 64);
        if ( v26 )
        {
          v27 = *(_QWORD *)(v26 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
          *(_DWORD *)v27 = 1836086128;
          *(_QWORD *)(v27 + 8) = 0LL;
          *(_QWORD *)(v27 + 16) = 0LL;
          *(_QWORD *)(v27 + 24) = v25;
        }
      }
      if ( KeReadStateEvent((PRKEVENT)(a2 + 800)) )
      {
        KeResetEvent((PRKEVENT)(a2 + 800));
        *(_QWORD *)(a2 + 792) = a2;
      }
      KeReleaseSpinLock(v17, v24);
      v10 = v75;
      LODWORD(v17) = v74;
      goto LABEL_30;
    }
LABEL_89:
    UsbhTrapFatal_Dbg(a1, 0LL);
  }
LABEL_30:
  if ( (_DWORD)v17 == 2 )
  {
    v28 = v79;
    v29 = v78;
    v30 = UsbhInsertQueuePortChangeObject(a1, v18, (unsigned int *)va, v78, v79);
    v31 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v32 = *(_QWORD *)(a1 + 64);
      if ( v32 )
      {
        v33 = *(_QWORD *)(v32 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
        *(_DWORD *)v33 = 846214239;
        *(_QWORD *)(v33 + 8) = 0LL;
        *(_QWORD *)(v33 + 16) = v30;
        *(_QWORD *)(v33 + 24) = v31;
      }
    }
    if ( v30 >= 0 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          20,
          (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
          v18);
      if ( (UsbhLogMask & 8) != 0 )
      {
        v34 = *(_QWORD *)(a1 + 64);
        if ( v34 )
        {
          v35 = *(_QWORD *)(v34 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v34 + 880)) & *(_DWORD *)(v34 + 884));
          *(_DWORD *)v35 = 827353457;
          *(_QWORD *)(v35 + 24) = v18;
          *(_QWORD *)(v35 + 8) = 0LL;
          *(_QWORD *)(v35 + 16) = a2;
        }
      }
      v36 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 4;
      *(_DWORD *)(v36 + a2 + 1384) = 4;
      v37 = *(int *)(a2 + 12);
      v38 = *(_DWORD *)(a2 + 12);
      v39 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v40 = *(_QWORD *)(a1 + 64);
        if ( v40 )
        {
          v41 = *(_QWORD *)(v40 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v40 + 880)) & *(_DWORD *)(v40 + 884));
          *(_DWORD *)v41 = 757952880;
          *(_QWORD *)(v41 + 8) = 0LL;
          *(_QWORD *)(v41 + 16) = v37;
          *(_QWORD *)(v41 + 24) = v39;
          v38 = *(_DWORD *)(a2 + 12);
        }
      }
      v42 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v42 + a2 + 1384) = v38;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v10);
      v43 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 2448));
      if ( *(_DWORD *)(a2 + 2412) != 1 )
      {
        *(_DWORD *)(a2 + 2412) = 1;
        if ( (UsbhLogMask & 0x200) != 0 )
        {
          v44 = *(_QWORD *)(a2 + 16);
          if ( v44 )
          {
            v45 = *(_QWORD *)(v44 + 64);
            if ( v45 )
            {
              v46 = *(_QWORD *)(v45 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v45 + 880)) & *(_DWORD *)(v45 + 884));
              *(_DWORD *)v46 = 1464029265;
              *(_QWORD *)(v46 + 8) = 0LL;
              *(_QWORD *)(v46 + 16) = a2;
              *(_QWORD *)(v46 + 24) = 0LL;
            }
          }
        }
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 2440));
        IoQueueWorkItem(*(PIO_WORKITEM *)(a2 + 2456), UsbhHubProcessChangeWorker, DelayedWorkQueue, (PVOID)a2);
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 2448), v43);
      LOBYTE(v17) = v74;
      goto LABEL_50;
    }
    Log(a1, 8, 1902727218, a2, v18);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(
        WPP_GLOBAL_Control->DeviceExtension,
        v70,
        1,
        21,
        (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
        v18,
        v72);
    if ( v29 == 1 )
    {
      Log(a1, 512, 1902735480, v28, *(unsigned __int16 *)(a2 + 4));
      UsbhSignalSyncDeviceResetPdo(a1, v28, -1073741823);
      if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2) )
        UsbhSetPcqEventStatus(a1, a2, 3LL);
    }
    else if ( v29 == 2 )
    {
      LOBYTE(v71) = 1;
      UsbhFreePortChangeQueueTimeoutObject(a1, a2, v28, v71);
    }
    LOBYTE(v17) = v74;
  }
  else
  {
    switch ( (int)v17 )
    {
      case 1:
      case 18:
        Log(a1, 512, 1597272118, 0LL, *(unsigned __int16 *)(a2 + 4));
        v56 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) == v66 )
          goto LABEL_61;
        v58 = 25;
        goto LABEL_60;
      case 3:
      case 14:
        Log(a1, 512, 1597272116, 0LL, *(unsigned __int16 *)(a2 + 4));
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != v60 )
          WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 23, v59, v18);
        UsbhInsertQueuePortChangeObject(a1, v18, (unsigned int *)va, v78, v79);
        v61 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 14;
        *(_DWORD *)(v61 + a2 + 1384) = 14;
        break;
      case 4:
        Log(a1, 512, 1597272115, 0LL, *(unsigned __int16 *)(a2 + 4));
        v56 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) == v57 )
          goto LABEL_61;
        v58 = 22;
LABEL_60:
        WPP_RECORDER_SF_d(v56->DeviceExtension, 0, 1, v58, v55, v18);
LABEL_61:
        UsbhInsertQueuePortChangeObject(a1, v18, (unsigned int *)va, v78, v79);
        break;
      case 5:
      case 6:
      case 11:
      case 12:
      case 13:
      case 15:
      case 16:
      case 17:
      case 20:
        Log(a1, 512, 1597272117, (int)v78, *(unsigned __int16 *)(a2 + 4));
        if ( v63 == 1 )
        {
          Log(a1, 512, 1597272184, v79, *(unsigned __int16 *)(a2 + 4));
          UsbhSignalSyncDeviceResetPdo(a1, v65, -1073741823);
          if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2) )
            UsbhSetPcqEventStatus(a1, a2, 3LL);
        }
        else
        {
          if ( v63 != 2 )
            goto LABEL_72;
          LOBYTE(v62) = 1;
          UsbhFreePortChangeQueueTimeoutObject(a1, a2, v79, v62);
        }
        v64 = &WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids;
LABEL_72:
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 24, (__int64)v64, v18);
        break;
      case 7:
        Log(a1, 512, 1597272113, 0LL, *(unsigned __int16 *)(a2 + 4));
        v49 = v78;
        v50 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 7;
        *(_DWORD *)(v50 + a2 + 1384) = 7;
        UsbhInsertQueuePortChangeObject(a1, v18, (unsigned int *)va, v49, v79);
        UsbhFlushPortChangeQueue(a1, a2, v51, v52);
        Log(a1, 16, 1886465325, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
        v53 = *(_DWORD *)(a2 + 12);
        v54 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 448) = 0;
        *(_DWORD *)(v54 + a2 + 1384) = v53;
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v10);
        goto LABEL_50;
      case 8:
      case 10:
        Log(a1, 512, 1597272119, 0LL, *(unsigned __int16 *)(a2 + 4));
        UsbhInsertQueuePortChangeObject(a1, v18, (unsigned int *)va, v78, v79);
        v67 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 10;
        *(_DWORD *)(v67 + a2 + 1384) = 10;
        break;
      case 9:
        Log(a1, 512, 1597272120, 0LL, *(unsigned __int16 *)(a2 + 4));
        UsbhInsertQueuePortChangeObject(a1, v18, (unsigned int *)va, v78, v79);
        break;
      default:
        Log(a1, 512, 1597272152, 0LL, *(unsigned __int16 *)(a2 + 4));
        v69 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v69 + a2 + 1384) = 19;
        goto LABEL_88;
    }
  }
  v68 = 0LL;
LABEL_88:
  UsbhUnlockPcqWithTag(a1, a2, v10, v68);
LABEL_50:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dc(WPP_GLOBAL_Control->DeviceExtension, v47, v48, 26, v73, v18, (char)v17);
}
