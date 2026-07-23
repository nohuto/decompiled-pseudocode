/*
 * XREFs of McGenEventWrite @ 0x14015D7C0
 * Callers:
 *     McTemplateK0zzjzzzdd @ 0x14015D354 (McTemplateK0zzjzzzdd.c)
 *     McTemplateK0zzjzzztzdzztdz @ 0x14015D4FC (McTemplateK0zzjzzztzdzztdz.c)
 *     McTemplateK0z @ 0x140191DA4 (McTemplateK0z.c)
 *     McTemplateK0jq @ 0x1402707C0 (McTemplateK0jq.c)
 *     McTemplateK0xxxqq @ 0x140270838 (McTemplateK0xxxqq.c)
 *     McTemplateK0xxxqqqq @ 0x1402708E0 (McTemplateK0xxxqqqq.c)
 *     McTemplateK0dzd @ 0x140287794 (McTemplateK0dzd.c)
 *     McTemplateK0hzr0 @ 0x140288138 (McTemplateK0hzr0.c)
 *     McTemplateK0hzr0qqhzr4 @ 0x1402881C0 (McTemplateK0hzr0qqhzr4.c)
 *     McTemplateK0j @ 0x140288CCC (McTemplateK0j.c)
 *     McTemplateK0zjdd @ 0x140288D60 (McTemplateK0zjdd.c)
 *     McTemplateK0p @ 0x140288E20 (McTemplateK0p.c)
 *     McTemplateK0pqzzzzzzz @ 0x140288E84 (McTemplateK0pqzzzzzzz.c)
 *     McTemplateK0zzjzitd @ 0x140289130 (McTemplateK0zzjzitd.c)
 *     McTemplateK0zd @ 0x1402899A0 (McTemplateK0zd.c)
 *     McTemplateK0zdq @ 0x140289A40 (McTemplateK0zdq.c)
 *     McTemplateK0d @ 0x14028AE70 (McTemplateK0d.c)
 *     McTemplateK0dz @ 0x14028AED4 (McTemplateK0dz.c)
 *     McTemplateK0jzt @ 0x14028AF80 (McTemplateK0jzt.c)
 *     McTemplateK0zzt @ 0x14028B03C (McTemplateK0zzt.c)
 *     McTemplateK0pz @ 0x14028B23C (McTemplateK0pz.c)
 *     McTemplateK0q @ 0x14028B2EC (McTemplateK0q.c)
 *     McTemplateK0qhzr1z @ 0x14028B358 (McTemplateK0qhzr1z.c)
 * Callees:
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 */

ULONG __stdcall McGenEventWrite(
        PMCGEN_TRACE_CONTEXT Context,
        PCEVENT_DESCRIPTOR Descriptor,
        LPCGUID ActivityId,
        ULONG EventDataCount,
        EVENT_DATA_DESCRIPTOR *EventData)
{
  unsigned __int16 *Logger; // r10
  ULONG v7; // r11d
  ULONG v8; // r9d

  Logger = (unsigned __int16 *)Context->Logger;
  if ( Logger )
  {
    EventData->Ptr = (ULONGLONG)Logger;
    v7 = 2;
    v8 = *Logger;
  }
  else
  {
    EventData->Ptr = 0LL;
    v7 = 0;
    v8 = 0;
  }
  EventData->Size = v8;
  EventData->Reserved = v7;
  return EtwWriteEx(Context->RegistrationHandle, Descriptor, 0LL, 0, ActivityId, 0LL, EventDataCount, EventData);
}
