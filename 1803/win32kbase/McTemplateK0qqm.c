/*
 * XREFs of McTemplateK0qqm @ 0x1C00AEEA4
 * Callers:
 *     EtwTraceUserIsActive @ 0x1C0066960 (EtwTraceUserIsActive.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C00AD480 (McGenEventWriteKM.c)
 */

NTSTATUS __fastcall McTemplateK0qqm(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  unsigned int v7; // [rsp+30h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-9h] BYREF
  unsigned int *v9; // [rsp+50h] [rbp+7h]
  __int64 v10; // [rsp+58h] [rbp+Fh]
  char *v11; // [rsp+60h] [rbp+17h]
  __int64 v12; // [rsp+68h] [rbp+1Fh]
  __int64 v13; // [rsp+70h] [rbp+27h]
  __int64 v14; // [rsp+78h] [rbp+2Fh]

  v7 = gSessionId;
  v14 = 8LL;
  v10 = 4LL;
  v9 = &v7;
  v11 = &a5;
  v13 = a6;
  v12 = 4LL;
  return McGenEventWriteKM(a1, &UserActiveEvent, &W32kControlGuid, 4u, &v8);
}
