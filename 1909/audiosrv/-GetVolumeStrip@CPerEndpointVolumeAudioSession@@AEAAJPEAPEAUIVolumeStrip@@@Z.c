/*
 * XREFs of ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x1800CEB94
 * Callers:
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800CCF50 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800CF960 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?Reused@CPerEndpointVolumeAudioSession@@EEAAJXZ @ 0x1800D0F70 (-Reused@CPerEndpointVolumeAudioSession@@EEAAJXZ.c)
 *     ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x1800D1800 (-UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x18003D810 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180054D20 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C3AB8 (WPP_SF_q.c)
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z @ 0x1800CF0F4 (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z.c)
 *     WPP_SF_qqq @ 0x1800D2080 (WPP_SF_qqq.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPerEndpointVolumeAudioSession::GetVolumeStrip(
        CPerEndpointVolumeAudioSession *this,
        struct IVolumeStrip **a2)
{
  int EndpointVolumeInformation; // ebx
  _QWORD *v5; // rsi
  CAudioSessionManager **v6; // rdx
  struct IUnknown *v7; // rcx
  struct IVolumeProvider *v8; // r14
  __int64 v9; // rbx
  const unsigned __int16 *Buffer; // rdx
  void (*Release)(void); // rax
  struct IUnknown *v12; // rbx
  const unsigned __int16 *v13; // rdx
  struct IUnknown *v14; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-18h] BYREF
  char v17; // [rsp+40h] [rbp-10h]
  struct IUnknown *v18; // [rsp+80h] [rbp+30h] BYREF

  EndpointVolumeInformation = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 992);
  v17 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = (_QWORD *)((char *)this + 1032);
  v6 = &WPP_GLOBAL_Control;
  if ( *((_QWORD *)this + 129) )
    goto LABEL_26;
  v7 = 0LL;
  v18 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x21u,
      (__int64)&WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
      this);
    v7 = v18;
  }
  v8 = g_pVolumeProvider;
  if ( g_pVolumeProvider )
  {
    v9 = *(_QWORD *)g_pVolumeProvider;
    Buffer = CAudioEndpointId::GetBuffer((const void **)this + 82);
    EndpointVolumeInformation = (*(__int64 (__fastcall **)(struct IVolumeProvider *, const unsigned __int16 *, struct IUnknown **))(v9 + 48))(
                                  v8,
                                  Buffer,
                                  &v18);
    if ( EndpointVolumeInformation < 0 )
    {
      if ( !v18 )
        goto LABEL_34;
      Release = (void (*)(void))v18->lpVtbl->Release;
      goto LABEL_12;
    }
    v12 = v18;
    CAudioEndpointId::GetBuffer((const void **)this + 82);
    EndpointVolumeInformation = CPerEndpointVolumeAudioSession::LoadEndpointVolumeInformation(
                                  this,
                                  v13,
                                  (struct IVolumeStrip *)v12);
    if ( EndpointVolumeInformation < 0 )
      goto LABEL_14;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x22u,
        (__int64)&WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
        this);
    }
    EndpointVolumeInformation = ((__int64 (__fastcall *)(struct IUnknown *, char *))v18->lpVtbl[9].Release)(
                                  v18,
                                  (char *)this + 984);
    if ( EndpointVolumeInformation < 0 )
    {
LABEL_14:
      if ( v18 )
      {
        Release = (void (*)(void))v18->lpVtbl->Release;
LABEL_12:
        Release();
      }
LABEL_34:
      if ( EndpointVolumeInformation >= 0 )
        goto LABEL_36;
      goto LABEL_35;
    }
    v14 = v18;
    if ( (struct IUnknown *)*v5 != v18 )
    {
      ATL::AtlComPtrAssign((struct IUnknown **)this + 129, v18);
      v14 = v18;
    }
    if ( v14 )
      ((void (__fastcall *)(struct IUnknown *))v14->lpVtbl->Release)(v14);
    v6 = &WPP_GLOBAL_Control;
LABEL_26:
    if ( a2 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qqq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          35LL,
          &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
          this,
          *v5,
          a2,
          -2LL,
          lpCriticalSection);
      }
      *a2 = (struct IVolumeStrip *)*v5;
      if ( *v5 )
        (*(void (__fastcall **)(_QWORD, CAudioSessionManager **))(*(_QWORD *)*v5 + 8LL))(*v5, v6);
      EndpointVolumeInformation = 0;
    }
    goto LABEL_34;
  }
  EndpointVolumeInformation = -2147418113;
  if ( v7 )
    ((void (__fastcall *)(struct IUnknown *, CAudioSessionManager **))v7->lpVtbl->Release)(v7, v6);
LABEL_35:
  AudSrvTraceLoggingErrorHelper("CPerEndpointVolumeAudioSession::GetVolumeStrip", 1741, EndpointVolumeInformation);
LABEL_36:
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)EndpointVolumeInformation;
}
