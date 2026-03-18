/*
 * XREFs of HUBPDO_EvtIoInternalDeviceControl @ 0x1C0013D40
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq @ 0x1C0001864 (McTemplateK0pq.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper @ 0x1C0019D1C (EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002ED04 (HUBMISC_VerifierDbgBreak.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

void __fastcall HUBPDO_EvtIoInternalDeviceControl(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdi
  struct _MCGEN_TRACE_CONTEXT *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // rdx
  struct _MCGEN_TRACE_CONTEXT *v16; // rcx
  __int64 v17; // rsi
  unsigned __int16 v18; // ax
  unsigned int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // [rsp+20h] [rbp-78h]
  _QWORD v24[5]; // [rsp+30h] [rbp-68h] BYREF
  GUID ActivityId; // [rsp+58h] [rbp-40h] BYREF

  memset(v24, 0, sizeof(v24));
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v7,
         off_1C0064040);
  *(_QWORD *)(*(_QWORD *)(v8 + 24) + 456LL) = a2;
  v9 = *(_QWORD *)(v8 + 24);
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_1C0064130)
                  + 4) & 0x1000) != 0 )
  {
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    if ( (!*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
       || (*(int (__fastcall **)(__int64, GUID *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v11, &ActivityId) < 0)
      && EtwActivityIdControl(3u, &ActivityId) >= 0 )
    {
      v10 = (struct _MCGEN_TRACE_CONTEXT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(
                                             WdfDriverGlobals,
                                             a2);
      if ( g_IoSetActivityIdIrp )
        g_IoSetActivityIdIrp(v10, &ActivityId);
    }
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    McTemplateK0pq(v10, &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_START, &ActivityId, *(_QWORD *)(v9 + 24), a5);
  if ( a5 != 2228227 )
  {
    if ( a5 == 2228231 || a5 == 2232243 )
    {
      v12 = *(_QWORD *)(v8 + 24);
      if ( (*(_DWORD *)(v12 + 2436) & 0x200) != 0 )
      {
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedResetPort", v12 + 504);
        v12 = *(_QWORD *)(v8 + 24);
      }
      v13 = 4023;
      v14 = 0LL;
      v15 = 2232243LL;
      *(_DWORD *)(*(_QWORD *)(v12 + 8) + 1424LL) = 10;
      goto LABEL_37;
    }
LABEL_25:
    v13 = 1000;
    goto LABEL_42;
  }
  LOWORD(v24[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v24);
  v17 = v24[1];
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    LODWORD(v23) = *(unsigned __int16 *)(v24[1] + 2LL);
    McTemplateK0pq(v16, &USBHUB3_ETW_EVENT_DEVICE_URB_START, &ActivityId, *(_QWORD *)(v9 + 24), v23);
  }
  v18 = *(_WORD *)(v17 + 2);
  if ( v18 )
  {
    if ( v18 == 1 )
      goto LABEL_38;
    v19 = 30;
    if ( v18 == 30 )
    {
      v22 = *(_QWORD *)(v8 + 24);
      if ( (*(_DWORD *)(v22 + 2436) & 0x100) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedResetPipe", v22 + 504);
      v13 = 4027;
    }
    else
    {
      v19 = 48;
      if ( v18 == 48 )
      {
        v21 = *(_QWORD *)(v8 + 24);
        if ( (*(_DWORD *)(v21 + 2436) & 0x100) != 0 )
          HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedResetPipe", v21 + 504);
        v13 = 4047;
      }
      else
      {
        v19 = 49;
        if ( v18 != 49 )
        {
          if ( v18 <= 0x34u )
            goto LABEL_25;
          if ( v18 <= 0x36u )
          {
            v13 = 4019;
            goto LABEL_42;
          }
          if ( v18 != 59 )
            goto LABEL_25;
LABEL_38:
          v13 = 4039;
          goto LABEL_42;
        }
        v20 = *(_QWORD *)(v8 + 24);
        if ( (*(_DWORD *)(v20 + 2436) & 0x100) != 0 )
          HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedResetPipe", v20 + 504);
        v13 = 4043;
      }
    }
    v14 = v19;
    v15 = 2228227LL;
LABEL_37:
    EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper(v9, v15, v14);
    goto LABEL_42;
  }
  *(_QWORD *)(v17 + 8) = *(_QWORD *)(v9 + 24);
  if ( *(_QWORD *)(v17 + 24) )
  {
    v13 = 4031;
  }
  else
  {
    v13 = 4035;
    *(_QWORD *)(v17 + 32) = 0LL;
  }
LABEL_42:
  HUBSM_AddEvent(*(_QWORD *)(v8 + 24) + 504LL, v13);
}
