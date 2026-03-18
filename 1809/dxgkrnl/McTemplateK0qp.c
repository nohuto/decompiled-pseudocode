/*
 * XREFs of McTemplateK0qp @ 0x1C0013054
 * Callers:
 *     DxgkStatusChangeNotify @ 0x1C011DF20 (DxgkStatusChangeNotify.c)
 * Callees:
 *     McGenEventWrite @ 0x1C00130CC (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0qp(__int64 a1, __int64 a2, const GUID *a3, int a4)
{
  __int64 v5; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+48h] [rbp-30h]
  __int64 v8; // [rsp+50h] [rbp-28h]
  __int64 *v9; // [rsp+58h] [rbp-20h]
  __int64 v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+98h] [rbp+20h] BYREF

  v11 = a4;
  v8 = 4LL;
  v5 = 0LL;
  v7 = &v11;
  v10 = 8LL;
  v9 = &v5;
  return McGenEventWrite(
           (PMCGEN_TRACE_CONTEXT)&DxgkControlGuid_Context,
           &Dxgk_PerfTrack_StatusChangeNotify,
           a3,
           3u,
           &v6);
}
