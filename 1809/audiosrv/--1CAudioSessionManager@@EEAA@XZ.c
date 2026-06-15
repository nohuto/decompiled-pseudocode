/*
 * XREFs of ??1CAudioSessionManager@@EEAA@XZ @ 0x1800C7178
 * Callers:
 *     ??_ECAudioSessionManager@@EEAAPEAXI@Z @ 0x1800C76C0 (--_ECAudioSessionManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA@XZ @ 0x180003680 (--1-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x180003698 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001FAA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 *     ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x1800B6BB0 (--1-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotificationPr.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800BA87C (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800BBF20 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?ForceExpire@CAudioSession@@QEAAXXZ @ 0x1800BF7B4 (-ForceExpire@CAudioSession@@QEAAXXZ.c)
 *     ??1?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x1800C6F88 (--1-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotificationPr.c)
 *     ?Add@?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioSession@@@Z @ 0x1800C76FC (-Add@-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_KAEBQE.c)
 *     ?RemoveAll@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXXZ @ 0x1800C9178 (-RemoveAll@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 *     ?RemoveAt@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x1800C921C (-RemoveAt@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotific.c)
 *     ?RemoveAtPos@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800C92D0 (-RemoveAtPos@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrai.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CAudioSessionManager::~CAudioSessionManager(CAudioSessionManager *this)
{
  struct std::nothrow_t *v1; // rdi
  __int64 StartPosition; // rax
  __int64 v3; // rcx
  __int64 v4; // r14
  int i; // r14d
  CAudioSession **v6; // rax
  _QWORD *v7; // rax
  __int64 *v8; // rbx
  __int64 *v9; // r14
  __int64 v10; // rcx
  struct std::nothrow_t *v11; // rdx
  ATL::CAtlException *v12; // [rsp+28h] [rbp-50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-48h] BYREF
  char v14; // [rsp+38h] [rbp-40h]
  void *v15; // [rsp+40h] [rbp-38h] BYREF
  __int64 v16; // [rsp+48h] [rbp-30h]
  __int64 v17; // [rsp+50h] [rbp-28h]
  int v18; // [rsp+58h] [rbp-20h]
  struct std::nothrow_t *v19; // [rsp+80h] [rbp+8h] BYREF
  void *v20; // [rsp+88h] [rbp+10h] BYREF
  __int64 v21; // [rsp+90h] [rbp+18h] BYREF

  v19 = this;
  v1 = this;
  *(_QWORD *)this = &CAudioSessionManager::`vftable';
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x31u, (__int64)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids);
  }
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v1 + 16);
  v14 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  while ( 1 )
  {
    StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((__int64)v1 + 56);
    if ( !StartPosition )
      break;
    v4 = *(_QWORD *)(StartPosition + 80);
    v21 = v4;
    ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveAtPos(
      v3,
      StartPosition);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x32u, (__int64)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids);
    }
    (*(void (__fastcall **)(__int64, struct std::nothrow_t *))(*(_QWORD *)v4 + 232LL))(v4, v1);
    (*(void (__fastcall **)(__int64, struct ISessionInternalEvents *))(*(_QWORD *)v4 + 232LL))(
      v4,
      g_PolicyEventsHandler);
    try
    {
      ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::Add(&v15, &v21);
    }
    catch ( ATL::CAtlException *v12 )
    {
      if ( *(_DWORD *)v12 == -1073741571 )
        _o__resetstkoflw();
      v1 = v19;
      continue;
    }
  }
  if ( v14 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v14 = 0;
  }
  for ( i = 0; i < (int)v16; ++i )
  {
    v6 = (CAudioSession **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](&v15, i);
    CAudioSession::ForceExpire(*v6);
    v7 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](&v15, i);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 16LL))(*v7);
  }
  ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::~CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>(&v15);
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)v1 + 37) - 24LL));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 192));
  while ( *((_QWORD *)v1 + 30) )
    ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::RemoveAt(
      (char *)v1 + 232,
      0LL);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 192));
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((void **)v1 + 33);
  ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::~CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>((void **)v1 + 29);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 192));
  v8 = (__int64 *)*((_QWORD *)v1 + 21);
  if ( v8 )
  {
    v9 = (__int64 *)*((_QWORD *)v1 + 22);
    if ( v8 != v9 )
    {
      do
      {
        v10 = *v8;
        if ( *v8 )
        {
          *v8 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        ++v8;
      }
      while ( v8 != v9 );
      v8 = (__int64 *)*((_QWORD *)v1 + 21);
    }
    v11 = (struct std::nothrow_t *)((*((_QWORD *)v1 + 23) - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF8uLL);
    v19 = v11;
    v20 = v8;
    if ( (unsigned __int64)v11 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v20, (unsigned __int64 *)&v19);
      v11 = v19;
      v8 = (__int64 *)v20;
    }
    operator delete(v8, v11);
    *((_QWORD *)v1 + 21) = 0LL;
    *((_QWORD *)v1 + 22) = 0LL;
    *((_QWORD *)v1 + 23) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 128));
  ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveAll((char *)v1 + 56);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 16));
  *((_DWORD *)v1 + 3) = -1073741823;
}
