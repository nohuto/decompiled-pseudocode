/*
 * XREFs of McTemplateK0q @ 0x1C0066178
 * Callers:
 *     ndisTracePeriodicReceivesStart @ 0x1C007EB64 (ndisTracePeriodicReceivesStart.c)
 *     ndisSubmitIdleRequest @ 0x1C00B9E74 (ndisSubmitIdleRequest.c)
 *     ?ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00FF7E0 (-ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C006170C (McGenEventWrite.c)
 */

ULONG __fastcall McTemplateK0q(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, int a4)
{
  EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  int *v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  int v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = a4;
  v6 = &v9;
  v8 = 0;
  v7 = 4;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&NDIS_PROVIDER_ID_Context, a2, a3, 2u, &v5);
}
