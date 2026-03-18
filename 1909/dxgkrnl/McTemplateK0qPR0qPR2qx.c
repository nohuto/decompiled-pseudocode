/*
 * XREFs of McTemplateK0qPR0qPR2qx @ 0x1C004527C
 * Callers:
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0107E60 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0001F10 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0qPR0qPR2qx(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        char a9)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-51h] BYREF
  int *v11; // [rsp+40h] [rbp-41h]
  __int64 v12; // [rsp+48h] [rbp-39h]
  __int64 v13; // [rsp+50h] [rbp-31h]
  int v14; // [rsp+58h] [rbp-29h]
  int v15; // [rsp+5Ch] [rbp-25h]
  int *v16; // [rsp+60h] [rbp-21h]
  __int64 v17; // [rsp+68h] [rbp-19h]
  __int64 v18; // [rsp+70h] [rbp-11h]
  int v19; // [rsp+78h] [rbp-9h]
  int v20; // [rsp+7Ch] [rbp-5h]
  char *v21; // [rsp+80h] [rbp-1h]
  __int64 v22; // [rsp+88h] [rbp+7h]
  char *v23; // [rsp+90h] [rbp+Fh]
  __int64 v24; // [rsp+98h] [rbp+17h]
  int v25; // [rsp+D8h] [rbp+57h] BYREF

  v25 = a4;
  v12 = 4LL;
  v15 = 0;
  v11 = &v25;
  v13 = a5;
  v14 = 8 * a4;
  v16 = &a6;
  v18 = a7;
  v19 = 8 * a6;
  v21 = &a8;
  v23 = &a9;
  v20 = 0;
  v17 = 4LL;
  v22 = 4LL;
  v24 = 8LL;
  return McGenEventWrite(
           (PMCGEN_TRACE_CONTEXT)&DxgkControlGuid_Context,
           &EventSignalSynchronizationObject2,
           a3,
           7u,
           &EventData);
}
