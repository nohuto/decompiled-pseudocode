/*
 * XREFs of McTemplateK0qxqqq @ 0x1C0066260
 * Callers:
 *     ?ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00FF7E0 (-ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C006170C (McGenEventWrite.c)
 */

ULONG __fastcall McTemplateK0qxqqq(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6, char a7, char a8)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-39h] BYREF
  int *v10; // [rsp+40h] [rbp-29h]
  __int64 v11; // [rsp+48h] [rbp-21h]
  char *v12; // [rsp+50h] [rbp-19h]
  __int64 v13; // [rsp+58h] [rbp-11h]
  char *v14; // [rsp+60h] [rbp-9h]
  __int64 v15; // [rsp+68h] [rbp-1h]
  char *v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+78h] [rbp+Fh]
  char *v18; // [rsp+80h] [rbp+17h]
  __int64 v19; // [rsp+88h] [rbp+1Fh]
  int v20; // [rsp+C8h] [rbp+5Fh] BYREF

  v20 = a4;
  v11 = 4LL;
  v10 = &v20;
  v13 = 8LL;
  v12 = &a5;
  v15 = 4LL;
  v14 = &a6;
  v17 = 4LL;
  v16 = &a7;
  v19 = 4LL;
  v18 = &a8;
  return McGenEventWrite(
           (PMCGEN_TRACE_CONTEXT)&NDIS_PROVIDER_ID_Context,
           &ChangeNotificationInterfaceInfo,
           &NDIS_PROVIDER_ID,
           6u,
           &EventData);
}
