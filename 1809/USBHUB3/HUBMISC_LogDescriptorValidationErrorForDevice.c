/*
 * XREFs of HUBMISC_LogDescriptorValidationErrorForDevice @ 0x1C002D4E0
 * Callers:
 *     HUBDSM_ValidatingMSOSContainerIdDescriptor @ 0x1C001C9A0 (HUBDSM_ValidatingMSOSContainerIdDescriptor.c)
 *     HUBDSM_AddingDeviceToGlobalChildList @ 0x1C001DC70 (HUBDSM_AddingDeviceToGlobalChildList.c)
 *     HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader @ 0x1C0026370 (HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader @ 0x1C002669C (HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader.c)
 * Callees:
 *     McTemplateK0ppqq @ 0x1C001106C (McTemplateK0ppqq.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002C5A0 (HUBMISC_VerifierDbgBreak.c)
 */

void __fastcall HUBMISC_LogDescriptorValidationErrorForDevice(__int64 a1, ULONG a2)
{
  int v4; // [rsp+28h] [rbp-20h]

  if ( a1 )
  {
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
    {
      v4 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 200LL);
      McTemplateK0ppqq(
        (struct _MCGEN_TRACE_CONTEXT *)a1,
        &USBHUB3_ETW_EVENT_DESCRIPTOR_VALIDATION_FAILURE,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(*(_QWORD *)a1 + 248LL),
        *(_QWORD *)(a1 + 24),
        v4,
        a2);
    }
    if ( (*(_DWORD *)(a1 + 2436) & 2) != 0 )
      HUBMISC_VerifierDbgBreak("DeviceHwVerifierDescriptorValidationFailure", a1 + 504);
    RtlSetBit((PRTL_BITMAP)(a1 + 2592), a2);
  }
}
