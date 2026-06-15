/*
 * XREFs of ??1CAudioSession@@MEAA@XZ @ 0x18001F658
 * Callers:
 *     ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x18001DA3C (--1CPerStreamVolumeAudioSession@@EEAA@XZ.c)
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$14 @ 0x18006CBF0 (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$14.c)
 *     ??1CPerEndpointVolumeAudioSession@@EEAA@XZ @ 0x1800BE4D0 (--1CPerEndpointVolumeAudioSession@@EEAA@XZ.c)
 *     ??_ECAudioSession@@MEAAPEAXI@Z @ 0x1800BE784 (--_ECAudioSession@@MEAAPEAXI@Z.c)
 *     _CPerEndpointVolumeAudioSession::CPerEndpointVolumeAudioSession_::_1_::dtor$0 @ 0x1800C6F75 (_CPerEndpointVolumeAudioSession--CPerEndpointVolumeAudioSession_--_1_--dtor$0.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x180013C94 (-_Tidy@-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001FAA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x180020258 (-LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ.c)
 *     ??1?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x180020290 (--1-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CComPtr@UISessionI.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??1CCriticalSection@ATL@@QEAA@XZ @ 0x1800AE730 (--1CCriticalSection@ATL@@QEAA@XZ.c)
 *     WPP_SF_qS @ 0x1800B58C4 (WPP_SF_qS.c)
 *     ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x1800B6BB0 (--1-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotificationPr.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800BA87C (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800C2878 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Det.c)
 *     ?RemoveAt@?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x1800C2974 (-RemoveAt@-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CComPtr@UIS.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioSession::~CAudioSession(CAudioSession *this)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  _QWORD *v4; // rax
  unsigned int v5; // esi
  __int64 v6; // rbx
  _QWORD *v7; // rax
  unsigned int v8; // r14d
  __int64 v9; // rbx
  _QWORD *v10; // rax
  void *v11; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-18h] BYREF
  char v18; // [rsp+40h] [rbp-10h]

  *(_QWORD *)this = &CAudioSession::`vftable'{for `IAudioSessionInfo'};
  *((_QWORD *)this + 1) = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionInfoInternal'};
  *((_QWORD *)this + 2) = &CAudioSession::`vftable'{for `IAudioSessionPolicyControl'};
  *((_QWORD *)this + 3) = &CAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
  *((_QWORD *)this + 4) = &CAudioSession::`vftable'{for `CUnknown'};
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      47,
      (unsigned int)&WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids,
      (_DWORD)this,
      *((_QWORD *)this + 96));
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  v18 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v2 = 0;
  if ( *((_QWORD *)this + 13) )
  {
    v3 = 0LL;
    do
    {
      v4 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                       (char *)this + 96,
                       v3);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 64LL))(*v4);
      *(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[]((char *)this + 96, v3) = 0LL;
      v3 = ++v2;
    }
    while ( (unsigned __int64)v2 < *((_QWORD *)this + 13) );
  }
  if ( v18 )
    LeaveCriticalSection(lpCriticalSection);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 128);
  v18 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v5 = 0;
  if ( *((_QWORD *)this + 22) )
  {
    v6 = 0LL;
    do
    {
      v7 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                       (char *)this + 168,
                       v6);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 64LL))(*v7);
      *(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                   (char *)this + 168,
                   v6) = 0LL;
      v6 = ++v5;
    }
    while ( (unsigned __int64)v5 < *((_QWORD *)this + 22) );
  }
  if ( v18 )
    LeaveCriticalSection(lpCriticalSection);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 200);
  v18 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v8 = 0;
  if ( *((_QWORD *)this + 31) )
  {
    v9 = 0LL;
    do
    {
      v10 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                        (char *)this + 240,
                        v9);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 64LL))(*v10);
      *(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                   (char *)this + 240,
                   v9) = 0LL;
      v9 = ++v8;
    }
    while ( (unsigned __int64)v8 < *((_QWORD *)this + 31) );
  }
  if ( v18 )
    LeaveCriticalSection(lpCriticalSection);
  v11 = (void *)*((_QWORD *)this + 126);
  if ( v11 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v11);
  }
  *((_QWORD *)this + 113) = &AudioSrvVolumeTelemetrySessionVolume::`vftable';
  AudioSrvVolumeTelemetry::LogTelemetry((CAudioSession *)((char *)this + 904));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 936));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 848));
  std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Tidy((__int64)this + 816);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 776));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 96) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 92) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 89) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 88) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 87) - 24LL));
  ATL::CCriticalSection::~CCriticalSection((LPCRITICAL_SECTION)((char *)this + 656));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 616));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  while ( *((_QWORD *)this + 68) )
    ATL::CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>::RemoveAt(
      (char *)this + 536,
      0LL);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((char *)this + 568);
  ATL::CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>::~CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>((char *)this + 536);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  v13 = *((_QWORD *)this + 61);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( *((_QWORD *)this + 59) )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release();
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 432));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 352));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 41) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 40) - 24LL));
  v14 = (void *)*((_QWORD *)this + 30);
  if ( v14 )
    free(v14);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 5);
  v15 = (void *)*((_QWORD *)this + 21);
  if ( v15 )
    free(v15);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v16 = (void *)*((_QWORD *)this + 12);
  if ( v16 )
    free(v16);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  *((_QWORD *)this + 4) = &CUnknown::`vftable';
}
