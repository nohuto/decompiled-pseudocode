/*
 * XREFs of UsbhDispatch_PortChangeQueueEventEx @ 0x1C0015250
 * Callers:
 *     UsbhPCE_Suspend @ 0x1C00021C4 (UsbhPCE_Suspend.c)
 *     UsbhPCE_QueueDriverReset @ 0x1C0009078 (UsbhPCE_QueueDriverReset.c)
 *     UsbhBusPause_Action @ 0x1C00094A0 (UsbhBusPause_Action.c)
 *     UsbhBusReset_Action @ 0x1C000B3E0 (UsbhBusReset_Action.c)
 *     UsbhPCE_psSUSPEND @ 0x1C000C51C (UsbhPCE_psSUSPEND.c)
 *     UsbhPCE_wRun @ 0x1C000CAD8 (UsbhPCE_wRun.c)
 *     UsbhHubProcessIsr @ 0x1C0011C70 (UsbhHubProcessIsr.c)
 *     UsbhHubProcessChangeWorker @ 0x1C0013F60 (UsbhHubProcessChangeWorker.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C0014470 (UsbhHubRunPortChangeQueue.c)
 *     UsbhDispatch_PortChangeQueueNullEventEx @ 0x1C0014B10 (UsbhDispatch_PortChangeQueueNullEventEx.c)
 *     UsbhBusResume_Action @ 0x1C0014B40 (UsbhBusResume_Action.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C001A060 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhPCE_BusDisconnect @ 0x1C0045D44 (UsbhPCE_BusDisconnect.c)
 *     UsbhPCE_Check @ 0x1C0045E1C (UsbhPCE_Check.c)
 *     UsbhPCE_Close @ 0x1C0045EF0 (UsbhPCE_Close.c)
 *     UsbhPCE_Disable @ 0x1C0045FCC (UsbhPCE_Disable.c)
 *     UsbhPCE_Enable @ 0x1C004611C (UsbhPCE_Enable.c)
 *     UsbhPCE_HW_Stop @ 0x1C00461F4 (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_QueueChange @ 0x1C00462DC (UsbhPCE_QueueChange.c)
 *     UsbhPCE_QueueChangeObject @ 0x1C00463E8 (UsbhPCE_QueueChangeObject.c)
 *     UsbhPCE_Resume @ 0x1C0046500 (UsbhPCE_Resume.c)
 *     UsbhPCE_ResumeDone @ 0x1C00465D8 (UsbhPCE_ResumeDone.c)
 *     UsbhPCE_ResumeTimeout @ 0x1C00466B0 (UsbhPCE_ResumeTimeout.c)
 *     UsbhPCE_SD_Resume @ 0x1C0046788 (UsbhPCE_SD_Resume.c)
 *     UsbhPCE_SoftDisconnect @ 0x1C0046850 (UsbhPCE_SoftDisconnect.c)
 *     UsbhPCE_wChangeERROR @ 0x1C004695C (UsbhPCE_wChangeERROR.c)
 *     UsbhQueuePauseChange @ 0x1C0046A40 (UsbhQueuePauseChange.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0046B5C (UsbhQueueSoftConnectChange.c)
 * Callees:
 *     Usbh_PCE_BusReset_Action @ 0x1C00016C0 (Usbh_PCE_BusReset_Action.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C000A370 (Usbh_PCE_psPAUSED_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C000A9A0 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_psSUSPEND_Action @ 0x1C000AF4C (Usbh_PCE_psSUSPEND_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C000B77C (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000BA00 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C00137C0 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x1C0015460 (Usbh_PCE_wChange_Action.c)
 *     Usbh_PCE_wRun_Action @ 0x1C0015990 (Usbh_PCE_wRun_Action.c)
 *     Usbh_PCE_wDone_Action @ 0x1C0015EB0 (Usbh_PCE_wDone_Action.c)
 *     Usbh_PCE_Enable_Action @ 0x1C0018CB0 (Usbh_PCE_Enable_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0019250 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_HardwareWake_Action @ 0x1C001C610 (Usbh_PCE_HardwareWake_Action.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C0046FCC (Usbh_PCE_BusDisconnect_Action.c)
 *     Usbh_PCE_Check_Action @ 0x1C00471B4 (Usbh_PCE_Check_Action.c)
 *     Usbh_PCE_Close_Action @ 0x1C00472DC (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C00474FC (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_ResumeDone_Action @ 0x1C004776C (Usbh_PCE_ResumeDone_Action.c)
 *     Usbh_PCE_ResumeTimeout_Action @ 0x1C0047894 (Usbh_PCE_ResumeTimeout_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x1C0047A8C (Usbh_PCE_SD_Resume_Action.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1C0047BF0 (Usbh_PCE_SoftDisconnect_Action.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0047EB4 (Usbh_PCE_wChangeERROR_Action.c)
 */

int *__fastcall UsbhDispatch_PortChangeQueueEventEx(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int *a8)
{
  __int64 v9; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v16; // [rsp+20h] [rbp-18h]

  v9 = a3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      a3);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 1346662768;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = a4;
        *(_QWORD *)(v13 + 24) = v9;
      }
    }
  }
  switch ( (_DWORD)v9 )
  {
    case 0x10:
      return (int *)Usbh_PCE_wChange_Action(a1, a2, a4);
    case 5:
      Usbh_PCE_wRun_Action(a1, a2, a4);
      break;
    case 6:
      Usbh_PCE_wDone_Action(a1, a2, a4);
      break;
    case 3:
      Usbh_PCE_Resume_Action(a1, a2, a4);
      break;
    case 1:
      Usbh_PCE_Enable_Action(a1, a2);
      break;
    default:
      switch ( (int)v9 )
      {
        case 2:
          Usbh_PCE_Disable_Action(a1, a2);
          break;
        case 4:
          LODWORD(v16) = a6;
          Usbh_PCE_QueueChange_Action(a1, a2, a4, a5, v16, a7);
          break;
        case 8:
          Usbh_PCE_SoftDisconnect_Action(a1, a2, a4);
          break;
        case 9:
          Usbh_PCE_BusReset_Action(a1, a2);
          break;
        case 10:
          Usbh_PCE_Suspend_Action(a1, a2, a4, a8);
          break;
        case 11:
          Usbh_PCE_BusDisconnect_Action(a1, a2, a4);
          break;
        case 12:
          Usbh_PCE_HardwareWake_Action(a1, a2);
          break;
        case 13:
          Usbh_PCE_SD_Resume_Action(a1, a2, a4);
          break;
        case 14:
          Usbh_PCE_ResumeTimeout_Action(a1, a2);
          break;
        case 15:
          LODWORD(v16) = a6;
          Usbh_PCE_QueueDriverReset_Action(a1, a2, a4, a5, v16, a7);
          break;
        case 17:
          Usbh_PCE_HW_Stop_Action(a1, a2, a4);
          break;
        case 18:
          Usbh_PCE_psSUSPEND_Action(a1, a2, a4);
          break;
        case 19:
          Usbh_PCE_psPAUSED_Action(a1, a2, a4);
          break;
        case 20:
          return (int *)Usbh_PCE_Check_Action(a1, a2, a4, a8);
        case 21:
          Usbh_PCE_ResumeDone_Action(a1, a2, a4);
          break;
        case 22:
          Usbh_PCE_Close_Action(a1, a2, a4);
          break;
        case 23:
          Usbh_PCE_wChangeERROR_Action(a1, a2, a4, a5, v16, a7);
          break;
        default:
          return a8;
      }
      break;
  }
  return a8;
}
