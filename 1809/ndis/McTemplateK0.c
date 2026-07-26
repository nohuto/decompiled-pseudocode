/*
 * XREFs of McTemplateK0 @ 0x1C004F398
 * Callers:
 *     ndisWnfPdcCallback @ 0x1C0051300 (ndisWnfPdcCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C003D1F0 (McGenEventWrite.c)
 */

ULONG McTemplateK0()
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite(
           (PMCGEN_TRACE_CONTEXT)&NDIS_PROVIDER_ID_Context,
           &EnteringConnectedStandby,
           &GUID_00000000_0000_0000_0000_000000000000,
           1u,
           &EventData);
}
