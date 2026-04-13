/*
 * XREFs of ?StopActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ @ 0x18009FE30
 * Callers:
 *     ??1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x1800A0298 (--1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800A44DC (-Stop@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180023D7C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x180024C1C (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180030790 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::StopActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *this)
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
  __int64 **v30; // rbx
  __int64 *v31; // rcx
  __int64 v32; // rax
  DWORD v33; // [rsp+30h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v35; // [rsp+40h] [rbp-C0h] BYREF
  int v36; // [rsp+44h] [rbp-BCh] BYREF
  int v37; // [rsp+48h] [rbp-B8h] BYREF
  PSRWLOCK v38[2]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v40; // [rsp+80h] [rbp-80h]
  __int64 v41; // [rsp+88h] [rbp-78h]
  PSRWLOCK *v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  int *v44; // [rsp+A0h] [rbp-60h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  const unsigned __int16 *v46; // [rsp+B0h] [rbp-50h]
  int v47; // [rsp+B8h] [rbp-48h]
  int v48; // [rsp+BCh] [rbp-44h]
  int *v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  const unsigned __int16 *v51; // [rsp+D0h] [rbp-30h]
  int v52; // [rsp+D8h] [rbp-28h]
  int v53; // [rsp+DCh] [rbp-24h]
  int *v54; // [rsp+E0h] [rbp-20h]
  __int64 v55; // [rsp+E8h] [rbp-18h]
  const WCHAR *v56; // [rsp+F0h] [rbp-10h]
  int v57; // [rsp+F8h] [rbp-8h]
  int v58; // [rsp+FCh] [rbp-4h]
  int *v59; // [rsp+100h] [rbp+0h]
  __int64 v60; // [rsp+108h] [rbp+8h]
  const unsigned __int16 *v61; // [rsp+110h] [rbp+10h]
  int v62; // [rsp+118h] [rbp+18h]
  int v63; // [rsp+11Ch] [rbp+1Ch]
  DWORD *v64; // [rsp+120h] [rbp+20h]
  __int64 v65; // [rsp+128h] [rbp+28h]
  const unsigned __int16 *v66; // [rsp+130h] [rbp+30h]
  int v67; // [rsp+138h] [rbp+38h]
  int v68; // [rsp+13Ch] [rbp+3Ch]
  const WCHAR *v69; // [rsp+140h] [rbp+40h]
  int v70; // [rsp+148h] [rbp+48h]
  int v71; // [rsp+14Ch] [rbp+4Ch]
  PSRWLOCK *p_SRWLock; // [rsp+150h] [rbp+50h]
  __int64 v73; // [rsp+158h] [rbp+58h]
  const unsigned __int16 *v74; // [rsp+160h] [rbp+60h]
  int v75; // [rsp+168h] [rbp+68h]
  int v76; // [rsp+16Ch] [rbp+6Ch]
  const WCHAR *v77; // [rsp+170h] [rbp+70h]
  int v78; // [rsp+178h] [rbp+78h]
  int v79; // [rsp+17Ch] [rbp+7Ch]
  EVENT_DATA_DESCRIPTOR v80; // [rsp+180h] [rbp+80h] BYREF
  __int64 *v81; // [rsp+1A0h] [rbp+A0h]
  __int64 v82; // [rsp+1A8h] [rbp+A8h]
  PSRWLOCK *v83; // [rsp+1B0h] [rbp+B0h]
  __int64 v84; // [rsp+1B8h] [rbp+B8h]
  DWORD *v85; // [rsp+1C0h] [rbp+C0h]
  __int64 v86; // [rsp+1C8h] [rbp+C8h]
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

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
    v6 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
    v7 = v6;
    if ( *(_DWORD *)v6 > 5u
      && (*((_QWORD *)v6 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v6 + 3) & 0x400000000000LL) == *((_QWORD *)v6 + 3) )
    {
      v8 = (const unsigned __int16 *)*((_QWORD *)v4 + 6);
      v40 = &`CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v9 = &word_1800FD1E0;
      v41 = 8LL;
      v42 = v38;
      v10 = &word_1800FD1E0;
      v35 = v4[1];
      v44 = &v35;
      LODWORD(v11) = 0;
      v38[0] = (PSRWLOCK)0x1000000;
      v43 = 8LL;
      v45 = 4LL;
      if ( v8 )
      {
        v10 = v8;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v8 + v11) );
      }
      v12 = (const unsigned __int16 *)*((_QWORD *)v4 + 15);
      v47 = v11 + 1;
      v49 = v4 + 14;
      LODWORD(v11) = 0;
      v46 = v10;
      v13 = &word_1800FD1E0;
      v48 = 0;
      v50 = 4LL;
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
      v51 = v13;
      v52 = v11 + 1;
      v16 = &Src;
      v36 = *v4;
      v54 = &v36;
      LODWORD(v11) = 0;
      v53 = 0;
      v55 = 4LL;
      if ( v14 )
      {
        v16 = v14;
        v11 = -1LL;
        do
          ++v11;
        while ( v14[v11] );
      }
      v17 = (const unsigned __int16 *)*((_QWORD *)v4 + 8);
      v57 = 2 * v11 + 2;
      v37 = v4[6];
      v59 = &v37;
      LODWORD(v11) = 0;
      v56 = v16;
      v18 = &word_1800FD1E0;
      v58 = 0;
      v60 = 4LL;
      if ( v17 )
      {
        v18 = v17;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v17 + v11) );
      }
      v19 = (const unsigned __int16 *)*((_QWORD *)v4 + 10);
      v62 = v11 + 1;
      v33 = v4[18];
      v64 = &v33;
      LODWORD(v11) = 0;
      v61 = v18;
      v20 = &word_1800FD1E0;
      v63 = 0;
      v65 = 4LL;
      if ( v19 )
      {
        v20 = v19;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v19 + v11) );
      }
      v21 = (const WCHAR *)*((_QWORD *)v4 + 11);
      v67 = v11 + 1;
      LODWORD(v11) = 0;
      v66 = v20;
      v22 = &Src;
      v68 = 0;
      if ( v21 )
      {
        v22 = v21;
        v11 = -1LL;
        do
          ++v11;
        while ( v21[v11] );
      }
      v23 = (const unsigned __int16 *)*((_QWORD *)v4 + 13);
      v70 = 2 * v11 + 2;
      LODWORD(SRWLock) = v4[24];
      p_SRWLock = &SRWLock;
      LODWORD(v11) = 0;
      v69 = v22;
      v71 = 0;
      v73 = 4LL;
      if ( v23 )
      {
        v9 = v23;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v23 + v11) );
      }
      v24 = (const WCHAR *)*((_QWORD *)v4 + 14);
      v75 = v11 + 1;
      LODWORD(v11) = 0;
      v74 = v9;
      v76 = 0;
      if ( v24 )
      {
        v15 = v24;
        v11 = -1LL;
        do
          ++v11;
        while ( v24[v11] );
      }
      v77 = v15;
      v78 = 2 * v11 + 2;
      v79 = 0;
      TlgWrite(v7, &unk_18016F29F, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x12u, &pData);
    }
  }
  else
  {
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      v38);
    v25 = v38[0];
    **((_DWORD **)this + 6) = 2;
    if ( v25 )
      ReleaseSRWLockExclusive(v25);
    v26 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
    v27 = v26;
    if ( *(_DWORD *)v26 > 5u
      && (*((_QWORD *)v26 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v26 + 3) & 0x400000000000LL) == *((_QWORD *)v26 + 3) )
    {
      v82 = 8LL;
      v81 = &`CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v28 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v83 = &SRWLock;
      LODWORD(SRWLock) = v28;
      v84 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v86 = 4LL;
      v33 = CurrentThreadId;
      v85 = &v33;
      TlgWrite(v27, &unk_18016F250, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &v80);
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
