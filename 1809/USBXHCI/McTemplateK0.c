/*
 * XREFs of McTemplateK0 @ 0x1C0039A00
 * Callers:
 *     Etw_EnableCallback @ 0x1C0001260 (Etw_EnableCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C000252C (McGenEventWrite.c)
 */

ULONG __fastcall McTemplateK0(struct _MCGEN_TRACE_CONTEXT *a1, const EVENT_DESCRIPTOR *a2, const GUID *a3)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite(a1, a2, a3, 1u, &EventData);
}
