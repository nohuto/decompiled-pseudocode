/*
 * XREFs of McGenEventWrite @ 0x1C0001254
 * Callers:
 *     McTemplateK0 @ 0x1C0001318 (McTemplateK0.c)
 *     McTemplateK0pnq @ 0x1C0001358 (McTemplateK0pnq.c)
 *     McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq @ 0x1C00013D4 (McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq.c)
 *     McTemplateK0ppuq @ 0x1C00017D4 (McTemplateK0ppuq.c)
 *     McTemplateK0pq @ 0x1C0001864 (McTemplateK0pq.c)
 *     McTemplateK0pqn @ 0x1C00018D4 (McTemplateK0pqn.c)
 *     McTemplateK0pquuxqqqqqqqsss @ 0x1C0001950 (McTemplateK0pquuxqqqqqqqsss.c)
 *     McTemplateK0pqhh @ 0x1C0001D58 (McTemplateK0pqhh.c)
 *     McTemplateK0pqqq @ 0x1C0001DEC (McTemplateK0pqqq.c)
 *     McTemplateK0qhhhqhhh @ 0x1C0001E7C (McTemplateK0qhhhqhhh.c)
 *     McTemplateK0p @ 0x1C0006A6C (McTemplateK0p.c)
 *     McTemplateK0ppqqqq @ 0x1C00094E4 (McTemplateK0ppqqqq.c)
 *     McTemplateK0pqq @ 0x1C000B370 (McTemplateK0pqq.c)
 *     McTemplateK0pqqh @ 0x1C000B3E8 (McTemplateK0pqqh.c)
 *     McTemplateK0pjq @ 0x1C0012118 (McTemplateK0pjq.c)
 *     McTemplateK0ppn @ 0x1C0012198 (McTemplateK0ppn.c)
 *     McTemplateK0ppqq @ 0x1C0012218 (McTemplateK0ppqq.c)
 *     McTemplateK0pqhhh @ 0x1C00122A8 (McTemplateK0pqhhh.c)
 *     McTemplateK0pqhhhqqqqqqhhqhqqqqqqqssshhh @ 0x1C0012348 (McTemplateK0pqhhhqqqqqqhhqhqqqqqqqssshhh.c)
 *     McTemplateK0pqqhhhq @ 0x1C0012684 (McTemplateK0pqqhhhq.c)
 *     McTemplateK0phuzu @ 0x1C0025A38 (McTemplateK0phuzu.c)
 *     McTemplateK0puuhz @ 0x1C0025B10 (McTemplateK0puuhz.c)
 *     McTemplateK0phhhquuuuu @ 0x1C0029AF0 (McTemplateK0phhhquuuuu.c)
 *     McTemplateK0psqzq @ 0x1C0029BEC (McTemplateK0psqzq.c)
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

  v5 = (unsigned __int16 *)qword_1C0064178;
  v6 = 0;
  if ( qword_1C0064178 )
  {
    EventData->Ptr = qword_1C0064178;
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
