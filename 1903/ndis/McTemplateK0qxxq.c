/*
 * XREFs of McTemplateK0qxxq @ 0x1C00BDB80
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00BB8C4 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C006170C (McGenEventWrite.c)
 */

ULONG __fastcall McTemplateK0qxxq(__int64 a1, __int64 a2, const GUID *a3, int a4, char a5, char a6, char a7)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-21h] BYREF
  int *v9; // [rsp+40h] [rbp-11h]
  __int64 v10; // [rsp+48h] [rbp-9h]
  char *v11; // [rsp+50h] [rbp-1h]
  __int64 v12; // [rsp+58h] [rbp+7h]
  char *v13; // [rsp+60h] [rbp+Fh]
  __int64 v14; // [rsp+68h] [rbp+17h]
  char *v15; // [rsp+70h] [rbp+1Fh]
  __int64 v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+B8h] [rbp+67h] BYREF

  v17 = a4;
  v10 = 4LL;
  v9 = &v17;
  v12 = 8LL;
  v11 = &a5;
  v14 = 8LL;
  v13 = &a6;
  v16 = 4LL;
  v15 = &a7;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&NDIS_PROVIDER_ID_Context, &MiniportCsStats, a3, 5u, &EventData);
}
