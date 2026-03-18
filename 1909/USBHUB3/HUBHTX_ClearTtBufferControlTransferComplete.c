/*
 * XREFs of HUBHTX_ClearTtBufferControlTransferComplete @ 0x1C0006360
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqqq @ 0x1C0001DEC (McTemplateK0pqqq.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBHTX_ClearTtBufferControlTransferComplete(
        struct _MCGEN_TRACE_CONTEXT *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  signed int v4; // edi
  unsigned int v6; // esi
  unsigned int Arg2; // [rsp+28h] [rbp-20h]
  unsigned int Arg3; // [rsp+30h] [rbp-18h]

  v4 = *(_DWORD *)(a3 + 8);
  v6 = *(_DWORD *)(a4 + 28);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Arg3 = *(_DWORD *)(a4 + 28);
      Arg2 = *(_DWORD *)(a3 + 8);
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a4 + 168) + 2520LL),
        2u,
        3u,
        0x74u,
        (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids,
        Arg2,
        Arg3);
    }
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
      McTemplateK0pqqq(
        a1,
        &USBHUB3_ETW_EVENT_HUB_CONTROL_TRANSFER_ERROR,
        0LL,
        *(const void **)(*(_QWORD *)(a4 + 168) + 248LL),
        0,
        v6,
        v4);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a4 + 168) + 528LL))(
    *(_QWORD *)(*(_QWORD *)(a4 + 168) + 376LL),
    *(_QWORD *)(a4 + 176));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, struct _MCGEN_TRACE_CONTEXT *))(WdfFunctions_01015 + 1664))(
    WdfDriverGlobals,
    a1);
  ExFreePoolWithTag((PVOID)a4, 0x68334855u);
}
