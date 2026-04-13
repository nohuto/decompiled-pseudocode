/*
 * XREFs of ?Stop@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAAXPEBD@Z @ 0x180045B20
 * Callers:
 *     _lambda_ff7cfae8cddf8b4979caf74bf72ddb07_::operator() @ 0x180047650 (_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ @ 0x18000A6F0 (-Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180023D7C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180030790 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 */

void __fastcall MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::Stop(
        MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *this,
        const char *a2)
{
  int *v2; // rax
  int v5; // r8d
  int *v6; // rbx
  RTL_SRWLOCK *v7; // rcx
  const struct _TlgProvider_t *v8; // rax
  const struct _TlgProvider_t *v9; // r10
  const unsigned __int16 *v10; // rdx
  const unsigned __int16 *v11; // r8
  __int64 v12; // rax
  const unsigned __int16 *v13; // rdx
  const unsigned __int16 *v14; // r8
  const WCHAR *v15; // rdx
  const WCHAR *v16; // r9
  const WCHAR *v17; // r8
  const unsigned __int16 *v18; // rdx
  const unsigned __int16 *v19; // r8
  const unsigned __int16 *v20; // rdx
  const unsigned __int16 *v21; // r8
  const WCHAR *v22; // rdx
  const WCHAR *v23; // r8
  const unsigned __int16 *v24; // rdx
  const unsigned __int16 *v25; // r8
  const WCHAR *v26; // rdx
  bool v27; // zf
  RTL_SRWLOCK *v28; // rcx
  const struct _TlgProvider_t *v29; // rax
  const struct _TlgProvider_t *v30; // rbx
  int v31; // ecx
  DWORD CurrentThreadId; // eax
  __int64 v33; // rcx
  __int64 **v34; // rbx
  __int64 *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // [rsp+38h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-C8h] BYREF
  int v39; // [rsp+48h] [rbp-C0h] BYREF
  int v40; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v41; // [rsp+50h] [rbp-B8h] BYREF
  PSRWLOCK v42[2]; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v44; // [rsp+88h] [rbp-80h]
  __int64 v45; // [rsp+90h] [rbp-78h]
  PSRWLOCK *v46; // [rsp+98h] [rbp-70h]
  __int64 v47; // [rsp+A0h] [rbp-68h]
  int *v48; // [rsp+A8h] [rbp-60h]
  __int64 v49; // [rsp+B0h] [rbp-58h]
  const unsigned __int16 *v50; // [rsp+B8h] [rbp-50h]
  int v51; // [rsp+C0h] [rbp-48h]
  int v52; // [rsp+C4h] [rbp-44h]
  int *v53; // [rsp+C8h] [rbp-40h]
  __int64 v54; // [rsp+D0h] [rbp-38h]
  const unsigned __int16 *v55; // [rsp+D8h] [rbp-30h]
  int v56; // [rsp+E0h] [rbp-28h]
  int v57; // [rsp+E4h] [rbp-24h]
  int *v58; // [rsp+E8h] [rbp-20h]
  __int64 v59; // [rsp+F0h] [rbp-18h]
  const WCHAR *v60; // [rsp+F8h] [rbp-10h]
  int v61; // [rsp+100h] [rbp-8h]
  int v62; // [rsp+104h] [rbp-4h]
  __int64 *v63; // [rsp+108h] [rbp+0h]
  __int64 v64; // [rsp+110h] [rbp+8h]
  const unsigned __int16 *v65; // [rsp+118h] [rbp+10h]
  int v66; // [rsp+120h] [rbp+18h]
  int v67; // [rsp+124h] [rbp+1Ch]
  __int64 *v68; // [rsp+128h] [rbp+20h]
  __int64 v69; // [rsp+130h] [rbp+28h]
  const unsigned __int16 *v70; // [rsp+138h] [rbp+30h]
  int v71; // [rsp+140h] [rbp+38h]
  int v72; // [rsp+144h] [rbp+3Ch]
  const WCHAR *v73; // [rsp+148h] [rbp+40h]
  int v74; // [rsp+150h] [rbp+48h]
  int v75; // [rsp+154h] [rbp+4Ch]
  PSRWLOCK *p_SRWLock; // [rsp+158h] [rbp+50h]
  __int64 v77; // [rsp+160h] [rbp+58h]
  const unsigned __int16 *v78; // [rsp+168h] [rbp+60h]
  int v79; // [rsp+170h] [rbp+68h]
  int v80; // [rsp+174h] [rbp+6Ch]
  const WCHAR *v81; // [rsp+178h] [rbp+70h]
  int v82; // [rsp+180h] [rbp+78h]
  int v83; // [rsp+184h] [rbp+7Ch]
  const char *v84; // [rsp+188h] [rbp+80h]
  int v85; // [rsp+190h] [rbp+88h]
  int v86; // [rsp+194h] [rbp+8Ch]
  EVENT_DATA_DESCRIPTOR v87; // [rsp+198h] [rbp+90h] BYREF
  __int64 *v88; // [rsp+1B8h] [rbp+B0h]
  __int64 v89; // [rsp+1C0h] [rbp+B8h]
  PSRWLOCK *v90; // [rsp+1C8h] [rbp+C0h]
  __int64 v91; // [rsp+1D0h] [rbp+C8h]
  __int64 *v92; // [rsp+1D8h] [rbp+D0h]
  __int64 v93; // [rsp+1E0h] [rbp+D8h]
  const char *v94; // [rsp+1E8h] [rbp+E0h]
  int v95; // [rsp+1F0h] [rbp+E8h]
  int v96; // [rsp+1F4h] [rbp+ECh]
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  v2 = (int *)*((_QWORD *)this + 6);
  v5 = v2[19];
  if ( v5 >= 0 || (v6 = v2 + 20, v5 != v2[21]) )
    v6 = 0LL;
  if ( v6 )
  {
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      &SRWLock);
    v7 = SRWLock;
    **((_DWORD **)this + 6) = 2;
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    v8 = MobilityExperience::Telemetry::MobilityExperienceLogging::Provider();
    v9 = v8;
    if ( *(_DWORD *)v8 > 5u
      && (*((_QWORD *)v8 + 2) & 0x800000000000LL) != 0
      && (*((_QWORD *)v8 + 3) & 0x800000000000LL) == *((_QWORD *)v8 + 3) )
    {
      v10 = (const unsigned __int16 *)*((_QWORD *)v6 + 6);
      v44 = &`CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v45 = 8LL;
      v46 = v42;
      v11 = &word_1800FD1E0;
      v39 = v6[1];
      v48 = &v39;
      LODWORD(v12) = 0;
      v42[0] = (PSRWLOCK)0x1000000;
      v47 = 8LL;
      v49 = 4LL;
      if ( v10 )
      {
        v11 = v10;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v10 + v12) );
      }
      v13 = (const unsigned __int16 *)*((_QWORD *)v6 + 15);
      v51 = v12 + 1;
      v53 = v6 + 14;
      LODWORD(v12) = 0;
      v50 = v11;
      v14 = &word_1800FD1E0;
      v52 = 0;
      v54 = 4LL;
      if ( v13 )
      {
        v14 = v13;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v13 + v12) );
      }
      v15 = (const WCHAR *)*((_QWORD *)v6 + 2);
      v16 = &Src;
      v55 = v14;
      v56 = v12 + 1;
      v17 = &Src;
      v40 = *v6;
      v58 = &v40;
      LODWORD(v12) = 0;
      v57 = 0;
      v59 = 4LL;
      if ( v15 )
      {
        v17 = v15;
        v12 = -1LL;
        do
          ++v12;
        while ( v15[v12] );
      }
      v18 = (const unsigned __int16 *)*((_QWORD *)v6 + 8);
      v61 = 2 * v12 + 2;
      LODWORD(v41) = v6[6];
      v63 = &v41;
      LODWORD(v12) = 0;
      v60 = v17;
      v19 = &word_1800FD1E0;
      v62 = 0;
      v64 = 4LL;
      if ( v18 )
      {
        v19 = v18;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v18 + v12) );
      }
      v20 = (const unsigned __int16 *)*((_QWORD *)v6 + 10);
      v66 = v12 + 1;
      LODWORD(v37) = v6[18];
      v68 = &v37;
      LODWORD(v12) = 0;
      v65 = v19;
      v21 = &word_1800FD1E0;
      v67 = 0;
      v69 = 4LL;
      if ( v20 )
      {
        v21 = v20;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v20 + v12) );
      }
      v22 = (const WCHAR *)*((_QWORD *)v6 + 11);
      v71 = v12 + 1;
      LODWORD(v12) = 0;
      v70 = v21;
      v23 = &Src;
      v72 = 0;
      if ( v22 )
      {
        v23 = v22;
        v12 = -1LL;
        do
          ++v12;
        while ( v22[v12] );
      }
      v24 = (const unsigned __int16 *)*((_QWORD *)v6 + 13);
      v74 = 2 * v12 + 2;
      LODWORD(SRWLock) = v6[24];
      p_SRWLock = &SRWLock;
      LODWORD(v12) = 0;
      v73 = v23;
      v25 = &word_1800FD1E0;
      v75 = 0;
      v77 = 4LL;
      if ( v24 )
      {
        v25 = v24;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v24 + v12) );
      }
      v26 = (const WCHAR *)*((_QWORD *)v6 + 14);
      v79 = v12 + 1;
      LODWORD(v12) = 0;
      v78 = v25;
      v80 = 0;
      if ( v26 )
      {
        v16 = v26;
        v12 = -1LL;
        do
          ++v12;
        while ( v26[v12] );
      }
      v81 = v16;
      v82 = 2 * v12 + 2;
      LODWORD(v12) = 0;
      v83 = 0;
      v27 = a2 == 0LL;
      if ( a2 )
      {
        v12 = -1LL;
        do
          ++v12;
        while ( a2[v12] );
        v27 = a2 == 0LL;
      }
      if ( v27 )
        a2 = (const char *)&word_1800FD1E0;
      v86 = 0;
      v84 = a2;
      v85 = v12 + 1;
      TlgWrite(v9, &unk_18016C8CF, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      v42);
    v28 = v42[0];
    **((_DWORD **)this + 6) = 2;
    if ( v28 )
      ReleaseSRWLockExclusive(v28);
    v29 = MobilityExperience::Telemetry::MobilityExperienceLogging::Provider();
    v30 = v29;
    if ( *(_DWORD *)v29 > 5u
      && (*((_QWORD *)v29 + 2) & 0x800000000000LL) != 0
      && (*((_QWORD *)v29 + 3) & 0x800000000000LL) == *((_QWORD *)v29 + 3) )
    {
      v89 = 8LL;
      v88 = &`CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v31 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v90 = &SRWLock;
      LODWORD(SRWLock) = v31;
      v91 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v93 = 4LL;
      LODWORD(v33) = 0;
      LODWORD(v37) = CurrentThreadId;
      v92 = &v37;
      if ( a2 )
      {
        v33 = -1LL;
        do
          ++v33;
        while ( a2[v33] );
      }
      v96 = 0;
      v95 = v33 + 1;
      if ( !a2 )
        a2 = (const char *)&word_1800FD1E0;
      v94 = a2;
      TlgWrite(v30, &unk_18016C55C, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &v87);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v34 = (__int64 **)((char *)this + 8);
    if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3A9,
        (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL);
    v35 = *v34;
    *((_DWORD *)this + 8) = 0;
    while ( 1 )
    {
      v36 = *v35;
      if ( !*v35 )
        break;
      if ( (__int64 **)v36 == v34 )
      {
        *v35 = *((_QWORD *)this + 3);
        break;
      }
      v35 = (__int64 *)(v36 + 16);
      *v34 = (__int64 *)(v36 + 16);
    }
    *v34 = 0LL;
  }
}
