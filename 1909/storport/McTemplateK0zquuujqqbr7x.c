/*
 * XREFs of McTemplateK0zquuujqqbr7x @ 0x1C004B344
 * Callers:
 *     StorEtwMiniportBugResetBrokenEvent @ 0x1C004C37C (StorEtwMiniportBugResetBrokenEvent.c)
 * Callees:
 *     McGenEventWrite @ 0x1C000DDD4 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0zquuujqqbr7x(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        char *a4,
        char a5,
        char a6,
        char a7,
        char a8,
        __int64 a9,
        char a10,
        int a11,
        __int64 a12,
        char a13)
{
  __int64 v13; // rax
  __int64 v14; // rcx
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-B1h] BYREF
  char *v17; // [rsp+40h] [rbp-A1h]
  int v18; // [rsp+48h] [rbp-99h]
  int v19; // [rsp+4Ch] [rbp-95h]
  char *v20; // [rsp+50h] [rbp-91h]
  __int64 v21; // [rsp+58h] [rbp-89h]
  char *v22; // [rsp+60h] [rbp-81h]
  __int64 v23; // [rsp+68h] [rbp-79h]
  char *v24; // [rsp+70h] [rbp-71h]
  __int64 v25; // [rsp+78h] [rbp-69h]
  char *v26; // [rsp+80h] [rbp-61h]
  __int64 v27; // [rsp+88h] [rbp-59h]
  __int64 v28; // [rsp+90h] [rbp-51h]
  __int64 v29; // [rsp+98h] [rbp-49h]
  char *v30; // [rsp+A0h] [rbp-41h]
  __int64 v31; // [rsp+A8h] [rbp-39h]
  int *v32; // [rsp+B0h] [rbp-31h]
  __int64 v33; // [rsp+B8h] [rbp-29h]
  __int64 v34; // [rsp+C0h] [rbp-21h]
  int v35; // [rsp+C8h] [rbp-19h]
  int v36; // [rsp+CCh] [rbp-15h]
  char *v37; // [rsp+D0h] [rbp-11h]
  __int64 v38; // [rsp+D8h] [rbp-9h]

  if ( a4 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)&a4[2 * v13] );
    v14 = (unsigned int)(2 * v13 + 2);
  }
  else
  {
    v14 = 10LL;
  }
  v18 = v14;
  v19 = 0;
  if ( !a4 )
    a4 = (char *)&Context.Logger + 4;
  v21 = 4LL;
  v17 = a4;
  v20 = &a5;
  v23 = 1LL;
  v22 = &a6;
  v25 = 1LL;
  v24 = &a7;
  v26 = &a8;
  v28 = a9;
  v30 = &a10;
  v32 = &a11;
  v34 = a12;
  v35 = a11;
  v37 = &a13;
  v27 = 1LL;
  v29 = 16LL;
  v31 = 4LL;
  v33 = 4LL;
  v36 = 0;
  v38 = 8LL;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)v14, &EventMiniportBugResetBroken, a3, 0xBu, &EventData);
}
