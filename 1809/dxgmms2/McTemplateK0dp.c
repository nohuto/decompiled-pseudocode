/*
 * XREFs of McTemplateK0dp @ 0x1C002B9B8
 * Callers:
 *     VidSchiResetEngine @ 0x1C002F188 (VidSchiResetEngine.c)
 *     VidSchInvalidateHwContext @ 0x1C0036DC0 (VidSchInvalidateHwContext.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C00262A8 (McGenEventWrite.c)
 */

ULONG __fastcall McTemplateK0dp(__int64 a1, __int64 a2, const GUID *a3, int a4, __int64 a5)
{
  EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  int *v7; // [rsp+40h] [rbp-38h]
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+4Ch] [rbp-2Ch]
  __int64 *v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]
  int v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = a4;
  v7 = &v13;
  v9 = 0;
  v8 = 4;
  v10 = &a5;
  v12 = 0;
  v11 = 8;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&DxgkControlGuid_Context, &EventBlockGpuAccess, a3, 3u, &v6);
}
