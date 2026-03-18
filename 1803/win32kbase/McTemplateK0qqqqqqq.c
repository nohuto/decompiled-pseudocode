/*
 * XREFs of McTemplateK0qqqqqqq @ 0x1C00AF314
 * Callers:
 *     EtwTraceIdleStatus @ 0x1C0065520 (EtwTraceIdleStatus.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C00AD480 (McGenEventWriteKM.c)
 */

NTSTATUS __fastcall McTemplateK0qqqqqqq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        char a10)
{
  unsigned int v11; // [rsp+30h] [rbp-89h] BYREF
  int v12; // [rsp+38h] [rbp-81h] BYREF
  int v13; // [rsp+40h] [rbp-79h] BYREF
  int v14; // [rsp+48h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-69h] BYREF
  unsigned int *v16; // [rsp+60h] [rbp-59h]
  __int64 v17; // [rsp+68h] [rbp-51h]
  char *v18; // [rsp+70h] [rbp-49h]
  __int64 v19; // [rsp+78h] [rbp-41h]
  int *v20; // [rsp+80h] [rbp-39h]
  __int64 v21; // [rsp+88h] [rbp-31h]
  int *v22; // [rsp+90h] [rbp-29h]
  __int64 v23; // [rsp+98h] [rbp-21h]
  int *v24; // [rsp+A0h] [rbp-19h]
  __int64 v25; // [rsp+A8h] [rbp-11h]
  char *v26; // [rsp+B0h] [rbp-9h]
  __int64 v27; // [rsp+B8h] [rbp-1h]
  char *v28; // [rsp+C0h] [rbp+7h]
  __int64 v29; // [rsp+C8h] [rbp+Fh]

  v14 = giDimTimeOutMs;
  v13 = giScreenSaveTimeOutMs;
  v12 = giPowerOffTimeOutMs;
  v11 = gSessionId;
  v16 = &v11;
  v18 = &a5;
  v20 = &v12;
  v22 = &v13;
  v24 = &v14;
  v26 = &a9;
  v28 = &a10;
  v17 = 4LL;
  v19 = 4LL;
  v21 = 4LL;
  v23 = 4LL;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 4LL;
  return McGenEventWriteKM(a1, &IdleStatusEvent, &W32kControlGuid, 8u, &v15);
}
