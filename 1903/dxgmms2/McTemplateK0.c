/*
 * XREFs of McTemplateK0 @ 0x1C0032170
 * Callers:
 *     VidSchEnableLatencyToleranceTimer @ 0x1C0032D20 (VidSchEnableLatencyToleranceTimer.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C0025A44 (McGenEventWrite.c)
 */

ULONG __fastcall McTemplateK0(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&DxgkControlGuid_Context, a2, a3, 1u, &EventData);
}
