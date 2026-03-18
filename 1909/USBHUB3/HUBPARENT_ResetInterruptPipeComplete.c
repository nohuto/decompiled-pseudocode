/*
 * XREFs of HUBPARENT_ResetInterruptPipeComplete @ 0x1C0007180
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqqq @ 0x1C0001DEC (McTemplateK0pqqq.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002ED04 (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPARENT_ResetInterruptPipeComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed int v5; // ebx
  unsigned int v6; // esi
  struct _MCGEN_TRACE_CONTEXT *v7; // rcx
  int v8; // ebp
  __int64 v9; // rax
  __int64 Arg2; // [rsp+28h] [rbp-40h]
  unsigned int Arg2a; // [rsp+28h] [rbp-40h]
  unsigned int Arg3; // [rsp+30h] [rbp-38h]
  _DWORD v14[3]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+4Ch] [rbp-1Ch]
  int v16; // [rsp+54h] [rbp-14h]

  v15 = 0LL;
  v16 = 0;
  v14[1] = 0;
  v14[2] = 0;
  v5 = *(_DWORD *)(a3 + 8);
  v6 = *(_DWORD *)(a4 + 828);
  v14[0] = 24;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 1992))(
         WdfDriverGlobals,
         a1,
         v14);
  if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C0064130);
    Arg2a = v8;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v9 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids,
      Arg2a);
  }
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Arg3 = v6;
      LODWORD(Arg2) = v5;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(a4 + 2520),
        2u,
        3u,
        0x10u,
        (__int64)&WPP_6f1c5846342730c10a7f2a15ffc55722_Traceguids,
        Arg2,
        Arg3);
    }
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
      McTemplateK0pqqq(v7, &USBHUB3_ETW_EVENT_HUB_CONTROL_TRANSFER_ERROR, 0LL, *(const void **)(a4 + 248), 0, v6, v5);
    if ( (*(_DWORD *)(a4 + 2592) & 2) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierControlTransferFailure", a4 + 1264);
  }
  return HUBSM_AddEvent(a4 + 1264, ((v5 >> 31) & 0xFFFFFFFC) + 2016);
}
