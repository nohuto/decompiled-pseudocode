/*
 * XREFs of McTemplateK0qpq @ 0x1C0110CE0
 * Callers:
 *     EtwTraceDCompCommitBatchEvent @ 0x1C000ECC0 (EtwTraceDCompCommitBatchEvent.c)
 * Callees:
 *     McGenEventWrite @ 0x1C006C7F8 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0qpq(struct _MCGEN_TRACE_CONTEXT *a1, __int64 a2, __int64 a3, int a4, char a5, char a6)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-50h] BYREF
  int *v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  char *v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  char *v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = a4;
  v11 = 8LL;
  v9 = 4LL;
  v8 = &v14;
  v13 = 4LL;
  v10 = &a5;
  v12 = &a6;
  return McGenEventWrite(a1, &DCompCommitBatchEvent, (LPCGUID)&Context.Flags, 4u, &EventData);
}
