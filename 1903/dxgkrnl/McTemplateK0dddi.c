/*
 * XREFs of McTemplateK0dddi @ 0x1C0047310
 * Callers:
 *     ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1C027E4BC (-UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0001E14 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0dddi(__int64 a1, __int64 a2, const GUID *a3, int a4, char a5, char a6, char a7)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-21h] BYREF
  int *v9; // [rsp+40h] [rbp-11h]
  __int64 v10; // [rsp+48h] [rbp-9h]
  char *v11; // [rsp+50h] [rbp-1h]
  __int64 v12; // [rsp+58h] [rbp+7h]
  char *v13; // [rsp+60h] [rbp+Fh]
  __int64 v14; // [rsp+68h] [rbp+17h]
  char *v15; // [rsp+70h] [rbp+1Fh]
  __int64 v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+B8h] [rbp+67h] BYREF

  v17 = a4;
  v10 = 4LL;
  v9 = &v17;
  v12 = 4LL;
  v11 = &a5;
  v14 = 4LL;
  v13 = &a6;
  v16 = 8LL;
  v15 = &a7;
  return McGenEventWrite(
           (PMCGEN_TRACE_CONTEXT)&DxgkControlGuid_Context,
           &EventBltQueueUpdatePresentStats,
           a3,
           5u,
           &EventData);
}
