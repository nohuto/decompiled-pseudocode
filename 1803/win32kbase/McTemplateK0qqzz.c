/*
 * XREFs of McTemplateK0qqzz @ 0x1C00AFE80
 * Callers:
 *     EtwTraceLayoutChangeStop @ 0x1C0013B30 (EtwTraceLayoutChangeStop.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C00AD480 (McGenEventWriteKM.c)
 */

NTSTATUS __fastcall McTemplateK0qqzz(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        const wchar_t *a6,
        const wchar_t *a7)
{
  const wchar_t *v7; // rcx
  __int64 v8; // rax
  int v9; // r9d
  __int64 v10; // rdx
  int v11; // r8d
  const wchar_t *v12; // rcx
  bool v13; // zf
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-21h] BYREF
  int *v16; // [rsp+40h] [rbp-11h]
  __int64 v17; // [rsp+48h] [rbp-9h]
  char *v18; // [rsp+50h] [rbp-1h]
  __int64 v19; // [rsp+58h] [rbp+7h]
  const wchar_t *v20; // [rsp+60h] [rbp+Fh]
  int v21; // [rsp+68h] [rbp+17h]
  int v22; // [rsp+6Ch] [rbp+1Bh]
  const wchar_t *v23; // [rsp+70h] [rbp+1Fh]
  int v24; // [rsp+78h] [rbp+27h]
  int v25; // [rsp+7Ch] [rbp+2Bh]
  int v26; // [rsp+B8h] [rbp+67h] BYREF

  v26 = a4;
  v7 = a6;
  v16 = &v26;
  v17 = 4LL;
  v18 = &a5;
  v8 = -1LL;
  v19 = 4LL;
  v9 = 10;
  if ( a6 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a6[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v11 = 10;
  }
  v21 = v11;
  v22 = 0;
  if ( !a6 )
    v7 = L"NULL";
  v20 = v7;
  v12 = a7;
  v13 = a7 == 0LL;
  if ( a7 )
  {
    do
      ++v8;
    while ( a7[v8] );
    v9 = 2 * v8 + 2;
    v13 = a7 == 0LL;
  }
  if ( v13 )
    v12 = L"NULL";
  v24 = v9;
  v23 = v12;
  v25 = 0;
  return McGenEventWriteKM((__int64)v12, &WindowLayoutChange_Stop, &W32kControlGuid, 5u, &v15);
}
