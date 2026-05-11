/*
 * XREFs of McTemplateK0 @ 0x1C0001AA0
 * Callers:
 *     DeviceStart @ 0x1C0020270 (DeviceStart.c)
 *     DeviceStop @ 0x1C0020920 (DeviceStop.c)
 * Callees:
 *     McGenEventWrite @ 0x1C00019DC (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0010C20 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0(struct _MCGEN_TRACE_CONTEXT *a1, const EVENT_DESCRIPTOR *a2, const GUID *a3)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite(a1, a2, a3, 1u, &EventData);
}
