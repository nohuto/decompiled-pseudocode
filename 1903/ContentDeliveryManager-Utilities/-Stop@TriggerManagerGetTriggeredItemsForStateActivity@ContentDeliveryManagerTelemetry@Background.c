/*
 * XREFs of ?Stop@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIPEBD@Z @ 0x1800637F4
 * Callers:
 *     _lambda_b59dbdfd0007f2d89c20db91cc7697cd_::operator() @ 0x180066070 (_lambda_b59dbdfd0007f2d89c20db91cc7697cd_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001F98C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180023D7C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180030790 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::Stop(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *this,
        int a2,
        const char *a3)
{
  int *v3; // rbx
  int v6; // eax
  int *v7; // rbx
  RTL_SRWLOCK *v8; // rcx
  const struct _TlgProvider_t *v9; // r11
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
  const unsigned __int16 *v27; // rdx
  const unsigned __int16 *v28; // r8
  bool v29; // zf
  RTL_SRWLOCK *v30; // rcx
  const struct _TlgProvider_t *v31; // rbx
  __int64 v32; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v34; // rcx
  __int64 **v35; // rbx
  __int64 *v36; // rcx
  __int64 v37; // rax
  DWORD v38; // [rsp+30h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v40; // [rsp+40h] [rbp-C0h] BYREF
  int v41; // [rsp+44h] [rbp-BCh] BYREF
  int v42; // [rsp+48h] [rbp-B8h] BYREF
  int v43; // [rsp+4Ch] [rbp-B4h] BYREF
  int v44; // [rsp+50h] [rbp-B0h] BYREF
  PSRWLOCK v45; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v47; // [rsp+80h] [rbp-80h]
  __int64 v48; // [rsp+88h] [rbp-78h]
  PSRWLOCK *v49; // [rsp+90h] [rbp-70h]
  __int64 v50; // [rsp+98h] [rbp-68h]
  int *v51; // [rsp+A0h] [rbp-60h]
  __int64 v52; // [rsp+A8h] [rbp-58h]
  const unsigned __int16 *v53; // [rsp+B0h] [rbp-50h]
  int v54; // [rsp+B8h] [rbp-48h]
  int v55; // [rsp+BCh] [rbp-44h]
  int *v56; // [rsp+C0h] [rbp-40h]
  __int64 v57; // [rsp+C8h] [rbp-38h]
  const unsigned __int16 *v58; // [rsp+D0h] [rbp-30h]
  int v59; // [rsp+D8h] [rbp-28h]
  int v60; // [rsp+DCh] [rbp-24h]
  int *v61; // [rsp+E0h] [rbp-20h]
  __int64 v62; // [rsp+E8h] [rbp-18h]
  const WCHAR *v63; // [rsp+F0h] [rbp-10h]
  int v64; // [rsp+F8h] [rbp-8h]
  int v65; // [rsp+FCh] [rbp-4h]
  int *v66; // [rsp+100h] [rbp+0h]
  __int64 v67; // [rsp+108h] [rbp+8h]
  const unsigned __int16 *v68; // [rsp+110h] [rbp+10h]
  int v69; // [rsp+118h] [rbp+18h]
  int v70; // [rsp+11Ch] [rbp+1Ch]
  int *v71; // [rsp+120h] [rbp+20h]
  __int64 v72; // [rsp+128h] [rbp+28h]
  const unsigned __int16 *v73; // [rsp+130h] [rbp+30h]
  int v74; // [rsp+138h] [rbp+38h]
  int v75; // [rsp+13Ch] [rbp+3Ch]
  const WCHAR *v76; // [rsp+140h] [rbp+40h]
  int v77; // [rsp+148h] [rbp+48h]
  int v78; // [rsp+14Ch] [rbp+4Ch]
  int *v79; // [rsp+150h] [rbp+50h]
  __int64 v80; // [rsp+158h] [rbp+58h]
  const unsigned __int16 *v81; // [rsp+160h] [rbp+60h]
  int v82; // [rsp+168h] [rbp+68h]
  int v83; // [rsp+16Ch] [rbp+6Ch]
  const WCHAR *v84; // [rsp+170h] [rbp+70h]
  int v85; // [rsp+178h] [rbp+78h]
  int v86; // [rsp+17Ch] [rbp+7Ch]
  DWORD *v87; // [rsp+180h] [rbp+80h]
  __int64 v88; // [rsp+188h] [rbp+88h]
  PSRWLOCK *p_SRWLock; // [rsp+190h] [rbp+90h]
  __int64 v90; // [rsp+198h] [rbp+98h]
  const unsigned __int16 *v91; // [rsp+1A0h] [rbp+A0h]
  int v92; // [rsp+1A8h] [rbp+A8h]
  int v93; // [rsp+1ACh] [rbp+ACh]
  int *v94; // [rsp+1B0h] [rbp+B0h]
  __int64 v95; // [rsp+1B8h] [rbp+B8h]
  const char *v96; // [rsp+1C0h] [rbp+C0h]
  int v97; // [rsp+1C8h] [rbp+C8h]
  int v98; // [rsp+1CCh] [rbp+CCh]
  EVENT_DATA_DESCRIPTOR v99; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 *v100; // [rsp+1F0h] [rbp+F0h]
  __int64 v101; // [rsp+1F8h] [rbp+F8h]
  PSRWLOCK *v102; // [rsp+200h] [rbp+100h]
  __int64 v103; // [rsp+208h] [rbp+108h]
  DWORD *v104; // [rsp+210h] [rbp+110h]
  __int64 v105; // [rsp+218h] [rbp+118h]
  int *v106; // [rsp+220h] [rbp+120h]
  __int64 v107; // [rsp+228h] [rbp+128h]
  const char *v108; // [rsp+230h] [rbp+130h]
  int v109; // [rsp+238h] [rbp+138h]
  int v110; // [rsp+23Ch] [rbp+13Ch]
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]
  int v112; // [rsp+288h] [rbp+188h] BYREF

  v112 = a2;
  v3 = (int *)*((_QWORD *)this + 6);
  v6 = v3[19];
  if ( v6 < 0 && v6 == v3[21] )
    v7 = v3 + 20;
  else
    v7 = 0LL;
  if ( v7 )
  {
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      &SRWLock);
    v8 = SRWLock;
    **((_DWORD **)this + 6) = 2;
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
    v9 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v9 > 5u )
    {
      v10 = (const unsigned __int16 *)*((_QWORD *)v7 + 6);
      v47 = &`CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v48 = 8LL;
      v49 = &v45;
      v11 = &word_1800FD1E0;
      v40 = v7[1];
      v51 = &v40;
      LODWORD(v12) = 0;
      v45 = (PSRWLOCK)0x1000000;
      v50 = 8LL;
      v52 = 4LL;
      if ( v10 )
      {
        v11 = v10;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v10 + v12) );
      }
      v13 = (const unsigned __int16 *)*((_QWORD *)v7 + 15);
      v54 = v12 + 1;
      v56 = v7 + 14;
      LODWORD(v12) = 0;
      v53 = v11;
      v14 = &word_1800FD1E0;
      v55 = 0;
      v57 = 4LL;
      if ( v13 )
      {
        v14 = v13;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v13 + v12) );
      }
      v15 = (const WCHAR *)*((_QWORD *)v7 + 2);
      v16 = &Src;
      v58 = v14;
      v59 = v12 + 1;
      v17 = &Src;
      v41 = *v7;
      v61 = &v41;
      LODWORD(v12) = 0;
      v60 = 0;
      v62 = 4LL;
      if ( v15 )
      {
        v17 = v15;
        v12 = -1LL;
        do
          ++v12;
        while ( v15[v12] );
      }
      v18 = (const unsigned __int16 *)*((_QWORD *)v7 + 8);
      v64 = 2 * v12 + 2;
      v42 = v7[6];
      v66 = &v42;
      LODWORD(v12) = 0;
      v63 = v17;
      v19 = &word_1800FD1E0;
      v65 = 0;
      v67 = 4LL;
      if ( v18 )
      {
        v19 = v18;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v18 + v12) );
      }
      v20 = (const unsigned __int16 *)*((_QWORD *)v7 + 10);
      v69 = v12 + 1;
      v43 = v7[18];
      v71 = &v43;
      LODWORD(v12) = 0;
      v68 = v19;
      v21 = &word_1800FD1E0;
      v70 = 0;
      v72 = 4LL;
      if ( v20 )
      {
        v21 = v20;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v20 + v12) );
      }
      v22 = (const WCHAR *)*((_QWORD *)v7 + 11);
      v74 = v12 + 1;
      LODWORD(v12) = 0;
      v73 = v21;
      v23 = &Src;
      v75 = 0;
      if ( v22 )
      {
        v23 = v22;
        v12 = -1LL;
        do
          ++v12;
        while ( v22[v12] );
      }
      v24 = (const unsigned __int16 *)*((_QWORD *)v7 + 13);
      v77 = 2 * v12 + 2;
      v44 = v7[24];
      v79 = &v44;
      LODWORD(v12) = 0;
      v76 = v23;
      v25 = &word_1800FD1E0;
      v78 = 0;
      v80 = 4LL;
      if ( v24 )
      {
        v25 = v24;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v24 + v12) );
      }
      v26 = (const WCHAR *)*((_QWORD *)v7 + 14);
      v82 = v12 + 1;
      LODWORD(v12) = 0;
      v81 = v25;
      v83 = 0;
      if ( v26 )
      {
        v16 = v26;
        v12 = -1LL;
        do
          ++v12;
        while ( v26[v12] );
      }
      v27 = (const unsigned __int16 *)*((_QWORD *)v7 + 5);
      v85 = 2 * v12 + 2;
      v28 = &word_1800FD1E0;
      v38 = v7[2];
      v87 = &v38;
      LODWORD(SRWLock) = v7[15];
      p_SRWLock = &SRWLock;
      LODWORD(v12) = 0;
      v84 = v16;
      v86 = 0;
      v88 = 4LL;
      v90 = 4LL;
      if ( v27 )
      {
        v28 = v27;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v27 + v12) );
      }
      v91 = v28;
      v92 = v12 + 1;
      v94 = &v112;
      LODWORD(v12) = 0;
      v93 = 0;
      v95 = 4LL;
      v29 = a3 == 0LL;
      if ( a3 )
      {
        v12 = -1LL;
        do
          ++v12;
        while ( a3[v12] );
        v29 = a3 == 0LL;
      }
      if ( v29 )
        a3 = (const char *)&word_1800FD1E0;
      v98 = 0;
      v96 = a3;
      v97 = v12 + 1;
      TlgWrite(v9, &unk_18016DA89, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x17u, &pData);
    }
  }
  else
  {
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      &v45);
    v30 = v45;
    **((_DWORD **)this + 6) = 2;
    if ( v30 )
      ReleaseSRWLockExclusive(v30);
    v31 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v31 > 5u )
    {
      v32 = *((_QWORD *)this + 6);
      v100 = &`CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v101 = 8LL;
      LODWORD(SRWLock) = *(_DWORD *)(v32 + 76);
      v102 = &SRWLock;
      v103 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v105 = 4LL;
      LODWORD(v34) = 0;
      v38 = CurrentThreadId;
      v104 = &v38;
      v106 = &v112;
      v107 = 4LL;
      if ( a3 )
      {
        v34 = -1LL;
        do
          ++v34;
        while ( a3[v34] );
      }
      v110 = 0;
      v109 = v34 + 1;
      if ( !a3 )
        a3 = (const char *)&word_1800FD1E0;
      v108 = a3;
      TlgWrite(v31, &unk_18016D897, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 7u, &v99);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v35 = (__int64 **)((char *)this + 8);
    if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3A9,
        (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL);
    v36 = *v35;
    *((_DWORD *)this + 8) = 0;
    while ( 1 )
    {
      v37 = *v36;
      if ( !*v36 )
        break;
      if ( (__int64 **)v37 == v35 )
      {
        *v36 = *((_QWORD *)this + 3);
        break;
      }
      v36 = (__int64 *)(v37 + 16);
      *v35 = (__int64 *)(v37 + 16);
    }
    *v35 = 0LL;
  }
}
