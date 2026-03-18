/*
 * XREFs of HUBMISC_LogDeviceReEnumeration @ 0x1C002A914
 * Callers:
 *     HUBDSM_InitializingEnumRetryCountInReEnumDuringResetInUnConfigured @ 0x1C00201B0 (HUBDSM_InitializingEnumRetryCountInReEnumDuringResetInUnConfigured.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0p @ 0x1C0006A6C (McTemplateK0p.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002ED04 (HUBMISC_VerifierDbgBreak.c)
 */

ULONG __fastcall HUBMISC_LogDeviceReEnumeration(__int64 a1)
{
  ULONG result; // eax
  int v3; // [rsp+28h] [rbp-10h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = *(_DWORD *)(a1 + 1356);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0xFu,
      (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids,
      v3);
  }
  result = *(_DWORD *)(a1 + 2436);
  if ( (result & 0x40) != 0 )
    result = HUBMISC_VerifierDbgBreak("DeviceHwVerifierBusRenumeration", a1 + 504);
  if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
    return McTemplateK0p(
             (struct _MCGEN_TRACE_CONTEXT *)a1,
             &USBHUB3_ETW_EVENT_BUS_RENUMERATION,
             (const GUID *)(a1 + 1516),
             *(_QWORD *)(a1 + 24));
  return result;
}
