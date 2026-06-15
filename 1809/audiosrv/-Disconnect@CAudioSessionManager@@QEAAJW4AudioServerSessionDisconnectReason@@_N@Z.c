/*
 * XREFs of ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180003514
 * Callers:
 *     ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x1800209D8 (-NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x1800B14F8 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ??1CAudioSessionManagerProvider@@UEAA@XZ @ 0x1800CA2D0 (--1CAudioSessionManagerProvider@@UEAA@XZ.c)
 *     ?DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z @ 0x1800D1FDC (-DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z.c)
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x1800D5330 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800ED558 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDe.c)
 * Callees:
 *     ??1?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA@XZ @ 0x180003680 (--1-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x180003698 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180016220 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800BA87C (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?ForceExpire@CAudioSession@@QEAAXXZ @ 0x1800BF7B4 (-ForceExpire@CAudioSession@@QEAAXXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C6B8C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C6BF8 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800C6C4C (--$_Emplace_reallocate@AEBV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UISt.c)
 *     ?Add@?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioSession@@@Z @ 0x1800C76FC (-Add@-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_KAEBQE.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x1800C8A3C (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 *     ?RemoveAtPos@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800C92D0 (-RemoveAtPos@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrai.c)
 *     ?FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIDeviceGraphObjectsStore@@@Z @ 0x1800EC284 (-FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA-AVSyncLoc.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAudioSessionManager::Disconnect(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // r15d
  __int64 v4; // r14
  LPCRITICAL_SECTION *v5; // r12
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  LPCRITICAL_SECTION *v9; // rsi
  int i; // r13d
  struct _RTL_CRITICAL_SECTION *v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rax
  LPCRITICAL_SECTION v15; // rcx
  __int64 v16; // rcx
  __int64 StartPosition; // rax
  __int64 v18; // rcx
  LPCRITICAL_SECTION v19; // rbx
  __int64 v20; // r8
  _QWORD *NextValue; // rax
  _QWORD *v22; // rbx
  __int64 v23; // r8
  CAudioSession **v24; // rax
  _QWORD *v25; // rax
  LPCRITICAL_SECTION *j; // rbx
  LPCRITICAL_SECTION *k; // rbx
  LPCRITICAL_SECTION v28; // rcx
  __int64 v29; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+28h] [rbp-B0h] BYREF
  LPCRITICAL_SECTION *v31; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v32; // [rsp+38h] [rbp-A0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-90h] BYREF
  char v34; // [rsp+50h] [rbp-88h]
  __int64 v35; // [rsp+58h] [rbp-80h]
  __int64 v36; // [rsp+60h] [rbp-78h]
  __int64 v37; // [rsp+68h] [rbp-70h] BYREF
  __int64 v38; // [rsp+70h] [rbp-68h]
  __int64 v39; // [rsp+78h] [rbp-60h]
  int v40; // [rsp+80h] [rbp-58h]
  struct _RTL_CRITICAL_SECTION *v41; // [rsp+88h] [rbp-50h]
  __int64 v42; // [rsp+90h] [rbp-48h]
  ATL::CAtlException *v43; // [rsp+98h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  LPCRITICAL_SECTION v48; // [rsp+F8h] [rbp+20h] BYREF

  v42 = -2LL;
  v3 = a2;
  v4 = a1;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      51LL,
      &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids,
      *(_QWORD *)(a1 + 296));
  }
  v5 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v30 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, _QWORD, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
         g_DeviceGraphStore,
         *(_QWORD *)(v4 + 296),
         &v30);
  v8 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x603,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v6,
      v29);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v30);
    return v8;
  }
  else
  {
    if ( v3 == 6 || v3 == 1 )
    {
      v9 = (LPCRITICAL_SECTION *)v32;
    }
    else
    {
      CAudioResourceManager::FreeResourcesAndLockForStreamGroupConnectionDisconnection(v7, &v48, v30);
      if ( v48 )
        LeaveCriticalSection(v48);
      v12 = (struct _RTL_CRITICAL_SECTION *)(v4 + 128);
      lpCriticalSection = (LPCRITICAL_SECTION)(v4 + 128);
      EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 128));
      v41 = (struct _RTL_CRITICAL_SECTION *)(v4 + 128);
      v13 = *(_QWORD *)(v4 + 168);
      v14 = *(_QWORD *)(v4 + 176);
      v36 = v14;
      v9 = (LPCRITICAL_SECTION *)v32;
      while ( 1 )
      {
        v35 = v13;
        if ( v13 == v14 )
          break;
        v29 = 0LL;
        if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(v13, &v29) >= 0 && v29 )
        {
          v48 = 0LL;
          if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v29, &v48) >= 0 )
          {
            (*(void (__fastcall **)(LPCRITICAL_SECTION, _QWORD))&v48->DebugInfo[7].Flags)(v48, *(_QWORD *)(v4 + 296));
            try
            {
              if ( *((LPCRITICAL_SECTION **)&v32 + 1) == v9 )
              {
                std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IStreamGroupProxy> const &>(
                  &v31,
                  v9,
                  &v48);
                v9 = (LPCRITICAL_SECTION *)v32;
                v5 = v31;
              }
              else
              {
                *v9 = v48;
                Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(v9++);
                *(_QWORD *)&v32 = v9;
              }
            }
            catch ( std::bad_alloc )
            {
              v4 = a1;
              v3 = a2;
              v9 = (LPCRITICAL_SECTION *)v32;
              v5 = v31;
              v12 = v41;
              v13 = v35;
            }
          }
          v15 = v48;
          if ( v48 )
          {
            v48 = 0LL;
            ((void (__fastcall *)(LPCRITICAL_SECTION))v15->DebugInfo->ProcessLocksList.Flink)(v15);
          }
        }
        v16 = v29;
        if ( v29 )
        {
          v29 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        v13 += 8LL;
        v14 = v36;
      }
      if ( lpCriticalSection )
        LeaveCriticalSection(v12);
    }
    v37 = 0LL;
    v38 = 0LL;
    v39 = 0LL;
    v40 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)(v4 + 16);
    v34 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    if ( v3 == 1 )
    {
      while ( 1 )
      {
        StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition(v4 + 56);
        if ( !StartPosition )
          break;
        v48 = *(LPCRITICAL_SECTION *)(StartPosition + 80);
        v19 = v48;
        ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveAtPos(
          v18,
          StartPosition);
        LOBYTE(v20) = a3;
        (*((void (__fastcall **)(HANDLE *, _QWORD, __int64))v19->OwningThread + 4))(&v19->OwningThread, v3, v20);
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 52LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids);
        }
        (*(void (__fastcall **)(LPCRITICAL_SECTION, __int64))&v19->DebugInfo[4].Flags)(v19, v4);
        (*(void (__fastcall **)(LPCRITICAL_SECTION, struct ISessionInternalEvents *))&v19->DebugInfo[4].Flags)(
          v19,
          g_PolicyEventsHandler);
        try
        {
          ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::Add(&v37, &v48);
        }
        catch ( ATL::CAtlException *v43 )
        {
          if ( *(_DWORD *)v43 == -1073741571 )
            _o__resetstkoflw();
          v4 = a1;
          v3 = a2;
          v9 = (LPCRITICAL_SECTION *)v32;
          v5 = v31;
          continue;
        }
      }
    }
    else
    {
      v48 = (LPCRITICAL_SECTION)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition(v4 + 56);
      while ( v48 )
      {
        NextValue = (_QWORD *)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                                v4 + 56,
                                &v48);
        v22 = (_QWORD *)*NextValue;
        if ( *NextValue )
        {
          (*(void (__fastcall **)(_QWORD))(*v22 + 8LL))(*NextValue);
          LOBYTE(v23) = a3;
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(v22[2] + 32LL))(v22 + 2, v3, v23);
          (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
        }
      }
      v4 = a1;
    }
    if ( v34 )
      LeaveCriticalSection(lpCriticalSection);
    for ( i = 0; i < (int)v38; ++i )
    {
      v24 = (CAudioSession **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](&v37, i);
      CAudioSession::ForceExpire(*v24);
      v25 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](&v37, i);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v25 + 16LL))(*v25);
    }
    if ( v3 != 6 && v3 != 1 )
    {
      for ( j = v5; j != v9; ++j )
        (*(void (__fastcall **)(LPCRITICAL_SECTION, _QWORD))&(*j)->DebugInfo[8].Type)(*j, *(_QWORD *)(v4 + 296));
    }
    ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::~CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>(&v37);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v30);
    if ( v5 )
    {
      for ( k = v5; k != v9; ++k )
      {
        v28 = *k;
        if ( *k )
        {
          *k = 0LL;
          ((void (__fastcall *)(LPCRITICAL_SECTION))v28->DebugInfo->ProcessLocksList.Flink)(v28);
        }
      }
      std::_Deallocate<16,0>(v5, (*((_QWORD *)&v32 + 1) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    return 0LL;
  }
}
