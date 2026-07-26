/*
 * XREFs of McTemplateK0j @ 0x1C00662E0
 * Callers:
 *     ?ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00FF7E0 (-ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C00618DC (McGenEventWrite.c)
 */

ULONG __fastcall McTemplateK0j(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  v8 = 0;
  v6 = a4;
  v7 = 16;
  return McGenEventWrite(
           (PMCGEN_TRACE_CONTEXT)&NDIS_PROVIDER_ID_Context,
           &ChangeNotificationNetwork,
           &NDIS_PROVIDER_ID,
           2u,
           &EventData);
}
