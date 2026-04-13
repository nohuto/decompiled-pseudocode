/*
 * XREFs of ?StopActivity@ActionRevertedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x18004D290
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001FE2C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180030BD0 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180041AFC (-IgnoreCurrentThread@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryMan.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionRevertedActivity::StopActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionRevertedActivity *this)
{
  int *v1; // rbx
  int v3; // eax
  int *v4; // rbx
  RTL_SRWLOCK *v5; // rcx
  const struct _TlgProvider_t *v6; // rax
  const struct _TlgProvider_t *v7; // r10
  const unsigned __int16 *v8; // rcx
  const unsigned __int16 *v9; // r8
  const unsigned __int16 *v10; // rdx
  __int64 v11; // rax
  const unsigned __int16 *v12; // rcx
  const unsigned __int16 *v13; // rdx
  const WCHAR *v14; // rcx
  const WCHAR *v15; // r9
  const WCHAR *v16; // rdx
  const unsigned __int16 *v17; // rcx
  const unsigned __int16 *v18; // rdx
  const unsigned __int16 *v19; // rcx
  const unsigned __int16 *v20; // rdx
  const WCHAR *v21; // rcx
  const WCHAR *v22; // rdx
  const unsigned __int16 *v23; // rcx
  const WCHAR *v24; // rcx
  RTL_SRWLOCK *v25; // rcx
  const struct _TlgProvider_t *v26; // rax
  const struct _TlgProvider_t *v27; // rbx
  int v28; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v30; // [rsp+30h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v32; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+44h] [rbp-BCh] BYREF
  int v34; // [rsp+48h] [rbp-B8h] BYREF
  PSRWLOCK v35[2]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+88h] [rbp-78h]
  PSRWLOCK *v39; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+98h] [rbp-68h]
  int *v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  const unsigned __int16 *v43; // [rsp+B0h] [rbp-50h]
  int v44; // [rsp+B8h] [rbp-48h]
  int v45; // [rsp+BCh] [rbp-44h]
  int *v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  const unsigned __int16 *v48; // [rsp+D0h] [rbp-30h]
  int v49; // [rsp+D8h] [rbp-28h]
  int v50; // [rsp+DCh] [rbp-24h]
  int *v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  const WCHAR *v53; // [rsp+F0h] [rbp-10h]
  int v54; // [rsp+F8h] [rbp-8h]
  int v55; // [rsp+FCh] [rbp-4h]
  int *v56; // [rsp+100h] [rbp+0h]
  __int64 v57; // [rsp+108h] [rbp+8h]
  const unsigned __int16 *v58; // [rsp+110h] [rbp+10h]
  int v59; // [rsp+118h] [rbp+18h]
  int v60; // [rsp+11Ch] [rbp+1Ch]
  DWORD *v61; // [rsp+120h] [rbp+20h]
  __int64 v62; // [rsp+128h] [rbp+28h]
  const unsigned __int16 *v63; // [rsp+130h] [rbp+30h]
  int v64; // [rsp+138h] [rbp+38h]
  int v65; // [rsp+13Ch] [rbp+3Ch]
  const WCHAR *v66; // [rsp+140h] [rbp+40h]
  int v67; // [rsp+148h] [rbp+48h]
  int v68; // [rsp+14Ch] [rbp+4Ch]
  PSRWLOCK *p_SRWLock; // [rsp+150h] [rbp+50h]
  __int64 v70; // [rsp+158h] [rbp+58h]
  const unsigned __int16 *v71; // [rsp+160h] [rbp+60h]
  int v72; // [rsp+168h] [rbp+68h]
  int v73; // [rsp+16Ch] [rbp+6Ch]
  const WCHAR *v74; // [rsp+170h] [rbp+70h]
  int v75; // [rsp+178h] [rbp+78h]
  int v76; // [rsp+17Ch] [rbp+7Ch]
  EVENT_DATA_DESCRIPTOR v77; // [rsp+180h] [rbp+80h] BYREF
  __int64 *v78; // [rsp+1A0h] [rbp+A0h]
  __int64 v79; // [rsp+1A8h] [rbp+A8h]
  PSRWLOCK *v80; // [rsp+1B0h] [rbp+B0h]
  __int64 v81; // [rsp+1B8h] [rbp+B8h]
  DWORD *v82; // [rsp+1C0h] [rbp+C0h]
  __int64 v83; // [rsp+1C8h] [rbp+C8h]

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
    v7 = v6;
    if ( *(_DWORD *)v6 > 5u
      && (*((_QWORD *)v6 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v6 + 3) & 0x200000000000LL) == *((_QWORD *)v6 + 3) )
    {
      v8 = (const unsigned __int16 *)*((_QWORD *)v4 + 6);
      v37 = &`CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v9 = &word_1800FD7D0;
      v38 = 8LL;
      v39 = v35;
      v10 = &word_1800FD7D0;
      v32 = v4[1];
      v41 = &v32;
      LODWORD(v11) = 0;
      v35[0] = (PSRWLOCK)0x1000000;
      v40 = 8LL;
      v42 = 4LL;
      if ( v8 )
      {
        v10 = v8;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v8 + v11) );
      }
      v12 = (const unsigned __int16 *)*((_QWORD *)v4 + 15);
      v44 = v11 + 1;
      v46 = v4 + 14;
      LODWORD(v11) = 0;
      v43 = v10;
      v13 = &word_1800FD7D0;
      v45 = 0;
      v47 = 4LL;
      if ( v12 )
      {
        v13 = v12;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v12 + v11) );
      }
      v14 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v15 = &Src;
      v48 = v13;
      v49 = v11 + 1;
      v16 = &Src;
      v33 = *v4;
      v51 = &v33;
      LODWORD(v11) = 0;
      v50 = 0;
      v52 = 4LL;
      if ( v14 )
      {
        v16 = v14;
        v11 = -1LL;
        do
          ++v11;
        while ( v14[v11] );
      }
      v17 = (const unsigned __int16 *)*((_QWORD *)v4 + 8);
      v54 = 2 * v11 + 2;
      v34 = v4[6];
      v56 = &v34;
      LODWORD(v11) = 0;
      v53 = v16;
      v18 = &word_1800FD7D0;
      v55 = 0;
      v57 = 4LL;
      if ( v17 )
      {
        v18 = v17;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v17 + v11) );
      }
      v19 = (const unsigned __int16 *)*((_QWORD *)v4 + 10);
      v59 = v11 + 1;
      v30 = v4[18];
      v61 = &v30;
      LODWORD(v11) = 0;
      v58 = v18;
      v20 = &word_1800FD7D0;
      v60 = 0;
      v62 = 4LL;
      if ( v19 )
      {
        v20 = v19;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v19 + v11) );
      }
      v21 = (const WCHAR *)*((_QWORD *)v4 + 11);
      v64 = v11 + 1;
      LODWORD(v11) = 0;
      v63 = v20;
      v22 = &Src;
      v65 = 0;
      if ( v21 )
      {
        v22 = v21;
        v11 = -1LL;
        do
          ++v11;
        while ( v21[v11] );
      }
      v23 = (const unsigned __int16 *)*((_QWORD *)v4 + 13);
      v67 = 2 * v11 + 2;
      LODWORD(SRWLock) = v4[24];
      p_SRWLock = &SRWLock;
      LODWORD(v11) = 0;
      v66 = v22;
      v68 = 0;
      v70 = 4LL;
      if ( v23 )
      {
        v9 = v23;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v23 + v11) );
      }
      v24 = (const WCHAR *)*((_QWORD *)v4 + 14);
      v72 = v11 + 1;
      LODWORD(v11) = 0;
      v71 = v9;
      v73 = 0;
      if ( v24 )
      {
        v15 = v24;
        v11 = -1LL;
        do
          ++v11;
        while ( v24[v11] );
      }
      v74 = v15;
      v75 = 2 * v11 + 2;
      v76 = 0;
      TlgWrite(v7, &unk_18016D97B, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x12u, &pData);
    }
  }
  else
  {
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      v35);
    v25 = v35[0];
    **((_DWORD **)this + 6) = 2;
    if ( v25 )
      ReleaseSRWLockExclusive(v25);
    v26 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    v27 = v26;
    if ( *(_DWORD *)v26 > 5u
      && (*((_QWORD *)v26 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v26 + 3) & 0x200000000000LL) == *((_QWORD *)v26 + 3) )
    {
      v79 = 8LL;
      v78 = &`CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v28 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v80 = &SRWLock;
      LODWORD(SRWLock) = v28;
      v81 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v83 = 4LL;
      v30 = CurrentThreadId;
      v82 = &v30;
      TlgWrite(v27, &unk_18016D76E, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &v77);
    }
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
