/*
 * XREFs of McTemplateK0quuujppiqt @ 0x1C0032480
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0004650 (RaidAdapterPostScatterGatherExecute.c)
 * Callees:
 *     McGenEventWrite @ 0x1C000DD7C (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0quuujppiqt(
        struct _MCGEN_TRACE_CONTEXT *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-B1h] BYREF
  int *v15; // [rsp+40h] [rbp-A1h]
  __int64 v16; // [rsp+48h] [rbp-99h]
  char *v17; // [rsp+50h] [rbp-91h]
  __int64 v18; // [rsp+58h] [rbp-89h]
  char *v19; // [rsp+60h] [rbp-81h]
  __int64 v20; // [rsp+68h] [rbp-79h]
  char *v21; // [rsp+70h] [rbp-71h]
  __int64 v22; // [rsp+78h] [rbp-69h]
  __int64 v23; // [rsp+80h] [rbp-61h]
  __int64 v24; // [rsp+88h] [rbp-59h]
  char *v25; // [rsp+90h] [rbp-51h]
  __int64 v26; // [rsp+98h] [rbp-49h]
  char *v27; // [rsp+A0h] [rbp-41h]
  __int64 v28; // [rsp+A8h] [rbp-39h]
  char *v29; // [rsp+B0h] [rbp-31h]
  __int64 v30; // [rsp+B8h] [rbp-29h]
  char *v31; // [rsp+C0h] [rbp-21h]
  __int64 v32; // [rsp+C8h] [rbp-19h]
  char *v33; // [rsp+D0h] [rbp-11h]
  __int64 v34; // [rsp+D8h] [rbp-9h]
  int v35; // [rsp+118h] [rbp+37h] BYREF

  v35 = a4;
  v16 = 4LL;
  v15 = &v35;
  v18 = 1LL;
  v17 = &a5;
  v20 = 1LL;
  v19 = &a6;
  v22 = 1LL;
  v21 = &a7;
  v23 = a8;
  v25 = &a9;
  v27 = &a10;
  v29 = &a11;
  v31 = &a12;
  v33 = &a13;
  v24 = 16LL;
  v26 = 8LL;
  v28 = 8LL;
  v30 = 8LL;
  v32 = 4LL;
  v34 = 4LL;
  return McGenEventWrite(a1, &EventSMRResetWritePointer, 0LL, 0xBu, &EventData);
}
