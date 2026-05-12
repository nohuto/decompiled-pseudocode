/*
 * XREFs of McTemplateK0quuujjzssqbr9qz @ 0x1C0039DD8
 * Callers:
 *     StorEtwMiniportLogError @ 0x1C003A974 (StorEtwMiniportLogError.c)
 * Callees:
 *     McGenEventWrite @ 0x1C000DD7C (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0quuujjzssqbr9qz(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        unsigned __int64 *a10,
        const struct _MCGEN_TRACE_CONTEXT *a11,
        const struct _MCGEN_TRACE_CONTEXT *a12,
        int a13,
        __int64 a14,
        char a15,
        unsigned __int64 *a16)
{
  unsigned __int64 *p_Logger; // rdx
  __int64 v17; // rcx
  int v18; // r9d
  __int64 v19; // rax
  int v20; // r8d
  const struct _MCGEN_TRACE_CONTEXT *v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  const struct _MCGEN_TRACE_CONTEXT *v24; // rdx
  __int64 v25; // rax
  int v26; // eax
  unsigned __int64 *v27; // rax
  bool v28; // zf
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+38h] [rbp-D0h] BYREF
  int *v31; // [rsp+48h] [rbp-C0h]
  __int64 v32; // [rsp+50h] [rbp-B8h]
  char *v33; // [rsp+58h] [rbp-B0h]
  __int64 v34; // [rsp+60h] [rbp-A8h]
  char *v35; // [rsp+68h] [rbp-A0h]
  __int64 v36; // [rsp+70h] [rbp-98h]
  char *v37; // [rsp+78h] [rbp-90h]
  __int64 v38; // [rsp+80h] [rbp-88h]
  __int64 v39; // [rsp+88h] [rbp-80h]
  __int64 v40; // [rsp+90h] [rbp-78h]
  __int64 v41; // [rsp+98h] [rbp-70h]
  __int64 v42; // [rsp+A0h] [rbp-68h]
  unsigned __int64 *v43; // [rsp+A8h] [rbp-60h]
  int v44; // [rsp+B0h] [rbp-58h]
  int v45; // [rsp+B4h] [rbp-54h]
  const struct _MCGEN_TRACE_CONTEXT *v46; // [rsp+B8h] [rbp-50h]
  int v47; // [rsp+C0h] [rbp-48h]
  int v48; // [rsp+C4h] [rbp-44h]
  const struct _MCGEN_TRACE_CONTEXT *v49; // [rsp+C8h] [rbp-40h]
  int v50; // [rsp+D0h] [rbp-38h]
  int v51; // [rsp+D4h] [rbp-34h]
  int *v52; // [rsp+D8h] [rbp-30h]
  __int64 v53; // [rsp+E0h] [rbp-28h]
  __int64 v54; // [rsp+E8h] [rbp-20h]
  int v55; // [rsp+F0h] [rbp-18h]
  int v56; // [rsp+F4h] [rbp-14h]
  char *v57; // [rsp+F8h] [rbp-10h]
  __int64 v58; // [rsp+100h] [rbp-8h]
  unsigned __int64 *v59; // [rsp+108h] [rbp+0h]
  int v60; // [rsp+110h] [rbp+8h]
  int v61; // [rsp+114h] [rbp+Ch]
  int v62; // [rsp+150h] [rbp+48h] BYREF

  v62 = a4;
  p_Logger = a10;
  v31 = &v62;
  v32 = 4LL;
  v33 = &a5;
  v17 = -1LL;
  v40 = 16LL;
  v35 = &a6;
  v34 = 1LL;
  v37 = &a7;
  v18 = 10;
  v39 = a8;
  v41 = a9;
  v36 = 1LL;
  v38 = 1LL;
  v42 = 16LL;
  if ( a10 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *((_WORD *)a10 + v19) );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v20 = 10;
  }
  v44 = v20;
  v45 = 0;
  if ( !a10 )
    p_Logger = &Context.Logger;
  v43 = p_Logger;
  v21 = a11;
  if ( a11 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *((_BYTE *)&a11->RegistrationHandle + v22) );
    v23 = v22 + 1;
  }
  else
  {
    v23 = 5;
  }
  v47 = v23;
  v48 = 0;
  if ( !a11 )
    v21 = &Context;
  v46 = v21;
  v24 = a12;
  if ( a12 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( *((_BYTE *)&a12->RegistrationHandle + v25) );
    v26 = v25 + 1;
  }
  else
  {
    v26 = 5;
  }
  v50 = v26;
  v51 = 0;
  v52 = &a13;
  if ( !a12 )
    v24 = &Context;
  v54 = a14;
  v55 = a13;
  v57 = &a15;
  v27 = a16;
  v49 = v24;
  v53 = 4LL;
  v56 = 0;
  v58 = 4LL;
  v28 = a16 == 0LL;
  if ( a16 )
  {
    do
      ++v17;
    while ( *((_WORD *)a16 + v17) );
    v18 = 2 * v17 + 2;
    v28 = a16 == 0LL;
  }
  if ( v28 )
    v27 = &Context.Logger;
  v60 = v18;
  v59 = v27;
  v61 = 0;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)v17, &EventMiniportLogError, 0LL, 0xEu, &EventData);
}
