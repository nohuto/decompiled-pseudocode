/*
 * XREFs of ?Stop@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAAXPEBD@Z @ 0x180044BE0
 * Callers:
 *     _lambda_ff7cfae8cddf8b4979caf74bf72ddb07_::operator() @ 0x180046668 (_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ @ 0x18000A60C (-Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180023C4C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002FD40 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 */

void __fastcall MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::Stop(
        MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *this,
        const char *a2)
{
  int *v2; // rbx
  int v5; // eax
  int *v6; // rbx
  RTL_SRWLOCK *v7; // rcx
  const struct _TlgProvider_t *v8; // rax
  const struct _TlgProvider_t *v9; // r11
  const unsigned __int16 *v10; // rdx
  __int64 v11; // rax
  const unsigned __int16 *v12; // r8
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
  const struct _TlgProvider_t *v28; // rax
  const struct _TlgProvider_t *v29; // rbx
  int v30; // ecx
  DWORD CurrentThreadId; // eax
  __int64 v32; // rcx
  __int64 **v33; // rbx
  __int64 *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // [rsp+38h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-C8h] BYREF
  int v38; // [rsp+48h] [rbp-C0h] BYREF
  int v39; // [rsp+4Ch] [rbp-BCh] BYREF
  int v40; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  int *v42; // [rsp+78h] [rbp-90h]
  __int64 v43; // [rsp+80h] [rbp-88h]
  const unsigned __int16 *v44; // [rsp+88h] [rbp-80h]
  int v45; // [rsp+90h] [rbp-78h]
  int v46; // [rsp+94h] [rbp-74h]
  int *v47; // [rsp+98h] [rbp-70h]
  __int64 v48; // [rsp+A0h] [rbp-68h]
  const unsigned __int16 *v49; // [rsp+A8h] [rbp-60h]
  int v50; // [rsp+B0h] [rbp-58h]
  int v51; // [rsp+B4h] [rbp-54h]
  int *v52; // [rsp+B8h] [rbp-50h]
  __int64 v53; // [rsp+C0h] [rbp-48h]
  const WCHAR *v54; // [rsp+C8h] [rbp-40h]
  int v55; // [rsp+D0h] [rbp-38h]
  int v56; // [rsp+D4h] [rbp-34h]
  int *v57; // [rsp+D8h] [rbp-30h]
  __int64 v58; // [rsp+E0h] [rbp-28h]
  const unsigned __int16 *v59; // [rsp+E8h] [rbp-20h]
  int v60; // [rsp+F0h] [rbp-18h]
  int v61; // [rsp+F4h] [rbp-14h]
  __int64 *v62; // [rsp+F8h] [rbp-10h]
  __int64 v63; // [rsp+100h] [rbp-8h]
  const unsigned __int16 *v64; // [rsp+108h] [rbp+0h]
  int v65; // [rsp+110h] [rbp+8h]
  int v66; // [rsp+114h] [rbp+Ch]
  const WCHAR *v67; // [rsp+118h] [rbp+10h]
  int v68; // [rsp+120h] [rbp+18h]
  int v69; // [rsp+124h] [rbp+1Ch]
  PSRWLOCK *p_SRWLock; // [rsp+128h] [rbp+20h]
  __int64 v71; // [rsp+130h] [rbp+28h]
  const unsigned __int16 *v72; // [rsp+138h] [rbp+30h]
  int v73; // [rsp+140h] [rbp+38h]
  int v74; // [rsp+144h] [rbp+3Ch]
  const WCHAR *v75; // [rsp+148h] [rbp+40h]
  int v76; // [rsp+150h] [rbp+48h]
  int v77; // [rsp+154h] [rbp+4Ch]
  const char *v78; // [rsp+158h] [rbp+50h]
  int v79; // [rsp+160h] [rbp+58h]
  int v80; // [rsp+164h] [rbp+5Ch]
  EVENT_DATA_DESCRIPTOR v81; // [rsp+168h] [rbp+60h] BYREF
  PSRWLOCK *v82; // [rsp+188h] [rbp+80h]
  __int64 v83; // [rsp+190h] [rbp+88h]
  __int64 *v84; // [rsp+198h] [rbp+90h]
  __int64 v85; // [rsp+1A0h] [rbp+98h]
  const char *v86; // [rsp+1A8h] [rbp+A0h]
  int v87; // [rsp+1B0h] [rbp+A8h]
  int v88; // [rsp+1B4h] [rbp+ACh]
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v2 = (int *)*((_QWORD *)this + 6);
  v5 = v2[19];
  if ( v5 < 0 && v5 == v2[21] )
    v6 = v2 + 20;
  else
    v6 = 0LL;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v7 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v6 )
  {
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    v8 = MobilityExperience::Telemetry::MobilityExperienceLogging::Provider();
    v9 = v8;
    if ( *(_DWORD *)v8 > 5u
      && (*((_QWORD *)v8 + 2) & 0x800000000000LL) != 0
      && (*((_QWORD *)v8 + 3) & 0x800000000000LL) == *((_QWORD *)v8 + 3) )
    {
      v10 = (const unsigned __int16 *)*((_QWORD *)v6 + 6);
      v38 = v6[1];
      v42 = &v38;
      LODWORD(v11) = 0;
      v43 = 4LL;
      v12 = &word_1800F8406;
      if ( v10 )
      {
        v12 = v10;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v10 + v11) );
      }
      v13 = (const unsigned __int16 *)*((_QWORD *)v6 + 15);
      v45 = v11 + 1;
      v47 = v6 + 14;
      LODWORD(v11) = 0;
      v44 = v12;
      v14 = &word_1800F8406;
      v46 = 0;
      v48 = 4LL;
      if ( v13 )
      {
        v14 = v13;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v13 + v11) );
      }
      v15 = (const WCHAR *)*((_QWORD *)v6 + 2);
      v16 = &Src;
      v49 = v14;
      v50 = v11 + 1;
      v17 = &Src;
      v39 = *v6;
      v52 = &v39;
      LODWORD(v11) = 0;
      v51 = 0;
      v53 = 4LL;
      if ( v15 )
      {
        v17 = v15;
        v11 = -1LL;
        do
          ++v11;
        while ( v15[v11] );
      }
      v18 = (const unsigned __int16 *)*((_QWORD *)v6 + 8);
      v55 = 2 * v11 + 2;
      v40 = v6[6];
      v57 = &v40;
      LODWORD(v11) = 0;
      v54 = v17;
      v19 = &word_1800F8406;
      v56 = 0;
      v58 = 4LL;
      if ( v18 )
      {
        v19 = v18;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v18 + v11) );
      }
      v20 = (const unsigned __int16 *)*((_QWORD *)v6 + 10);
      v60 = v11 + 1;
      LODWORD(v36) = v6[18];
      v62 = &v36;
      LODWORD(v11) = 0;
      v59 = v19;
      v21 = &word_1800F8406;
      v61 = 0;
      v63 = 4LL;
      if ( v20 )
      {
        v21 = v20;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v20 + v11) );
      }
      v22 = (const WCHAR *)*((_QWORD *)v6 + 11);
      v65 = v11 + 1;
      LODWORD(v11) = 0;
      v64 = v21;
      v23 = &Src;
      v66 = 0;
      if ( v22 )
      {
        v23 = v22;
        v11 = -1LL;
        do
          ++v11;
        while ( v22[v11] );
      }
      v24 = (const unsigned __int16 *)*((_QWORD *)v6 + 13);
      v68 = 2 * v11 + 2;
      LODWORD(SRWLock) = v6[24];
      p_SRWLock = &SRWLock;
      LODWORD(v11) = 0;
      v67 = v23;
      v25 = &word_1800F8406;
      v69 = 0;
      v71 = 4LL;
      if ( v24 )
      {
        v25 = v24;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v24 + v11) );
      }
      v26 = (const WCHAR *)*((_QWORD *)v6 + 14);
      v73 = v11 + 1;
      LODWORD(v11) = 0;
      v72 = v25;
      v74 = 0;
      if ( v26 )
      {
        v16 = v26;
        v11 = -1LL;
        do
          ++v11;
        while ( v26[v11] );
      }
      v75 = v16;
      v76 = 2 * v11 + 2;
      LODWORD(v11) = 0;
      v77 = 0;
      v27 = a2 == 0LL;
      if ( a2 )
      {
        v11 = -1LL;
        do
          ++v11;
        while ( a2[v11] );
        v27 = a2 == 0LL;
      }
      if ( v27 )
        a2 = (const char *)&word_1800F8406;
      v80 = 0;
      v78 = a2;
      v79 = v11 + 1;
      TlgWrite(v9, &unk_1801634E1, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x11u, &pData);
    }
  }
  else
  {
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    v28 = MobilityExperience::Telemetry::MobilityExperienceLogging::Provider();
    v29 = v28;
    if ( *(_DWORD *)v28 > 5u
      && (*((_QWORD *)v28 + 2) & 0x800000000000LL) != 0
      && (*((_QWORD *)v28 + 3) & 0x800000000000LL) == *((_QWORD *)v28 + 3) )
    {
      v30 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v82 = &SRWLock;
      LODWORD(SRWLock) = v30;
      v83 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v85 = 4LL;
      LODWORD(v32) = 0;
      LODWORD(v36) = CurrentThreadId;
      v84 = &v36;
      if ( a2 )
      {
        v32 = -1LL;
        do
          ++v32;
        while ( a2[v32] );
      }
      v88 = 0;
      v87 = v32 + 1;
      if ( !a2 )
        a2 = (const char *)&word_1800F8406;
      v86 = a2;
      TlgWrite(v29, &unk_1801633DB, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &v81);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v33 = (__int64 **)((char *)this + 8);
    if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (__int64)"internal\\sdk\\inc\\wil\\result.h",
        (const char *)0x8007029CLL);
    v34 = *v33;
    *((_DWORD *)this + 8) = 0;
    while ( 1 )
    {
      v35 = *v34;
      if ( !*v34 )
        break;
      if ( (__int64 **)v35 == v33 )
      {
        *v34 = *((_QWORD *)this + 3);
        break;
      }
      v34 = (__int64 *)(v35 + 16);
      *v33 = (__int64 *)(v35 + 16);
    }
    *v33 = 0LL;
  }
}
