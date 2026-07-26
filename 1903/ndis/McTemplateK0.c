/*
 * XREFs of McTemplateK0 @ 0x1C007D52C
 * Callers:
 *     ?ndisWnfPdcCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C007D0D0 (-ndisWnfPdcCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C006170C (McGenEventWrite.c)
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
