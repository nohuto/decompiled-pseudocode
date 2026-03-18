/*
 * XREFs of HUBFDO_SetupHubPostErrataQuery @ 0x1C000C68C
 * Callers:
 *     HUBHSM_SettingUpHubPostErrataQuery @ 0x1C0008070 (HUBHSM_SettingUpHubPostErrataQuery.c)
 * Callees:
 *     McTemplateK0pq @ 0x1C000175C (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002C5A0 (HUBMISC_VerifierDbgBreak.c)
 *     USBD_CreateHandle @ 0x1C0039D14 (USBD_CreateHandle.c)
 *     USBD_QueryUsbCapability @ 0x1C003A154 (USBD_QueryUsbCapability.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

__int64 __fastcall HUBFDO_SetupHubPostErrataQuery(char *Context)
{
  __int64 v1; // r14
  __int64 v3; // rax
  struct _DEVICE_OBJECT *v4; // rbx
  struct _DEVICE_OBJECT *v5; // rax
  ULONG v6; // r8d
  ULONG v7; // r9d
  NTSTATUS UsbCapability; // esi
  USBD_HANDLE v9; // rbx
  __int128 v10; // xmm0
  USBD_HANDLE v11; // rbx
  void (__fastcall *v12)(_QWORD); // rax
  int v13; // eax
  bool v14; // zf
  int v15; // eax
  int v16; // ebx
  struct _MCGEN_TRACE_CONTEXT *v17; // rcx
  int v18; // eax
  int v19; // ebx
  unsigned __int16 v20; // cx
  __int64 result; // rax
  struct _DEVICE_OBJECT *v22; // rax
  NTSTATUS v23; // eax
  ULONG *USBDHandle; // [rsp+20h] [rbp-99h]
  ULONG *USBDHandlea; // [rsp+20h] [rbp-99h]
  ULONG *USBDHandleb; // [rsp+20h] [rbp-99h]
  USBD_HANDLE *USBDHandlec; // [rsp+20h] [rbp-99h]
  __int64 v28; // [rsp+28h] [rbp-91h]
  USBD_HANDLE v29; // [rsp+30h] [rbp-89h] BYREF
  _QWORD v30[10]; // [rsp+40h] [rbp-79h] BYREF
  __int64 v31; // [rsp+90h] [rbp-29h] BYREF
  int v32; // [rsp+98h] [rbp-21h]
  int v33; // [rsp+9Ch] [rbp-1Dh]
  int v34; // [rsp+A0h] [rbp-19h]
  _DWORD v35[10]; // [rsp+A8h] [rbp-11h] BYREF
  UCHAR OutputBuffer[16]; // [rsp+D0h] [rbp+17h] BYREF

  v1 = *((_QWORD *)Context + 2);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v1);
  v4 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1424))(
                                  WdfDriverGlobals,
                                  v3);
  v5 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                  WdfDriverGlobals,
                                  v1);
  UsbCapability = USBD_CreateHandle(v5, v4, v6, v7, &v29);
  if ( UsbCapability < 0 )
    goto LABEL_14;
  v9 = v29;
  if ( USBD_QueryUsbCapability(v29, &GUID_USB_CAPABILITY_HIGH_BANDWIDTH_ISOCH, 4u, (PUCHAR)Context + 156, USBDHandle) < 0 )
    *((_DWORD *)Context + 39) = 0;
  if ( USBD_QueryUsbCapability(v9, &GUID_USB_CAPABILITY_MICROSOFT_MAUSBHOST, 0x10u, OutputBuffer, USBDHandlea) >= 0 )
  {
    v10 = *(_OWORD *)OutputBuffer;
    Context[201] = 1;
    *(_OWORD *)(Context + 764) = v10;
  }
  UsbCapability = USBD_QueryUsbCapability(v9, &GUID_USB_CAPABILITY_SELECTIVE_SUSPEND, 0, 0LL, USBDHandleb);
  *((_BYTE *)v9 + 225) = 1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 55, 0xFFFFFFFF) <= 1 )
  {
    if ( *((_BYTE *)v9 + 225) )
    {
      v11 = v29;
      v12 = (void (__fastcall *)(_QWORD))*((_QWORD *)v29 + 14);
      if ( v12 )
        v12(*((_QWORD *)v29 + 6));
      ExFreePoolWithTag(v11, *((_DWORD *)v11 + 16));
    }
    else if ( g_EnableDbgPrints )
    {
      DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete should be set here UsbdHandleInfo 0x%p\n", v29);
    }
  }
  if ( UsbCapability < 0 )
  {
LABEL_14:
    _InterlockedOr((volatile signed __int32 *)Context + 10, 0x80u);
    WPP_RECORDER_SF_d(
      *((_QWORD *)Context + 315),
      2u,
      3u,
      0x38u,
      (__int64)&WPP_0e53b71dd48e35ef915a1bb9371a4353_Traceguids,
      UsbCapability);
  }
  if ( (*((_DWORD *)Context + 10) & 0x80u) == 0 && (*((_DWORD *)Context + 11) & 1) == 0 && Context[260] )
  {
    memset(v35, 0, 0x24uLL);
    v35[0] = 36;
    *((_DWORD *)Context + 644) = 50;
    v35[3] = 50;
    v13 = 0;
    v14 = Context[240] == 0;
    v35[6] = 2;
    if ( v14 )
      v13 = 2;
    v35[8] = 2;
    v35[7] = v13;
    v35[1] = 2;
    v35[4] = 2;
    v35[5] = 2;
    v35[2] = 3;
    v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 368))(
            WdfDriverGlobals,
            v1,
            v35);
    v16 = v15;
    if ( v15 >= 0 )
    {
      _InterlockedOr((volatile signed __int32 *)Context + 10, 0x4000000u);
      v22 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                       WdfDriverGlobals,
                                       v1);
      v23 = PoRegisterPowerSettingCallback(
              v22,
              &GUID_POWER_HUB_SELECTIVE_SUSPEND_TIMEOUT,
              (PPOWER_SETTING_CALLBACK)HUBFDO_PowerSettingCallback,
              Context,
              (PVOID *)Context + 321);
      if ( v23 < 0 )
      {
        LODWORD(v28) = v23;
        WPP_RECORDER_SF_d(
          *((_QWORD *)Context + 315),
          2u,
          3u,
          0x3Bu,
          (__int64)&WPP_0e53b71dd48e35ef915a1bb9371a4353_Traceguids,
          v28);
        *((_QWORD *)Context + 321) = 0LL;
      }
      if ( !Context[240] )
      {
        memset(v30, 0, 0x48uLL);
        v30[1] = HUBFDO_EvtPostPoFxRegisterDevice;
        LODWORD(v30[0]) = 72;
        v30[2] = HUBFDO_EvtPrePoFxUnregisterDevice;
        v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 3400))(
                WdfDriverGlobals,
                v1,
                v30);
        v19 = v18;
        if ( v18 < 0 )
        {
          v20 = 60;
LABEL_29:
          LODWORD(v28) = v18;
          WPP_RECORDER_SF_d(
            *((_QWORD *)Context + 315),
            2u,
            3u,
            v20,
            (__int64)&WPP_0e53b71dd48e35ef915a1bb9371a4353_Traceguids,
            v28);
          result = 2045LL;
          if ( v19 < 0 )
            return result;
          return 2053LL;
        }
      }
    }
    else
    {
      LODWORD(v28) = v15;
      WPP_RECORDER_SF_d(
        *((_QWORD *)Context + 315),
        2u,
        3u,
        0x39u,
        (__int64)&WPP_0e53b71dd48e35ef915a1bb9371a4353_Traceguids,
        v28);
      if ( v16 == -1073741101 && *((_DWORD *)Context + 64) == 3 )
      {
        WPP_RECORDER_SF_(
          *((_QWORD *)Context + 315),
          3u,
          3u,
          0x3Au,
          (__int64)&WPP_0e53b71dd48e35ef915a1bb9371a4353_Traceguids);
        if ( (*((_DWORD *)Context + 648) & 8) != 0 )
          HUBMISC_VerifierDbgBreak("HubHwVerifierNoSelectiveSuspendSupport", Context + 1264);
        if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 8) != 0 )
        {
          LODWORD(USBDHandlec) = -1073741101;
          McTemplateK0pq(
            v17,
            &USBHUB3_ETW_EVENT_HUB_SELECTIVE_SUSPEND_NOT_SUPPORTED,
            (const GUID *)(Context + 2412),
            *((_QWORD *)Context + 31),
            USBDHandlec);
        }
      }
    }
  }
  v33 = 0;
  *((_DWORD *)Context + 650) = 5;
  v31 = 0x500000014LL;
  v34 = 257;
  v32 = 1;
  v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 376))(
          WdfDriverGlobals,
          v1,
          &v31);
  if ( v18 < 0 )
  {
    v19 = 0;
    v20 = 61;
    goto LABEL_29;
  }
  return 2053LL;
}
