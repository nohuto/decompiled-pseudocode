/*
 * XREFs of ?Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIIII@Z @ 0x18003DB5C
 * Callers:
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180040A6C (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001FE2C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180030BD0 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180041AFC (-IgnoreCurrentThread@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryMan.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::Stop(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity *this,
        int a2,
        int a3)
{
  int *v3; // rbx
  int v5; // eax
  int *v6; // rbx
  RTL_SRWLOCK *v7; // rcx
  const struct _TlgProvider_t *v8; // rax
  const struct _TlgProvider_t *v9; // r10
  const unsigned __int16 *v10; // rcx
  const unsigned __int16 *v11; // r8
  const unsigned __int16 *v12; // rdx
  __int64 v13; // rax
  const unsigned __int16 *v14; // rcx
  const unsigned __int16 *v15; // rdx
  const WCHAR *v16; // rcx
  const WCHAR *v17; // r9
  const WCHAR *v18; // rdx
  const unsigned __int16 *v19; // rcx
  const unsigned __int16 *v20; // rdx
  const unsigned __int16 *v21; // rcx
  const unsigned __int16 *v22; // rdx
  const WCHAR *v23; // rcx
  const WCHAR *v24; // rdx
  const unsigned __int16 *v25; // rcx
  const WCHAR *v26; // rcx
  RTL_SRWLOCK *v27; // rcx
  const struct _TlgProvider_t *v28; // rax
  const struct _TlgProvider_t *v29; // rbx
  int v30; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v32; // [rsp+30h] [rbp-D0h] BYREF
  int v33; // [rsp+38h] [rbp-C8h] BYREF
  int v34; // [rsp+40h] [rbp-C0h] BYREF
  PSRWLOCK SRWLock; // [rsp+48h] [rbp-B8h] BYREF
  int v36; // [rsp+50h] [rbp-B0h] BYREF
  int v37; // [rsp+54h] [rbp-ACh] BYREF
  int v38; // [rsp+58h] [rbp-A8h] BYREF
  PSRWLOCK v39[2]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  PSRWLOCK *v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  DWORD *v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  const unsigned __int16 *v47; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+C8h] [rbp-38h]
  int *v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  const unsigned __int16 *v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  int *v53; // [rsp+F0h] [rbp-10h]
  __int64 v54; // [rsp+F8h] [rbp-8h]
  const WCHAR *v55; // [rsp+100h] [rbp+0h]
  int v56; // [rsp+108h] [rbp+8h]
  int v57; // [rsp+10Ch] [rbp+Ch]
  int *v58; // [rsp+110h] [rbp+10h]
  __int64 v59; // [rsp+118h] [rbp+18h]
  const unsigned __int16 *v60; // [rsp+120h] [rbp+20h]
  int v61; // [rsp+128h] [rbp+28h]
  int v62; // [rsp+12Ch] [rbp+2Ch]
  DWORD *v63; // [rsp+130h] [rbp+30h]
  __int64 v64; // [rsp+138h] [rbp+38h]
  const unsigned __int16 *v65; // [rsp+140h] [rbp+40h]
  int v66; // [rsp+148h] [rbp+48h]
  int v67; // [rsp+14Ch] [rbp+4Ch]
  const WCHAR *v68; // [rsp+150h] [rbp+50h]
  int v69; // [rsp+158h] [rbp+58h]
  int v70; // [rsp+15Ch] [rbp+5Ch]
  PSRWLOCK *p_SRWLock; // [rsp+160h] [rbp+60h]
  __int64 v72; // [rsp+168h] [rbp+68h]
  const unsigned __int16 *v73; // [rsp+170h] [rbp+70h]
  int v74; // [rsp+178h] [rbp+78h]
  int v75; // [rsp+17Ch] [rbp+7Ch]
  const WCHAR *v76; // [rsp+180h] [rbp+80h]
  int v77; // [rsp+188h] [rbp+88h]
  int v78; // [rsp+18Ch] [rbp+8Ch]
  int *v79; // [rsp+190h] [rbp+90h]
  __int64 v80; // [rsp+198h] [rbp+98h]
  int *v81; // [rsp+1A0h] [rbp+A0h]
  __int64 v82; // [rsp+1A8h] [rbp+A8h]
  int *v83; // [rsp+1B0h] [rbp+B0h]
  __int64 v84; // [rsp+1B8h] [rbp+B8h]
  int *v85; // [rsp+1C0h] [rbp+C0h]
  __int64 v86; // [rsp+1C8h] [rbp+C8h]
  int v87; // [rsp+218h] [rbp+118h] BYREF
  int v88; // [rsp+220h] [rbp+120h] BYREF

  v88 = a3;
  v87 = a2;
  v3 = (int *)*((_QWORD *)this + 6);
  v34 = 0;
  v33 = 0;
  v5 = v3[19];
  if ( v5 < 0 && v5 == v3[21] )
    v6 = v3 + 20;
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
    v9 = v8;
    if ( *(_DWORD *)v8 > 5u
      && (*((_QWORD *)v8 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v8 + 3) & 0x200000000000LL) == *((_QWORD *)v8 + 3) )
    {
      v10 = (const unsigned __int16 *)*((_QWORD *)v6 + 6);
      v41 = &`CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v11 = &word_1800FD7D0;
      v42 = 8LL;
      v43 = v39;
      v12 = &word_1800FD7D0;
      v36 = v6[1];
      v45 = (DWORD *)&v36;
      LODWORD(v13) = 0;
      v39[0] = (PSRWLOCK)0x1000000;
      v44 = 8LL;
      v46 = 4LL;
      if ( v10 )
      {
        v12 = v10;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v10 + v13) );
      }
      v14 = (const unsigned __int16 *)*((_QWORD *)v6 + 15);
      v48 = (unsigned int)(v13 + 1);
      v49 = v6 + 14;
      LODWORD(v13) = 0;
      v47 = v12;
      v15 = &word_1800FD7D0;
      v50 = 4LL;
      if ( v14 )
      {
        v15 = v14;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v14 + v13) );
      }
      v16 = (const WCHAR *)*((_QWORD *)v6 + 2);
      v17 = &Src;
      v51 = v15;
      v52 = (unsigned int)(v13 + 1);
      v18 = &Src;
      v37 = *v6;
      v53 = &v37;
      LODWORD(v13) = 0;
      v54 = 4LL;
      if ( v16 )
      {
        v18 = v16;
        v13 = -1LL;
        do
          ++v13;
        while ( v16[v13] );
      }
      v19 = (const unsigned __int16 *)*((_QWORD *)v6 + 8);
      v56 = 2 * v13 + 2;
      v38 = v6[6];
      v58 = &v38;
      LODWORD(v13) = 0;
      v55 = v18;
      v20 = &word_1800FD7D0;
      v57 = 0;
      v59 = 4LL;
      if ( v19 )
      {
        v20 = v19;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v19 + v13) );
      }
      v21 = (const unsigned __int16 *)*((_QWORD *)v6 + 10);
      v61 = v13 + 1;
      v32 = v6[18];
      v63 = &v32;
      LODWORD(v13) = 0;
      v60 = v20;
      v22 = &word_1800FD7D0;
      v62 = 0;
      v64 = 4LL;
      if ( v21 )
      {
        v22 = v21;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v21 + v13) );
      }
      v23 = (const WCHAR *)*((_QWORD *)v6 + 11);
      v66 = v13 + 1;
      LODWORD(v13) = 0;
      v65 = v22;
      v24 = &Src;
      v67 = 0;
      if ( v23 )
      {
        v24 = v23;
        v13 = -1LL;
        do
          ++v13;
        while ( v23[v13] );
      }
      v25 = (const unsigned __int16 *)*((_QWORD *)v6 + 13);
      v69 = 2 * v13 + 2;
      LODWORD(SRWLock) = v6[24];
      p_SRWLock = &SRWLock;
      LODWORD(v13) = 0;
      v68 = v24;
      v70 = 0;
      v72 = 4LL;
      if ( v25 )
      {
        v11 = v25;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v25 + v13) );
      }
      v26 = (const WCHAR *)*((_QWORD *)v6 + 14);
      v74 = v13 + 1;
      LODWORD(v13) = 0;
      v73 = v11;
      v75 = 0;
      if ( v26 )
      {
        v17 = v26;
        v13 = -1LL;
        do
          ++v13;
        while ( v26[v13] );
      }
      v76 = v17;
      v77 = 2 * v13 + 2;
      v78 = 0;
      v79 = &v87;
      v80 = 4LL;
      v81 = &v88;
      v83 = &v33;
      v85 = &v34;
      v82 = 4LL;
      v84 = 4LL;
      v86 = 4LL;
      TlgWrite(v9, &unk_18016C39D, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x16u, &pData);
    }
  }
  else
  {
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      v39);
    v27 = v39[0];
    **((_DWORD **)this + 6) = 2;
    if ( v27 )
      ReleaseSRWLockExclusive(v27);
    v28 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    v29 = v28;
    if ( *(_DWORD *)v28 > 5u
      && (*((_QWORD *)v28 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v28 + 3) & 0x200000000000LL) == *((_QWORD *)v28 + 3) )
    {
      v42 = 8LL;
      v41 = &`CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v30 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v43 = &SRWLock;
      LODWORD(SRWLock) = v30;
      v44 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v46 = 4LL;
      v32 = CurrentThreadId;
      v48 = 4LL;
      v45 = &v32;
      v47 = (const unsigned __int16 *)&v87;
      v49 = &v88;
      v51 = (const unsigned __int16 *)&v33;
      v53 = &v34;
      v50 = 4LL;
      v52 = 4LL;
      v54 = 4LL;
      TlgWrite(v29, &unk_18016C717, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 9u, &pData);
    }
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(this);
}
