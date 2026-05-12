/*
 * XREFs of McTemplateK0quuujq @ 0x1C0043974
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C000F310 (RaidUnitPendingDpcRoutine.c)
 *     RaUnitClearUnresponsiveAttribute @ 0x1C0044350 (RaUnitClearUnresponsiveAttribute.c)
 *     RaUnitSetQOSIoctl @ 0x1C0044A88 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1C0045080 (RaUnitSetUnresponsiveAttribute.c)
 *     RaidUnitRequestTimeout @ 0x1C0047E58 (RaidUnitRequestTimeout.c)
 * Callees:
 *     McGenEventWrite @ 0x1C000DD7C (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0quuujq(
        struct _MCGEN_TRACE_CONTEXT *a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        char a9)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-51h] BYREF
  int *v11; // [rsp+40h] [rbp-41h]
  __int64 v12; // [rsp+48h] [rbp-39h]
  char *v13; // [rsp+50h] [rbp-31h]
  __int64 v14; // [rsp+58h] [rbp-29h]
  char *v15; // [rsp+60h] [rbp-21h]
  __int64 v16; // [rsp+68h] [rbp-19h]
  char *v17; // [rsp+70h] [rbp-11h]
  __int64 v18; // [rsp+78h] [rbp-9h]
  __int64 v19; // [rsp+80h] [rbp-1h]
  __int64 v20; // [rsp+88h] [rbp+7h]
  char *v21; // [rsp+90h] [rbp+Fh]
  __int64 v22; // [rsp+98h] [rbp+17h]
  int v23; // [rsp+D8h] [rbp+57h] BYREF

  v23 = a4;
  v12 = 4LL;
  v11 = &v23;
  v14 = 1LL;
  v13 = &a5;
  v16 = 1LL;
  v15 = &a6;
  v17 = &a7;
  v19 = a8;
  v21 = &a9;
  v18 = 1LL;
  v20 = 16LL;
  v22 = 4LL;
  return McGenEventWrite(a1, a2, 0LL, 7u, &EventData);
}
