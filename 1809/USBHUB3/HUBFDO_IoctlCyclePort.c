/*
 * XREFs of HUBFDO_IoctlCyclePort @ 0x1C006D870
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C006DEA0 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     McTemplateK0pq @ 0x1C000175C (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq @ 0x1C000A8F8 (McTemplateK0pqq.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C002CCD0 (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C006B6D0 (HUBFDO_IoctlValidateParameters.c)
 *     HUBMISC_VerifyCallerIsAdmin @ 0x1C0072858 (HUBMISC_VerifyCallerIsAdmin.c)
 *     HUBREG_UpdateUxdSettings @ 0x1C00761A8 (HUBREG_UpdateUxdSettings.c)
 */

__int64 __fastcall HUBFDO_IoctlCyclePort(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rax
  _QWORD *v8; // rbx
  int v9; // r12d
  bool v10; // si
  int v11; // eax
  int IsAdmin; // edi
  unsigned __int16 v13; // r9
  struct _MCGEN_TRACE_CONTEXT *v14; // rcx
  struct _MCGEN_TRACE_CONTEXT *v15; // rcx
  __int64 i; // r8
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  PWDF_DRIVER_GLOBALS v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v28; // [rsp+20h] [rbp-58h]
  __int64 v29; // [rsp+28h] [rbp-50h]
  char v30[8]; // [rsp+40h] [rbp-38h] BYREF
  _DWORD *v31; // [rsp+48h] [rbp-30h] BYREF
  _BYTE v32[16]; // [rsp+50h] [rbp-28h] BYREF

  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v7,
                   off_1C005F0E0);
  v31 = 0LL;
  v9 = 0;
  v10 = 0;
  v30[0] = 0;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, _DWORD **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v31,
          0LL);
  IsAdmin = v11;
  if ( v11 < 0 )
  {
    v13 = 49;
LABEL_3:
    LODWORD(v29) = v11;
    WPP_RECORDER_SF_d(v8[315], 2u, 3u, v13, (__int64)&WPP_0e53b71dd48e35ef915a1bb9371a4353_Traceguids, v29);
    goto LABEL_25;
  }
  IsAdmin = HUBFDO_IoctlValidateParameters((__int64)v8, 4uLL, a4, v31, 8uLL, a3);
  v31[1] = 0;
  if ( IsAdmin >= 0 )
  {
    v9 = *(unsigned __int16 *)v31;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
      v10 = (int)HUBMISC_GetActivityIdIrp() >= 0;
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
      {
        LODWORD(v28) = v9;
        McTemplateK0pq(
          v15,
          &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_HUB_CYCLE_PORT_START,
          (const GUID *)((unsigned __int64)v32 & -(__int64)v10),
          v8[31],
          v28);
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v8[2]);
    for ( i = 0LL; ; i = v18 )
    {
      v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
              WdfDriverGlobals,
              v8[2],
              i,
              1LL);
      v18 = v17;
      if ( !v17
        || v17 != v8[327]
        && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                 + 1616))(
                                   WdfDriverGlobals,
                                   v17,
                                   off_1C005F040)
                               + 48) == v9 )
      {
        break;
      }
    }
    v19 = WdfFunctions_01015;
    v20 = WdfDriverGlobals;
    if ( !v18 )
      goto LABEL_14;
    v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            v18,
            off_1C005F040);
    v22 = v21;
    v23 = *(_QWORD *)(v21 + 24);
    if ( !v23 )
    {
      v19 = WdfFunctions_01015;
      v20 = WdfDriverGlobals;
LABEL_14:
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(v19 + 1088))(v20, v8[2]);
      IsAdmin = -1073741810;
      v31[1] = -1073713152;
      goto LABEL_25;
    }
    HUBREG_UpdateUxdSettings(v8, *(_QWORD *)(v21 + 24), v30);
    v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v23);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      v24,
      "User Mode FDO Request",
      4704LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v8[2]);
    IsAdmin = HUBMISC_VerifyCallerIsAdmin(v8[315]);
    if ( IsAdmin >= 0 || v30[0] == 1 )
    {
      LOBYTE(v25) = 1;
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
              WdfDriverGlobals,
              v8[2],
              v25,
              0LL,
              4717,
              "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
      IsAdmin = v11;
      if ( v11 < 0 )
      {
        v13 = 50;
        goto LABEL_3;
      }
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v22 + 4), 1, 0) )
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v23 + 8) + 1240LL))(*(_QWORD *)(v23 + 8), 3011LL);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
        WdfDriverGlobals,
        v8[2],
        0LL,
        4739LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
    }
    v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v23);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v26,
      "User Mode FDO Request",
      4744LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
  }
LABEL_25:
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    LODWORD(v29) = IsAdmin;
    LODWORD(v28) = v9;
    McTemplateK0pqq(
      v14,
      &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_HUB_CYCLE_PORT_COMPLETE,
      (const GUID *)((unsigned __int64)v32 & -(__int64)v10),
      v8[31],
      v28,
      v29);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)IsAdmin,
           8LL);
}
