/*
 * XREFs of UsbhUnlockPcqWithTag @ 0x1C004572C
 * Callers:
 *     Usbh_PCE_BusReset_Action @ 0x1C0001610 (Usbh_PCE_BusReset_Action.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C0009E00 (Usbh_PCE_psPAUSED_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C000A410 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C000B18C (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000B3E8 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C0013140 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x1C0014DA0 (Usbh_PCE_wChange_Action.c)
 *     Usbh_PCE_wRun_Action @ 0x1C00152C0 (Usbh_PCE_wRun_Action.c)
 *     Usbh_PCE_wDone_Action @ 0x1C00157D0 (Usbh_PCE_wDone_Action.c)
 *     Usbh_PCE_Enable_Action @ 0x1C0018500 (Usbh_PCE_Enable_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0018A80 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_HardwareWake_Action @ 0x1C001BB20 (Usbh_PCE_HardwareWake_Action.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C00457A4 (Usbh_PCE_BusDisconnect_Action.c)
 *     Usbh_PCE_Check_Action @ 0x1C004598C (Usbh_PCE_Check_Action.c)
 *     Usbh_PCE_Close_Action @ 0x1C0045AA4 (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C0045CB4 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_ResumeDone_Action @ 0x1C0045F14 (Usbh_PCE_ResumeDone_Action.c)
 *     Usbh_PCE_ResumeTimeout_Action @ 0x1C004603C (Usbh_PCE_ResumeTimeout_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x1C0046234 (Usbh_PCE_SD_Resume_Action.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1C0046388 (Usbh_PCE_SoftDisconnect_Action.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C004663C (Usbh_PCE_wChangeERROR_Action.c)
 * Callees:
 *     Log @ 0x1C0012D10 (Log.c)
 */

void __fastcall UsbhUnlockPcqWithTag(__int64 a1, __int64 a2, KIRQL a3)
{
  __int64 v4; // r10
  int v5; // r11d
  __int64 v6; // rcx
  __int64 v7; // rcx

  Log(a1, 16, 1886465325, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
  v6 = *(unsigned int *)(v4 + 2400);
  *(_DWORD *)(v4 + 448) = 0;
  v7 = 32 * (v6 + 43);
  *(_DWORD *)(v7 + v4 + 8) = *(_DWORD *)(v4 + 12);
  if ( v5 )
    *(_DWORD *)(v7 + v4 + 12) = v5;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 440), a3);
}
