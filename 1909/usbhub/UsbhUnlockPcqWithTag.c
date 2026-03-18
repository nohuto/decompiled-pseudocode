/*
 * XREFs of UsbhUnlockPcqWithTag @ 0x1C0046F54
 * Callers:
 *     Usbh_PCE_BusReset_Action @ 0x1C00016C0 (Usbh_PCE_BusReset_Action.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C000A370 (Usbh_PCE_psPAUSED_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C000A9A0 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C000B77C (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000BA00 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C00137C0 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x1C0015460 (Usbh_PCE_wChange_Action.c)
 *     Usbh_PCE_wRun_Action @ 0x1C0015990 (Usbh_PCE_wRun_Action.c)
 *     Usbh_PCE_wDone_Action @ 0x1C0015EB0 (Usbh_PCE_wDone_Action.c)
 *     Usbh_PCE_Enable_Action @ 0x1C0018CB0 (Usbh_PCE_Enable_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0019250 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_HardwareWake_Action @ 0x1C001C610 (Usbh_PCE_HardwareWake_Action.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C0046FCC (Usbh_PCE_BusDisconnect_Action.c)
 *     Usbh_PCE_Check_Action @ 0x1C00471B4 (Usbh_PCE_Check_Action.c)
 *     Usbh_PCE_Close_Action @ 0x1C00472DC (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C00474FC (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_ResumeDone_Action @ 0x1C004776C (Usbh_PCE_ResumeDone_Action.c)
 *     Usbh_PCE_ResumeTimeout_Action @ 0x1C0047894 (Usbh_PCE_ResumeTimeout_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x1C0047A8C (Usbh_PCE_SD_Resume_Action.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1C0047BF0 (Usbh_PCE_SoftDisconnect_Action.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0047EB4 (Usbh_PCE_wChangeERROR_Action.c)
 * Callees:
 *     Log @ 0x1C0013360 (Log.c)
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
