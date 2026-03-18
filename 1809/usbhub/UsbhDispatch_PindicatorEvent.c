/*
 * XREFs of UsbhDispatch_PindicatorEvent @ 0x1C0040B48
 * Callers:
 *     UsbhFinishStart @ 0x1C001CBF0 (UsbhFinishStart.c)
 *     UsbhDisablePortIndicators @ 0x1C0040A80 (UsbhDisablePortIndicators.c)
 *     UsbhDeviceOvercurrentPopup @ 0x1C0041460 (UsbhDeviceOvercurrentPopup.c)
 *     UsbhOvercurrentResetWorker @ 0x1C00415C0 (UsbhOvercurrentResetWorker.c)
 * Callees:
 *     Log @ 0x1C0012D10 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     Usbh_PIND_Disable_Action @ 0x1C0040F7C (Usbh_PIND_Disable_Action.c)
 *     Usbh_PIND_Enable_Action @ 0x1C0041048 (Usbh_PIND_Enable_Action.c)
 *     Usbh_PIND_SetAuto_Action @ 0x1C00410E0 (Usbh_PIND_SetAuto_Action.c)
 *     Usbh_PIND_SetBlink_Action @ 0x1C00411A8 (Usbh_PIND_SetBlink_Action.c)
 *     Usbh_PIND_Timeout_Action @ 0x1C0041290 (Usbh_PIND_Timeout_Action.c)
 */

void __fastcall UsbhDispatch_PindicatorEvent(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // rbx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx

  v5 = a3;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xBu,
      (__int64)&WPP_35133b6d46fa39b50c5464f64ebf0a08_Traceguids,
      a3);
  Log(a1, 0x8000, 1718371670, a4, v5);
  v8 = v5 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
            Usbh_PIND_Enable_Action(a1, a2, a4);
        }
        else
        {
          Usbh_PIND_SetBlink_Action(a1, a2, a4);
        }
      }
      else
      {
        Usbh_PIND_SetAuto_Action(a1, a2, a4);
      }
    }
    else
    {
      Usbh_PIND_Disable_Action(a1, a2, a4);
    }
  }
  else
  {
    Usbh_PIND_Timeout_Action(a1, a2, a4);
  }
}
