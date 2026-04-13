/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18007E5F0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18000237C (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180030790 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     ?Provider@CDMUtilsUnlockLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18007CE5C (-Provider@CDMUtilsUnlockLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 */

char __fastcall wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  int v3; // edx
  bool v4; // zf
  BOOL v6; // ebx
  const struct _TlgProvider_t *v7; // rax
  const struct _TlgProvider_t *v8; // rsi
  const unsigned __int16 *v9; // rdx
  const unsigned __int16 *v10; // r10
  __int64 v11; // rax
  const unsigned __int16 *v12; // r8
  const unsigned __int16 *v13; // rdx
  const unsigned __int16 *v14; // r8
  const WCHAR *v15; // rdx
  const WCHAR *v16; // r11
  const WCHAR *v17; // r8
  const unsigned __int16 *v18; // rdx
  const unsigned __int16 *v19; // r8
  const unsigned __int16 *v20; // rdx
  const unsigned __int16 *v21; // r8
  const WCHAR *v22; // rdx
  const WCHAR *v23; // r8
  const unsigned __int16 *v24; // rdx
  const WCHAR *v25; // rdx
  const unsigned __int16 *v26; // rdx
  const unsigned __int16 *v27; // r10
  __int64 v28; // rax
  const unsigned __int16 *v29; // r8
  const unsigned __int16 *v30; // rdx
  const unsigned __int16 *v31; // r8
  const WCHAR *v32; // rdx
  const WCHAR *v33; // r11
  const WCHAR *v34; // r8
  const unsigned __int16 *v35; // rdx
  const unsigned __int16 *v36; // r8
  const unsigned __int16 *v37; // rdx
  const unsigned __int16 *v38; // r8
  const WCHAR *v39; // rdx
  const WCHAR *v40; // r8
  const unsigned __int16 *v41; // rdx
  const unsigned __int16 *v42; // r8
  const WCHAR *v43; // rdx
  const unsigned __int16 *v44; // rdx
  _DWORD *v45; // rcx
  int v46; // eax
  int v48; // [rsp+30h] [rbp-D0h] BYREF
  int v49; // [rsp+34h] [rbp-CCh] BYREF
  int v50; // [rsp+38h] [rbp-C8h] BYREF
  int v51; // [rsp+3Ch] [rbp-C4h] BYREF
  int v52; // [rsp+40h] [rbp-C0h] BYREF
  int v53; // [rsp+44h] [rbp-BCh] BYREF
  int v54; // [rsp+48h] [rbp-B8h] BYREF
  int v55; // [rsp+4Ch] [rbp-B4h] BYREF
  int v56; // [rsp+50h] [rbp-B0h] BYREF
  int v57; // [rsp+54h] [rbp-ACh] BYREF
  int v58; // [rsp+58h] [rbp-A8h] BYREF
  int v59; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v60; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v61; // [rsp+68h] [rbp-98h] BYREF
  PSRWLOCK SRWLock; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR v63; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v64; // [rsp+A0h] [rbp-60h]
  __int64 v65; // [rsp+A8h] [rbp-58h]
  int *v66; // [rsp+B0h] [rbp-50h]
  __int64 v67; // [rsp+B8h] [rbp-48h]
  const unsigned __int16 *v68; // [rsp+C0h] [rbp-40h]
  int v69; // [rsp+C8h] [rbp-38h]
  int v70; // [rsp+CCh] [rbp-34h]
  int *v71; // [rsp+D0h] [rbp-30h]
  __int64 v72; // [rsp+D8h] [rbp-28h]
  const unsigned __int16 *v73; // [rsp+E0h] [rbp-20h]
  int v74; // [rsp+E8h] [rbp-18h]
  int v75; // [rsp+ECh] [rbp-14h]
  int *v76; // [rsp+F0h] [rbp-10h]
  __int64 v77; // [rsp+F8h] [rbp-8h]
  const WCHAR *v78; // [rsp+100h] [rbp+0h]
  int v79; // [rsp+108h] [rbp+8h]
  int v80; // [rsp+10Ch] [rbp+Ch]
  int *v81; // [rsp+110h] [rbp+10h]
  __int64 v82; // [rsp+118h] [rbp+18h]
  const unsigned __int16 *v83; // [rsp+120h] [rbp+20h]
  int v84; // [rsp+128h] [rbp+28h]
  int v85; // [rsp+12Ch] [rbp+2Ch]
  int *v86; // [rsp+130h] [rbp+30h]
  __int64 v87; // [rsp+138h] [rbp+38h]
  const unsigned __int16 *v88; // [rsp+140h] [rbp+40h]
  int v89; // [rsp+148h] [rbp+48h]
  int v90; // [rsp+14Ch] [rbp+4Ch]
  const WCHAR *v91; // [rsp+150h] [rbp+50h]
  int v92; // [rsp+158h] [rbp+58h]
  int v93; // [rsp+15Ch] [rbp+5Ch]
  int *v94; // [rsp+160h] [rbp+60h]
  __int64 v95; // [rsp+168h] [rbp+68h]
  const unsigned __int16 *v96; // [rsp+170h] [rbp+70h]
  int v97; // [rsp+178h] [rbp+78h]
  int v98; // [rsp+17Ch] [rbp+7Ch]
  const WCHAR *v99; // [rsp+180h] [rbp+80h]
  int v100; // [rsp+188h] [rbp+88h]
  int v101; // [rsp+18Ch] [rbp+8Ch]
  int *v102; // [rsp+190h] [rbp+90h]
  __int64 v103; // [rsp+198h] [rbp+98h]
  int *v104; // [rsp+1A0h] [rbp+A0h]
  __int64 v105; // [rsp+1A8h] [rbp+A8h]
  const unsigned __int16 *v106; // [rsp+1B0h] [rbp+B0h]
  int v107; // [rsp+1B8h] [rbp+B8h]
  int v108; // [rsp+1BCh] [rbp+BCh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 *v110; // [rsp+1E0h] [rbp+E0h]
  __int64 v111; // [rsp+1E8h] [rbp+E8h]
  int *v112; // [rsp+1F0h] [rbp+F0h]
  __int64 v113; // [rsp+1F8h] [rbp+F8h]
  const unsigned __int16 *v114; // [rsp+200h] [rbp+100h]
  int v115; // [rsp+208h] [rbp+108h]
  int v116; // [rsp+20Ch] [rbp+10Ch]
  int *v117; // [rsp+210h] [rbp+110h]
  __int64 v118; // [rsp+218h] [rbp+118h]
  const unsigned __int16 *v119; // [rsp+220h] [rbp+120h]
  int v120; // [rsp+228h] [rbp+128h]
  int v121; // [rsp+22Ch] [rbp+12Ch]
  int *v122; // [rsp+230h] [rbp+130h]
  __int64 v123; // [rsp+238h] [rbp+138h]
  const WCHAR *v124; // [rsp+240h] [rbp+140h]
  int v125; // [rsp+248h] [rbp+148h]
  int v126; // [rsp+24Ch] [rbp+14Ch]
  int *v127; // [rsp+250h] [rbp+150h]
  __int64 v128; // [rsp+258h] [rbp+158h]
  const unsigned __int16 *v129; // [rsp+260h] [rbp+160h]
  int v130; // [rsp+268h] [rbp+168h]
  int v131; // [rsp+26Ch] [rbp+16Ch]
  int *v132; // [rsp+270h] [rbp+170h]
  __int64 v133; // [rsp+278h] [rbp+178h]
  const unsigned __int16 *v134; // [rsp+280h] [rbp+180h]
  int v135; // [rsp+288h] [rbp+188h]
  int v136; // [rsp+28Ch] [rbp+18Ch]
  const WCHAR *v137; // [rsp+290h] [rbp+190h]
  int v138; // [rsp+298h] [rbp+198h]
  int v139; // [rsp+29Ch] [rbp+19Ch]
  int *v140; // [rsp+2A0h] [rbp+1A0h]
  __int64 v141; // [rsp+2A8h] [rbp+1A8h]
  const unsigned __int16 *v142; // [rsp+2B0h] [rbp+1B0h]
  int v143; // [rsp+2B8h] [rbp+1B8h]
  int v144; // [rsp+2BCh] [rbp+1BCh]
  const WCHAR *v145; // [rsp+2C0h] [rbp+1C0h]
  int v146; // [rsp+2C8h] [rbp+1C8h]
  int v147; // [rsp+2CCh] [rbp+1CCh]

  v3 = a2[2];
  v4 = `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen == v3;
  `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen = v3;
  v6 = !v4;
  v7 = CDMUtilsUnlockLogging::Provider();
  v8 = v7;
  if ( v6 )
  {
    if ( *(_DWORD *)v7 > 2u
      && (*((_QWORD *)v7 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v7 + 3) & 0x200000000000LL) == *((_QWORD *)v7 + 3) )
    {
      v9 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
      v110 = &v60;
      v10 = &word_1800FD1E0;
      v48 = a2[1];
      v112 = &v48;
      LODWORD(v11) = 0;
      v60 = 0x1000000LL;
      v12 = &word_1800FD1E0;
      v111 = 8LL;
      v113 = 4LL;
      if ( v9 )
      {
        v12 = v9;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v9 + v11) );
      }
      v13 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
      v115 = v11 + 1;
      v117 = a2 + 14;
      LODWORD(v11) = 0;
      v114 = v12;
      v14 = &word_1800FD1E0;
      v116 = 0;
      v118 = 4LL;
      if ( v13 )
      {
        v14 = v13;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v13 + v11) );
      }
      v15 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v16 = &Src;
      v119 = v14;
      v120 = v11 + 1;
      v17 = &Src;
      v49 = *a2;
      v122 = &v49;
      LODWORD(v11) = 0;
      v121 = 0;
      v123 = 4LL;
      if ( v15 )
      {
        v17 = v15;
        v11 = -1LL;
        do
          ++v11;
        while ( v15[v11] );
      }
      v18 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
      v125 = 2 * v11 + 2;
      v50 = a2[6];
      v127 = &v50;
      LODWORD(v11) = 0;
      v124 = v17;
      v19 = &word_1800FD1E0;
      v126 = 0;
      v128 = 4LL;
      if ( v18 )
      {
        v19 = v18;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v18 + v11) );
      }
      v20 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
      v130 = v11 + 1;
      v51 = a2[18];
      v132 = &v51;
      LODWORD(v11) = 0;
      v129 = v19;
      v21 = &word_1800FD1E0;
      v131 = 0;
      v133 = 4LL;
      if ( v20 )
      {
        v21 = v20;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v20 + v11) );
      }
      v22 = (const WCHAR *)*((_QWORD *)a2 + 11);
      v135 = v11 + 1;
      LODWORD(v11) = 0;
      v134 = v21;
      v23 = &Src;
      v136 = 0;
      if ( v22 )
      {
        v23 = v22;
        v11 = -1LL;
        do
          ++v11;
        while ( v22[v11] );
      }
      v24 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
      v138 = 2 * v11 + 2;
      v52 = a2[24];
      v140 = &v52;
      LODWORD(v11) = 0;
      v137 = v23;
      v139 = 0;
      v141 = 4LL;
      if ( v24 )
      {
        v10 = v24;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v24 + v11) );
      }
      v25 = (const WCHAR *)*((_QWORD *)a2 + 14);
      v143 = v11 + 1;
      LODWORD(v11) = 0;
      v142 = v10;
      v144 = 0;
      if ( v25 )
      {
        v16 = v25;
        v11 = -1LL;
        do
          ++v11;
        while ( v25[v11] );
      }
      v145 = v16;
      v146 = 2 * v11 + 2;
      v147 = 0;
      TlgWrite(v8, &unk_18016B8B5, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x11u, &pData);
    }
  }
  else if ( *(_DWORD *)v7 > 2u )
  {
    v26 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
    v64 = &v61;
    v27 = &word_1800FD1E0;
    v53 = a2[1];
    v66 = &v53;
    LODWORD(v28) = 0;
    v61 = 0x1000000LL;
    v29 = &word_1800FD1E0;
    v65 = 8LL;
    v67 = 4LL;
    if ( v26 )
    {
      v29 = v26;
      v28 = -1LL;
      do
        ++v28;
      while ( *((_BYTE *)v26 + v28) );
    }
    v30 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
    v69 = v28 + 1;
    v71 = a2 + 14;
    LODWORD(v28) = 0;
    v68 = v29;
    v31 = &word_1800FD1E0;
    v70 = 0;
    v72 = 4LL;
    if ( v30 )
    {
      v31 = v30;
      v28 = -1LL;
      do
        ++v28;
      while ( *((_BYTE *)v30 + v28) );
    }
    v32 = (const WCHAR *)*((_QWORD *)a2 + 2);
    v33 = &Src;
    v73 = v31;
    v74 = v28 + 1;
    v34 = &Src;
    v54 = *a2;
    v76 = &v54;
    LODWORD(v28) = 0;
    v75 = 0;
    v77 = 4LL;
    if ( v32 )
    {
      v34 = v32;
      v28 = -1LL;
      do
        ++v28;
      while ( v32[v28] );
    }
    v35 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
    v79 = 2 * v28 + 2;
    v55 = a2[6];
    v81 = &v55;
    LODWORD(v28) = 0;
    v78 = v34;
    v36 = &word_1800FD1E0;
    v80 = 0;
    v82 = 4LL;
    if ( v35 )
    {
      v36 = v35;
      v28 = -1LL;
      do
        ++v28;
      while ( *((_BYTE *)v35 + v28) );
    }
    v37 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
    v84 = v28 + 1;
    v56 = a2[18];
    v86 = &v56;
    LODWORD(v28) = 0;
    v83 = v36;
    v38 = &word_1800FD1E0;
    v85 = 0;
    v87 = 4LL;
    if ( v37 )
    {
      v38 = v37;
      v28 = -1LL;
      do
        ++v28;
      while ( *((_BYTE *)v37 + v28) );
    }
    v39 = (const WCHAR *)*((_QWORD *)a2 + 11);
    v89 = v28 + 1;
    LODWORD(v28) = 0;
    v88 = v38;
    v40 = &Src;
    v90 = 0;
    if ( v39 )
    {
      v40 = v39;
      v28 = -1LL;
      do
        ++v28;
      while ( v39[v28] );
    }
    v41 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
    v92 = 2 * v28 + 2;
    v57 = a2[24];
    v94 = &v57;
    LODWORD(v28) = 0;
    v91 = v40;
    v42 = &word_1800FD1E0;
    v93 = 0;
    v95 = 4LL;
    if ( v41 )
    {
      v42 = v41;
      v28 = -1LL;
      do
        ++v28;
      while ( *((_BYTE *)v41 + v28) );
    }
    v43 = (const WCHAR *)*((_QWORD *)a2 + 14);
    v97 = v28 + 1;
    LODWORD(v28) = 0;
    v96 = v42;
    v98 = 0;
    if ( v43 )
    {
      v33 = v43;
      v28 = -1LL;
      do
        ++v28;
      while ( v43[v28] );
    }
    v44 = (const unsigned __int16 *)*((_QWORD *)a2 + 5);
    v100 = 2 * v28 + 2;
    v58 = a2[2];
    v102 = &v58;
    v59 = a2[15];
    v104 = &v59;
    LODWORD(v28) = 0;
    v99 = v33;
    v101 = 0;
    v103 = 4LL;
    v105 = 4LL;
    if ( v44 )
    {
      v27 = v44;
      v28 = -1LL;
      do
        ++v28;
      while ( *((_BYTE *)v44 + v28) );
    }
    v106 = v27;
    v107 = v28 + 1;
    v108 = 0;
    TlgWrite(v8, &unk_18016B654, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x14u, &v63);
  }
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v45 = *(_DWORD **)(a1 + 48);
  v46 = a2[1];
  if ( v46 != v45[21] && (v46 != v45[19] || (int)v45[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v45 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
