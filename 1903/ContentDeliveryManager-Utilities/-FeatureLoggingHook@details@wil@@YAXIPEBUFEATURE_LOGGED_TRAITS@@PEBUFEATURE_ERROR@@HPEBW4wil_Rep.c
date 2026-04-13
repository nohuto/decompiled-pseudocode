/*
 * XREFs of ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x18000A8D0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Instance@FeatureLogging@details@wil@@KAPEAV123@XZ @ 0x18000A7DC (-Instance@FeatureLogging@details@wil@@KAPEAV123@XZ.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 */

void __fastcall wil::details::FeatureLoggingHook(
        wil::details *this,
        unsigned __int16 *a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        const struct FEATURE_ERROR *a4,
        int *a5,
        const enum wil_ReportingKind *a6,
        const enum wil_VariantReportingKind *a7,
        char a8)
{
  int v8; // r15d
  _DWORD *v11; // rcx
  int *v12; // r14
  __int64 v13; // r10
  __int16 v14; // cx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  const enum wil_ReportingKind *v18; // r14
  __int64 v19; // r10
  __int16 v20; // cx
  int v21; // eax
  int v22; // eax
  __int64 v23; // r10
  int v24; // eax
  int v25; // eax
  __int16 v26; // ax
  const unsigned __int16 *v27; // r8
  const unsigned __int16 *v28; // rdx
  __int64 v29; // rax
  const unsigned __int16 *v30; // r9
  const unsigned __int16 *v31; // r8
  const unsigned __int16 *v32; // r9
  const unsigned __int16 *v33; // r8
  const unsigned __int16 *v34; // r9
  const unsigned __int16 *v35; // r8
  const unsigned __int16 *v36; // r9
  const unsigned __int16 *v37; // r8
  const unsigned __int16 *v38; // r9
  const unsigned __int16 *v39; // r8
  const unsigned __int16 *v40; // r9
  const unsigned __int16 *v41; // r8
  const unsigned __int16 *v42; // r9
  const unsigned __int16 *v43; // r8
  const unsigned __int16 *v44; // r9
  const unsigned __int16 *v45; // r8
  _BYTE v46[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v47; // [rsp+3Ah] [rbp-CEh] BYREF
  int v48; // [rsp+3Ch] [rbp-CCh] BYREF
  int v49; // [rsp+40h] [rbp-C8h] BYREF
  int v50; // [rsp+44h] [rbp-C4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-C0h] BYREF
  int *v52; // [rsp+68h] [rbp-A0h]
  __int64 v53; // [rsp+70h] [rbp-98h]
  int *v54; // [rsp+78h] [rbp-90h]
  __int64 v55; // [rsp+80h] [rbp-88h]
  int *v56; // [rsp+88h] [rbp-80h]
  __int64 v57; // [rsp+90h] [rbp-78h]
  __int16 *v58; // [rsp+98h] [rbp-70h]
  __int64 v59; // [rsp+A0h] [rbp-68h]
  const struct FEATURE_LOGGED_TRAITS *v60; // [rsp+A8h] [rbp-60h]
  __int64 v61; // [rsp+B0h] [rbp-58h]
  const unsigned __int16 *v62; // [rsp+B8h] [rbp-50h]
  __int64 v63; // [rsp+C0h] [rbp-48h]
  char *v64; // [rsp+C8h] [rbp-40h]
  __int64 v65; // [rsp+D0h] [rbp-38h]
  char *v66; // [rsp+D8h] [rbp-30h]
  __int64 v67; // [rsp+E0h] [rbp-28h]
  const unsigned __int16 *v68; // [rsp+E8h] [rbp-20h]
  int v69; // [rsp+F0h] [rbp-18h]
  int v70; // [rsp+F4h] [rbp-14h]
  const unsigned __int16 *v71; // [rsp+F8h] [rbp-10h]
  int v72; // [rsp+100h] [rbp-8h]
  int v73; // [rsp+104h] [rbp-4h]
  char *v74; // [rsp+108h] [rbp+0h]
  __int64 v75; // [rsp+110h] [rbp+8h]
  const unsigned __int16 *v76; // [rsp+118h] [rbp+10h]
  int v77; // [rsp+120h] [rbp+18h]
  int v78; // [rsp+124h] [rbp+1Ch]
  const unsigned __int16 *v79; // [rsp+128h] [rbp+20h]
  int v80; // [rsp+130h] [rbp+28h]
  int v81; // [rsp+134h] [rbp+2Ch]
  const unsigned __int16 *v82; // [rsp+138h] [rbp+30h]
  int v83; // [rsp+140h] [rbp+38h]
  int v84; // [rsp+144h] [rbp+3Ch]
  const unsigned __int16 *v85; // [rsp+148h] [rbp+40h]
  int v86; // [rsp+150h] [rbp+48h]
  int v87; // [rsp+154h] [rbp+4Ch]
  char *v88; // [rsp+158h] [rbp+50h]
  __int64 v89; // [rsp+160h] [rbp+58h]
  const unsigned __int16 *v90; // [rsp+168h] [rbp+60h]
  int v91; // [rsp+170h] [rbp+68h]
  int v92; // [rsp+174h] [rbp+6Ch]
  char *v93; // [rsp+178h] [rbp+70h]
  __int64 v94; // [rsp+180h] [rbp+78h]
  int v95; // [rsp+1C8h] [rbp+C0h] BYREF

  v95 = (int)this;
  v8 = (int)a4;
  v11 = (_DWORD *)*((_QWORD *)wil::details::FeatureLogging::Instance() + 1);
  if ( v11 && *v11 )
  {
    v12 = a5;
    if ( a5 )
    {
      v13 = *((_QWORD *)wil::details::FeatureLogging::Instance() + 1);
      if ( *(_DWORD *)v13 > 5u
        && (*(_BYTE *)(v13 + 16) & 2) != 0
        && (*(_QWORD *)(v13 + 24) & 2LL) == *(_QWORD *)(v13 + 24) )
      {
        v14 = -1;
        v53 = 4LL;
        v52 = &v95;
        if ( a2 )
          v15 = *a2;
        else
          v15 = -1;
        v50 = v15;
        v54 = &v50;
        v55 = 4LL;
        if ( a2 )
          v16 = a2[1];
        else
          v16 = -1;
        v48 = v16;
        v56 = &v48;
        v57 = 4LL;
        if ( a2 )
          v14 = *((unsigned __int8 *)a2 + 4);
        v47 = v14;
        v58 = &v47;
        v59 = 2LL;
        v60 = (const struct FEATURE_LOGGED_TRAITS *)v46;
        v46[0] = v8 != 0;
        v49 = *v12;
        v62 = (const unsigned __int16 *)&v49;
        v64 = &a8;
        v61 = 1LL;
        v63 = 4LL;
        v65 = 8LL;
        TlgWrite((TraceLoggingHProvider)v13, &unk_18016AB4C, 0LL, 0LL, 9u, &pData);
      }
      if ( *((_BYTE *)a2 + 4) == 1 )
      {
        if ( v8 )
        {
          v17 = *((_QWORD *)wil::details::FeatureLogging::Instance() + 1);
          if ( *(_DWORD *)v17 > 5u
            && (*(_BYTE *)(v17 + 16) & 0xA) != 0
            && (*(_QWORD *)(v17 + 24) & 0xALL) == *(_QWORD *)(v17 + 24) )
          {
            v53 = 4LL;
            v52 = &v95;
            v49 = *a2;
            v54 = &v49;
            v48 = a2[1];
            v56 = &v48;
            v47 = *((unsigned __int8 *)a2 + 4);
            v58 = &v47;
            v60 = (const struct FEATURE_LOGGED_TRAITS *)v46;
            v50 = *v12;
            v62 = (const unsigned __int16 *)&v50;
            v64 = &a8;
            v55 = 4LL;
            v57 = 4LL;
            v59 = 2LL;
            v46[0] = 1;
            v61 = 1LL;
            v63 = 4LL;
            v65 = 8LL;
            TlgWrite((TraceLoggingHProvider)v17, &unk_18016AF16, 0LL, 0LL, 9u, &pData);
          }
        }
      }
    }
    else
    {
      v18 = a6;
      if ( a6 )
      {
        v19 = *((_QWORD *)wil::details::FeatureLogging::Instance() + 1);
        if ( *(_DWORD *)v19 > 5u
          && (*(_BYTE *)(v19 + 16) & 4) != 0
          && (*(_QWORD *)(v19 + 24) & 4LL) == *(_QWORD *)(v19 + 24) )
        {
          v20 = -1;
          v53 = 4LL;
          v52 = &v95;
          if ( a2 )
            v21 = *a2;
          else
            v21 = -1;
          v49 = v21;
          v54 = &v49;
          v55 = 4LL;
          if ( a2 )
            v22 = a2[1];
          else
            v22 = -1;
          v48 = v22;
          v56 = &v48;
          v57 = 4LL;
          if ( a2 )
            v20 = *((unsigned __int8 *)a2 + 4);
          v47 = v20;
          v58 = &v47;
          v59 = 2LL;
          v60 = (const struct FEATURE_LOGGED_TRAITS *)v46;
          v46[0] = v8 != 0;
          v50 = *(_DWORD *)v18;
          v62 = (const unsigned __int16 *)&v50;
          v64 = (char *)&a7;
          v66 = &a8;
          v61 = 1LL;
          v63 = 4LL;
          v65 = 1LL;
          v67 = 8LL;
          TlgWrite((TraceLoggingHProvider)v19, &unk_18016AE51, 0LL, 0LL, 0xAu, &pData);
        }
      }
      else if ( a3 )
      {
        v23 = *((_QWORD *)wil::details::FeatureLogging::Instance() + 1);
        if ( *(_DWORD *)v23 > 2u
          && (*(_BYTE *)(v23 + 16) & 1) != 0
          && (*(_QWORD *)(v23 + 24) & 1LL) == *(_QWORD *)(v23 + 24) )
        {
          v53 = 4LL;
          v52 = &v95;
          if ( a2 )
            v24 = *a2;
          else
            v24 = -1;
          v49 = v24;
          v54 = &v49;
          v55 = 4LL;
          if ( a2 )
            v25 = a2[1];
          else
            v25 = -1;
          v48 = v25;
          v56 = &v48;
          v57 = 4LL;
          if ( a2 )
            v26 = *((unsigned __int8 *)a2 + 4);
          else
            v26 = -1;
          v27 = (const unsigned __int16 *)*((_QWORD *)a3 + 1);
          v28 = &word_1800FD1E0;
          v47 = v26;
          v58 = &v47;
          LODWORD(v29) = 0;
          v59 = 2LL;
          v30 = &word_1800FD1E0;
          v60 = a3;
          v61 = 4LL;
          if ( v27 )
          {
            v30 = v27;
            v29 = -1LL;
            do
              ++v29;
            while ( *((_BYTE *)v27 + v29) );
          }
          v31 = (const unsigned __int16 *)*((_QWORD *)a3 + 3);
          v63 = (unsigned int)(v29 + 1);
          v64 = (char *)a3 + 4;
          LODWORD(v29) = 0;
          v62 = v30;
          v32 = &word_1800FD1E0;
          v65 = 2LL;
          if ( v31 )
          {
            v32 = v31;
            v29 = -1LL;
            do
              ++v29;
            while ( *((_BYTE *)v31 + v29) );
          }
          v33 = (const unsigned __int16 *)*((_QWORD *)a3 + 2);
          v67 = (unsigned int)(v29 + 1);
          LODWORD(v29) = 0;
          v66 = (char *)v32;
          v34 = &word_1800FD1E0;
          if ( v33 )
          {
            v34 = v33;
            v29 = -1LL;
            do
              ++v29;
            while ( *((_BYTE *)v33 + v29) );
          }
          v35 = (const unsigned __int16 *)*((_QWORD *)a3 + 8);
          v69 = v29 + 1;
          LODWORD(v29) = 0;
          v68 = v34;
          v36 = &word_1800FD1E0;
          v70 = 0;
          if ( v35 )
          {
            v36 = v35;
            v29 = -1LL;
            do
              ++v29;
            while ( *((_BYTE *)v35 + v29) );
          }
          v37 = (const unsigned __int16 *)*((_QWORD *)a3 + 9);
          v72 = v29 + 1;
          v74 = (char *)a3 + 56;
          LODWORD(v29) = 0;
          v71 = v36;
          v38 = &word_1800FD1E0;
          v73 = 0;
          v75 = 2LL;
          if ( v37 )
          {
            v38 = v37;
            v29 = -1LL;
            do
              ++v29;
            while ( *((_BYTE *)v37 + v29) );
          }
          v39 = (const unsigned __int16 *)*((_QWORD *)a3 + 12);
          v77 = v29 + 1;
          LODWORD(v29) = 0;
          v76 = v38;
          v40 = &word_1800FD1E0;
          v78 = 0;
          if ( v39 )
          {
            v40 = v39;
            v29 = -1LL;
            do
              ++v29;
            while ( *((_BYTE *)v39 + v29) );
          }
          v41 = (const unsigned __int16 *)*((_QWORD *)a3 + 6);
          v80 = v29 + 1;
          LODWORD(v29) = 0;
          v79 = v40;
          v42 = &word_1800FD1E0;
          v81 = 0;
          if ( v41 )
          {
            v42 = v41;
            v29 = -1LL;
            do
              ++v29;
            while ( *((_BYTE *)v41 + v29) );
          }
          v43 = (const unsigned __int16 *)*((_QWORD *)a3 + 5);
          v83 = v29 + 1;
          LODWORD(v29) = 0;
          v82 = v42;
          v44 = &word_1800FD1E0;
          v84 = 0;
          if ( v43 )
          {
            v44 = v43;
            v29 = -1LL;
            do
              ++v29;
            while ( *((_BYTE *)v43 + v29) );
          }
          v45 = (const unsigned __int16 *)*((_QWORD *)a3 + 11);
          v86 = v29 + 1;
          v88 = (char *)a3 + 32;
          LODWORD(v29) = 0;
          v85 = v44;
          v87 = 0;
          v89 = 4LL;
          if ( v45 )
          {
            v28 = v45;
            v29 = -1LL;
            do
              ++v29;
            while ( *((_BYTE *)v45 + v29) );
          }
          v90 = v28;
          v91 = v29 + 1;
          v93 = (char *)a3 + 80;
          v92 = 0;
          v94 = 4LL;
          TlgWrite((TraceLoggingHProvider)v23, &unk_18016ABBD, 0LL, 0LL, 0x14u, &pData);
        }
      }
    }
  }
}
