/*
 * XREFs of McGenEventWrite @ 0x1C00618DC
 * Callers:
 *     McTemplateK0jqxq @ 0x1C0061938 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqd @ 0x1C00619C8 (McTemplateK0jqxqd.c)
 *     McTemplateK0j @ 0x1C00662E0 (McTemplateK0j.c)
 *     McTemplateK0q @ 0x1C0066348 (McTemplateK0q.c)
 *     McTemplateK0qx @ 0x1C00663AC (McTemplateK0qx.c)
 *     McTemplateK0qxqqq @ 0x1C0066430 (McTemplateK0qxqqq.c)
 *     McTemplateK0x @ 0x1C00664E4 (McTemplateK0x.c)
 *     McTemplateK0jqxptdq @ 0x1C0068C58 (McTemplateK0jqxptdq.c)
 *     McTemplateK0jqxqdq @ 0x1C0068D18 (McTemplateK0jqxqdq.c)
 *     McTemplateK0jqxqqq @ 0x1C0068DD0 (McTemplateK0jqxqqq.c)
 *     McTemplateK0jqbr1 @ 0x1C00722E4 (McTemplateK0jqbr1.c)
 *     McTemplateK0jqxtpp @ 0x1C0072368 (McTemplateK0jqxtpp.c)
 *     McTemplateK0xq @ 0x1C0072420 (McTemplateK0xq.c)
 *     McTemplateK0 @ 0x1C007D6FC (McTemplateK0.c)
 *     McTemplateK0qq @ 0x1C007D754 (McTemplateK0qq.c)
 *     McTemplateK0qqq @ 0x1C007D7C8 (McTemplateK0qqq.c)
 *     McTemplateK0qqx @ 0x1C007D840 (McTemplateK0qqx.c)
 *     McTemplateK0qxq @ 0x1C007D8C4 (McTemplateK0qxq.c)
 *     McTemplateK0qzz @ 0x1C007D948 (McTemplateK0qzz.c)
 *     McTemplateK0pp @ 0x1C0089CA0 (McTemplateK0pp.c)
 *     McTemplateK0zq @ 0x1C008CE30 (McTemplateK0zq.c)
 *     McTemplateK0jqxz @ 0x1C0092828 (McTemplateK0jqxz.c)
 *     McTemplateK0jqxzqqQR5 @ 0x1C0094980 (McTemplateK0jqxzqqQR5.c)
 *     McTemplateK0jqxb6 @ 0x1C0097E30 (McTemplateK0jqxb6.c)
 *     McTemplateK0jqxzqq @ 0x1C0097EC8 (McTemplateK0jqxzqq.c)
 *     McTemplateK0z @ 0x1C009D220 (McTemplateK0z.c)
 *     McTemplateK0jqxzdd @ 0x1C00A41C8 (McTemplateK0jqxzdd.c)
 *     McTemplateK0jqx @ 0x1C00A6360 (McTemplateK0jqx.c)
 *     McTemplateK0jqxqqt @ 0x1C00A63D8 (McTemplateK0jqxqqt.c)
 *     McTemplateK0jqxzq @ 0x1C00A6490 (McTemplateK0jqxzq.c)
 *     McTemplateK0qqqqqqqq @ 0x1C00AE24C (McTemplateK0qqqqqqqq.c)
 *     McTemplateK0qxxq @ 0x1C00BDD50 (McTemplateK0qxxq.c)
 *     McTemplateK0qxzzxxxxxx @ 0x1C00BDDF0 (McTemplateK0qxzzxxxxxx.c)
 *     McTemplateK0ujjp @ 0x1C00BDF5C (McTemplateK0ujjp.c)
 *     McTemplateK0ujqzr2jx @ 0x1C00BDFFC (McTemplateK0ujqzr2jx.c)
 *     McTemplateK0xqq @ 0x1C00BE0BC (McTemplateK0xqq.c)
 *     McTemplateK0xqqq @ 0x1C00BE140 (McTemplateK0xqqq.c)
 *     McTemplateK0xqx @ 0x1C00BE1D8 (McTemplateK0xqx.c)
 *     McTemplateK0jqxzd @ 0x1C00BE840 (McTemplateK0jqxzd.c)
 *     McTemplateK0jqxjqxdd @ 0x1C00BE918 (McTemplateK0jqxjqxdd.c)
 *     McTemplateK0juqjzzz @ 0x1C00BE9F0 (McTemplateK0juqjzzz.c)
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
  unsigned __int16 *Logger; // r11
  unsigned int v6; // eax
  unsigned int v8; // r9d

  Logger = (unsigned __int16 *)Context->Logger;
  v6 = 0;
  if ( Logger )
  {
    EventData->Ptr = (unsigned __int64)Logger;
    v6 = 2;
    v8 = *Logger;
  }
  else
  {
    EventData->Ptr = 0LL;
    v8 = 0;
  }
  EventData->Size = v8;
  EventData->Reserved = v6;
  return EtwWriteTransfer(Context->RegistrationHandle, Descriptor, ActivityId, 0LL, EventDataCount, EventData);
}
