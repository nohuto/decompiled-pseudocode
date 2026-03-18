/*
 * XREFs of HUBMISC_LogDescriptorValidationErrorForHub @ 0x1C00300E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppqq @ 0x1C0012218 (McTemplateK0ppqq.c)
 */

ULONG __fastcall HUBMISC_LogDescriptorValidationErrorForHub(struct _MCGEN_TRACE_CONTEXT *a1)
{
  ULONG result; // eax

  if ( a1 )
  {
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      return McTemplateK0ppqq(a1, &USBHUB3_ETW_EVENT_DESCRIPTOR_VALIDATION_FAILURE, 0LL);
  }
  return result;
}
