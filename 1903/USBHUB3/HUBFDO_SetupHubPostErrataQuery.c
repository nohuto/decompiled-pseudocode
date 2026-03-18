/*
 * XREFs of HUBFDO_SetupHubPostErrataQuery @ 0x1C000D44C
 * Callers:
 *     HUBHSM_SettingUpHubPostErrataQuery @ 0x1C0008820 (HUBHSM_SettingUpHubPostErrataQuery.c)
 * Callees:
 *     McTemplateK0pq @ 0x1C0001864 (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002ED04 (HUBMISC_VerifierDbgBreak.c)
 *     USBD_CreateHandle @ 0x1C003E780 (USBD_CreateHandle.c)
 *     USBD_QueryUsbCapability @ 0x1C003EBC0 (USBD_QueryUsbCapability.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBFDO_SetupHubPostErrataQuery(char *Context)
{
  __int64 v2; // r14
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
  bool v13; // zf
  int v14; // eax
  int v15; // eax
  struct _MCGEN_TRACE_CONTEXT *v16; // rcx
  int v17; // ebx
  struct _DEVICE_OBJECT *v18; // rax
  NTSTATUS v19; // eax
  int v20; // eax
  int v21; // ebx
  int v22; // eax
  __int64 result; // rax
  ULONG *USBDHandle; // [rsp+28h] [rbp-99h]
  ULONG *USBDHandlea; // [rsp+28h] [rbp-99h]
  ULONG *USBDHandleb; // [rsp+28h] [rbp-99h]
  __int64 v27; // [rsp+30h] [rbp-91h]
  USBD_HANDLE v28; // [rsp+38h] [rbp-89h] BYREF
  _QWORD v29[10]; // [rsp+48h] [rbp-79h] BYREF
  __int64 v30; // [rsp+98h] [rbp-29h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-21h]
  int v32; // [rsp+A8h] [rbp-19h]
  _DWORD v33[10]; // [rsp+B0h] [rbp-11h] BYREF
  UCHAR OutputBuffer[16]; // [rsp+D8h] [rbp+17h] BYREF

  memset(v33, 0, 0x24uLL);
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0;
  memset(v29, 0, 0x48uLL);
  v2 = *((_QWORD *)Context + 2);
  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v2);
  v4 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1424))(
                                  WdfDriverGlobals,
                                  v3);
  v5 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                  WdfDriverGlobals,
                                  v2);
  UsbCapability = USBD_CreateHandle(v5, v4, v6, v7, &v28);
  if ( UsbCapability < 0 )
    goto LABEL_14;
  v9 = v28;
  if ( USBD_QueryUsbCapability(v28, &GUID_USB_CAPABILITY_HIGH_BANDWIDTH_ISOCH, 4u, (PUCHAR)Context + 156, USBDHandle) < 0 )
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
      v11 = v28;
      v12 = (void (__fastcall *)(_QWORD))*((_QWORD *)v28 + 14);
      if ( v12 )
        v12(*((_QWORD *)v28 + 6));
      ExFreePoolWithTag(v11, *((_DWORD *)v11 + 16));
    }
    else if ( g_EnableDbgPrints )
    {
      DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete should be set here UsbdHandleInfo 0x%p\n", v28);
    }
  }
  if ( UsbCapability < 0 )
  {
LABEL_14:
    _InterlockedOr((volatile signed __int32 *)Context + 10, 0x80u);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *((_QWORD *)Context + 315),
        2u,
        3u,
        0x3Bu,
        (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids,
        UsbCapability);
  }
  if ( (*((_DWORD *)Context + 10) & 0x80u) == 0 && (*((_DWORD *)Context + 11) & 1) == 0 && Context[260] )
  {
    v13 = Context[240] == 0;
    v33[0] = 36;
    *((_DWORD *)Context + 644) = 50;
    v33[3] = 50;
    v14 = 0;
    if ( v13 )
      v14 = 2;
    v33[6] = 2;
    v33[7] = v14;
    v33[8] = 2;
    v33[1] = 2;
    v33[4] = 2;
    v33[5] = 2;
    v33[2] = 3;
    v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 368))(
            WdfDriverGlobals,
            v2,
            v33);
    v17 = v15;
    if ( v15 >= 0 )
    {
      _InterlockedOr((volatile signed __int32 *)Context + 10, 0x4000000u);
      v18 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                       WdfDriverGlobals,
                                       v2);
      v19 = PoRegisterPowerSettingCallback(
              v18,
              &GUID_POWER_HUB_SELECTIVE_SUSPEND_TIMEOUT,
              (PPOWER_SETTING_CALLBACK)HUBFDO_PowerSettingCallback,
              Context,
              (PVOID *)Context + 321);
      if ( v19 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v27) = v19;
          WPP_RECORDER_SF_d(
            *((_QWORD *)Context + 315),
            2u,
            3u,
            0x3Eu,
            (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids,
            v27);
        }
        *((_QWORD *)Context + 321) = 0LL;
      }
      if ( !Context[240] )
      {
        v29[1] = HUBFDO_EvtPostPoFxRegisterDevice;
        LODWORD(v29[0]) = 72;
        v29[2] = HUBFDO_EvtPrePoFxUnregisterDevice;
        v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 3400))(
                WdfDriverGlobals,
                v2,
                v29);
        v21 = v20;
        if ( v20 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v27) = v20;
            WPP_RECORDER_SF_d(
              *((_QWORD *)Context + 315),
              2u,
              3u,
              0x3Fu,
              (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids,
              v27);
          }
LABEL_44:
          result = 2045LL;
          if ( v21 < 0 )
            return result;
          return 2053LL;
        }
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v27) = v15;
        WPP_RECORDER_SF_d(
          *((_QWORD *)Context + 315),
          2u,
          3u,
          0x3Cu,
          (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids,
          v27);
      }
      if ( v17 == -1073741101 && *((_DWORD *)Context + 64) == 3 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *((_QWORD *)Context + 315),
            3u,
            3u,
            0x3Du,
            (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids);
        if ( (*((_DWORD *)Context + 648) & 8) != 0 )
          HUBMISC_VerifierDbgBreak("HubHwVerifierNoSelectiveSuspendSupport", Context + 1264);
        if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 8) != 0 )
        {
          LODWORD(USBDHandle) = -1073741101;
          McTemplateK0pq(
            v16,
            &USBHUB3_ETW_EVENT_HUB_SELECTIVE_SUSPEND_NOT_SUPPORTED,
            (const GUID *)(Context + 2412),
            *((_QWORD *)Context + 31),
            USBDHandle);
        }
      }
    }
  }
  v32 = 257;
  *((_DWORD *)Context + 650) = 5;
  v30 = 0x500000014LL;
  v31 = 1LL;
  v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 376))(
          WdfDriverGlobals,
          v2,
          &v30);
  if ( v22 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v27) = v22;
      WPP_RECORDER_SF_d(
        *((_QWORD *)Context + 315),
        2u,
        3u,
        0x40u,
        (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids,
        v27);
    }
    v21 = 0;
    goto LABEL_44;
  }
  return 2053LL;
}
