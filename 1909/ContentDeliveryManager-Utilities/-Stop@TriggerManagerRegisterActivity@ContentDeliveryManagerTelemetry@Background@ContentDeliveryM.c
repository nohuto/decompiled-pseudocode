/*
 * XREFs of ?Stop@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAX_NPEBD@Z @ 0x1800622B0
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x180064D00 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001FE2C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800242EC (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180030BD0 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::Stop(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity *this,
        unsigned __int8 a2,
        const char *a3)
{
  int *v3; // rbx
  int v7; // eax
  int *v8; // rbx
  RTL_SRWLOCK *v9; // rcx
  const struct _TlgProvider_t *v10; // r11
  const unsigned __int16 *v11; // rdx
  const unsigned __int16 *v12; // r8
  __int64 v13; // rax
  const unsigned __int16 *v14; // rdx
  const unsigned __int16 *v15; // r8
  const WCHAR *v16; // rdx
  const WCHAR *v17; // r9
  const WCHAR *v18; // r8
  const unsigned __int16 *v19; // rdx
  const unsigned __int16 *v20; // r8
  const unsigned __int16 *v21; // rdx
  const unsigned __int16 *v22; // r8
  const WCHAR *v23; // rdx
  const WCHAR *v24; // r8
  const unsigned __int16 *v25; // rdx
  const unsigned __int16 *v26; // r8
  const WCHAR *v27; // rdx
  const unsigned __int16 *v28; // rdx
  const unsigned __int16 *v29; // r8
  bool v30; // zf
  RTL_SRWLOCK *v31; // rcx
  const struct _TlgProvider_t *v32; // rbx
  __int64 v33; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v35; // rcx
  __int64 **v36; // rbx
  __int64 *v37; // rcx
  __int64 v38; // rax
  int v39; // [rsp+30h] [rbp-D0h] BYREF
  DWORD v40; // [rsp+34h] [rbp-CCh] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v42; // [rsp+40h] [rbp-C0h] BYREF
  int v43; // [rsp+44h] [rbp-BCh] BYREF
  int v44; // [rsp+48h] [rbp-B8h] BYREF
  int v45; // [rsp+4Ch] [rbp-B4h] BYREF
  int v46; // [rsp+50h] [rbp-B0h] BYREF
  PSRWLOCK v47; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v49; // [rsp+80h] [rbp-80h]
  __int64 v50; // [rsp+88h] [rbp-78h]
  PSRWLOCK *v51; // [rsp+90h] [rbp-70h]
  __int64 v52; // [rsp+98h] [rbp-68h]
  int *v53; // [rsp+A0h] [rbp-60h]
  __int64 v54; // [rsp+A8h] [rbp-58h]
  const unsigned __int16 *v55; // [rsp+B0h] [rbp-50h]
  int v56; // [rsp+B8h] [rbp-48h]
  int v57; // [rsp+BCh] [rbp-44h]
  int *v58; // [rsp+C0h] [rbp-40h]
  __int64 v59; // [rsp+C8h] [rbp-38h]
  const unsigned __int16 *v60; // [rsp+D0h] [rbp-30h]
  int v61; // [rsp+D8h] [rbp-28h]
  int v62; // [rsp+DCh] [rbp-24h]
  int *v63; // [rsp+E0h] [rbp-20h]
  __int64 v64; // [rsp+E8h] [rbp-18h]
  const WCHAR *v65; // [rsp+F0h] [rbp-10h]
  int v66; // [rsp+F8h] [rbp-8h]
  int v67; // [rsp+FCh] [rbp-4h]
  int *v68; // [rsp+100h] [rbp+0h]
  __int64 v69; // [rsp+108h] [rbp+8h]
  const unsigned __int16 *v70; // [rsp+110h] [rbp+10h]
  int v71; // [rsp+118h] [rbp+18h]
  int v72; // [rsp+11Ch] [rbp+1Ch]
  int *v73; // [rsp+120h] [rbp+20h]
  __int64 v74; // [rsp+128h] [rbp+28h]
  const unsigned __int16 *v75; // [rsp+130h] [rbp+30h]
  int v76; // [rsp+138h] [rbp+38h]
  int v77; // [rsp+13Ch] [rbp+3Ch]
  const WCHAR *v78; // [rsp+140h] [rbp+40h]
  int v79; // [rsp+148h] [rbp+48h]
  int v80; // [rsp+14Ch] [rbp+4Ch]
  int *v81; // [rsp+150h] [rbp+50h]
  __int64 v82; // [rsp+158h] [rbp+58h]
  const unsigned __int16 *v83; // [rsp+160h] [rbp+60h]
  int v84; // [rsp+168h] [rbp+68h]
  int v85; // [rsp+16Ch] [rbp+6Ch]
  const WCHAR *v86; // [rsp+170h] [rbp+70h]
  int v87; // [rsp+178h] [rbp+78h]
  int v88; // [rsp+17Ch] [rbp+7Ch]
  int *v89; // [rsp+180h] [rbp+80h]
  __int64 v90; // [rsp+188h] [rbp+88h]
  DWORD *v91; // [rsp+190h] [rbp+90h]
  __int64 v92; // [rsp+198h] [rbp+98h]
  const unsigned __int16 *v93; // [rsp+1A0h] [rbp+A0h]
  int v94; // [rsp+1A8h] [rbp+A8h]
  int v95; // [rsp+1ACh] [rbp+ACh]
  PSRWLOCK *p_SRWLock; // [rsp+1B0h] [rbp+B0h]
  __int64 v97; // [rsp+1B8h] [rbp+B8h]
  const char *v98; // [rsp+1C0h] [rbp+C0h]
  int v99; // [rsp+1C8h] [rbp+C8h]
  int v100; // [rsp+1CCh] [rbp+CCh]
  EVENT_DATA_DESCRIPTOR v101; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 *v102; // [rsp+1F0h] [rbp+F0h]
  __int64 v103; // [rsp+1F8h] [rbp+F8h]
  PSRWLOCK *v104; // [rsp+200h] [rbp+100h]
  __int64 v105; // [rsp+208h] [rbp+108h]
  DWORD *v106; // [rsp+210h] [rbp+110h]
  __int64 v107; // [rsp+218h] [rbp+118h]
  int *v108; // [rsp+220h] [rbp+120h]
  __int64 v109; // [rsp+228h] [rbp+128h]
  const char *v110; // [rsp+230h] [rbp+130h]
  int v111; // [rsp+238h] [rbp+138h]
  int v112; // [rsp+23Ch] [rbp+13Ch]
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  v3 = (int *)*((_QWORD *)this + 6);
  v7 = v3[19];
  if ( v7 < 0 && v7 == v3[21] )
    v8 = v3 + 20;
  else
    v8 = 0LL;
  if ( v8 )
  {
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      &SRWLock);
    v9 = SRWLock;
    **((_DWORD **)this + 6) = 2;
    if ( v9 )
      ReleaseSRWLockExclusive(v9);
    v10 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v10 > 5u )
    {
      v11 = (const unsigned __int16 *)*((_QWORD *)v8 + 6);
      v49 = &`CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v50 = 8LL;
      v51 = &v47;
      v12 = &word_1800FD7D0;
      v42 = v8[1];
      v53 = &v42;
      LODWORD(v13) = 0;
      v47 = (PSRWLOCK)0x1000000;
      v52 = 8LL;
      v54 = 4LL;
      if ( v11 )
      {
        v12 = v11;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v11 + v13) );
      }
      v14 = (const unsigned __int16 *)*((_QWORD *)v8 + 15);
      v56 = v13 + 1;
      v58 = v8 + 14;
      LODWORD(v13) = 0;
      v55 = v12;
      v15 = &word_1800FD7D0;
      v57 = 0;
      v59 = 4LL;
      if ( v14 )
      {
        v15 = v14;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v14 + v13) );
      }
      v16 = (const WCHAR *)*((_QWORD *)v8 + 2);
      v17 = &Src;
      v60 = v15;
      v61 = v13 + 1;
      v18 = &Src;
      v43 = *v8;
      v63 = &v43;
      LODWORD(v13) = 0;
      v62 = 0;
      v64 = 4LL;
      if ( v16 )
      {
        v18 = v16;
        v13 = -1LL;
        do
          ++v13;
        while ( v16[v13] );
      }
      v19 = (const unsigned __int16 *)*((_QWORD *)v8 + 8);
      v66 = 2 * v13 + 2;
      v44 = v8[6];
      v68 = &v44;
      LODWORD(v13) = 0;
      v65 = v18;
      v20 = &word_1800FD7D0;
      v67 = 0;
      v69 = 4LL;
      if ( v19 )
      {
        v20 = v19;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v19 + v13) );
      }
      v21 = (const unsigned __int16 *)*((_QWORD *)v8 + 10);
      v71 = v13 + 1;
      v45 = v8[18];
      v73 = &v45;
      LODWORD(v13) = 0;
      v70 = v20;
      v22 = &word_1800FD7D0;
      v72 = 0;
      v74 = 4LL;
      if ( v21 )
      {
        v22 = v21;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v21 + v13) );
      }
      v23 = (const WCHAR *)*((_QWORD *)v8 + 11);
      v76 = v13 + 1;
      LODWORD(v13) = 0;
      v75 = v22;
      v24 = &Src;
      v77 = 0;
      if ( v23 )
      {
        v24 = v23;
        v13 = -1LL;
        do
          ++v13;
        while ( v23[v13] );
      }
      v25 = (const unsigned __int16 *)*((_QWORD *)v8 + 13);
      v79 = 2 * v13 + 2;
      v46 = v8[24];
      v81 = &v46;
      LODWORD(v13) = 0;
      v78 = v24;
      v26 = &word_1800FD7D0;
      v80 = 0;
      v82 = 4LL;
      if ( v25 )
      {
        v26 = v25;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v25 + v13) );
      }
      v27 = (const WCHAR *)*((_QWORD *)v8 + 14);
      v84 = v13 + 1;
      LODWORD(v13) = 0;
      v83 = v26;
      v85 = 0;
      if ( v27 )
      {
        v17 = v27;
        v13 = -1LL;
        do
          ++v13;
        while ( v27[v13] );
      }
      v28 = (const unsigned __int16 *)*((_QWORD *)v8 + 5);
      v87 = 2 * v13 + 2;
      v29 = &word_1800FD7D0;
      v39 = v8[2];
      v89 = &v39;
      v40 = v8[15];
      v91 = &v40;
      LODWORD(v13) = 0;
      v86 = v17;
      v88 = 0;
      v90 = 4LL;
      v92 = 4LL;
      if ( v28 )
      {
        v29 = v28;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v28 + v13) );
      }
      v93 = v29;
      v94 = v13 + 1;
      LODWORD(SRWLock) = a2;
      p_SRWLock = &SRWLock;
      LODWORD(v13) = 0;
      v95 = 0;
      v97 = 4LL;
      v30 = a3 == 0LL;
      if ( a3 )
      {
        v13 = -1LL;
        do
          ++v13;
        while ( a3[v13] );
        v30 = a3 == 0LL;
      }
      if ( v30 )
        a3 = (const char *)&word_1800FD7D0;
      v100 = 0;
      v98 = a3;
      v99 = v13 + 1;
      TlgWrite(v10, &unk_18016E45E, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x17u, &pData);
    }
  }
  else
  {
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      &v47);
    v31 = v47;
    **((_DWORD **)this + 6) = 2;
    if ( v31 )
      ReleaseSRWLockExclusive(v31);
    v32 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v32 > 5u )
    {
      v33 = *((_QWORD *)this + 6);
      v102 = &`CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v103 = 8LL;
      LODWORD(SRWLock) = *(_DWORD *)(v33 + 76);
      v104 = &SRWLock;
      v105 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v107 = 4LL;
      LODWORD(v35) = 0;
      v40 = CurrentThreadId;
      v106 = &v40;
      v39 = a2;
      v108 = &v39;
      v109 = 4LL;
      if ( a3 )
      {
        v35 = -1LL;
        do
          ++v35;
        while ( a3[v35] );
      }
      v112 = 0;
      v111 = v35 + 1;
      if ( !a3 )
        a3 = (const char *)&word_1800FD7D0;
      v110 = a3;
      TlgWrite(v32, &unk_18016E287, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 7u, &v101);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v36 = (__int64 **)((char *)this + 8);
    if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3A9,
        (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL);
    v37 = *v36;
    *((_DWORD *)this + 8) = 0;
    while ( 1 )
    {
      v38 = *v37;
      if ( !*v37 )
        break;
      if ( (__int64 **)v38 == v36 )
      {
        *v37 = *((_QWORD *)this + 3);
        break;
      }
      v37 = (__int64 *)(v38 + 16);
      *v36 = (__int64 *)(v38 + 16);
    }
    *v36 = 0LL;
  }
}
