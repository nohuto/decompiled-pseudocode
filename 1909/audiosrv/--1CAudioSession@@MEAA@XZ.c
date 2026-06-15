/*
 * XREFs of ??1CAudioSession@@MEAA@XZ @ 0x1800306CC
 * Callers:
 *     ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x18002E1A4 (--1CPerStreamVolumeAudioSession@@EEAA@XZ.c)
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$21 @ 0x180070700 (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$21.c)
 *     ??1CPerEndpointVolumeAudioSession@@EEAA@XZ @ 0x1800CC874 (--1CPerEndpointVolumeAudioSession@@EEAA@XZ.c)
 *     ??_ECAudioSession@@MEAAPEAXI@Z @ 0x1800CCB44 (--_ECAudioSession@@MEAAPEAXI@Z.c)
 *     _CPerEndpointVolumeAudioSession::CPerEndpointVolumeAudioSession_::_1_::dtor$0 @ 0x1800D5431 (_CPerEndpointVolumeAudioSession--CPerEndpointVolumeAudioSession_--_1_--dtor$0.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180030A30 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x180044D64 (-_Tidy@-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qS @ 0x1800C3AF4 (WPP_SF_qS.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800C8BA0 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?RemoveAt@?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x1800C9B20 (-RemoveAt@-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CComPtr@UIS.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800D0CF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Det.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioSession::~CAudioSession(CAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // r15
  unsigned __int64 v3; // r14
  unsigned int v4; // esi
  unsigned int v5; // esi
  unsigned int v6; // esi
  void *v7; // rdi
  HANDLE ProcessHeap; // rax
  void *v9; // rcx
  _QWORD *v10; // rsi
  unsigned __int64 v11; // r15
  __int64 v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rdi
  _QWORD *v18; // rax
  __int64 v19; // rdi
  _QWORD *v20; // rax
  __int64 v21; // rdi
  _QWORD *v22; // rax
  __int64 v23; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-18h] BYREF
  char v25; // [rsp+40h] [rbp-10h]

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
      (unsigned int)&WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
      (_DWORD)this,
      *((_QWORD *)this + 91));
  }
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  v3 = 0LL;
  v25 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = 0;
  if ( *((_QWORD *)this + 13) )
  {
    v17 = 0LL;
    do
    {
      v18 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                        (char *)this + 96,
                        v17);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v18 + 64LL))(*v18);
      *(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                   (char *)this + 96,
                   v17) = 0LL;
      v17 = ++v4;
    }
    while ( (unsigned __int64)v4 < *((_QWORD *)this + 13) );
  }
  if ( v25 )
    LeaveCriticalSection(lpCriticalSection);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 128);
  v25 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = 0;
  if ( *((_QWORD *)this + 22) )
  {
    v19 = 0LL;
    do
    {
      v20 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                        (char *)this + 168,
                        v19);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v20 + 64LL))(*v20);
      *(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                   (char *)this + 168,
                   v19) = 0LL;
      v19 = ++v5;
    }
    while ( (unsigned __int64)v5 < *((_QWORD *)this + 22) );
    v3 = 0LL;
  }
  if ( v25 )
    LeaveCriticalSection(lpCriticalSection);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 200);
  v25 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = 0;
  if ( *((_QWORD *)this + 31) )
  {
    v21 = 0LL;
    do
    {
      v22 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                        (char *)this + 240,
                        v21);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v22 + 64LL))(*v22);
      *(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                   (char *)this + 240,
                   v21) = 0LL;
      v21 = ++v6;
    }
    while ( (unsigned __int64)v6 < *((_QWORD *)this + 31) );
    v3 = 0LL;
  }
  if ( v25 )
    LeaveCriticalSection(lpCriticalSection);
  v7 = (void *)*((_QWORD *)this + 121);
  if ( v7 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v7);
  }
  *((_QWORD *)this + 108) = &AudioSrvVolumeTelemetrySessionVolume::`vftable';
  if ( *((_QWORD *)this + 109) )
  {
    v16 = *((_QWORD *)this + 109);
    if ( GetTickCount64() - v16 > 0x3E8 )
      (**((void (__fastcall ***)(char *, __int64, _QWORD))this + 108))(
        (char *)this + 864,
        v16 - *((_QWORD *)this + 110),
        *((unsigned int *)this + 222));
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 896));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 808));
  std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Tidy((char *)this + 776);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 91) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 87) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 84) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 83) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 82) - 24LL));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 616));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  while ( *((_QWORD *)this + 68) )
    ATL::CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>::RemoveAt(
      (char *)this + 536,
      0LL);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  v9 = (void *)*((_QWORD *)this + 71);
  if ( v9 )
    free(v9);
  v10 = (_QWORD *)*((_QWORD *)this + 67);
  if ( v10 )
  {
    v11 = *((_QWORD *)this + 68);
    if ( v11 )
    {
      do
      {
        v23 = v10[v3];
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        ++v3;
      }
      while ( v3 < v11 );
      v10 = (_QWORD *)*((_QWORD *)this + 67);
    }
    free(v10);
    v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  v12 = *((_QWORD *)this + 61);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( *((_QWORD *)this + 59) )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release();
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 432));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 352));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 41) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 40) - 24LL));
  v13 = (void *)*((_QWORD *)this + 30);
  if ( v13 )
    free(v13);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 5);
  v14 = (void *)*((_QWORD *)this + 21);
  if ( v14 )
    free(v14);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v15 = (void *)*((_QWORD *)this + 12);
  if ( v15 )
    free(v15);
  DeleteCriticalSection(v2);
  *((_QWORD *)this + 4) = &CUnknown::`vftable';
}
