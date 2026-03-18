/*
 * XREFs of McTemplateK0 @ 0x1C0001318
 * Callers:
 *     HUBDRIVER_EtwEnableCallback @ 0x1C006FFA0 (HUBDRIVER_EtwEnableCallback.c)
 *     HUBFDO_EvtDeviceAdd @ 0x1C00702C0 (HUBFDO_EvtDeviceAdd.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0001254 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0(struct _MCGEN_TRACE_CONTEXT *a1, const EVENT_DESCRIPTOR *a2, const GUID *a3)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite(a1, a2, a3, 1u, &EventData);
}
