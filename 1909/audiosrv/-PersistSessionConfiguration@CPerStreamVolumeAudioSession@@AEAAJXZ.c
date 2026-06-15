/*
 * XREFs of ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18004E950
 * Callers:
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800284D0 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x18003D5B0 (-LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ.c)
 *     ?OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800D00E0 (-OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C2194 (WPP_SF_d.c)
 *     WPP_SF_Sd @ 0x1800C4C2C (WPP_SF_Sd.c)
 *     WPP_SF_dd @ 0x1800C83EC (WPP_SF_dd.c)
 *     WPP_SF_dg @ 0x1800C8434 (WPP_SF_dg.c)
 *     WPP_SF_g @ 0x1800C8480 (WPP_SF_g.c)
 *     ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x1800CD190 (-Destroy@-$CComSafeArray@M$03@ATL@@QEAAJXZ.c)
 *     ?SetAt@?$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z @ 0x1800D117C (-SetAt@-$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z.c)
 *     WPP_SF_dSD @ 0x1800D1DAC (WPP_SF_dSD.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::PersistSessionConfiguration(CPerStreamVolumeAudioSession *this)
{
  SAFEARRAY *v2; // rbx
  HRESULT v4; // esi
  __int64 v5; // r9
  ULONG v6; // eax
  SAFEARRAY *v7; // rax
  unsigned int v8; // r14d
  int v9; // edx
  int v10; // r8d
  int v11; // r14d
  __int64 v12; // rcx
  int v13; // eax
  int v14; // r8d
  __int16 v15; // ax
  int v16; // eax
  int v17; // eax
  LPCRITICAL_SECTION v18; // [rsp+30h] [rbp-50h] BYREF
  char v19; // [rsp+38h] [rbp-48h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-40h] BYREF
  char v21; // [rsp+48h] [rbp-38h]
  __int64 v22; // [rsp+50h] [rbp-30h] BYREF
  SAFEARRAY *v23; // [rsp+58h] [rbp-28h]
  __int64 v24; // [rsp+60h] [rbp-20h]
  __int64 v25; // [rsp+68h] [rbp-18h] BYREF
  __int64 v26; // [rsp+70h] [rbp-10h]
  __int64 v27; // [rsp+78h] [rbp-8h]
  SAFEARRAY *v28; // [rsp+C0h] [rbp+40h] BYREF
  SAFEARRAYBOUND rgsabound; // [rsp+C8h] [rbp+48h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 992);
  v21 = 0;
  v2 = 0LL;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      106LL,
      &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
      *((unsigned __int8 *)this + 984));
  }
  if ( *((_QWORD *)this + 129) && *((_BYTE *)this + 984) )
  {
    v28 = 0LL;
    v22 = 4LL;
    v23 = 0LL;
    v24 = 0LL;
    v18 = (LPCRITICAL_SECTION)((char *)this + 808);
    v19 = 0;
    ATL::CCritSecLock::Lock(&v18);
    LODWORD(v23) = *((_DWORD *)this + 212);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 107LL, &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids);
    }
    if ( v19 )
      LeaveCriticalSection(v18);
    v4 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64 *))(**((_QWORD **)this + 129) + 48LL))(
           *((_QWORD *)this + 129),
           &PKEY_AudioSession_MasterVolume,
           &v22);
    if ( v4 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          108,
          (unsigned int)&WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
          *((_QWORD *)this + 91),
          v4);
      }
      v4 = 0;
    }
    v18 = (LPCRITICAL_SECTION)((char *)this + 808);
    v19 = 0;
    ATL::CCritSecLock::Lock(&v18);
    v5 = *((unsigned int *)this + 240);
    if ( (_DWORD)v5 )
    {
      v6 = *((_DWORD *)this + 240);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 109LL, &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids, v5);
        v6 = *((_DWORD *)this + 240);
      }
      rgsabound.cElements = v6;
      rgsabound.lLbound = 0;
      v7 = SafeArrayCreate(4u, 1u, &rgsabound);
      v28 = v7;
      v2 = v7;
      v4 = v7 ? SafeArrayLock(v7) : -2147024882;
      if ( !v4 )
      {
        v8 = 0;
        if ( *((_DWORD *)this + 240) )
        {
          while ( 1 )
          {
            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_dg(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                110LL,
                &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
                v8,
                *(float *)(*((_QWORD *)this + 121) + 4LL * v8));
            }
            v4 = ATL::CComSafeArray<float,4>::SetAt(&v28, v8, *((_QWORD *)this + 121) + 4LL * v8);
            if ( v4 )
              break;
            if ( ++v8 >= *((_DWORD *)this + 240) )
              goto LABEL_43;
          }
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_dSD(*((_QWORD *)WPP_GLOBAL_Control + 2), v9, v10, v8, *((_QWORD *)this + 91), v4);
          }
        }
      }
    }
LABEL_43:
    v11 = *((_DWORD *)this + 240);
    if ( v19 )
      LeaveCriticalSection(v18);
    if ( v11 )
    {
      if ( !v4 )
      {
        v12 = *((_QWORD *)this + 129);
        v23 = v2;
        LOWORD(v22) = 8196;
        v13 = (*(__int64 (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v12 + 48LL))(
                v12,
                &PKEY_AudioSession_ChannelVolume,
                &v22);
        if ( v13 )
        {
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_Sd(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              112,
              (unsigned int)&WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
              *((_QWORD *)this + 91),
              v13);
          }
        }
      }
    }
    v18 = (LPCRITICAL_SECTION)((char *)this + 808);
    v25 = 11LL;
    v26 = 0LL;
    v27 = 0LL;
    v19 = 0;
    ATL::CCritSecLock::Lock(&v18);
    v14 = *((_DWORD *)this + 213);
    if ( v14 )
      v15 = -1;
    else
      v15 = 0;
    LOWORD(v26) = v15;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_dd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        113LL,
        &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
        (unsigned int)v15,
        v14);
    }
    if ( v19 )
      LeaveCriticalSection(v18);
    v16 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64 *))(**((_QWORD **)this + 129) + 48LL))(
            *((_QWORD *)this + 129),
            &PKEY_AudioSession_Mute,
            &v25);
    if ( v16
      && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        114,
        (unsigned int)&WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
        *((_QWORD *)this + 91),
        v16);
    }
    v17 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 129) + 56LL))(*((_QWORD *)this + 129));
    LODWORD(v2) = v17;
    if ( v17 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          115,
          (unsigned int)&WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
          *((_QWORD *)this + 91),
          v17);
      }
      LODWORD(v2) = 0;
    }
    ATL::CComSafeArray<float,4>::Destroy(&v28);
    if ( (int)v2 < 0 )
      AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::PersistSessionConfiguration", 4776, (int)v2);
  }
  if ( v21 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v2;
}
