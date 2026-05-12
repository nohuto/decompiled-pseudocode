/*
 * XREFs of McTemplateK0quuujjqzssszuqquuuuuuqqi @ 0x1C002902C
 * Callers:
 *     StorpTelemetrySendUnitUniqueErrorData @ 0x1C002B440 (StorpTelemetrySendUnitUniqueErrorData.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0011680 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0quuujjqzssszuqquuuuuuqqi(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        char a10,
        const struct _MCGEN_TRACE_CONTEXT *a11,
        const struct _MCGEN_TRACE_CONTEXT *a12,
        const struct _MCGEN_TRACE_CONTEXT *a13,
        const struct _MCGEN_TRACE_CONTEXT *a14,
        const struct _MCGEN_TRACE_CONTEXT *a15,
        int a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        char a26,
        char a27)
{
  int v27; // r9d
  __int64 v28; // rcx
  const struct _MCGEN_TRACE_CONTEXT *v29; // rax
  __int64 v30; // rdx
  int v31; // r8d
  const struct _MCGEN_TRACE_CONTEXT *v32; // rdx
  __int64 v33; // rax
  int v34; // eax
  const struct _MCGEN_TRACE_CONTEXT *v35; // rdx
  __int64 v36; // rax
  int v37; // eax
  const struct _MCGEN_TRACE_CONTEXT *v38; // rdx
  __int64 v39; // rax
  int v40; // eax
  const struct _MCGEN_TRACE_CONTEXT *v41; // rax
  bool v42; // zf
  char v44; // [rsp+38h] [rbp-D0h] BYREF
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+48h] [rbp-C0h] BYREF
  int *v46; // [rsp+58h] [rbp-B0h]
  __int64 v47; // [rsp+60h] [rbp-A8h]
  char *v48; // [rsp+68h] [rbp-A0h]
  __int64 v49; // [rsp+70h] [rbp-98h]
  char *v50; // [rsp+78h] [rbp-90h]
  __int64 v51; // [rsp+80h] [rbp-88h]
  char *v52; // [rsp+88h] [rbp-80h]
  __int64 v53; // [rsp+90h] [rbp-78h]
  __int64 v54; // [rsp+98h] [rbp-70h]
  __int64 v55; // [rsp+A0h] [rbp-68h]
  __int64 v56; // [rsp+A8h] [rbp-60h]
  __int64 v57; // [rsp+B0h] [rbp-58h]
  char *v58; // [rsp+B8h] [rbp-50h]
  __int64 v59; // [rsp+C0h] [rbp-48h]
  const struct _MCGEN_TRACE_CONTEXT *v60; // [rsp+C8h] [rbp-40h]
  int v61; // [rsp+D0h] [rbp-38h]
  int v62; // [rsp+D4h] [rbp-34h]
  const struct _MCGEN_TRACE_CONTEXT *v63; // [rsp+D8h] [rbp-30h]
  int v64; // [rsp+E0h] [rbp-28h]
  int v65; // [rsp+E4h] [rbp-24h]
  const struct _MCGEN_TRACE_CONTEXT *v66; // [rsp+E8h] [rbp-20h]
  int v67; // [rsp+F0h] [rbp-18h]
  int v68; // [rsp+F4h] [rbp-14h]
  const struct _MCGEN_TRACE_CONTEXT *v69; // [rsp+F8h] [rbp-10h]
  int v70; // [rsp+100h] [rbp-8h]
  int v71; // [rsp+104h] [rbp-4h]
  const struct _MCGEN_TRACE_CONTEXT *v72; // [rsp+108h] [rbp+0h]
  int v73; // [rsp+110h] [rbp+8h]
  int v74; // [rsp+114h] [rbp+Ch]
  char *v75; // [rsp+118h] [rbp+10h]
  __int64 v76; // [rsp+120h] [rbp+18h]
  char *v77; // [rsp+128h] [rbp+20h]
  __int64 v78; // [rsp+130h] [rbp+28h]
  char *v79; // [rsp+138h] [rbp+30h]
  __int64 v80; // [rsp+140h] [rbp+38h]
  char *v81; // [rsp+148h] [rbp+40h]
  __int64 v82; // [rsp+150h] [rbp+48h]
  char *v83; // [rsp+158h] [rbp+50h]
  __int64 v84; // [rsp+160h] [rbp+58h]
  char *v85; // [rsp+168h] [rbp+60h]
  __int64 v86; // [rsp+170h] [rbp+68h]
  char *v87; // [rsp+178h] [rbp+70h]
  __int64 v88; // [rsp+180h] [rbp+78h]
  char *v89; // [rsp+188h] [rbp+80h]
  __int64 v90; // [rsp+190h] [rbp+88h]
  char *v91; // [rsp+198h] [rbp+90h]
  __int64 v92; // [rsp+1A0h] [rbp+98h]
  char *v93; // [rsp+1A8h] [rbp+A0h]
  __int64 v94; // [rsp+1B0h] [rbp+A8h]
  char *v95; // [rsp+1B8h] [rbp+B0h]
  __int64 v96; // [rsp+1C0h] [rbp+B8h]
  char *v97; // [rsp+1C8h] [rbp+C0h]
  __int64 v98; // [rsp+1D0h] [rbp+C8h]
  int v99; // [rsp+210h] [rbp+108h] BYREF

  v99 = a4;
  v47 = 4LL;
  v44 = 1;
  v46 = &v99;
  v49 = 1LL;
  v48 = &a5;
  v27 = 10;
  v51 = 1LL;
  v50 = &a6;
  v28 = -1LL;
  v53 = 1LL;
  v52 = &a7;
  v54 = a8;
  v56 = a9;
  v58 = &a10;
  v29 = a11;
  v55 = 16LL;
  v57 = 16LL;
  v59 = 4LL;
  if ( a11 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( *((_WORD *)&a11->RegistrationHandle + v30) );
    v31 = 2 * v30 + 2;
  }
  else
  {
    v31 = 10;
  }
  v32 = a12;
  v61 = v31;
  v62 = 0;
  if ( !a11 )
    v29 = &Context;
  v60 = v29;
  if ( a12 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( *((_BYTE *)&a12->RegistrationHandle + v33) );
    v34 = v33 + 1;
  }
  else
  {
    v34 = 5;
  }
  v64 = v34;
  v65 = 0;
  if ( !a12 )
    v32 = &stru_1C0055A88;
  v63 = v32;
  v35 = a13;
  if ( a13 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( *((_BYTE *)&a13->RegistrationHandle + v36) );
    v37 = v36 + 1;
  }
  else
  {
    v37 = 5;
  }
  v67 = v37;
  v68 = 0;
  if ( !a13 )
    v35 = &stru_1C0055A88;
  v66 = v35;
  v38 = a14;
  if ( a14 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( *((_BYTE *)&a14->RegistrationHandle + v39) );
    v40 = v39 + 1;
  }
  else
  {
    v40 = 5;
  }
  v70 = v40;
  v41 = a15;
  if ( !a14 )
    v38 = &stru_1C0055A88;
  v71 = 0;
  v69 = v38;
  v42 = a15 == 0LL;
  if ( a15 )
  {
    do
      ++v28;
    while ( *((_WORD *)&a15->RegistrationHandle + v28) );
    v27 = 2 * v28 + 2;
    v42 = a15 == 0LL;
  }
  if ( v42 )
    v41 = &Context;
  v73 = v27;
  v72 = v41;
  v74 = 0;
  v75 = &v44;
  v76 = 1LL;
  v77 = &a17;
  v78 = 4LL;
  v79 = &a18;
  v81 = &a19;
  v83 = &a20;
  v85 = &a21;
  v87 = &a22;
  v89 = &a23;
  v91 = &a24;
  v93 = &a25;
  v95 = &a26;
  v97 = &a27;
  v80 = 4LL;
  v82 = 1LL;
  v84 = 1LL;
  v86 = 1LL;
  v88 = 1LL;
  v90 = 1LL;
  v92 = 1LL;
  v94 = 4LL;
  v96 = 4LL;
  v98 = 8LL;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)v28, &EventUnitUniqueErrorData, 0LL, 0x19u, &EventData);
}
