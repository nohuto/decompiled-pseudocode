/*
 * XREFs of McTemplateK0zqjuuujssssxx @ 0x1C002773C
 * Callers:
 *     RaUnitStartIo @ 0x1C0003430 (RaUnitStartIo.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0011680 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0zqjuuujssssxx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const struct _MCGEN_TRACE_CONTEXT *a4,
        char a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        __int64 a10,
        const struct _MCGEN_TRACE_CONTEXT *a11,
        const struct _MCGEN_TRACE_CONTEXT *a12,
        const struct _MCGEN_TRACE_CONTEXT *a13,
        const struct _MCGEN_TRACE_CONTEXT *a14,
        __int64 a15,
        char a16)
{
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // edx
  const struct _MCGEN_TRACE_CONTEXT *v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  const struct _MCGEN_TRACE_CONTEXT *v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  const struct _MCGEN_TRACE_CONTEXT *v25; // rdx
  __int64 v26; // rax
  int v27; // eax
  const struct _MCGEN_TRACE_CONTEXT *v28; // rax
  __int64 v29; // rcx
  __int64 v31; // [rsp+30h] [rbp-D0h] BYREF
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+40h] [rbp-C0h] BYREF
  const struct _MCGEN_TRACE_CONTEXT *v33; // [rsp+50h] [rbp-B0h]
  int v34; // [rsp+58h] [rbp-A8h]
  int v35; // [rsp+5Ch] [rbp-A4h]
  char *v36; // [rsp+60h] [rbp-A0h]
  __int64 v37; // [rsp+68h] [rbp-98h]
  __int64 v38; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+78h] [rbp-88h]
  char *v40; // [rsp+80h] [rbp-80h]
  __int64 v41; // [rsp+88h] [rbp-78h]
  char *v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  char *v44; // [rsp+A0h] [rbp-60h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  __int64 v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  const struct _MCGEN_TRACE_CONTEXT *v48; // [rsp+C0h] [rbp-40h]
  int v49; // [rsp+C8h] [rbp-38h]
  int v50; // [rsp+CCh] [rbp-34h]
  const struct _MCGEN_TRACE_CONTEXT *v51; // [rsp+D0h] [rbp-30h]
  int v52; // [rsp+D8h] [rbp-28h]
  int v53; // [rsp+DCh] [rbp-24h]
  const struct _MCGEN_TRACE_CONTEXT *v54; // [rsp+E0h] [rbp-20h]
  int v55; // [rsp+E8h] [rbp-18h]
  int v56; // [rsp+ECh] [rbp-14h]
  const struct _MCGEN_TRACE_CONTEXT *v57; // [rsp+F0h] [rbp-10h]
  int v58; // [rsp+F8h] [rbp-8h]
  int v59; // [rsp+FCh] [rbp-4h]
  __int64 *v60; // [rsp+100h] [rbp+0h]
  __int64 v61; // [rsp+108h] [rbp+8h]
  char *v62; // [rsp+110h] [rbp+10h]
  __int64 v63; // [rsp+118h] [rbp+18h]

  v16 = -1LL;
  v31 = DeviceQueueIoWaitThreshold;
  if ( a4 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *((_WORD *)&a4->RegistrationHandle + v17) );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v18 = 10;
  }
  v34 = v18;
  v19 = a11;
  v35 = 0;
  v37 = 4LL;
  if ( !a4 )
    a4 = &Context;
  v39 = 16LL;
  v33 = a4;
  v36 = &a5;
  v38 = a6;
  v40 = &a7;
  v42 = &a8;
  v44 = &a9;
  v46 = a10;
  v41 = 1LL;
  v43 = 1LL;
  v45 = 1LL;
  v47 = 16LL;
  if ( a11 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *((_BYTE *)&a11->RegistrationHandle + v20) );
    v21 = v20 + 1;
  }
  else
  {
    v21 = 5;
  }
  v49 = v21;
  v50 = 0;
  if ( !a11 )
    v19 = &stru_1C0055A88;
  v48 = v19;
  v22 = a12;
  if ( a12 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( *((_BYTE *)&a12->RegistrationHandle + v23) );
    v24 = v23 + 1;
  }
  else
  {
    v24 = 5;
  }
  v52 = v24;
  v53 = 0;
  if ( !a12 )
    v22 = &stru_1C0055A88;
  v51 = v22;
  v25 = a13;
  if ( a13 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( *((_BYTE *)&a13->RegistrationHandle + v26) );
    v27 = v26 + 1;
  }
  else
  {
    v27 = 5;
  }
  v55 = v27;
  v28 = a14;
  if ( !a13 )
    v25 = &stru_1C0055A88;
  v56 = 0;
  v54 = v25;
  if ( a14 )
  {
    do
      ++v16;
    while ( *((_BYTE *)&a14->RegistrationHandle + v16) );
    v29 = (unsigned int)(v16 + 1);
  }
  else
  {
    v29 = 5LL;
  }
  v58 = v29;
  v59 = 0;
  if ( !a14 )
    v28 = &stru_1C0055A88;
  v61 = 8LL;
  v57 = v28;
  v63 = 8LL;
  v60 = &v31;
  v62 = &a16;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)v29, &EventQueuedIoExceededThreshold, 0LL, 0xEu, &EventData);
}
