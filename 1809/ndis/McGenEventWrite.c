/*
 * XREFs of McGenEventWrite @ 0x1C003D1F0
 * Callers:
 *     McTemplateK0jqxq @ 0x1C003D24C (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqd @ 0x1C003D2DC (McTemplateK0jqxqd.c)
 *     McTemplateK0j @ 0x1C00410DC (McTemplateK0j.c)
 *     McTemplateK0q @ 0x1C0041144 (McTemplateK0q.c)
 *     McTemplateK0qx @ 0x1C00411A8 (McTemplateK0qx.c)
 *     McTemplateK0qxqqq @ 0x1C004122C (McTemplateK0qxqqq.c)
 *     McTemplateK0x @ 0x1C00412E0 (McTemplateK0x.c)
 *     McTemplateK0jqxptdq @ 0x1C0043430 (McTemplateK0jqxptdq.c)
 *     McTemplateK0jqxqdq @ 0x1C00434F0 (McTemplateK0jqxqdq.c)
 *     McTemplateK0jqbr1 @ 0x1C00498D0 (McTemplateK0jqbr1.c)
 *     McTemplateK0jqxtpp @ 0x1C0049954 (McTemplateK0jqxtpp.c)
 *     McTemplateK0xq @ 0x1C0049A0C (McTemplateK0xq.c)
 *     McTemplateK0 @ 0x1C004F398 (McTemplateK0.c)
 *     McTemplateK0qq @ 0x1C004F3F0 (McTemplateK0qq.c)
 *     McTemplateK0qqq @ 0x1C004F464 (McTemplateK0qqq.c)
 *     McTemplateK0qqx @ 0x1C004F4DC (McTemplateK0qqx.c)
 *     McTemplateK0qxq @ 0x1C004F560 (McTemplateK0qxq.c)
 *     McTemplateK0qzz @ 0x1C004F5E4 (McTemplateK0qzz.c)
 *     McTemplateK0pp @ 0x1C00555E4 (McTemplateK0pp.c)
 *     McTemplateK0zq @ 0x1C0059EB4 (McTemplateK0zq.c)
 *     McTemplateK0jqxz @ 0x1C005DFB8 (McTemplateK0jqxz.c)
 *     McTemplateK0jqxzqqQR5 @ 0x1C005F510 (McTemplateK0jqxzqqQR5.c)
 *     McTemplateK0jqxb6 @ 0x1C006050C (McTemplateK0jqxb6.c)
 *     McTemplateK0jqxzqq @ 0x1C00605A4 (McTemplateK0jqxzqq.c)
 *     McTemplateK0z @ 0x1C0064B10 (McTemplateK0z.c)
 *     McTemplateK0jqxzdd @ 0x1C0068948 (McTemplateK0jqxzdd.c)
 *     McTemplateK0jqx @ 0x1C00694D8 (McTemplateK0jqx.c)
 *     McTemplateK0jqxqqt @ 0x1C0069550 (McTemplateK0jqxqqt.c)
 *     McTemplateK0jqxzq @ 0x1C0069608 (McTemplateK0jqxzq.c)
 *     McTemplateK0qqqqqqqq @ 0x1C006D30C (McTemplateK0qqqqqqqq.c)
 *     McTemplateK0qxxq @ 0x1C0079B28 (McTemplateK0qxxq.c)
 *     McTemplateK0qxzzxxxxxx @ 0x1C0079BC8 (McTemplateK0qxzzxxxxxx.c)
 *     McTemplateK0ujjp @ 0x1C0079D34 (McTemplateK0ujjp.c)
 *     McTemplateK0ujqzr2jx @ 0x1C0079DD4 (McTemplateK0ujqzr2jx.c)
 *     McTemplateK0xqq @ 0x1C0079E94 (McTemplateK0xqq.c)
 *     McTemplateK0xqqq @ 0x1C0079F18 (McTemplateK0xqqq.c)
 *     McTemplateK0xqx @ 0x1C0079FB0 (McTemplateK0xqx.c)
 *     McTemplateK0jqxzd @ 0x1C007A394 (McTemplateK0jqxzd.c)
 *     McTemplateK0jqxjqxdd @ 0x1C007A5D8 (McTemplateK0jqxjqxdd.c)
 *     McTemplateK0juqjzzz @ 0x1C007A6B0 (McTemplateK0juqjzzz.c)
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
