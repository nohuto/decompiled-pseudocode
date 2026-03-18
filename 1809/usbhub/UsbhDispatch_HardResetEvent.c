/*
 * XREFs of UsbhDispatch_HardResetEvent @ 0x1C001BF30
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C00031F0 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhResumeHardReset @ 0x1C000649C (UsbhResumeHardReset.c)
 *     UsbhQueryPortState @ 0x1C0017430 (UsbhQueryPortState.c)
 *     UsbhFinishStart @ 0x1C001CBF0 (UsbhFinishStart.c)
 *     UsbhOvercurrentResetWorker @ 0x1C00415C0 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueDriverOvercurrent @ 0x1C0041820 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x1C0041990 (UsbhQueueOvercurrentReset.c)
 *     UsbhDisableHardReset @ 0x1C004AE58 (UsbhDisableHardReset.c)
 *     UsbhHardResetWorker @ 0x1C004AEA0 (UsbhHardResetWorker.c)
 *     UsbhQueueHardReset @ 0x1C004B1F0 (UsbhQueueHardReset.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1C00501A0 (UsbhResetNotificationIrpCompletion.c)
 * Callees:
 *     Usbh_HRS_Paused @ 0x1C000C464 (Usbh_HRS_Paused.c)
 *     Usbh_HRS_WaitReady @ 0x1C000C5DC (Usbh_HRS_WaitReady.c)
 *     UsbhReleaseResetLock @ 0x1C000F610 (UsbhReleaseResetLock.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     Usbh_HRS_Disabled @ 0x1C002A68C (Usbh_HRS_Disabled.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     UsbhIncrementConcurrentResetCounter @ 0x1C004B1A4 (UsbhIncrementConcurrentResetCounter.c)
 *     Usbh_HRS_PausedWaitDone @ 0x1C004B4CC (Usbh_HRS_PausedWaitDone.c)
 *     Usbh_HRS_Queued @ 0x1C004B5B4 (Usbh_HRS_Queued.c)
 *     Usbh_HRS_ResetStop @ 0x1C004B858 (Usbh_HRS_ResetStop.c)
 *     Usbh_HRS_WaitDone @ 0x1C004B96C (Usbh_HRS_WaitDone.c)
 */

__int64 __fastcall UsbhDispatch_HardResetEvent(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdi
  KIRQL v7; // al
  __int64 v8; // rdx
  __int64 v9; // rbp
  KIRQL v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  char v17; // cl
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx

  v3 = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 )
    goto LABEL_45;
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      19,
      (__int64)&WPP_738362dee15c3420c39abe3a25a3b3ea_Traceguids,
      a3);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 2800));
  v9 = *(int *)(v6 + 2808);
  v10 = v7;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v11 = *(_QWORD *)(v8 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v11 = 829576018;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = v9;
      *(_QWORD *)(v11 + 24) = v3;
    }
  }
  if ( ((_DWORD)v3 == 3 || (_DWORD)v3 == 9) && (_DWORD)v9 == 3 )
  {
    if ( *(_BYTE *)(v6 + 5268) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 5260));
      UsbhIncrementConcurrentResetCounter(a1, v8, 0LL);
    }
    Log(a1, 16, 1381200434, 3LL, v3);
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 2800), v10);
    return (unsigned int)v9;
  }
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v13 = 863130450;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 16) = v9;
      *(_QWORD *)(v13 + 24) = v3;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 2800), v7);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v14 = *(_QWORD *)(a1 + 64);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
      *(_DWORD *)v15 = 724267890;
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 16) = a2;
      *(_QWORD *)(v15 + 24) = v3;
    }
  }
  v16 = *(_QWORD *)(a1 + 64);
  if ( !v16 )
LABEL_45:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v16 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  KeWaitForSingleObject((PVOID)(v16 + 2816), Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 64) = 2018792274;
  *(_DWORD *)(a2 + 72) = v3;
  *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
  v9 = *(int *)(v16 + 2808);
  *(_DWORD *)(a2 + 68) = v9;
  v17 = *(_DWORD *)(v16 + 920) + 1;
  *(_QWORD *)(v16 + 1320) = a2;
  v18 = v17 & 7;
  *(_DWORD *)(v16 + 920) = v18;
  v18 *= 32LL;
  *(_DWORD *)(v18 + v16 + 924) = v3;
  *(_DWORD *)(v18 + v16 + 928) = *(_DWORD *)(v16 + 2808);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v19 = *(_QWORD *)(a1 + 64);
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
      *(_DWORD *)v20 = 757953394;
      *(_QWORD *)(v20 + 8) = 0LL;
      *(_QWORD *)(v20 + 16) = a2;
      *(_QWORD *)(v20 + 24) = v9;
    }
  }
  switch ( (_DWORD)v9 )
  {
    case 1:
      return Usbh_HRS_Disabled(a2, (unsigned int)v3);
    case 2:
      return Usbh_HRS_WaitReady(a2, v3);
    case 3:
      return Usbh_HRS_Queued(a2, (unsigned int)v3);
    case 4:
      return Usbh_HRS_ResetStop(a2, (unsigned int)v3);
    case 5:
      return Usbh_HRS_WaitDone(a2, (unsigned int)v3);
    case 6:
      return Usbh_HRS_Paused(a2, v3);
  }
  if ( (_DWORD)v9 != 7 )
  {
    UsbhReleaseResetLock(a1, a2, v9);
    return (unsigned int)v9;
  }
  return Usbh_HRS_PausedWaitDone(a2, (unsigned int)v3);
}
