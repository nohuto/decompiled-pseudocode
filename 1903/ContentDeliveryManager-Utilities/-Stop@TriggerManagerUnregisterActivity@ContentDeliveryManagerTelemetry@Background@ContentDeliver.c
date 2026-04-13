/*
 * XREFs of ?Stop@TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x180062B80
 * Callers:
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x180065714 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001F98C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180023D7C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180030790 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerUnregisterActivity::Stop(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerUnregisterActivity *this,
        const char *a2)
{
  int *v2; // rbx
  int v5; // eax
  int *v6; // rbx
  RTL_SRWLOCK *v7; // rcx
  const struct _TlgProvider_t *v8; // r11
  const unsigned __int16 *v9; // rdx
  const unsigned __int16 *v10; // r8
  __int64 v11; // rax
  const unsigned __int16 *v12; // rdx
  const unsigned __int16 *v13; // r8
  const WCHAR *v14; // rdx
  const WCHAR *v15; // r9
  const WCHAR *v16; // r8
  const unsigned __int16 *v17; // rdx
  const unsigned __int16 *v18; // r8
  const unsigned __int16 *v19; // rdx
  const unsigned __int16 *v20; // r8
  const WCHAR *v21; // rdx
  const WCHAR *v22; // r8
  const unsigned __int16 *v23; // rdx
  const unsigned __int16 *v24; // r8
  const WCHAR *v25; // rdx
  const unsigned __int16 *v26; // rdx
  const unsigned __int16 *v27; // r8
  bool v28; // zf
  RTL_SRWLOCK *v29; // rcx
  const struct _TlgProvider_t *v30; // rbx
  __int64 v31; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v33; // rcx
  __int64 **v34; // rbx
  __int64 *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // [rsp+38h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-C8h] BYREF
  int v39; // [rsp+48h] [rbp-C0h] BYREF
  int v40; // [rsp+4Ch] [rbp-BCh] BYREF
  int v41; // [rsp+50h] [rbp-B8h] BYREF
  int v42; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v43; // [rsp+58h] [rbp-B0h] BYREF
  PSRWLOCK v44; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v46; // [rsp+88h] [rbp-80h]
  __int64 v47; // [rsp+90h] [rbp-78h]
  PSRWLOCK *v48; // [rsp+98h] [rbp-70h]
  __int64 v49; // [rsp+A0h] [rbp-68h]
  int *v50; // [rsp+A8h] [rbp-60h]
  __int64 v51; // [rsp+B0h] [rbp-58h]
  const unsigned __int16 *v52; // [rsp+B8h] [rbp-50h]
  int v53; // [rsp+C0h] [rbp-48h]
  int v54; // [rsp+C4h] [rbp-44h]
  int *v55; // [rsp+C8h] [rbp-40h]
  __int64 v56; // [rsp+D0h] [rbp-38h]
  const unsigned __int16 *v57; // [rsp+D8h] [rbp-30h]
  int v58; // [rsp+E0h] [rbp-28h]
  int v59; // [rsp+E4h] [rbp-24h]
  int *v60; // [rsp+E8h] [rbp-20h]
  __int64 v61; // [rsp+F0h] [rbp-18h]
  const WCHAR *v62; // [rsp+F8h] [rbp-10h]
  int v63; // [rsp+100h] [rbp-8h]
  int v64; // [rsp+104h] [rbp-4h]
  int *v65; // [rsp+108h] [rbp+0h]
  __int64 v66; // [rsp+110h] [rbp+8h]
  const unsigned __int16 *v67; // [rsp+118h] [rbp+10h]
  int v68; // [rsp+120h] [rbp+18h]
  int v69; // [rsp+124h] [rbp+1Ch]
  int *v70; // [rsp+128h] [rbp+20h]
  __int64 v71; // [rsp+130h] [rbp+28h]
  const unsigned __int16 *v72; // [rsp+138h] [rbp+30h]
  int v73; // [rsp+140h] [rbp+38h]
  int v74; // [rsp+144h] [rbp+3Ch]
  const WCHAR *v75; // [rsp+148h] [rbp+40h]
  int v76; // [rsp+150h] [rbp+48h]
  int v77; // [rsp+154h] [rbp+4Ch]
  __int64 *v78; // [rsp+158h] [rbp+50h]
  __int64 v79; // [rsp+160h] [rbp+58h]
  const unsigned __int16 *v80; // [rsp+168h] [rbp+60h]
  int v81; // [rsp+170h] [rbp+68h]
  int v82; // [rsp+174h] [rbp+6Ch]
  const WCHAR *v83; // [rsp+178h] [rbp+70h]
  int v84; // [rsp+180h] [rbp+78h]
  int v85; // [rsp+184h] [rbp+7Ch]
  __int64 *v86; // [rsp+188h] [rbp+80h]
  __int64 v87; // [rsp+190h] [rbp+88h]
  PSRWLOCK *p_SRWLock; // [rsp+198h] [rbp+90h]
  __int64 v89; // [rsp+1A0h] [rbp+98h]
  const unsigned __int16 *v90; // [rsp+1A8h] [rbp+A0h]
  int v91; // [rsp+1B0h] [rbp+A8h]
  int v92; // [rsp+1B4h] [rbp+ACh]
  const char *v93; // [rsp+1B8h] [rbp+B0h]
  int v94; // [rsp+1C0h] [rbp+B8h]
  int v95; // [rsp+1C4h] [rbp+BCh]
  EVENT_DATA_DESCRIPTOR v96; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 *v97; // [rsp+1E8h] [rbp+E0h]
  __int64 v98; // [rsp+1F0h] [rbp+E8h]
  PSRWLOCK *v99; // [rsp+1F8h] [rbp+F0h]
  __int64 v100; // [rsp+200h] [rbp+F8h]
  __int64 *v101; // [rsp+208h] [rbp+100h]
  __int64 v102; // [rsp+210h] [rbp+108h]
  const char *v103; // [rsp+218h] [rbp+110h]
  int v104; // [rsp+220h] [rbp+118h]
  int v105; // [rsp+224h] [rbp+11Ch]
  wil::details::in1diag3 *retaddr; // [rsp+250h] [rbp+148h]

  v2 = (int *)*((_QWORD *)this + 6);
  v5 = v2[19];
  if ( v5 < 0 && v5 == v2[21] )
    v6 = v2 + 20;
  else
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
    v8 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v8 > 5u )
    {
      v9 = (const unsigned __int16 *)*((_QWORD *)v6 + 6);
      v46 = &`CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v47 = 8LL;
      v48 = &v44;
      v10 = &word_1800FD1E0;
      v39 = v6[1];
      v50 = &v39;
      LODWORD(v11) = 0;
      v44 = (PSRWLOCK)0x1000000;
      v49 = 8LL;
      v51 = 4LL;
      if ( v9 )
      {
        v10 = v9;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v9 + v11) );
      }
      v12 = (const unsigned __int16 *)*((_QWORD *)v6 + 15);
      v53 = v11 + 1;
      v55 = v6 + 14;
      LODWORD(v11) = 0;
      v52 = v10;
      v13 = &word_1800FD1E0;
      v54 = 0;
      v56 = 4LL;
      if ( v12 )
      {
        v13 = v12;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v12 + v11) );
      }
      v14 = (const WCHAR *)*((_QWORD *)v6 + 2);
      v15 = &Src;
      v57 = v13;
      v58 = v11 + 1;
      v16 = &Src;
      v40 = *v6;
      v60 = &v40;
      LODWORD(v11) = 0;
      v59 = 0;
      v61 = 4LL;
      if ( v14 )
      {
        v16 = v14;
        v11 = -1LL;
        do
          ++v11;
        while ( v14[v11] );
      }
      v17 = (const unsigned __int16 *)*((_QWORD *)v6 + 8);
      v63 = 2 * v11 + 2;
      v41 = v6[6];
      v65 = &v41;
      LODWORD(v11) = 0;
      v62 = v16;
      v18 = &word_1800FD1E0;
      v64 = 0;
      v66 = 4LL;
      if ( v17 )
      {
        v18 = v17;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v17 + v11) );
      }
      v19 = (const unsigned __int16 *)*((_QWORD *)v6 + 10);
      v68 = v11 + 1;
      v42 = v6[18];
      v70 = &v42;
      LODWORD(v11) = 0;
      v67 = v18;
      v20 = &word_1800FD1E0;
      v69 = 0;
      v71 = 4LL;
      if ( v19 )
      {
        v20 = v19;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v19 + v11) );
      }
      v21 = (const WCHAR *)*((_QWORD *)v6 + 11);
      v73 = v11 + 1;
      LODWORD(v11) = 0;
      v72 = v20;
      v22 = &Src;
      v74 = 0;
      if ( v21 )
      {
        v22 = v21;
        v11 = -1LL;
        do
          ++v11;
        while ( v21[v11] );
      }
      v23 = (const unsigned __int16 *)*((_QWORD *)v6 + 13);
      v76 = 2 * v11 + 2;
      LODWORD(v43) = v6[24];
      v78 = &v43;
      LODWORD(v11) = 0;
      v75 = v22;
      v24 = &word_1800FD1E0;
      v77 = 0;
      v79 = 4LL;
      if ( v23 )
      {
        v24 = v23;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v23 + v11) );
      }
      v25 = (const WCHAR *)*((_QWORD *)v6 + 14);
      v81 = v11 + 1;
      LODWORD(v11) = 0;
      v80 = v24;
      v82 = 0;
      if ( v25 )
      {
        v15 = v25;
        v11 = -1LL;
        do
          ++v11;
        while ( v25[v11] );
      }
      v26 = (const unsigned __int16 *)*((_QWORD *)v6 + 5);
      v84 = 2 * v11 + 2;
      v27 = &word_1800FD1E0;
      LODWORD(v37) = v6[2];
      v86 = &v37;
      LODWORD(SRWLock) = v6[15];
      p_SRWLock = &SRWLock;
      LODWORD(v11) = 0;
      v83 = v15;
      v85 = 0;
      v87 = 4LL;
      v89 = 4LL;
      if ( v26 )
      {
        v27 = v26;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v26 + v11) );
      }
      v90 = v27;
      v91 = v11 + 1;
      LODWORD(v11) = 0;
      v92 = 0;
      v28 = a2 == 0LL;
      if ( a2 )
      {
        v11 = -1LL;
        do
          ++v11;
        while ( a2[v11] );
        v28 = a2 == 0LL;
      }
      if ( v28 )
        a2 = (const char *)&word_1800FD1E0;
      v95 = 0;
      v93 = a2;
      v94 = v11 + 1;
      TlgWrite(v8, &unk_18016E367, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x16u, &pData);
    }
  }
  else
  {
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      &v44);
    v29 = v44;
    **((_DWORD **)this + 6) = 2;
    if ( v29 )
      ReleaseSRWLockExclusive(v29);
    v30 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v30 > 5u )
    {
      v31 = *((_QWORD *)this + 6);
      v97 = &`CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v98 = 8LL;
      LODWORD(SRWLock) = *(_DWORD *)(v31 + 76);
      v99 = &SRWLock;
      v100 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v102 = 4LL;
      LODWORD(v33) = 0;
      LODWORD(v37) = CurrentThreadId;
      v101 = &v37;
      if ( a2 )
      {
        v33 = -1LL;
        do
          ++v33;
        while ( a2[v33] );
      }
      v105 = 0;
      v104 = v33 + 1;
      if ( !a2 )
        a2 = (const char *)&word_1800FD1E0;
      v103 = a2;
      TlgWrite(v30, &unk_18016E308, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &v96);
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
