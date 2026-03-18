/*
 * XREFs of Usbh_PCE_Suspend_Action @ 0x1C000B3E8
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014BA0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhPCE_Suspend @ 0x1C00020C8 (UsbhPCE_Suspend.c)
 *     UsbhFlushPortChangeQueue @ 0x1C000AA88 (UsbhFlushPortChangeQueue.c)
 *     UsbhHubQueueProcessChangeWorker @ 0x1C000B68C (UsbhHubQueueProcessChangeWorker.c)
 *     UsbhSetSuspendPending @ 0x1C000B738 (UsbhSetSuspendPending.c)
 *     UsbhLockPcqWithTag @ 0x1C000B800 (UsbhLockPcqWithTag.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C0012D90 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C0019870 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhRawWait @ 0x1C001A5A0 (UsbhRawWait.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0040248 (WPP_RECORDER_SF_dd.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C00444B8 (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhPCE_ResumeDone @ 0x1C0044E40 (UsbhPCE_ResumeDone.c)
 *     UsbhSetPcqEventStatus @ 0x1C0045628 (UsbhSetPcqEventStatus.c)
 *     UsbhSignalSuspendEvent @ 0x1C00456A0 (UsbhSignalSuspendEvent.c)
 *     UsbhUnlockPcqWithTag @ 0x1C004572C (UsbhUnlockPcqWithTag.c)
 *     UsbhiSignalSuspendEvent @ 0x1C00467F4 (UsbhiSignalSuspendEvent.c)
 */

__int64 __fastcall Usbh_PCE_Suspend_Action(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v5; // r15d
  int v9; // esi
  __int64 v10; // r8
  int v11; // edx
  __int64 v12; // rax
  int v13; // eax
  KIRQL v14; // dl
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 result; // rax
  unsigned int v18; // r9d
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // r8
  int v29; // edx
  __int64 v30; // rcx
  int v31; // edx
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r8
  int v37; // edx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // r8
  int v42; // [rsp+40h] [rbp-10h] BYREF
  __int64 v43; // [rsp+48h] [rbp-8h]
  KIRQL NewIrql; // [rsp+88h] [rbp+38h] BYREF

  v5 = 0;
  v43 = FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      *(_WORD *)(a2 + 4));
  UsbhWaitEventWithTimeoutEx(a1, a2 + 824, 660000LL, 825258049LL, 2, a2);
  v9 = UsbhLockPcqWithTag(a1, a2, 10, (unsigned int)&NewIrql, 0);
  if ( *(_BYTE *)(a2 + 2839) || *(_BYTE *)(a2 + 2840) )
  {
    *a4 = -1073741667;
    UsbhiSignalSuspendEvent(a1, a2);
    LOBYTE(v41) = NewIrql;
    return UsbhUnlockPcqWithTag(a1, a2, v41, 0LL);
  }
  *(_QWORD *)(a2 + 736) = KeGetCurrentThread();
  Log(a1, 512, 825258032, v9, *(unsigned __int16 *)(a2 + 4));
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 144));
  UsbhSetSuspendPending(a1, a2);
  if ( v9 > 10 )
  {
    if ( v9 == 11 )
      goto LABEL_22;
    if ( v9 <= 13 )
      goto LABEL_46;
    if ( v9 != 14 )
    {
      if ( v9 == 15 )
      {
        Log(a1, 512, 825258081, 15, *(unsigned __int16 *)(a2 + 4));
        *(_QWORD *)(a2 + 736) = 0LL;
        UsbhFlushPortChangeQueue(a1, a2, v25, v26);
        v27 = *(unsigned int *)(a2 + 2400);
        LOBYTE(v28) = NewIrql;
        *(_DWORD *)(a2 + 12) = 15;
        *(_DWORD *)(32 * v27 + a2 + 1384) = 15;
        UsbhUnlockPcqWithTag(a1, a2, v28, 0LL);
        goto LABEL_27;
      }
      if ( v9 > 17 )
      {
        if ( v9 == 18 )
        {
          Log(a1, 512, 825258039, 18, *(unsigned __int16 *)(a2 + 4));
          UsbhSetPcqEventStatus(a1, a2, 1LL);
          LOBYTE(v35) = NewIrql;
          UsbhUnlockPcqWithTag(a1, a2, v35, 0LL);
          UsbhWaitEventWithTimeoutEx(a1, a2 + 712, 660000LL, 825258039LL, 3, a2);
          v36 = *(unsigned __int16 *)(a2 + 4);
          *(_QWORD *)(a2 + 736) = 0LL;
          UsbhPCE_ResumeDone(a1, a2 + 24, v36);
          goto LABEL_13;
        }
        if ( v9 == 20 )
        {
          LOBYTE(v10) = NewIrql;
          UsbhUnlockPcqWithTag(a1, a2, v10, 0LL);
          UsbhSignalSuspendEvent(a1, a2);
          goto LABEL_13;
        }
        goto LABEL_42;
      }
LABEL_46:
      Log(a1, 512, 825258041, v9, *(unsigned __int16 *)(a2 + 4));
      v39 = *(unsigned int *)(a2 + 2400);
      *(_QWORD *)(a2 + 736) = 0LL;
      LOBYTE(v40) = NewIrql;
      *(_DWORD *)(a2 + 12) = v9;
      *(_DWORD *)(32 * v39 + a2 + 1384) = v9;
      UsbhUnlockPcqWithTag(a1, a2, v40, 0LL);
      UsbhWaitEventWithTimeoutEx(a1, a2 + 472, 660000LL, 825258041LL, 4, a2);
      result = UsbhPCE_Suspend(a1, a3, *(_WORD *)(a2 + 4));
      _InterlockedDecrement((volatile signed __int32 *)(a3 + 144));
      return result;
    }
LABEL_44:
    Log(a1, 512, 825258035, v9, *(unsigned __int16 *)(a2 + 4));
    v37 = *(unsigned __int16 *)(a2 + 4);
    v42 = 0x40000;
    *(_QWORD *)(a2 + 736) = 0LL;
    v5 = UsbhInsertQueuePortChangeObject(a1, v37, (unsigned int)&v42, 0, 0LL);
    if ( v5 >= 0 )
    {
      v38 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 10;
      *(_DWORD *)(v38 + a2 + 1384) = 10;
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  if ( v9 >= 8 )
  {
    Log(a1, 512, 825258040, v9, *(unsigned __int16 *)(a2 + 4));
    v32 = *(unsigned int *)(a2 + 2400);
    *(_QWORD *)(a2 + 736) = 0LL;
    LOBYTE(v33) = NewIrql;
    *(_DWORD *)(a2 + 12) = v9;
    *(_DWORD *)(32 * v32 + a2 + 1384) = v9;
    UsbhUnlockPcqWithTag(a1, a2, v33, 0LL);
    goto LABEL_13;
  }
  switch ( v9 )
  {
    case 1:
      UsbhiSignalSuspendEvent(a1, a2);
      Log(a1, 512, 825258038, 1, *(unsigned __int16 *)(a2 + 4));
      *(_QWORD *)(a2 + 736) = 0LL;
      goto LABEL_24;
    case 2:
      Log(a1, 512, 825258037, 2, *(unsigned __int16 *)(a2 + 4));
      v11 = *(unsigned __int16 *)(a2 + 4);
      v42 = 0x40000;
      *(_QWORD *)(a2 + 736) = 0LL;
      v5 = UsbhInsertQueuePortChangeObject(a1, v11, (unsigned int)&v42, 0, 0LL);
      if ( v5 >= 0 )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            17,
            (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
            *(_WORD *)(a2 + 4));
        Log(a1, 8, 1902727217, a2, *(unsigned __int16 *)(a2 + 4));
        v12 = *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 9;
        *(_DWORD *)(32 * v12 + a2 + 1384) = 9;
        Log(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
        v13 = *(_DWORD *)(a2 + 12);
        v14 = NewIrql;
        v15 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 448) = 0;
        *(_DWORD *)(v15 + a2 + 1384) = v13;
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v14);
        UsbhHubQueueProcessChangeWorker(v16, a2);
        goto LABEL_13;
      }
      Log(a1, 8, 1902727218, a2, *(unsigned __int16 *)(a2 + 4));
      UsbhiSignalSuspendEvent(a1, a2);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          v31,
          1,
          18,
          (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
          *(_WORD *)(a2 + 4),
          v5);
      goto LABEL_24;
    case 3:
      goto LABEL_44;
  }
  if ( v9 != 4 )
  {
    if ( v9 != 5 )
    {
      if ( v9 != 6 )
      {
        if ( v9 == 7 )
        {
LABEL_22:
          Log(a1, 512, 825258033, v9, *(unsigned __int16 *)(a2 + 4));
          *(_QWORD *)(a2 + 736) = 0LL;
          goto LABEL_23;
        }
LABEL_42:
        Log(a1, 512, 825258072, v9, *(unsigned __int16 *)(a2 + 4));
        v34 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_QWORD *)(a2 + 736) = 0LL;
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v34 + a2 + 1384) = 19;
        goto LABEL_24;
      }
      Log(a1, 512, 825258034, 6, *(unsigned __int16 *)(a2 + 4));
      *(_QWORD *)(a2 + 736) = 0LL;
      UsbhFlushPortChangeQueue(a1, a2, v20, v21);
      LOBYTE(v22) = NewIrql;
      v23 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 11;
      *(_DWORD *)(v23 + a2 + 1384) = 11;
      UsbhUnlockPcqWithTag(a1, a2, v22, 0LL);
      *(_DWORD *)(a2 + 400) = UsbhHubSyncSuspendPortEvent(a1, v24, a2);
LABEL_27:
      UsbhSignalSuspendEvent(a1, a2);
      goto LABEL_13;
    }
    goto LABEL_46;
  }
  Log(a1, 512, 825258036, 4, *(unsigned __int16 *)(a2 + 4));
  v29 = *(unsigned __int16 *)(a2 + 4);
  v42 = 0x40000;
  v5 = UsbhInsertQueuePortChangeObject(a1, v29, (unsigned int)&v42, 0, 0LL);
  if ( v5 >= 0 )
  {
    v30 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 9;
    *(_DWORD *)(v30 + a2 + 1384) = 9;
    goto LABEL_24;
  }
LABEL_23:
  UsbhiSignalSuspendEvent(a1, a2);
LABEL_24:
  LOBYTE(v19) = NewIrql;
  UsbhUnlockPcqWithTag(a1, a2, v19, 0LL);
LABEL_13:
  UsbhWaitEventWithTimeoutEx(a1, a2 + 744, 660000LL, 825258104LL, 5, a2);
  result = *(unsigned int *)(v43 + 2560);
  if ( (result & 1) != 0 && *(_BYTE *)(v43 + 5235) == 32 )
  {
    Log(a1, 8, 2002872692, 10, 0LL);
    result = UsbhRawWait(v18);
  }
  _InterlockedDecrement((volatile signed __int32 *)(a3 + 144));
  *a4 = v5;
  return result;
}
