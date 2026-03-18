/*
 * XREFs of HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability @ 0x1C0026A28
 * Callers:
 *     HUBDSM_ValidatingInterfaceStatusForRemoteWake @ 0x1C0021EB0 (HUBDSM_ValidatingInterfaceStatusForRemoteWake.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqqh @ 0x1C000B3E8 (McTemplateK0pqqh.c)
 *     WPP_RECORDER_SF_q @ 0x1C0012C28 (WPP_RECORDER_SF_q.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002ED04 (HUBMISC_VerifierDbgBreak.c)
 */

__int64 __fastcall HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability(__int64 a1)
{
  unsigned int v2; // edi
  int v3; // edx
  struct _MCGEN_TRACE_CONTEXT *v4; // rcx
  __int64 v6; // [rsp+20h] [rbp-28h]
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int16 v8; // [rsp+30h] [rbp-18h]

  v2 = 4077;
  if ( *(_DWORD *)(a1 + 256) != 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x1Fu,
        (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
        *(_DWORD *)(a1 + 256));
    return 4065;
  }
  v3 = *(_DWORD *)(a1 + 1632);
  if ( (v3 & 0x100) != 0 || (*(_BYTE *)(a1 + 1732) & 1) == 0 )
  {
    if ( (v3 & 4) == 0 && (v3 & 0x100) != 0 && (*(_BYTE *)(a1 + 1732) & 1) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          3u,
          5u,
          0x21u,
          (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
          a1);
      if ( (*(_DWORD *)(a1 + 2436) & 0x10) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierInterfaceWakeCapabilityMismatch", a1 + 504);
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
      {
        v4 = (struct _MCGEN_TRACE_CONTEXT *)((*(_DWORD *)(a1 + 1632) >> 8) & 1);
        v8 = *(_WORD *)(a1 + 1732) & 1;
        LODWORD(v7) = (*(_DWORD *)(a1 + 1632) >> 8) & 1;
        LODWORD(v6) = (*(_DWORD *)(a1 + 1632) >> 2) & 1;
        goto LABEL_22;
      }
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        3u,
        5u,
        0x20u,
        (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
        a1);
    if ( (*(_DWORD *)(a1 + 2436) & 0x10) != 0 )
      HUBMISC_VerifierDbgBreak("DeviceHwVerifierInterfaceWakeCapabilityMismatch", a1 + 504);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
    {
      v4 = (struct _MCGEN_TRACE_CONTEXT *)*(unsigned __int16 *)(a1 + 1732);
      LOWORD(v4) = *(_WORD *)(a1 + 1732) & 1;
      v8 = (__int16)v4;
      LODWORD(v7) = (*(_DWORD *)(a1 + 1632) >> 8) & 1;
      LODWORD(v6) = (*(_DWORD *)(a1 + 1632) >> 2) & 1;
LABEL_22:
      McTemplateK0pqqh(
        v4,
        &USBHUB3_ETW_EVENT_INTERFACE_WAKE_CAPABILITY_MISMATCH,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(a1 + 24),
        v6,
        v7,
        v8);
    }
  }
  return v2;
}
