/*
 * XREFs of HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode @ 0x1C002AA80
 * Callers:
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C0034394 (HUBDESC_ValidateBOSDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p @ 0x1C0006450 (McTemplateK0p.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002C5A0 (HUBMISC_VerifierDbgBreak.c)
 */

ULONG __fastcall HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode(__int64 a1)
{
  int v2; // ecx
  ULONG result; // eax
  struct _MCGEN_TRACE_CONTEXT *v4; // rcx

  v2 = *(_DWORD *)(a1 + 1632);
  if ( (v2 & 0x800) != 0
    && (*(_DWORD *)(a1 + 1456) & 0x10000) != 0
    && (v2 & 2) == 0
    && (*(_DWORD *)(a1 + 1644) & 0x80000) == 0 )
  {
    result = WPP_RECORDER_SF_(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
               2u,
               5u,
               0x2Bu,
               (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids);
    if ( (*(_DWORD *)(a1 + 2436) & 0x800) != 0 )
      result = HUBMISC_VerifierDbgBreak("DeviceHwVerifierSuperSpeedDeviceWorkingAtLowerSpeed", a1 + 504);
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x20) != 0 )
      return McTemplateK0p(
               v4,
               &USBHUB3_ETW_EVENT_SSDEVICE_CONNECTED_AT_LS,
               (const GUID *)(a1 + 1516),
               *(_QWORD *)(a1 + 24));
  }
  return result;
}
