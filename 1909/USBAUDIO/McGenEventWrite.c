/*
 * XREFs of McGenEventWrite @ 0x1C00019DC
 * Callers:
 *     McTemplateK0 @ 0x1C0001AA0 (McTemplateK0.c)
 *     McTemplateK0q @ 0x1C0001AE0 (McTemplateK0q.c)
 *     McTemplateK0zq @ 0x1C0001B44 (McTemplateK0zq.c)
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
  unsigned __int16 *v5; // r8
  ULONG v6; // eax
  ULONG v7; // r8d

  v5 = (unsigned __int16 *)qword_1C0018018;
  v6 = 0;
  if ( qword_1C0018018 )
  {
    EventData->Ptr = qword_1C0018018;
    v6 = 2;
    v7 = *v5;
  }
  else
  {
    EventData->Ptr = 0LL;
    v7 = 0;
  }
  EventData->Size = v7;
  EventData->Reserved = v6;
  return EtwWriteTransfer(EXBUSAUD_PROVIDER_Context, Descriptor, 0LL, 0LL, EventDataCount, EventData);
}
