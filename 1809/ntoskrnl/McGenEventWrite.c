/*
 * XREFs of McGenEventWrite @ 0x14015D6A0
 * Callers:
 *     McTemplateK0zzjzzzdd @ 0x14015D234 (McTemplateK0zzjzzzdd.c)
 *     McTemplateK0zzjzzztzdzztdz @ 0x14015D3DC (McTemplateK0zzjzzztzdzztdz.c)
 *     McTemplateK0z @ 0x140191C44 (McTemplateK0z.c)
 *     McTemplateK0jq @ 0x1402704D0 (McTemplateK0jq.c)
 *     McTemplateK0xxxqq @ 0x140270548 (McTemplateK0xxxqq.c)
 *     McTemplateK0xxxqqqq @ 0x1402705F0 (McTemplateK0xxxqqqq.c)
 *     McTemplateK0dzd @ 0x1402874A4 (McTemplateK0dzd.c)
 *     McTemplateK0hzr0 @ 0x140287E48 (McTemplateK0hzr0.c)
 *     McTemplateK0hzr0qqhzr4 @ 0x140287ED0 (McTemplateK0hzr0qqhzr4.c)
 *     McTemplateK0j @ 0x1402889DC (McTemplateK0j.c)
 *     McTemplateK0zjdd @ 0x140288A70 (McTemplateK0zjdd.c)
 *     McTemplateK0p @ 0x140288B30 (McTemplateK0p.c)
 *     McTemplateK0pqzzzzzzz @ 0x140288B94 (McTemplateK0pqzzzzzzz.c)
 *     McTemplateK0zzjzitd @ 0x140288E40 (McTemplateK0zzjzitd.c)
 *     McTemplateK0zd @ 0x1402896B0 (McTemplateK0zd.c)
 *     McTemplateK0zdq @ 0x140289750 (McTemplateK0zdq.c)
 *     McTemplateK0d @ 0x14028AB80 (McTemplateK0d.c)
 *     McTemplateK0dz @ 0x14028ABE4 (McTemplateK0dz.c)
 *     McTemplateK0jzt @ 0x14028AC90 (McTemplateK0jzt.c)
 *     McTemplateK0zzt @ 0x14028AD4C (McTemplateK0zzt.c)
 *     McTemplateK0pz @ 0x14028AF4C (McTemplateK0pz.c)
 *     McTemplateK0q @ 0x14028AFFC (McTemplateK0q.c)
 *     McTemplateK0qhzr1z @ 0x14028B068 (McTemplateK0qhzr1z.c)
 * Callees:
 *     EtwWriteEx @ 0x1400CAD40 (EtwWriteEx.c)
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
