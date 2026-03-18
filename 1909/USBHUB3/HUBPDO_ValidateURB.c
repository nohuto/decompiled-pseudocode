/*
 * XREFs of HUBPDO_ValidateURB @ 0x1C0015480
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0016580 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 * Callees:
 *     McTemplateK0ppn @ 0x1C0012198 (McTemplateK0ppn.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0012A50 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C0012B30 (WPP_RECORDER_SF_dqd.c)
 */

__int64 __fastcall HUBPDO_ValidateURB(struct _MCGEN_TRACE_CONTEXT *a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned __int16 v5; // si
  unsigned int v6; // edi
  unsigned __int16 v7; // ax
  int v9; // [rsp+20h] [rbp-28h]
  int v10; // [rsp+28h] [rbp-20h]

  if ( *a2 < 0x18u )
  {
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 8) != 0 )
      McTemplateK0ppn(
        a1,
        &USBHUB3_ETW_EVENT_DISPATCH_URB_INVALID_HEADER_LENGTH_WARNING,
        (const GUID *)(a1->MatchAllKeyword + 1516),
        a1->MatchAllKeyword + 24,
        a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqd(*(_QWORD *)(*(_QWORD *)(a1->MatchAllKeyword + 8) + 1432LL), *a2, a3, 0x2Du, v9);
  }
  v5 = a2[1];
  v6 = 0;
  *((_DWORD *)a2 + 1) = 0;
  *((_DWORD *)a2 + 4) = 0;
  if ( v5 <= 0x3Cu )
  {
    if ( v5 == 30 || (unsigned __int16)(v5 - 48) <= 1u )
    {
      v7 = *a2;
      if ( *a2 != 40 )
      {
        *((_DWORD *)a2 + 1) = -2147483136;
        v6 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dqd(*(_QWORD *)(*(_QWORD *)(a1->MatchAllKeyword + 8) + 1432LL), 40LL, v7, 0x2Fu, v9);
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 8) != 0 )
          McTemplateK0ppn(
            a1,
            &USBHUB3_ETW_EVENT_DISPATCH_URB_INVALID_HEADER_LENGTH_WARNING,
            (const GUID *)(a1->MatchAllKeyword + 1516),
            a1->MatchAllKeyword + 24,
            a2);
      }
    }
  }
  else
  {
    *((_DWORD *)a2 + 1) = -2147483136;
    v6 = -1073741811;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x10) != 0 )
      McTemplateK0ppn(
        a1,
        &USBHUB3_ETW_EVENT_DISPATCH_URB_INVALID_FUNCTION,
        (const GUID *)(a1->MatchAllKeyword + 1516),
        a1->MatchAllKeyword + 24,
        a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = v5;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(a1->MatchAllKeyword + 8) + 1432LL),
        3u,
        a3,
        0x2Eu,
        (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids,
        v10,
        a2);
    }
  }
  return v6;
}
