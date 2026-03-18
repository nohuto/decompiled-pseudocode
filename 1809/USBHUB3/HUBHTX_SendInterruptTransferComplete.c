/*
 * XREFs of HUBHTX_SendInterruptTransferComplete @ 0x1C00034C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqqq @ 0x1C0001CDC (McTemplateK0pqqq.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001F18 (WPP_RECORDER_SF_dD.c)
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002C5A0 (HUBMISC_VerifierDbgBreak.c)
 */

__int64 __fastcall HUBHTX_SendInterruptTransferComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  signed int v6; // ebx
  unsigned int v7; // esi
  __int64 v8; // rcx
  struct _MCGEN_TRACE_CONTEXT *v9; // rcx
  unsigned int Arg2a; // [rsp+28h] [rbp-20h]
  __int64 Arg2; // [rsp+28h] [rbp-20h]
  unsigned int Arg3a; // [rsp+30h] [rbp-18h]
  __int64 Arg3; // [rsp+30h] [rbp-18h]

  v4 = *(unsigned __int16 *)(a4 + 1012);
  v6 = *(_DWORD *)(a3 + 8);
  v7 = *(_DWORD *)(a4 + 980);
  v8 = *(_QWORD *)(a4 + 1120);
  *(_WORD *)(a4 + 1130) = v4;
  *(_DWORD *)(a4 + 1136) = 8 * v4;
  *(_QWORD *)(a4 + 1144) = v8;
  if ( v6 < 0 )
  {
    Arg3a = v7;
    Arg2a = v6;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(a4 + 2520),
      2u,
      3u,
      0x1Du,
      (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids,
      Arg2a,
      Arg3a);
    if ( v6 != -1073741536 )
    {
      LODWORD(Arg3) = v7;
      LODWORD(Arg2) = v6;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(a4 + 2520),
        2u,
        3u,
        0x1Eu,
        (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids,
        Arg2,
        Arg3);
      if ( (*(_DWORD *)(a4 + 2592) & 4) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierInterruptTransferFailure", a4 + 1264);
      *(_DWORD *)(a4 + 2596) = 1073872898;
      if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
        McTemplateK0pqqq(
          v9,
          &USBHUB3_ETW_EVENT_PORT_INTERRUPT_TRANSFER_ERROR,
          (const GUID *)(a4 + 2412),
          *(const void **)(a4 + 248),
          0,
          v7,
          v6);
    }
  }
  return HUBSM_AddEvent(a4 + 1264, ((v6 >> 31) & 0xFFFFFFFC) + 2034);
}
