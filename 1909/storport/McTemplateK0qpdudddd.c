/*
 * XREFs of McTemplateK0qpdudddd @ 0x1C003FFC4
 * Callers:
 *     RaidAdapterSetDevicePowerIrp @ 0x1C0017034 (RaidAdapterSetDevicePowerIrp.c)
 * Callees:
 *     McGenEventWrite @ 0x1C000DDD4 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0qpdudddd(
        struct _MCGEN_TRACE_CONTEXT *a1,
        __int64 a2,
        const GUID *a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10)
{
  int v11; // [rsp+30h] [rbp-91h] BYREF
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+40h] [rbp-81h] BYREF
  int *v13; // [rsp+50h] [rbp-71h]
  __int64 v14; // [rsp+58h] [rbp-69h]
  char *v15; // [rsp+60h] [rbp-61h]
  __int64 v16; // [rsp+68h] [rbp-59h]
  char *v17; // [rsp+70h] [rbp-51h]
  __int64 v18; // [rsp+78h] [rbp-49h]
  char *v19; // [rsp+80h] [rbp-41h]
  __int64 v20; // [rsp+88h] [rbp-39h]
  char *v21; // [rsp+90h] [rbp-31h]
  __int64 v22; // [rsp+98h] [rbp-29h]
  char *v23; // [rsp+A0h] [rbp-21h]
  __int64 v24; // [rsp+A8h] [rbp-19h]
  char *v25; // [rsp+B0h] [rbp-11h]
  __int64 v26; // [rsp+B8h] [rbp-9h]
  int *v27; // [rsp+C0h] [rbp-1h]
  __int64 v28; // [rsp+C8h] [rbp+7h]
  int v29; // [rsp+108h] [rbp+47h] BYREF

  v29 = a4;
  v14 = 4LL;
  v11 = 0;
  v13 = &v29;
  v15 = &a5;
  v17 = &a6;
  v16 = 8LL;
  v19 = &a7;
  v18 = 4LL;
  v21 = &a8;
  v23 = &a9;
  v25 = &a10;
  v27 = &v11;
  v20 = 1LL;
  v22 = 4LL;
  v24 = 4LL;
  v26 = 4LL;
  v28 = 4LL;
  return McGenEventWrite(a1, &EventAdapterPowerRequest, a3, 9u, &EventData);
}
