/*
 * XREFs of McTemplateK0qqz @ 0x1C0048ED8
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C00471B8 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0047BF4 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C02698B0 (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     McGenEventWrite @ 0x1C00130CC (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0qqz(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        const wchar_t *a6)
{
  const wchar_t *v6; // rcx
  __int64 v8; // rax
  int v9; // edx
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-50h] BYREF
  int *v12; // [rsp+40h] [rbp-40h]
  __int64 v13; // [rsp+48h] [rbp-38h]
  char *v14; // [rsp+50h] [rbp-30h]
  __int64 v15; // [rsp+58h] [rbp-28h]
  const wchar_t *v16; // [rsp+60h] [rbp-20h]
  int v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+6Ch] [rbp-14h]
  int v19; // [rsp+A8h] [rbp+28h] BYREF

  v19 = a4;
  v6 = a6;
  v12 = &v19;
  v13 = 4LL;
  v15 = 4LL;
  v14 = &a5;
  if ( a6 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a6[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10;
  }
  v17 = v9;
  v18 = 0;
  if ( !a6 )
    v6 = L"NULL";
  v16 = v6;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&DxgkControlGuid_Context, a2, (LPCGUID)a2, 4u, &EventData);
}
