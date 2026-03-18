/*
 * XREFs of HUBMISC_LogDeviceReEnumeration @ 0x1C00285E4
 * Callers:
 *     HUBDSM_InitializingEnumRetryCountInReEnumDuringResetInUnConfigured @ 0x1C001E430 (HUBDSM_InitializingEnumRetryCountInReEnumDuringResetInUnConfigured.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     McTemplateK0p @ 0x1C0006450 (McTemplateK0p.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002C5A0 (HUBMISC_VerifierDbgBreak.c)
 */

ULONG __fastcall HUBMISC_LogDeviceReEnumeration(__int64 a1)
{
  struct _MCGEN_TRACE_CONTEXT *v2; // rcx
  ULONG result; // eax
  int v4; // [rsp+28h] [rbp-10h]

  v4 = *(_DWORD *)(a1 + 1356);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    2u,
    5u,
    0xFu,
    (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids,
    v4);
  result = *(_DWORD *)(a1 + 2436);
  if ( (result & 0x40) != 0 )
    result = HUBMISC_VerifierDbgBreak("DeviceHwVerifierBusRenumeration", a1 + 504);
  if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
    return McTemplateK0p(v2, &USBHUB3_ETW_EVENT_BUS_RENUMERATION, (const GUID *)(a1 + 1516), *(_QWORD *)(a1 + 24));
  return result;
}
