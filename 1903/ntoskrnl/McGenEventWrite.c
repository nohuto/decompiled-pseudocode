/*
 * XREFs of McGenEventWrite @ 0x140144A30
 * Callers:
 *     McTemplateK0zzjzzzdd @ 0x1401445C4 (McTemplateK0zzjzzzdd.c)
 *     McTemplateK0zzjzzztzdzztdz @ 0x14014476C (McTemplateK0zzjzzztzdzztdz.c)
 *     McTemplateK0jq @ 0x1402842B0 (McTemplateK0jq.c)
 *     McTemplateK0xxxqq @ 0x140284328 (McTemplateK0xxxqq.c)
 *     McTemplateK0xxxqqqq @ 0x1402843D0 (McTemplateK0xxxqqqq.c)
 *     McTemplateK0dzd @ 0x14029D698 (McTemplateK0dzd.c)
 *     McTemplateK0hzr0 @ 0x14029E048 (McTemplateK0hzr0.c)
 *     McTemplateK0hzr0qqhzr4 @ 0x14029E0D0 (McTemplateK0hzr0qqhzr4.c)
 *     McTemplateK0z @ 0x14029EB1C (McTemplateK0z.c)
 *     McTemplateK0j @ 0x14029EC4C (McTemplateK0j.c)
 *     McTemplateK0zjdd @ 0x14029ECE0 (McTemplateK0zjdd.c)
 *     McTemplateK0p @ 0x14029EDA0 (McTemplateK0p.c)
 *     McTemplateK0pqzzzzzzz @ 0x14029EE04 (McTemplateK0pqzzzzzzz.c)
 *     McTemplateK0zzjzitd @ 0x14029F0B0 (McTemplateK0zzjzitd.c)
 *     McTemplateK0zd @ 0x14029F9DC (McTemplateK0zd.c)
 *     McTemplateK0zdq @ 0x14029FA7C (McTemplateK0zdq.c)
 *     McTemplateK0d @ 0x1402A1010 (McTemplateK0d.c)
 *     McTemplateK0dz @ 0x1402A1074 (McTemplateK0dz.c)
 *     McTemplateK0jzt @ 0x1402A1120 (McTemplateK0jzt.c)
 *     McTemplateK0zzt @ 0x1402A11DC (McTemplateK0zzt.c)
 *     McTemplateK0pz @ 0x1402A12C0 (McTemplateK0pz.c)
 *     McTemplateK0q @ 0x1402A1370 (McTemplateK0q.c)
 *     McTemplateK0qhzr1z @ 0x1402A13DC (McTemplateK0qhzr1z.c)
 * Callees:
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
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
