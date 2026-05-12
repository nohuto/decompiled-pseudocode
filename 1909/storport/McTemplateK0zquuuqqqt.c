/*
 * XREFs of McTemplateK0zquuuqqqt @ 0x1C003B6C8
 * Callers:
 *     StorPortSetDeviceQueueDepth @ 0x1C00033D0 (StorPortSetDeviceQueueDepth.c)
 *     RaUnitSetQueueDepth @ 0x1C0016D90 (RaUnitSetQueueDepth.c)
 * Callees:
 *     McGenEventWrite @ 0x1C000DDD4 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0zquuuqqqt(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char *a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12)
{
  __int64 v12; // rax
  __int64 v13; // rcx
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-99h] BYREF
  char *v16; // [rsp+40h] [rbp-89h]
  int v17; // [rsp+48h] [rbp-81h]
  int v18; // [rsp+4Ch] [rbp-7Dh]
  char *v19; // [rsp+50h] [rbp-79h]
  __int64 v20; // [rsp+58h] [rbp-71h]
  char *v21; // [rsp+60h] [rbp-69h]
  __int64 v22; // [rsp+68h] [rbp-61h]
  char *v23; // [rsp+70h] [rbp-59h]
  __int64 v24; // [rsp+78h] [rbp-51h]
  char *v25; // [rsp+80h] [rbp-49h]
  __int64 v26; // [rsp+88h] [rbp-41h]
  char *v27; // [rsp+90h] [rbp-39h]
  __int64 v28; // [rsp+98h] [rbp-31h]
  char *v29; // [rsp+A0h] [rbp-29h]
  __int64 v30; // [rsp+A8h] [rbp-21h]
  char *v31; // [rsp+B0h] [rbp-19h]
  __int64 v32; // [rsp+B8h] [rbp-11h]
  char *v33; // [rsp+C0h] [rbp-9h]
  __int64 v34; // [rsp+C8h] [rbp-1h]

  if ( a4 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)&a4[2 * v12] );
    v13 = (unsigned int)(2 * v12 + 2);
  }
  else
  {
    v13 = 10LL;
  }
  v17 = v13;
  v18 = 0;
  if ( !a4 )
    a4 = (char *)&Context.Logger + 4;
  v20 = 4LL;
  v16 = a4;
  v19 = &a5;
  v22 = 1LL;
  v21 = &a6;
  v24 = 1LL;
  v23 = &a7;
  v25 = &a8;
  v27 = &a9;
  v29 = &a10;
  v31 = &a11;
  v33 = &a12;
  v26 = 1LL;
  v28 = 4LL;
  v30 = 4LL;
  v32 = 4LL;
  v34 = 4LL;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)v13, &EventSetLunQueueDepthBtl8, 0LL, 0xAu, &EventData);
}
