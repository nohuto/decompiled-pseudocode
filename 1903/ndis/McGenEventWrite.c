/*
 * XREFs of McGenEventWrite @ 0x1C006170C
 * Callers:
 *     McTemplateK0jqxq @ 0x1C0061768 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqd @ 0x1C00617F8 (McTemplateK0jqxqd.c)
 *     McTemplateK0j @ 0x1C0066110 (McTemplateK0j.c)
 *     McTemplateK0q @ 0x1C0066178 (McTemplateK0q.c)
 *     McTemplateK0qx @ 0x1C00661DC (McTemplateK0qx.c)
 *     McTemplateK0qxqqq @ 0x1C0066260 (McTemplateK0qxqqq.c)
 *     McTemplateK0x @ 0x1C0066314 (McTemplateK0x.c)
 *     McTemplateK0jqxptdq @ 0x1C0068A88 (McTemplateK0jqxptdq.c)
 *     McTemplateK0jqxqdq @ 0x1C0068B48 (McTemplateK0jqxqdq.c)
 *     McTemplateK0jqxqqq @ 0x1C0068C00 (McTemplateK0jqxqqq.c)
 *     McTemplateK0jqbr1 @ 0x1C0072114 (McTemplateK0jqbr1.c)
 *     McTemplateK0jqxtpp @ 0x1C0072198 (McTemplateK0jqxtpp.c)
 *     McTemplateK0xq @ 0x1C0072250 (McTemplateK0xq.c)
 *     McTemplateK0 @ 0x1C007D52C (McTemplateK0.c)
 *     McTemplateK0qq @ 0x1C007D584 (McTemplateK0qq.c)
 *     McTemplateK0qqq @ 0x1C007D5F8 (McTemplateK0qqq.c)
 *     McTemplateK0qqx @ 0x1C007D670 (McTemplateK0qqx.c)
 *     McTemplateK0qxq @ 0x1C007D6F4 (McTemplateK0qxq.c)
 *     McTemplateK0qzz @ 0x1C007D778 (McTemplateK0qzz.c)
 *     McTemplateK0pp @ 0x1C0089AD0 (McTemplateK0pp.c)
 *     McTemplateK0zq @ 0x1C008CC60 (McTemplateK0zq.c)
 *     McTemplateK0jqxz @ 0x1C0092658 (McTemplateK0jqxz.c)
 *     McTemplateK0jqxzqqQR5 @ 0x1C00947B0 (McTemplateK0jqxzqqQR5.c)
 *     McTemplateK0jqxb6 @ 0x1C0097C60 (McTemplateK0jqxb6.c)
 *     McTemplateK0jqxzqq @ 0x1C0097CF8 (McTemplateK0jqxzqq.c)
 *     McTemplateK0z @ 0x1C009D050 (McTemplateK0z.c)
 *     McTemplateK0jqxzdd @ 0x1C00A3FF8 (McTemplateK0jqxzdd.c)
 *     McTemplateK0jqx @ 0x1C00A6190 (McTemplateK0jqx.c)
 *     McTemplateK0jqxqqt @ 0x1C00A6208 (McTemplateK0jqxqqt.c)
 *     McTemplateK0jqxzq @ 0x1C00A62C0 (McTemplateK0jqxzq.c)
 *     McTemplateK0qqqqqqqq @ 0x1C00AE07C (McTemplateK0qqqqqqqq.c)
 *     McTemplateK0qxxq @ 0x1C00BDB80 (McTemplateK0qxxq.c)
 *     McTemplateK0qxzzxxxxxx @ 0x1C00BDC20 (McTemplateK0qxzzxxxxxx.c)
 *     McTemplateK0ujjp @ 0x1C00BDD8C (McTemplateK0ujjp.c)
 *     McTemplateK0ujqzr2jx @ 0x1C00BDE2C (McTemplateK0ujqzr2jx.c)
 *     McTemplateK0xqq @ 0x1C00BDEEC (McTemplateK0xqq.c)
 *     McTemplateK0xqqq @ 0x1C00BDF70 (McTemplateK0xqqq.c)
 *     McTemplateK0xqx @ 0x1C00BE008 (McTemplateK0xqx.c)
 *     McTemplateK0jqxzd @ 0x1C00BE670 (McTemplateK0jqxzd.c)
 *     McTemplateK0jqxjqxdd @ 0x1C00BE748 (McTemplateK0jqxjqxdd.c)
 *     McTemplateK0juqjzzz @ 0x1C00BE820 (McTemplateK0juqjzzz.c)
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
