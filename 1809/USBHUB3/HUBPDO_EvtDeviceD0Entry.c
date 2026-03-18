/*
 * XREFs of HUBPDO_EvtDeviceD0Entry @ 0x1C0016210
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 *     McTemplateK0pqq @ 0x1C000A8F8 (McTemplateK0pqq.c)
 *     McTemplateK0pqqh @ 0x1C000A970 (McTemplateK0pqqh.c)
 *     HUBMISC_WaitForSignal @ 0x1C002C420 (HUBMISC_WaitForSignal.c)
 *     HUBIDLE_AddEvent @ 0x1C003680C (HUBIDLE_AddEvent.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceD0Entry(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  int v4; // eax
  int v5; // esi
  struct _MCGEN_TRACE_CONTEXT *v6; // rcx
  struct _MCGEN_TRACE_CONTEXT *v7; // rcx
  unsigned int v8; // ebx
  __int64 v10; // [rsp+20h] [rbp-58h]
  __int64 v11; // [rsp+28h] [rbp-50h]
  unsigned __int128 v12; // [rsp+40h] [rbp-38h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005F040);
  v3 = *(_QWORD *)(v2 + 24);
  *(_DWORD *)(v2 + 384) = 1;
  v12 = 0uLL;
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_1C005F130)
                  + 4) & 0x1000) != 0
    && EtwActivityIdControl(3u, (LPGUID)(v3 + 2176)) >= 0 )
  {
    v12 = *(_OWORD *)(v3 + 2176);
    _InterlockedOr((volatile signed __int32 *)(v3 + 1636), 0x80u);
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  v5 = v4;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v6 = (struct _MCGEN_TRACE_CONTEXT *)(*(_DWORD *)(v2 + 32) >> 3);
    LOWORD(v6) = (*(_DWORD *)(v2 + 32) & 8) != 0;
    McTemplateK0pqqh(
      v6,
      &USBHUB3_ETW_EVENT_DEVICE_D0_ENTRY_START,
      (const GUID *)&v12,
      *(_QWORD *)(v3 + 24),
      1,
      v4,
      (_WORD)v6);
  }
  HUBIDLE_AddEvent(v2 + 72, 6007LL, 0LL);
  KeClearEvent((PRKEVENT)(v3 + 1584));
  HUBSM_AddEvent(v3 + 504, 4067);
  HUBMISC_WaitForSignal((PVOID)(v3 + 1584));
  v7 = *(struct _MCGEN_TRACE_CONTEXT **)(v2 + 392);
  v8 = *(_DWORD *)(v3 + 1576);
  if ( v7 )
    SleepstudyHelper_ComponentActive();
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    LODWORD(v11) = v5;
    LODWORD(v10) = v8;
    McTemplateK0pqq(v7, &USBHUB3_ETW_EVENT_DEVICE_D0_ENTRY_COMPLETE, (const GUID *)&v12, *(_QWORD *)(v3 + 24), v10, v11);
  }
  _InterlockedAnd((volatile signed __int32 *)(v3 + 1636), 0xFFFFFF7F);
  return v8;
}
