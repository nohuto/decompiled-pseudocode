/*
 * XREFs of McTemplateK0szzqqq @ 0x1C00B01CC
 * Callers:
 *     EtwTraceTimerNoCoalescing @ 0x1C00AC920 (EtwTraceTimerNoCoalescing.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C00AD480 (McGenEventWriteKM.c)
 */

NTSTATUS __fastcall McTemplateK0szzqqq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        const wchar_t *a5,
        const wchar_t *a6,
        char a7,
        char a8,
        char a9)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  const wchar_t *v12; // rax
  int v13; // r9d
  __int64 v14; // rdx
  int v15; // r8d
  const wchar_t *v16; // rax
  bool v17; // zf
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+30h] [rbp-51h] BYREF
  const char *v20; // [rsp+40h] [rbp-41h]
  int v21; // [rsp+48h] [rbp-39h]
  int v22; // [rsp+4Ch] [rbp-35h]
  const wchar_t *v23; // [rsp+50h] [rbp-31h]
  int v24; // [rsp+58h] [rbp-29h]
  int v25; // [rsp+5Ch] [rbp-25h]
  const wchar_t *v26; // [rsp+60h] [rbp-21h]
  int v27; // [rsp+68h] [rbp-19h]
  int v28; // [rsp+6Ch] [rbp-15h]
  char *v29; // [rsp+70h] [rbp-11h]
  __int64 v30; // [rsp+78h] [rbp-9h]
  char *v31; // [rsp+80h] [rbp-1h]
  __int64 v32; // [rsp+88h] [rbp+7h]
  char *v33; // [rsp+90h] [rbp+Fh]
  __int64 v34; // [rsp+98h] [rbp+17h]

  v9 = -1LL;
  if ( a4 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a4[v10] );
    v11 = v10 + 1;
  }
  else
  {
    v11 = 5;
  }
  v21 = v11;
  v12 = a5;
  if ( !a4 )
    a4 = "NULL";
  v22 = 0;
  v20 = a4;
  v13 = 10;
  if ( a5 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a5[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v24 = v15;
  v25 = 0;
  if ( !a5 )
    v12 = L"NULL";
  v23 = v12;
  v16 = a6;
  v17 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
    v13 = 2 * v9 + 2;
    v17 = a6 == 0LL;
  }
  if ( v17 )
    v16 = L"NULL";
  v27 = v13;
  v26 = v16;
  v28 = 0;
  v29 = &a7;
  v30 = 4LL;
  v31 = &a8;
  v32 = 4LL;
  v33 = &a9;
  v34 = 4LL;
  return McGenEventWriteKM(v9, &TimerNoCoalescing, &W32kControlGuid, 7u, &v19);
}
