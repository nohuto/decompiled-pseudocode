/*
 * XREFs of McGenEventWrite @ 0x1C00011B4
 * Callers:
 *     McTemplateK0 @ 0x1C0001278 (McTemplateK0.c)
 *     McTemplateK0pnq @ 0x1C00012B8 (McTemplateK0pnq.c)
 *     McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuux @ 0x1C0001334 (McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuux.c)
 *     McTemplateK0ppuq @ 0x1C00016CC (McTemplateK0ppuq.c)
 *     McTemplateK0pq @ 0x1C000175C (McTemplateK0pq.c)
 *     McTemplateK0pqn @ 0x1C00017CC (McTemplateK0pqn.c)
 *     McTemplateK0pquuxqqqqqqqsss @ 0x1C0001848 (McTemplateK0pquuxqqqqqqqsss.c)
 *     McTemplateK0pqhh @ 0x1C0001C48 (McTemplateK0pqhh.c)
 *     McTemplateK0pqqq @ 0x1C0001CDC (McTemplateK0pqqq.c)
 *     McTemplateK0qhhhqhhh @ 0x1C0001D6C (McTemplateK0qhhhqhhh.c)
 *     McTemplateK0p @ 0x1C0006450 (McTemplateK0p.c)
 *     McTemplateK0ppqqqq @ 0x1C0008C7C (McTemplateK0ppqqqq.c)
 *     McTemplateK0pqq @ 0x1C000A8F8 (McTemplateK0pqq.c)
 *     McTemplateK0pqqh @ 0x1C000A970 (McTemplateK0pqqh.c)
 *     McTemplateK0pjq @ 0x1C0010F6C (McTemplateK0pjq.c)
 *     McTemplateK0ppn @ 0x1C0010FEC (McTemplateK0ppn.c)
 *     McTemplateK0ppqq @ 0x1C001106C (McTemplateK0ppqq.c)
 *     McTemplateK0pqhhh @ 0x1C00110FC (McTemplateK0pqhhh.c)
 *     McTemplateK0pqhhhqqqqqqhhqhqqqqqqqssshhh @ 0x1C001119C (McTemplateK0pqhhhqqqqqqhhqhqqqqqqqssshhh.c)
 *     McTemplateK0pqqhhhq @ 0x1C00114D8 (McTemplateK0pqqhhhq.c)
 *     McTemplateK0phuzu @ 0x1C00237FC (McTemplateK0phuzu.c)
 *     McTemplateK0puuhz @ 0x1C00238D4 (McTemplateK0puuhz.c)
 *     McTemplateK0phhhquuuuu @ 0x1C00277D0 (McTemplateK0phhhquuuuu.c)
 *     McTemplateK0psqzq @ 0x1C00278CC (McTemplateK0psqzq.c)
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

  v5 = (unsigned __int16 *)qword_1C005F178;
  v6 = 0;
  if ( qword_1C005F178 )
  {
    EventData->Ptr = qword_1C005F178;
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
  return EtwWriteTransfer(MS_USBHUB3_ETW_PROVIDER_Context, Descriptor, ActivityId, 0LL, EventDataCount, EventData);
}
