/*
 * XREFs of McTemplateK0qpqqqpp @ 0x1C0021C90
 * Callers:
 *     DxgkPresent @ 0x1C01251E0 (DxgkPresent.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C0218090 (DxgkSubmitPresentToHwQueue.c)
 *     DxgkPresentRedirected @ 0x1C0227800 (DxgkPresentRedirected.c)
 * Callees:
 *     McGenEventWrite @ 0x1C00130CC (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0qpqqqpp(
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
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-69h] BYREF
  int *v12; // [rsp+40h] [rbp-59h]
  __int64 v13; // [rsp+48h] [rbp-51h]
  char *v14; // [rsp+50h] [rbp-49h]
  __int64 v15; // [rsp+58h] [rbp-41h]
  char *v16; // [rsp+60h] [rbp-39h]
  __int64 v17; // [rsp+68h] [rbp-31h]
  char *v18; // [rsp+70h] [rbp-29h]
  __int64 v19; // [rsp+78h] [rbp-21h]
  char *v20; // [rsp+80h] [rbp-19h]
  __int64 v21; // [rsp+88h] [rbp-11h]
  char *v22; // [rsp+90h] [rbp-9h]
  __int64 v23; // [rsp+98h] [rbp-1h]
  char *v24; // [rsp+A0h] [rbp+7h]
  __int64 v25; // [rsp+A8h] [rbp+Fh]
  int v26; // [rsp+E8h] [rbp+4Fh] BYREF

  v26 = a4;
  v13 = 4LL;
  v15 = 8LL;
  v12 = &v26;
  v17 = 4LL;
  v14 = &a5;
  v16 = &a6;
  v18 = &a7;
  v20 = &a8;
  v22 = &a9;
  v24 = &a10;
  v19 = 4LL;
  v21 = 4LL;
  v23 = 8LL;
  v25 = 8LL;
  return McGenEventWrite(a1, &Present, a3, 8u, &EventData);
}
