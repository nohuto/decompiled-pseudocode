/*
 * XREFs of HUBFDO_EvtDeviceReleaseHardware @ 0x1C0071660
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq @ 0x1C0001864 (McTemplateK0pq.c)
 *     McTemplateK0p @ 0x1C0006A6C (McTemplateK0p.c)
 *     HUBSM_AddHsmEvent @ 0x1C0009798 (HUBSM_AddHsmEvent.c)
 *     HUBMISC_WaitForSignal @ 0x1C002EB20 (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     HUBFDO_UnregisterSleepstudyBlockerReasons @ 0x1C0074AD0 (HUBFDO_UnregisterSleepstudyBlockerReasons.c)
 *     HUBCONNECTOR_UnMapHubPorts @ 0x1C0078E70 (HUBCONNECTOR_UnMapHubPorts.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceReleaseHardware(__int64 a1)
{
  __int64 v1; // rax
  struct _MCGEN_TRACE_CONTEXT *v2; // rcx
  __int64 v3; // rdi
  const void *v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 v7; // rdx
  _QWORD *v8; // rax
  void *v9; // rcx
  struct _MCGEN_TRACE_CONTEXT *v10; // rcx
  int v12; // [rsp+20h] [rbp-18h]
  char v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = 0;
  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00640E0);
  v3 = v1;
  _InterlockedAnd((volatile signed __int32 *)(v1 + 40), 0xFFFDFFFF);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p(v2, &USBHUB3_ETW_EVENT_HUB_RELEASE_HARDWARE_START, 0LL, *(_QWORD *)(v1 + 248));
  HUBFDO_UnregisterSleepstudyBlockerReasons(v3);
  HUBCONNECTOR_UnMapHubPorts(v3);
  v13 = 0;
  (*(void (__fastcall **)(_QWORD, char *))(v3 + 560))(*(_QWORD *)(v3 + 248), &v13);
  KeResetEvent((PRKEVENT)(v3 + 1152));
  HUBSM_AddHsmEvent(v3, 2035LL);
  v4 = (const void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                       WdfDriverGlobals,
                       v3);
  HUBMISC_WaitForSignal((PVOID)(v3 + 1152), "Hub FDO PnpCallback", v4);
  v5 = *(_DWORD *)(v3 + 1176);
  (*(void (__fastcall **)(_QWORD, char *))(v3 + 568))(*(_QWORD *)(v3 + 248), &v13);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C0064130);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v6 + 32),
    0LL);
  v7 = *(_QWORD *)(v3 + 2432);
  if ( *(_QWORD *)(v7 + 8) != v3 + 2432 || (v8 = *(_QWORD **)(v3 + 2440), *v8 != v3 + 2432) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v6 + 32));
  v9 = *(void **)(v3 + 2552);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x68334855u);
  RtlInitUnicodeString((PUNICODE_STRING)(v3 + 2544), 0LL);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    v12 = v5;
    McTemplateK0pq(v10, &USBHUB3_ETW_EVENT_HUB_RELEASE_HARDWARE_COMPLETE, 0LL, *(_QWORD *)(v3 + 248), v12);
  }
  return v5;
}
