/*
 * XREFs of HUBFDO_EvtDeviceD0Entry @ 0x1C000AD70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 *     McTemplateK0pqq @ 0x1C000A8F8 (McTemplateK0pqq.c)
 *     McTemplateK0pqqh @ 0x1C000A970 (McTemplateK0pqqh.c)
 *     HUBMISC_WaitForSignal @ 0x1C002C420 (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceD0Entry(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  PVOID *v4; // rbx
  struct _DEVICE_OBJECT *v5; // rax
  NTSTATUS v6; // eax
  NTSTATUS v7; // ebx
  char v8; // r14
  int v9; // eax
  struct _MCGEN_TRACE_CONTEXT *v10; // rcx
  int v11; // ebp
  struct _MCGEN_TRACE_CONTEXT *v12; // rcx
  void *v13; // rbx
  int v14; // edx
  PVOID *Handle; // [rsp+20h] [rbp-38h]
  __int64 v17; // [rsp+28h] [rbp-30h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005F0E0);
  v3 = v2;
  *(_DWORD *)(v2 + 2600) = 1;
  _InterlockedOr((volatile signed __int32 *)(v2 + 40), 0x20000u);
  v4 = (PVOID *)(v2 + 2560);
  if ( !*(_QWORD *)(v2 + 2560) && (*(_DWORD *)(v2 + 40) & 0x4000000) != 0 )
  {
    v5 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                    WdfDriverGlobals,
                                    a1);
    v6 = PoRegisterPowerSettingCallback(
           v5,
           &GUID_USB_SETTING_SELECTIVE_SUSPEND,
           HUBFDO_PowerSettingCallback,
           (PVOID)v3,
           v4);
    if ( v6 < 0 )
    {
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 2520),
        2u,
        3u,
        0x19u,
        (__int64)&WPP_0e53b71dd48e35ef915a1bb9371a4353_Traceguids,
        v6);
      *v4 = 0LL;
    }
  }
  v7 = 0;
  v8 = 0;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v7 = EtwActivityIdControl(3u, (LPGUID)(v3 + 2276));
    if ( v7 >= 0 )
    {
      if ( g_IoSetActivityIdIrp )
        g_IoSetActivityIdIrp(*(_QWORD *)(v3 + 816), v3 + 2276);
      v8 = 1;
    }
  }
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  v11 = v9;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v12 = (struct _MCGEN_TRACE_CONTEXT *)(*(_DWORD *)(v3 + 40) >> 10);
    LOWORD(v12) = (*(_DWORD *)(v3 + 40) & 0x400) != 0;
    LODWORD(v17) = v9;
    LODWORD(Handle) = 1;
    McTemplateK0pqqh(
      v12,
      &USBHUB3_ETW_EVENT_HUB_D0_ENTRY_START,
      (const GUID *)(v3 + 2276),
      *(_QWORD *)(v3 + 248),
      Handle,
      v17,
      (_WORD)v12);
  }
  if ( v11 )
  {
    if ( (unsigned int)(v11 - 2) > 4 )
      goto LABEL_17;
    v13 = (void *)(v3 + 1152);
    KeResetEvent((PRKEVENT)(v3 + 1152));
    v14 = 2011;
  }
  else
  {
    v13 = (void *)(v3 + 1152);
    KeResetEvent((PRKEVENT)(v3 + 1152));
    v14 = 2007;
  }
  HUBSM_AddEvent(v3 + 1264, v14);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v3);
  HUBMISC_WaitForSignal(v13);
  v7 = *(_DWORD *)(v3 + 1176);
LABEL_17:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    LODWORD(v17) = v11;
    LODWORD(Handle) = v7;
    McTemplateK0pqq(
      v10,
      &USBHUB3_ETW_EVENT_HUB_D0_ENTRY_COMPLETE,
      (const GUID *)(v3 + 2276),
      *(_QWORD *)(v3 + 248),
      Handle,
      v17);
  }
  if ( v8 == 1 )
  {
    *(_QWORD *)(v3 + 2276) = 0LL;
    *(_QWORD *)(v3 + 2284) = 0LL;
  }
  return (unsigned int)v7;
}
