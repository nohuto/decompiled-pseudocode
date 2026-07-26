/*
 * XREFs of McTemplateK0jqbr1 @ 0x1C00498D0
 * Callers:
 *     ndisMValidatePMWakePacket @ 0x1C004A8F8 (ndisMValidatePMWakePacket.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C003D1F0 (McGenEventWrite.c)
 */

ULONG __fastcall McTemplateK0jqbr1(__int64 a1, __int64 a2, const GUID *a3, __int64 a4, int a5, __int64 a6)
{
  int v7; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+40h] [rbp-9h] BYREF
  __int64 v9; // [rsp+50h] [rbp+7h]
  __int64 v10; // [rsp+58h] [rbp+Fh]
  int *v11; // [rsp+60h] [rbp+17h]
  __int64 v12; // [rsp+68h] [rbp+1Fh]
  __int64 v13; // [rsp+70h] [rbp+27h]
  __int64 v14; // [rsp+78h] [rbp+2Fh]

  v9 = a4;
  v7 = 128;
  v11 = &v7;
  v13 = a6;
  v14 = 128LL;
  v10 = 16LL;
  v12 = 4LL;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&NDIS_PROVIDER_ID_Context, &MiniportWakePacket, a3, 4u, &EventData);
}
