/*
 * XREFs of McTemplateK0qxq @ 0x1C004094C
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C002253C (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0001F10 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0qxq(__int64 a1, __int64 a2, const GUID *a3, __int64 a4, char a5, char a6)
{
  int v7; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+40h] [rbp-9h] BYREF
  int *v9; // [rsp+50h] [rbp+7h]
  __int64 v10; // [rsp+58h] [rbp+Fh]
  char *v11; // [rsp+60h] [rbp+17h]
  __int64 v12; // [rsp+68h] [rbp+1Fh]
  char *v13; // [rsp+70h] [rbp+27h]
  __int64 v14; // [rsp+78h] [rbp+2Fh]

  v7 = 6;
  v10 = 4LL;
  v9 = &v7;
  v12 = 8LL;
  v11 = &a5;
  v14 = 4LL;
  v13 = &a6;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&DxgkControlGuid_Context, &EventEtwVersion, a3, 4u, &EventData);
}
