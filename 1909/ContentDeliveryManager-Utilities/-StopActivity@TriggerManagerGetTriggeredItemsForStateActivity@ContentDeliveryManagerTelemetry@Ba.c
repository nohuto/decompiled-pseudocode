/*
 * XREFs of ?StopActivity@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x180063340
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001FE2C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800242EC (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180030BD0 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::StopActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *this)
{
  int *v1; // rbx
  int v3; // eax
  int *v4; // rbx
  RTL_SRWLOCK *v5; // rcx
  const struct _TlgProvider_t *v6; // r10
  const unsigned __int16 *v7; // rcx
  const unsigned __int16 *v8; // r8
  const unsigned __int16 *v9; // rdx
  __int64 v10; // rax
  const unsigned __int16 *v11; // rcx
  const unsigned __int16 *v12; // rdx
  const WCHAR *v13; // rcx
  const WCHAR *v14; // r9
  const WCHAR *v15; // rdx
  const unsigned __int16 *v16; // rcx
  const unsigned __int16 *v17; // rdx
  const unsigned __int16 *v18; // rcx
  const unsigned __int16 *v19; // rdx
  const WCHAR *v20; // rcx
  const WCHAR *v21; // rdx
  const unsigned __int16 *v22; // rcx
  const unsigned __int16 *v23; // rdx
  const WCHAR *v24; // rcx
  const unsigned __int16 *v25; // rcx
  RTL_SRWLOCK *v26; // rcx
  const struct _TlgProvider_t *v27; // rbx
  __int64 v28; // rcx
  DWORD CurrentThreadId; // eax
  __int64 **v30; // rbx
  __int64 *v31; // rcx
  __int64 v32; // rax
  DWORD v33; // [rsp+30h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v35; // [rsp+40h] [rbp-C0h] BYREF
  int v36; // [rsp+44h] [rbp-BCh] BYREF
  int v37; // [rsp+48h] [rbp-B8h] BYREF
  int v38; // [rsp+4Ch] [rbp-B4h] BYREF
  int v39; // [rsp+50h] [rbp-B0h] BYREF
  PSRWLOCK v40; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v42; // [rsp+80h] [rbp-80h]
  __int64 v43; // [rsp+88h] [rbp-78h]
  PSRWLOCK *v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  int *v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  const unsigned __int16 *v48; // [rsp+B0h] [rbp-50h]
  int v49; // [rsp+B8h] [rbp-48h]
  int v50; // [rsp+BCh] [rbp-44h]
  int *v51; // [rsp+C0h] [rbp-40h]
  __int64 v52; // [rsp+C8h] [rbp-38h]
  const unsigned __int16 *v53; // [rsp+D0h] [rbp-30h]
  int v54; // [rsp+D8h] [rbp-28h]
  int v55; // [rsp+DCh] [rbp-24h]
  int *v56; // [rsp+E0h] [rbp-20h]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  const WCHAR *v58; // [rsp+F0h] [rbp-10h]
  int v59; // [rsp+F8h] [rbp-8h]
  int v60; // [rsp+FCh] [rbp-4h]
  int *v61; // [rsp+100h] [rbp+0h]
  __int64 v62; // [rsp+108h] [rbp+8h]
  const unsigned __int16 *v63; // [rsp+110h] [rbp+10h]
  int v64; // [rsp+118h] [rbp+18h]
  int v65; // [rsp+11Ch] [rbp+1Ch]
  int *v66; // [rsp+120h] [rbp+20h]
  __int64 v67; // [rsp+128h] [rbp+28h]
  const unsigned __int16 *v68; // [rsp+130h] [rbp+30h]
  int v69; // [rsp+138h] [rbp+38h]
  int v70; // [rsp+13Ch] [rbp+3Ch]
  const WCHAR *v71; // [rsp+140h] [rbp+40h]
  int v72; // [rsp+148h] [rbp+48h]
  int v73; // [rsp+14Ch] [rbp+4Ch]
  int *v74; // [rsp+150h] [rbp+50h]
  __int64 v75; // [rsp+158h] [rbp+58h]
  const unsigned __int16 *v76; // [rsp+160h] [rbp+60h]
  int v77; // [rsp+168h] [rbp+68h]
  int v78; // [rsp+16Ch] [rbp+6Ch]
  const WCHAR *v79; // [rsp+170h] [rbp+70h]
  int v80; // [rsp+178h] [rbp+78h]
  int v81; // [rsp+17Ch] [rbp+7Ch]
  DWORD *v82; // [rsp+180h] [rbp+80h]
  __int64 v83; // [rsp+188h] [rbp+88h]
  PSRWLOCK *p_SRWLock; // [rsp+190h] [rbp+90h]
  __int64 v85; // [rsp+198h] [rbp+98h]
  const unsigned __int16 *v86; // [rsp+1A0h] [rbp+A0h]
  int v87; // [rsp+1A8h] [rbp+A8h]
  int v88; // [rsp+1ACh] [rbp+ACh]
  EVENT_DATA_DESCRIPTOR v89; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 *v90; // [rsp+1D0h] [rbp+D0h]
  __int64 v91; // [rsp+1D8h] [rbp+D8h]
  PSRWLOCK *v92; // [rsp+1E0h] [rbp+E0h]
  __int64 v93; // [rsp+1E8h] [rbp+E8h]
  DWORD *v94; // [rsp+1F0h] [rbp+F0h]
  __int64 v95; // [rsp+1F8h] [rbp+F8h]
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  if ( v4 )
  {
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      &SRWLock);
    v5 = SRWLock;
    **((_DWORD **)this + 6) = 2;
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v6 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v6 > 5u )
    {
      v7 = (const unsigned __int16 *)*((_QWORD *)v4 + 6);
      v42 = &`CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v8 = &word_1800FD7D0;
      v43 = 8LL;
      v44 = &v40;
      v9 = &word_1800FD7D0;
      v35 = v4[1];
      v46 = &v35;
      LODWORD(v10) = 0;
      v40 = (PSRWLOCK)0x1000000;
      v45 = 8LL;
      v47 = 4LL;
      if ( v7 )
      {
        v9 = v7;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v7 + v10) );
      }
      v11 = (const unsigned __int16 *)*((_QWORD *)v4 + 15);
      v49 = v10 + 1;
      v51 = v4 + 14;
      LODWORD(v10) = 0;
      v48 = v9;
      v12 = &word_1800FD7D0;
      v50 = 0;
      v52 = 4LL;
      if ( v11 )
      {
        v12 = v11;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v11 + v10) );
      }
      v13 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v14 = &Src;
      v53 = v12;
      v54 = v10 + 1;
      v15 = &Src;
      v36 = *v4;
      v56 = &v36;
      LODWORD(v10) = 0;
      v55 = 0;
      v57 = 4LL;
      if ( v13 )
      {
        v15 = v13;
        v10 = -1LL;
        do
          ++v10;
        while ( v13[v10] );
      }
      v16 = (const unsigned __int16 *)*((_QWORD *)v4 + 8);
      v59 = 2 * v10 + 2;
      v37 = v4[6];
      v61 = &v37;
      LODWORD(v10) = 0;
      v58 = v15;
      v17 = &word_1800FD7D0;
      v60 = 0;
      v62 = 4LL;
      if ( v16 )
      {
        v17 = v16;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v16 + v10) );
      }
      v18 = (const unsigned __int16 *)*((_QWORD *)v4 + 10);
      v64 = v10 + 1;
      v38 = v4[18];
      v66 = &v38;
      LODWORD(v10) = 0;
      v63 = v17;
      v19 = &word_1800FD7D0;
      v65 = 0;
      v67 = 4LL;
      if ( v18 )
      {
        v19 = v18;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v18 + v10) );
      }
      v20 = (const WCHAR *)*((_QWORD *)v4 + 11);
      v69 = v10 + 1;
      LODWORD(v10) = 0;
      v68 = v19;
      v21 = &Src;
      v70 = 0;
      if ( v20 )
      {
        v21 = v20;
        v10 = -1LL;
        do
          ++v10;
        while ( v20[v10] );
      }
      v22 = (const unsigned __int16 *)*((_QWORD *)v4 + 13);
      v72 = 2 * v10 + 2;
      v39 = v4[24];
      v74 = &v39;
      LODWORD(v10) = 0;
      v71 = v21;
      v23 = &word_1800FD7D0;
      v73 = 0;
      v75 = 4LL;
      if ( v22 )
      {
        v23 = v22;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v22 + v10) );
      }
      v24 = (const WCHAR *)*((_QWORD *)v4 + 14);
      v77 = v10 + 1;
      LODWORD(v10) = 0;
      v76 = v23;
      v78 = 0;
      if ( v24 )
      {
        v14 = v24;
        v10 = -1LL;
        do
          ++v10;
        while ( v24[v10] );
      }
      v25 = (const unsigned __int16 *)*((_QWORD *)v4 + 5);
      v80 = 2 * v10 + 2;
      v33 = v4[2];
      v82 = &v33;
      LODWORD(SRWLock) = v4[15];
      p_SRWLock = &SRWLock;
      LODWORD(v10) = 0;
      v79 = v14;
      v81 = 0;
      v83 = 4LL;
      v85 = 4LL;
      if ( v25 )
      {
        v8 = v25;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v25 + v10) );
      }
      v86 = v8;
      v87 = v10 + 1;
      v88 = 0;
      TlgWrite(v6, &unk_18016E11D, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x15u, &pData);
    }
  }
  else
  {
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      &v40);
    v26 = v40;
    **((_DWORD **)this + 6) = 2;
    if ( v26 )
      ReleaseSRWLockExclusive(v26);
    v27 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v27 > 5u )
    {
      v28 = *((_QWORD *)this + 6);
      v90 = &`CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v91 = 8LL;
      LODWORD(SRWLock) = *(_DWORD *)(v28 + 76);
      v92 = &SRWLock;
      v93 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v95 = 4LL;
      v33 = CurrentThreadId;
      v94 = &v33;
      TlgWrite(v27, &unk_18016DF29, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &v89);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v30 = (__int64 **)((char *)this + 8);
    if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3A9,
        (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL);
    v31 = *v30;
    *((_DWORD *)this + 8) = 0;
    while ( 1 )
    {
      v32 = *v31;
      if ( !*v31 )
        break;
      if ( (__int64 **)v32 == v30 )
      {
        *v31 = *((_QWORD *)this + 3);
        break;
      }
      v31 = (__int64 *)(v32 + 16);
      *v30 = (__int64 *)(v32 + 16);
    }
    *v30 = 0LL;
  }
}
