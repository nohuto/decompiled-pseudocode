/*
 * XREFs of HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode @ 0x1C002CFA8
 * Callers:
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C0037C88 (HUBDESC_ValidateBOSDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p @ 0x1C0006A6C (McTemplateK0p.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002ED04 (HUBMISC_VerifierDbgBreak.c)
 */

int __fastcall HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode(__int64 a1)
{
  struct _MCGEN_TRACE_CONTEXT *v2; // rcx
  _UNKNOWN **v3; // rax

  v2 = (struct _MCGEN_TRACE_CONTEXT *)*(unsigned int *)(a1 + 1632);
  if ( ((unsigned __int16)v2 & 0x800) != 0
    && (*(_DWORD *)(a1 + 1456) & 0x10000) != 0
    && ((unsigned __int8)v2 & 2) == 0
    && (*(_DWORD *)(a1 + 1644) & 0x80000) == 0 )
  {
    v3 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      LODWORD(v3) = WPP_RECORDER_SF_(
                      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                      2u,
                      5u,
                      0x2Bu,
                      (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids);
    if ( (*(_DWORD *)(a1 + 2436) & 0x800) != 0 )
      LODWORD(v3) = HUBMISC_VerifierDbgBreak("DeviceHwVerifierSuperSpeedDeviceWorkingAtLowerSpeed", a1 + 504);
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x20) != 0 )
      LODWORD(v3) = McTemplateK0p(
                      v2,
                      &USBHUB3_ETW_EVENT_SSDEVICE_CONNECTED_AT_LS,
                      (const GUID *)(a1 + 1516),
                      *(_QWORD *)(a1 + 24));
  }
  return (int)v3;
}
