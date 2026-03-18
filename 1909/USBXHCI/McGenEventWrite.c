/*
 * XREFs of McGenEventWrite @ 0x1C00029D4
 * Callers:
 *     McTemplateK0pppxsb16b16 @ 0x1C0002A34 (McTemplateK0pppxsb16b16.c)
 *     McTemplateK0uqq @ 0x1C0004044 (McTemplateK0uqq.c)
 *     McTemplateK0uqqq @ 0x1C00040C4 (McTemplateK0uqqq.c)
 *     McTemplateK0ppb16 @ 0x1C0006B9C (McTemplateK0ppb16.c)
 *     McTemplateK0ppb16qu @ 0x1C0006C24 (McTemplateK0ppb16qu.c)
 *     McTemplateK0ppb16u @ 0x1C0006CC8 (McTemplateK0ppb16u.c)
 *     McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32 @ 0x1C0006D64 (McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32.c)
 *     McTemplateK0ppqqqq @ 0x1C0006FA8 (McTemplateK0ppqqqq.c)
 *     McTemplateK0pqqqqqqqsssxqqqtn @ 0x1C0007064 (McTemplateK0pqqqqqqqsssxqqqtn.c)
 *     McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqqqqqqqqn @ 0x1C0007270 (McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqqqqqqqqn.c)
 *     McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqqqqqqqqnqq @ 0x1C000770C (McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqqqqqqqqnqq.c)
 *     McTemplateK0p @ 0x1C0014008 (McTemplateK0p.c)
 *     McTemplateK0pjqq @ 0x1C0014068 (McTemplateK0pjqq.c)
 *     McTemplateK0pptqqqq @ 0x1C0014104 (McTemplateK0pptqqqq.c)
 *     McTemplateK0pq @ 0x1C00141C8 (McTemplateK0pq.c)
 *     McTemplateK0pqqh @ 0x1C001423C (McTemplateK0pqqh.c)
 *     McTemplateK0pqqq @ 0x1C00142D0 (McTemplateK0pqqq.c)
 *     McTemplateK0pt @ 0x1C0014364 (McTemplateK0pt.c)
 *     McTemplateK0ptqqp @ 0x1C00143E0 (McTemplateK0ptqqp.c)
 *     McTemplateK0q @ 0x1C001F6E8 (McTemplateK0q.c)
 *     McTemplateK0 @ 0x1C003F270 (McTemplateK0.c)
 *     McTemplateK0pppnnn @ 0x1C003F2B0 (McTemplateK0pppnnn.c)
 *     McTemplateK0pqqqqqqqsssxqqqt @ 0x1C003F35C (McTemplateK0pqqqqqqqsssxqqqt.c)
 *     McTemplateK0pqzr1q @ 0x1C003F560 (McTemplateK0pqzr1q.c)
 *     McTemplateK0qqqq @ 0x1C0046CEC (McTemplateK0qqqq.c)
 *     McTemplateK0qqx @ 0x1C0046D84 (McTemplateK0qqx.c)
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

  v5 = (unsigned __int16 *)qword_1C00564F8;
  v6 = 0;
  if ( qword_1C00564F8 )
  {
    EventData->Ptr = qword_1C00564F8;
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
