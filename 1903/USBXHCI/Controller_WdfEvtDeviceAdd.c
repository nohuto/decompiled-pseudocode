/*
 * XREFs of Controller_WdfEvtDeviceAdd @ 0x1C0063470
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Controller_AddControllerToGlobalControllerList @ 0x1C000D5F0 (Controller_AddControllerToGlobalControllerList.c)
 *     Controller_QueryControllerCapabilitiesFromACPI @ 0x1C000FC60 (Controller_QueryControllerCapabilitiesFromACPI.c)
 *     Device_IsSecureDevice @ 0x1C0013F4C (Device_IsSecureDevice.c)
 *     Etw_ControllerCreate @ 0x1C003E34C (Etw_ControllerCreate.c)
 *     Command_Create @ 0x1C005E170 (Command_Create.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C005E938 (Controller_ConfigureS0IdleSettings.c)
 *     Controller_ConfigureSxWakeSettings @ 0x1C005EC30 (Controller_ConfigureSxWakeSettings.c)
 *     Controller_Create @ 0x1C005ECE8 (Controller_Create.c)
 *     Controller_CreateWdfDevice @ 0x1C005F94C (Controller_CreateWdfDevice.c)
 *     Controller_ExecuteDSM @ 0x1C00603A8 (Controller_ExecuteDSM.c)
 *     DeviceSlot_Create @ 0x1C00641E8 (DeviceSlot_Create.c)
 *     Interrupter_Create @ 0x1C0065A48 (Interrupter_Create.c)
 *     IoControl_Create @ 0x1C0067290 (IoControl_Create.c)
 *     Register_Create @ 0x1C0067418 (Register_Create.c)
 *     RootHub_Create @ 0x1C00687F4 (RootHub_Create.c)
 *     Wmi_Create @ 0x1C006A16C (Wmi_Create.c)
 *     IntelPptFilter_Create @ 0x1C006A374 (IntelPptFilter_Create.c)
 *     SecureChannel_Create @ 0x1C006B2C8 (SecureChannel_Create.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceAdd(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  int WdfDevice; // ebx
  unsigned __int16 v5; // r9
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  int v13[2]; // [rsp+30h] [rbp-19h] BYREF
  int v14[2]; // [rsp+38h] [rbp-11h] BYREF
  __int64 v15; // [rsp+40h] [rbp-9h] BYREF
  int v16; // [rsp+48h] [rbp-1h] BYREF
  _QWORD v17[6]; // [rsp+50h] [rbp+7h] BYREF

  memset(v17, 0, sizeof(v17));
  v17[0] = 48LL;
  v15 = 0LL;
  v3 = 0LL;
  LOBYTE(v17[4]) = 0;
  v17[2] = 0LL;
  LOBYTE(v17[3]) = 0;
  HIDWORD(v17[3]) = 16;
  v17[1] = 0xC800000400LL;
  imp_WppRecorderLogCreate(WPP_GLOBAL_Control, v17, v13);
  WdfDevice = ((__int64 (__fastcall *)(__int64, __int64))qword_1C0057708)(UcxDriverGlobals, a2);
  if ( WdfDevice >= 0 )
  {
    WdfDevice = Controller_CreateWdfDevice(a2, *(__int64 *)v13, v14, (unsigned int *)&v16);
    if ( WdfDevice < 0 )
      return (unsigned int)WdfDevice;
    v6 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           *(_QWORD *)v14,
           off_1C00563D8);
    if ( Device_IsSecureDevice(v6) )
    {
      WdfDevice = SecureChannel_Create(v7, v7 + 96);
      if ( WdfDevice < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_43;
        v5 = 11;
        goto LABEL_4;
      }
    }
    WdfDevice = Controller_Create(*(__int64 *)v14, *(__int64 *)v13, v16, &v15);
    if ( WdfDevice < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(*(__int64 *)v13, 2u, 4u, 0xCu, (__int64)&Context.Logger + 4, WdfDevice);
      v3 = v15;
      goto LABEL_43;
    }
    v3 = v15;
    *(_OWORD *)(v15 + 180) = *(_OWORD *)(v6 + 24);
    *(_OWORD *)(v3 + 196) = *(_OWORD *)(v6 + 40);
    *(_OWORD *)(v3 + 212) = *(_OWORD *)(v6 + 56);
    *(_OWORD *)(v3 + 228) = *(_OWORD *)(v6 + 72);
    *(_QWORD *)(v6 + 8) = v3;
    (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01023 + 1640))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      *(_QWORD *)(v3 + 8),
      Controller_WdfEvtDeviceAdd,
      331LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
    WdfDevice = IoControl_Create(*(_QWORD *)v14, v3, v3 + 80);
    if ( WdfDevice < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_43;
      v5 = 13;
      goto LABEL_4;
    }
    WdfDevice = Register_Create(v3, v3 + 88);
    if ( WdfDevice < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_43;
      v5 = 14;
      goto LABEL_4;
    }
    WdfDevice = Interrupter_Create(*(_QWORD *)v14, v3, v3 + 128);
    if ( WdfDevice < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_43;
      v5 = 15;
      goto LABEL_4;
    }
    WdfDevice = DeviceSlot_Create(v8, v3, v3 + 136);
    if ( WdfDevice < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_43;
      v5 = 16;
      goto LABEL_4;
    }
    WdfDevice = Command_Create(v9, v3, (__int64 *)(v3 + 144));
    if ( WdfDevice < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_43;
      v5 = 17;
      goto LABEL_4;
    }
    v10 = (_QWORD *)(v3 + 168);
    if ( (*(_QWORD *)(v3 + 336) & 0x800000LL) != 0 )
    {
      WdfDevice = IntelPptFilter_Create(*(_QWORD *)v14, v3, v3 + 168);
    }
    else
    {
      *v10 = 0LL;
      WdfDevice = 0;
    }
    if ( WdfDevice < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_43;
      v5 = 18;
      goto LABEL_4;
    }
    WdfDevice = RootHub_Create(v10, v3, v3 + 152);
    if ( WdfDevice < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_43;
      v5 = 19;
      goto LABEL_4;
    }
    WdfDevice = Wmi_Create(*(_QWORD *)v14, v3, v3 + 160);
    if ( WdfDevice >= 0 )
    {
      *(_QWORD *)v6 = g_UsbXhciTriageInfo;
      Controller_ConfigureS0IdleSettings((__int64 *)v3);
      Controller_ConfigureSxWakeSettings((__int64 *)v3);
      KeInitializeSpinLock((PKSPIN_LOCK)(v3 + 40));
      *(_QWORD *)(v3 + 56) = v3 + 48;
      *(_QWORD *)(v3 + 48) = v3 + 48;
      *(_DWORD *)(v3 + 64) = 0;
      *(_DWORD *)(v3 + 392) = 5;
      Controller_AddControllerToGlobalControllerList(v3);
      Etw_ControllerCreate(v11, v3);
      Controller_QueryControllerCapabilitiesFromACPI(v3);
      if ( (_mm_srli_si128(*(__m128i *)(v3 + 336), 8).m128i_u8[0] & 1) != 0 )
        Controller_ExecuteDSM((__int64 *)v3, &GUID_DSM_ENABLE_KBL_WORKAROUNDS, 1, 1, 0LL, 0);
      goto LABEL_43;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 20;
      goto LABEL_4;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = 10;
LABEL_4:
    WPP_RECORDER_SF_d(*(__int64 *)v13, 2u, 4u, v5, (__int64)&Context.Logger + 4, WdfDevice);
  }
LABEL_43:
  if ( WdfDevice < 0 && v3 )
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 1664))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      *(_QWORD *)(v3 + 8));
  return (unsigned int)WdfDevice;
}
