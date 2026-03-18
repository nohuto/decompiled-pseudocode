/*
 * XREFs of UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014BA0
 * Callers:
 *     UsbhPCE_Suspend @ 0x1C00020C8 (UsbhPCE_Suspend.c)
 *     UsbhPCE_QueueDriverReset @ 0x1C0008B58 (UsbhPCE_QueueDriverReset.c)
 *     UsbhBusPause_Action @ 0x1C0008F50 (UsbhBusPause_Action.c)
 *     UsbhBusReset_Action @ 0x1C000ADF0 (UsbhBusReset_Action.c)
 *     UsbhPCE_psSUSPEND @ 0x1C000BE94 (UsbhPCE_psSUSPEND.c)
 *     UsbhPCE_wRun @ 0x1C000BF34 (UsbhPCE_wRun.c)
 *     UsbhHubProcessIsr @ 0x1C0011670 (UsbhHubProcessIsr.c)
 *     UsbhHubProcessChangeWorker @ 0x1C00138A0 (UsbhHubProcessChangeWorker.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C0013DA0 (UsbhHubRunPortChangeQueue.c)
 *     UsbhDispatch_PortChangeQueueNullEventEx @ 0x1C0014420 (UsbhDispatch_PortChangeQueueNullEventEx.c)
 *     UsbhBusResume_Action @ 0x1C0014460 (UsbhBusResume_Action.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C0019870 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhPCE_BusDisconnect @ 0x1C004462C (UsbhPCE_BusDisconnect.c)
 *     UsbhPCE_Check @ 0x1C0044700 (UsbhPCE_Check.c)
 *     UsbhPCE_Close @ 0x1C00447C0 (UsbhPCE_Close.c)
 *     UsbhPCE_Disable @ 0x1C0044894 (UsbhPCE_Disable.c)
 *     UsbhPCE_Enable @ 0x1C00449DC (UsbhPCE_Enable.c)
 *     UsbhPCE_HW_Stop @ 0x1C0044AB0 (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_QueueChange @ 0x1C0044B90 (UsbhPCE_QueueChange.c)
 *     UsbhPCE_QueueChangeObject @ 0x1C0044C78 (UsbhPCE_QueueChangeObject.c)
 *     UsbhPCE_Resume @ 0x1C0044D6C (UsbhPCE_Resume.c)
 *     UsbhPCE_ResumeDone @ 0x1C0044E40 (UsbhPCE_ResumeDone.c)
 *     UsbhPCE_ResumeTimeout @ 0x1C0044F14 (UsbhPCE_ResumeTimeout.c)
 *     UsbhPCE_SD_Resume @ 0x1C0044FE8 (UsbhPCE_SD_Resume.c)
 *     UsbhPCE_SoftDisconnect @ 0x1C00450AC (UsbhPCE_SoftDisconnect.c)
 *     UsbhPCE_wChangeERROR @ 0x1C00451A8 (UsbhPCE_wChangeERROR.c)
 *     UsbhQueuePauseChange @ 0x1C004527C (UsbhQueuePauseChange.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0045370 (UsbhQueueSoftConnectChange.c)
 * Callees:
 *     Usbh_PCE_BusReset_Action @ 0x1C0001610 (Usbh_PCE_BusReset_Action.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C0009E00 (Usbh_PCE_psPAUSED_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C000A410 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_psSUSPEND_Action @ 0x1C000A9A0 (Usbh_PCE_psSUSPEND_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C000B18C (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000B3E8 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C0013140 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x1C0014DA0 (Usbh_PCE_wChange_Action.c)
 *     Usbh_PCE_wRun_Action @ 0x1C00152C0 (Usbh_PCE_wRun_Action.c)
 *     Usbh_PCE_wDone_Action @ 0x1C00157D0 (Usbh_PCE_wDone_Action.c)
 *     Usbh_PCE_Enable_Action @ 0x1C0018500 (Usbh_PCE_Enable_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0018A80 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_HardwareWake_Action @ 0x1C001BB20 (Usbh_PCE_HardwareWake_Action.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C00457A4 (Usbh_PCE_BusDisconnect_Action.c)
 *     Usbh_PCE_Check_Action @ 0x1C004598C (Usbh_PCE_Check_Action.c)
 *     Usbh_PCE_Close_Action @ 0x1C0045AA4 (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C0045CB4 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_ResumeDone_Action @ 0x1C0045F14 (Usbh_PCE_ResumeDone_Action.c)
 *     Usbh_PCE_ResumeTimeout_Action @ 0x1C004603C (Usbh_PCE_ResumeTimeout_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x1C0046234 (Usbh_PCE_SD_Resume_Action.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1C0046388 (Usbh_PCE_SoftDisconnect_Action.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C004663C (Usbh_PCE_wChangeERROR_Action.c)
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
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
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
