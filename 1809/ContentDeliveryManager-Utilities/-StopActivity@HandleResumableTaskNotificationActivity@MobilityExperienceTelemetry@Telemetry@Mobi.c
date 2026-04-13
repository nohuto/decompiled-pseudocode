/*
 * XREFs of ?StopActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@MEAAXXZ @ 0x1800444B0
 * Callers:
 *     ??1HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAA@XZ @ 0x1800448A0 (--1HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperie.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ @ 0x18000A60C (-Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180023C4C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002FD40 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 */

void __fastcall MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::StopActivity(
        MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *this)
{
  int *v1; // rbx
  int v3; // eax
  int *v4; // rbx
  RTL_SRWLOCK *v5; // rcx
  const struct _TlgProvider_t *v6; // rax
  const struct _TlgProvider_t *v7; // r10
  const unsigned __int16 *v8; // r8
  const unsigned __int16 *v9; // rcx
  __int64 v10; // rax
  const unsigned __int16 *v11; // rdx
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
  const struct _TlgProvider_t *v25; // rax
  const struct _TlgProvider_t *v26; // rbx
  int v27; // ecx
  DWORD CurrentThreadId; // eax
  __int64 **v29; // rbx
  __int64 *v30; // rcx
  __int64 v31; // rax
  DWORD v32; // [rsp+30h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v34; // [rsp+40h] [rbp-C0h] BYREF
  int v35; // [rsp+44h] [rbp-BCh] BYREF
  int v36; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v38; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+78h] [rbp-88h]
  const unsigned __int16 *v40; // [rsp+80h] [rbp-80h]
  int v41; // [rsp+88h] [rbp-78h]
  int v42; // [rsp+8Ch] [rbp-74h]
  int *v43; // [rsp+90h] [rbp-70h]
  __int64 v44; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v45; // [rsp+A0h] [rbp-60h]
  int v46; // [rsp+A8h] [rbp-58h]
  int v47; // [rsp+ACh] [rbp-54h]
  int *v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  const WCHAR *v50; // [rsp+C0h] [rbp-40h]
  int v51; // [rsp+C8h] [rbp-38h]
  int v52; // [rsp+CCh] [rbp-34h]
  int *v53; // [rsp+D0h] [rbp-30h]
  __int64 v54; // [rsp+D8h] [rbp-28h]
  const unsigned __int16 *v55; // [rsp+E0h] [rbp-20h]
  int v56; // [rsp+E8h] [rbp-18h]
  int v57; // [rsp+ECh] [rbp-14h]
  DWORD *v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v60; // [rsp+100h] [rbp+0h]
  int v61; // [rsp+108h] [rbp+8h]
  int v62; // [rsp+10Ch] [rbp+Ch]
  const WCHAR *v63; // [rsp+110h] [rbp+10h]
  int v64; // [rsp+118h] [rbp+18h]
  int v65; // [rsp+11Ch] [rbp+1Ch]
  PSRWLOCK *p_SRWLock; // [rsp+120h] [rbp+20h]
  __int64 v67; // [rsp+128h] [rbp+28h]
  const unsigned __int16 *v68; // [rsp+130h] [rbp+30h]
  int v69; // [rsp+138h] [rbp+38h]
  int v70; // [rsp+13Ch] [rbp+3Ch]
  const WCHAR *v71; // [rsp+140h] [rbp+40h]
  int v72; // [rsp+148h] [rbp+48h]
  int v73; // [rsp+14Ch] [rbp+4Ch]
  EVENT_DATA_DESCRIPTOR v74; // [rsp+150h] [rbp+50h] BYREF
  PSRWLOCK *v75; // [rsp+170h] [rbp+70h]
  __int64 v76; // [rsp+178h] [rbp+78h]
  DWORD *v77; // [rsp+180h] [rbp+80h]
  __int64 v78; // [rsp+188h] [rbp+88h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v5 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v4 )
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v6 = MobilityExperience::Telemetry::MobilityExperienceLogging::Provider();
    v7 = v6;
    if ( *(_DWORD *)v6 > 5u
      && (*((_QWORD *)v6 + 2) & 0x800000000000LL) != 0
      && (*((_QWORD *)v6 + 3) & 0x800000000000LL) == *((_QWORD *)v6 + 3) )
    {
      v8 = &word_1800F8406;
      v9 = (const unsigned __int16 *)*((_QWORD *)v4 + 6);
      v34 = v4[1];
      v38 = &v34;
      LODWORD(v10) = 0;
      v39 = 4LL;
      v11 = &word_1800F8406;
      if ( v9 )
      {
        v11 = v9;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v9 + v10) );
      }
      v12 = (const unsigned __int16 *)*((_QWORD *)v4 + 15);
      v41 = v10 + 1;
      v43 = v4 + 14;
      LODWORD(v10) = 0;
      v40 = v11;
      v13 = &word_1800F8406;
      v42 = 0;
      v44 = 4LL;
      if ( v12 )
      {
        v13 = v12;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v12 + v10) );
      }
      v14 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v15 = &Src;
      v45 = v13;
      v46 = v10 + 1;
      v16 = &Src;
      v35 = *v4;
      v48 = &v35;
      LODWORD(v10) = 0;
      v47 = 0;
      v49 = 4LL;
      if ( v14 )
      {
        v16 = v14;
        v10 = -1LL;
        do
          ++v10;
        while ( v14[v10] );
      }
      v17 = (const unsigned __int16 *)*((_QWORD *)v4 + 8);
      v51 = 2 * v10 + 2;
      v36 = v4[6];
      v53 = &v36;
      LODWORD(v10) = 0;
      v50 = v16;
      v18 = &word_1800F8406;
      v52 = 0;
      v54 = 4LL;
      if ( v17 )
      {
        v18 = v17;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v17 + v10) );
      }
      v19 = (const unsigned __int16 *)*((_QWORD *)v4 + 10);
      v56 = v10 + 1;
      v32 = v4[18];
      v58 = &v32;
      LODWORD(v10) = 0;
      v55 = v18;
      v20 = &word_1800F8406;
      v57 = 0;
      v59 = 4LL;
      if ( v19 )
      {
        v20 = v19;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v19 + v10) );
      }
      v21 = (const WCHAR *)*((_QWORD *)v4 + 11);
      v61 = v10 + 1;
      LODWORD(v10) = 0;
      v60 = v20;
      v22 = &Src;
      v62 = 0;
      if ( v21 )
      {
        v22 = v21;
        v10 = -1LL;
        do
          ++v10;
        while ( v21[v10] );
      }
      v23 = (const unsigned __int16 *)*((_QWORD *)v4 + 13);
      v64 = 2 * v10 + 2;
      LODWORD(SRWLock) = v4[24];
      p_SRWLock = &SRWLock;
      LODWORD(v10) = 0;
      v63 = v22;
      v65 = 0;
      v67 = 4LL;
      if ( v23 )
      {
        v8 = v23;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v23 + v10) );
      }
      v24 = (const WCHAR *)*((_QWORD *)v4 + 14);
      v69 = v10 + 1;
      LODWORD(v10) = 0;
      v68 = v8;
      v70 = 0;
      if ( v24 )
      {
        v15 = v24;
        v10 = -1LL;
        do
          ++v10;
        while ( v24[v10] );
      }
      v71 = v15;
      v72 = 2 * v10 + 2;
      v73 = 0;
      TlgWrite(v7, &unk_180162FE2, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x10u, &pData);
    }
  }
  else
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v25 = MobilityExperience::Telemetry::MobilityExperienceLogging::Provider();
    v26 = v25;
    if ( *(_DWORD *)v25 > 5u
      && (*((_QWORD *)v25 + 2) & 0x800000000000LL) != 0
      && (*((_QWORD *)v25 + 3) & 0x800000000000LL) == *((_QWORD *)v25 + 3) )
    {
      v27 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v75 = &SRWLock;
      LODWORD(SRWLock) = v27;
      v76 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v78 = 4LL;
      v32 = CurrentThreadId;
      v77 = &v32;
      TlgWrite(v26, &unk_180163383, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &v74);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v29 = (__int64 **)((char *)this + 8);
    if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (__int64)"internal\\sdk\\inc\\wil\\result.h",
        (const char *)0x8007029CLL);
    v30 = *v29;
    *((_DWORD *)this + 8) = 0;
    while ( 1 )
    {
      v31 = *v30;
      if ( !*v30 )
        break;
      if ( (__int64 **)v31 == v29 )
      {
        *v30 = *((_QWORD *)this + 3);
        break;
      }
      v30 = (__int64 *)(v31 + 16);
      *v29 = (__int64 *)(v31 + 16);
    }
    *v29 = 0LL;
  }
}
