/*
 * XREFs of McTemplateU0xqqqqqqqq @ 0x18025DF74
 * Callers:
 *     ?IsDirectFlipSupportedOnTarget@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z @ 0x18025D034 (-IsDirectFlipSupportedOnTarget@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@.c)
 * Callees:
 *     McGenEventWrite @ 0x1800A3600 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0xqqqqqqqq(
        REGHANDLE *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11)
{
  int v12; // [rsp+30h] [rbp-A1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+40h] [rbp-91h] BYREF
  __int64 *v14; // [rsp+50h] [rbp-81h]
  __int64 v15; // [rsp+58h] [rbp-79h]
  int *v16; // [rsp+60h] [rbp-71h]
  __int64 v17; // [rsp+68h] [rbp-69h]
  int *v18; // [rsp+70h] [rbp-61h]
  __int64 v19; // [rsp+78h] [rbp-59h]
  char *v20; // [rsp+80h] [rbp-51h]
  __int64 v21; // [rsp+88h] [rbp-49h]
  char *v22; // [rsp+90h] [rbp-41h]
  __int64 v23; // [rsp+98h] [rbp-39h]
  char *v24; // [rsp+A0h] [rbp-31h]
  __int64 v25; // [rsp+A8h] [rbp-29h]
  char *v26; // [rsp+B0h] [rbp-21h]
  __int64 v27; // [rsp+B8h] [rbp-19h]
  char *v28; // [rsp+C0h] [rbp-11h]
  __int64 v29; // [rsp+C8h] [rbp-9h]
  char *v30; // [rsp+D0h] [rbp-1h]
  __int64 v31; // [rsp+D8h] [rbp+7h]
  __int64 v32; // [rsp+110h] [rbp+3Fh] BYREF
  int v33; // [rsp+118h] [rbp+47h] BYREF

  v33 = a4;
  v32 = a3;
  v12 = 1;
  v14 = &v32;
  v15 = 8LL;
  v16 = &v33;
  v17 = 4LL;
  v18 = &v12;
  v20 = &a6;
  v22 = &a7;
  v24 = &a8;
  v26 = &a9;
  v28 = &a10;
  v30 = &a11;
  v19 = 4LL;
  v21 = 4LL;
  v23 = 4LL;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 4LL;
  return McGenEventWrite(a1, &EVTDESC_ETWGUID_DIRECTFLIP_SUPPORTEVENT, a3, 0xAu, &v13);
}
