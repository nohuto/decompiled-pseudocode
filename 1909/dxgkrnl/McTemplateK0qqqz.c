/*
 * XREFs of McTemplateK0qqqz @ 0x1C004F8E4
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x1C004D1E0 (DpiMiracastStopMiracastSessionSync.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C004E6D8 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C02A50B8 (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0001F10 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0qqqz(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        const wchar_t *a7)
{
  const wchar_t *v7; // rcx
  __int64 v9; // rax
  int v10; // edx
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-21h] BYREF
  int *v13; // [rsp+40h] [rbp-11h]
  __int64 v14; // [rsp+48h] [rbp-9h]
  char *v15; // [rsp+50h] [rbp-1h]
  __int64 v16; // [rsp+58h] [rbp+7h]
  char *v17; // [rsp+60h] [rbp+Fh]
  __int64 v18; // [rsp+68h] [rbp+17h]
  const wchar_t *v19; // [rsp+70h] [rbp+1Fh]
  int v20; // [rsp+78h] [rbp+27h]
  int v21; // [rsp+7Ch] [rbp+2Bh]
  int v22; // [rsp+B8h] [rbp+67h] BYREF

  v22 = a4;
  v7 = a7;
  v13 = &v22;
  v14 = 4LL;
  v15 = &a5;
  v17 = &a6;
  v16 = 4LL;
  v18 = 4LL;
  if ( a7 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a7[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10;
  }
  v20 = v10;
  v21 = 0;
  if ( !a7 )
    v7 = L"NULL";
  v19 = v7;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&DxgkControlGuid_Context, a2, (LPCGUID)a2, 5u, &EventData);
}
