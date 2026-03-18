/*
 * XREFs of McGenEventWrite @ 0x1401450D0
 * Callers:
 *     McTemplateK0zzjzzzdd @ 0x140144C64 (McTemplateK0zzjzzzdd.c)
 *     McTemplateK0zzjzzztzdzztdz @ 0x140144E0C (McTemplateK0zzjzzztzdzztdz.c)
 *     McTemplateK0jq @ 0x140284010 (McTemplateK0jq.c)
 *     McTemplateK0xxxqq @ 0x140284088 (McTemplateK0xxxqq.c)
 *     McTemplateK0xxxqqqq @ 0x140284130 (McTemplateK0xxxqqqq.c)
 *     McTemplateK0dzd @ 0x14029D3F8 (McTemplateK0dzd.c)
 *     McTemplateK0hzr0 @ 0x14029DDA8 (McTemplateK0hzr0.c)
 *     McTemplateK0hzr0qqhzr4 @ 0x14029DE30 (McTemplateK0hzr0qqhzr4.c)
 *     McTemplateK0z @ 0x14029E87C (McTemplateK0z.c)
 *     McTemplateK0j @ 0x14029E9AC (McTemplateK0j.c)
 *     McTemplateK0zjdd @ 0x14029EA40 (McTemplateK0zjdd.c)
 *     McTemplateK0p @ 0x14029EB00 (McTemplateK0p.c)
 *     McTemplateK0pqzzzzzzz @ 0x14029EB64 (McTemplateK0pqzzzzzzz.c)
 *     McTemplateK0zzjzitd @ 0x14029EE10 (McTemplateK0zzjzitd.c)
 *     McTemplateK0zd @ 0x14029F73C (McTemplateK0zd.c)
 *     McTemplateK0zdq @ 0x14029F7DC (McTemplateK0zdq.c)
 *     McTemplateK0d @ 0x1402A0D70 (McTemplateK0d.c)
 *     McTemplateK0dz @ 0x1402A0DD4 (McTemplateK0dz.c)
 *     McTemplateK0jzt @ 0x1402A0E80 (McTemplateK0jzt.c)
 *     McTemplateK0zzt @ 0x1402A0F3C (McTemplateK0zzt.c)
 *     McTemplateK0pz @ 0x1402A1020 (McTemplateK0pz.c)
 *     McTemplateK0q @ 0x1402A10D0 (McTemplateK0q.c)
 *     McTemplateK0qhzr1z @ 0x1402A113C (McTemplateK0qhzr1z.c)
 * Callees:
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
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
