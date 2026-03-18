/*
 * XREFs of McGenEventWrite @ 0x1C000252C
 * Callers:
 *     McTemplateK0pppxsb16b16 @ 0x1C000258C (McTemplateK0pppxsb16b16.c)
 *     McTemplateK0uqq @ 0x1C00034D8 (McTemplateK0uqq.c)
 *     McTemplateK0uqqq @ 0x1C0003558 (McTemplateK0uqqq.c)
 *     McTemplateK0ppb16 @ 0x1C00057F0 (McTemplateK0ppb16.c)
 *     McTemplateK0ppb16qu @ 0x1C0005878 (McTemplateK0ppb16qu.c)
 *     McTemplateK0ppb16u @ 0x1C000591C (McTemplateK0ppb16u.c)
 *     McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqqqqqqqq @ 0x1C00059B8 (McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqqqqqqqq.c)
 *     McTemplateK0p @ 0x1C0011608 (McTemplateK0p.c)
 *     McTemplateK0pjqq @ 0x1C0011668 (McTemplateK0pjqq.c)
 *     McTemplateK0pptqqqq @ 0x1C0011704 (McTemplateK0pptqqqq.c)
 *     McTemplateK0pq @ 0x1C00117C8 (McTemplateK0pq.c)
 *     McTemplateK0pqqh @ 0x1C001183C (McTemplateK0pqqh.c)
 *     McTemplateK0pqqq @ 0x1C00118D0 (McTemplateK0pqqq.c)
 *     McTemplateK0pt @ 0x1C0011964 (McTemplateK0pt.c)
 *     McTemplateK0ptqqp @ 0x1C00119E0 (McTemplateK0ptqqp.c)
 *     McTemplateK0q @ 0x1C001C188 (McTemplateK0q.c)
 *     McTemplateK0 @ 0x1C0039A00 (McTemplateK0.c)
 *     McTemplateK0pppnnn @ 0x1C0039A40 (McTemplateK0pppnnn.c)
 *     McTemplateK0pppqqQ6qqqqn @ 0x1C0039AEC (McTemplateK0pppqqQ6qqqqn.c)
 *     McTemplateK0pqqqqqqqsssxqqqt @ 0x1C0039BF8 (McTemplateK0pqqqqqqqsssxqqqt.c)
 *     McTemplateK0pqzr1q @ 0x1C0039DFC (McTemplateK0pqzr1q.c)
 *     McTemplateK0qqqq @ 0x1C00414A0 (McTemplateK0qqqq.c)
 *     McTemplateK0qqx @ 0x1C0041538 (McTemplateK0qqx.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventWrite(
        PMCGEN_TRACE_CONTEXT Context,
        PCEVENT_DESCRIPTOR Descriptor,
        LPCGUID ActivityId,
        ULONG EventDataCount,
        EVENT_DATA_DESCRIPTOR *EventData)
{
  unsigned __int16 *v5; // r10
  unsigned int v6; // eax
  unsigned int v8; // r9d

  v5 = (unsigned __int16 *)qword_1C004F4D8;
  v6 = 0;
  if ( qword_1C004F4D8 )
  {
    EventData->Ptr = qword_1C004F4D8;
    v6 = 2;
    v8 = *v5;
  }
  else
  {
    EventData->Ptr = 0LL;
    v8 = 0;
  }
  EventData->Size = v8;
  EventData->Reserved = v6;
  return EtwWriteTransfer(MS_USBXHCI_ETW_PROVIDER_Context, Descriptor, ActivityId, 0LL, EventDataCount, EventData);
}
