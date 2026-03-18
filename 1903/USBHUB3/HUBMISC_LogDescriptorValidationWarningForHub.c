/*
 * XREFs of HUBMISC_LogDescriptorValidationWarningForHub @ 0x1C0030130
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppqq @ 0x1C0012218 (McTemplateK0ppqq.c)
 */

char __fastcall HUBMISC_LogDescriptorValidationWarningForHub(struct _MCGEN_TRACE_CONTEXT *a1)
{
  char result; // al

  if ( a1 )
  {
    result = BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink);
    if ( SBYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
      return McTemplateK0ppqq(a1, &USBHUB3_ETW_EVENT_DESCRIPTOR_VALIDATION_WARNING, 0LL);
  }
  return result;
}
