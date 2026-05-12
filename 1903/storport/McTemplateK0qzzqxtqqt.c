/*
 * XREFs of McTemplateK0qzzqxtqqt @ 0x1C0032680
 * Callers:
 *     RaidInitializeAdapter @ 0x1C006D634 (RaidInitializeAdapter.c)
 * Callees:
 *     McGenEventWrite @ 0x1C000DD7C (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0qzzqxtqqt(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        char a7,
        char a8,
        char a9,
        char a10,
        int a11,
        char a12)
{
  __int64 v12; // rcx
  unsigned __int64 *p_Logger; // rax
  __int64 v14; // rdx
  int v15; // r8d
  unsigned __int64 *v16; // rax
  int v17; // edx
  int v19; // [rsp+30h] [rbp-A9h] BYREF
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+40h] [rbp-99h] BYREF
  int *v21; // [rsp+50h] [rbp-89h]
  __int64 v22; // [rsp+58h] [rbp-81h]
  unsigned __int64 *v23; // [rsp+60h] [rbp-79h]
  int v24; // [rsp+68h] [rbp-71h]
  int v25; // [rsp+6Ch] [rbp-6Dh]
  unsigned __int64 *v26; // [rsp+70h] [rbp-69h]
  int v27; // [rsp+78h] [rbp-61h]
  int v28; // [rsp+7Ch] [rbp-5Dh]
  char *v29; // [rsp+80h] [rbp-59h]
  __int64 v30; // [rsp+88h] [rbp-51h]
  char *v31; // [rsp+90h] [rbp-49h]
  __int64 v32; // [rsp+98h] [rbp-41h]
  char *v33; // [rsp+A0h] [rbp-39h]
  __int64 v34; // [rsp+A8h] [rbp-31h]
  char *v35; // [rsp+B0h] [rbp-29h]
  __int64 v36; // [rsp+B8h] [rbp-21h]
  int *v37; // [rsp+C0h] [rbp-19h]
  __int64 v38; // [rsp+C8h] [rbp-11h]
  char *v39; // [rsp+D0h] [rbp-9h]
  __int64 v40; // [rsp+D8h] [rbp-1h]
  int v41; // [rsp+118h] [rbp+3Fh] BYREF

  v41 = a4;
  v19 = StorageD3RegistryState;
  v12 = -1LL;
  v22 = 4LL;
  v21 = &v41;
  p_Logger = a5;
  if ( a5 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *((_WORD *)a5 + v14) );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v24 = v15;
  v25 = 0;
  if ( !a5 )
    p_Logger = &Context.Logger;
  v23 = p_Logger;
  v16 = a6;
  if ( a6 )
  {
    do
      ++v12;
    while ( *((_WORD *)a6 + v12) );
    v17 = 2 * v12 + 2;
  }
  else
  {
    v17 = 10;
  }
  v27 = v17;
  v28 = 0;
  if ( !a6 )
    v16 = &Context.Logger;
  v30 = 4LL;
  v26 = v16;
  v32 = 8LL;
  v29 = &a7;
  v34 = 4LL;
  v31 = &a8;
  v33 = &a9;
  v35 = &a10;
  v37 = &v19;
  v39 = &a12;
  v36 = 4LL;
  v38 = 4LL;
  v40 = 4LL;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)v12, &EventInitializeStorageD3, 0LL, 0xAu, &EventData);
}
