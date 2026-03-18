/*
 * XREFs of HUBPARENT_ResetInterruptPipeComplete @ 0x1C0006AE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqqq @ 0x1C0001CDC (McTemplateK0pqqq.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001F18 (WPP_RECORDER_SF_dD.c)
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002C5A0 (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPARENT_ResetInterruptPipeComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed int v4; // ebx
  unsigned int v5; // esi
  int v7; // ebp
  __int64 v8; // rax
  struct _MCGEN_TRACE_CONTEXT *v9; // rcx
  __int64 Arg2; // [rsp+28h] [rbp-40h]
  unsigned int Arg2a; // [rsp+28h] [rbp-40h]
  unsigned int Arg3; // [rsp+30h] [rbp-38h]
  _DWORD v14[4]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]

  v4 = *(_DWORD *)(a3 + 8);
  v5 = *(_DWORD *)(a4 + 828);
  v14[3] = 0;
  v15 = 0LL;
  v14[1] = 0;
  v14[2] = 0;
  v14[0] = 24;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 1992))(
         WdfDriverGlobals,
         a1,
         v14);
  if ( v7 < 0 )
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C005F130);
    Arg2a = v7;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids,
      Arg2a);
  }
  if ( v4 < 0 )
  {
    Arg3 = v5;
    LODWORD(Arg2) = v4;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(a4 + 2520),
      2u,
      3u,
      0x10u,
      (__int64)&WPP_6f1c5846342730c10a7f2a15ffc55722_Traceguids,
      Arg2,
      Arg3);
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
      McTemplateK0pqqq(v9, &USBHUB3_ETW_EVENT_HUB_CONTROL_TRANSFER_ERROR, 0LL, *(const void **)(a4 + 248), 0, v5, v4);
    if ( (*(_DWORD *)(a4 + 2592) & 2) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierControlTransferFailure", a4 + 1264);
  }
  return HUBSM_AddEvent(a4 + 1264, ((v4 >> 31) & 0xFFFFFFFC) + 2016);
}
