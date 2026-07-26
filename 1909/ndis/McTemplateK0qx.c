/*
 * XREFs of McTemplateK0qx @ 0x1C00663AC
 * Callers:
 *     ?ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00FF7E0 (-ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C00618DC (McGenEventWrite.c)
 */

ULONG __fastcall McTemplateK0qx(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
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
  return McGenEventWrite(
           (PMCGEN_TRACE_CONTEXT)&NDIS_PROVIDER_ID_Context,
           &ChangeNotificationInterfaceEnum,
           &NDIS_PROVIDER_ID,
           3u,
           &v6);
}
