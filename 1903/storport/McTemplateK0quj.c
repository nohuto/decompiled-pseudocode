/*
 * XREFs of McTemplateK0quj @ 0x1C004386C
 * Callers:
 *     RaUnitResetBusSrb @ 0x1C00449D0 (RaUnitResetBusSrb.c)
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x1C0046C9C (RaidUnitAbortHierarchicalResetWorkItem.c)
 *     RaidUnitHierarchicalReset @ 0x1C0047634 (RaidUnitHierarchicalReset.c)
 * Callees:
 *     McGenEventWrite @ 0x1C000DD7C (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0quj(struct _MCGEN_TRACE_CONTEXT *a1, __int64 a2, __int64 a3, int a4, char a5, __int64 a6)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-50h] BYREF
  int *v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  char *v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = a4;
  v11 = 1LL;
  v8 = &v14;
  v13 = 16LL;
  v10 = &a5;
  v12 = a6;
  v9 = 4LL;
  return McGenEventWrite(a1, &EventBusReset, 0LL, 4u, &EventData);
}
