/*
 * XREFs of ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800423A0
 * Callers:
 *     ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x180004DAC (-DisconnectHelper@CPolicyConfig@@SAXPEBG@Z.c)
 *     ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x1800291B4 (-NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x1800BFD68 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ??1CAudioSessionManagerProvider@@UEAA@XZ @ 0x1800D8C80 (--1CAudioSessionManagerProvider@@UEAA@XZ.c)
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x1800E0B80 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F90DC (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDe.c)
 * Callees:
 *     ?FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIDeviceGraphObjectsStore@@@Z @ 0x18000453C (-FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA-AV-$uniqu.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180004FE0 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA@XZ @ 0x1800425B8 (--1-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x1800425D0 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180043864 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180044928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C2620 (WPP_SF_.c)
 *     WPP_SF_S @ 0x1800C2680 (WPP_SF_S.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800C9050 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?ForceExpire@CAudioSession@@QEAAXXZ @ 0x1800CDFAC (-ForceExpire@CAudioSession@@QEAAXXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D53DC (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D5448 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800D548C (--$_Emplace_reallocate@AEBV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UISt.c)
 *     ?Add@?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioSession@@@Z @ 0x1800D605C (-Add@-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_KAEBQE.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x1800D73CC (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 *     ?RemoveAtPos@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800D7D78 (-RemoveAtPos@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrai.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAudioSessionManager::Disconnect(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // r15d
  __int64 v4; // r14
  __int64 *v5; // r12
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 *v9; // rsi
  int i; // r13d
  struct _RTL_CRITICAL_SECTION *v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 *j; // rbx
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
  __int64 *k; // rbx
  __int64 v27; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+28h] [rbp-B0h] BYREF
  __int64 *v29; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v30; // [rsp+38h] [rbp-A0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-90h] BYREF
  char v32; // [rsp+50h] [rbp-88h]
  __int64 v33; // [rsp+58h] [rbp-80h]
  __int64 v34; // [rsp+60h] [rbp-78h]
  __int64 v35; // [rsp+68h] [rbp-70h] BYREF
  __int64 v36; // [rsp+70h] [rbp-68h]
  __int64 v37; // [rsp+78h] [rbp-60h]
  int v38; // [rsp+80h] [rbp-58h]
  struct _RTL_CRITICAL_SECTION *v39; // [rsp+88h] [rbp-50h]
  __int64 v40; // [rsp+90h] [rbp-48h]
  ATL::CAtlException *v41; // [rsp+98h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  LPCRITICAL_SECTION v46; // [rsp+F8h] [rbp+20h] BYREF

  v40 = -2LL;
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
  v29 = 0LL;
  v30 = 0LL;
  v28 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, _QWORD, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
         g_DeviceGraphStore,
         *(_QWORD *)(v4 + 296),
         &v28);
  v8 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x603,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v6);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
    return v8;
  }
  else
  {
    if ( v3 == 6 || v3 == 1 )
    {
      v9 = (__int64 *)v30;
    }
    else
    {
      CAudioResourceManager::FreeResourcesAndLockForStreamGroupConnectionDisconnection(v7, (__int64)&v46, v28);
      if ( v46 )
        LeaveCriticalSection(v46);
      v12 = (struct _RTL_CRITICAL_SECTION *)(v4 + 128);
      lpCriticalSection = (LPCRITICAL_SECTION)(v4 + 128);
      EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 128));
      v39 = (struct _RTL_CRITICAL_SECTION *)(v4 + 128);
      v13 = *(_QWORD *)(v4 + 168);
      v14 = *(_QWORD *)(v4 + 176);
      v34 = v14;
      v9 = (__int64 *)v30;
      while ( 1 )
      {
        v33 = v13;
        if ( v13 == v14 )
          break;
        v27 = 0LL;
        if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(v13, &v27) >= 0 && v27 )
        {
          v46 = 0LL;
          if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v27, &v46) >= 0 )
          {
            (*(void (__fastcall **)(LPCRITICAL_SECTION, _QWORD))&v46->DebugInfo[7].Flags)(v46, *(_QWORD *)(v4 + 296));
            try
            {
              if ( *((__int64 **)&v30 + 1) == v9 )
              {
                std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IStreamGroupProxy> const &>(
                  &v29,
                  v9,
                  &v46);
                v9 = (__int64 *)v30;
                v5 = v29;
              }
              else
              {
                *v9 = (__int64)v46;
                Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v9++);
                *(_QWORD *)&v30 = v9;
              }
            }
            catch ( std::bad_alloc )
            {
              v4 = a1;
              v3 = a2;
              v9 = (__int64 *)v30;
              v5 = v29;
              v12 = v39;
              v13 = v33;
            }
          }
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v46);
        }
        v16 = v27;
        if ( v27 )
        {
          v27 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        v13 += 8LL;
        v14 = v34;
      }
      if ( lpCriticalSection )
        LeaveCriticalSection(v12);
    }
    v35 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)(v4 + 16);
    v32 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    if ( v3 == 1 )
    {
      while ( 1 )
      {
        StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition(v4 + 56);
        if ( !StartPosition )
          break;
        v46 = *(LPCRITICAL_SECTION *)(StartPosition + 80);
        v19 = v46;
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
          ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::Add(&v35, &v46);
        }
        catch ( ATL::CAtlException *v41 )
        {
          if ( *(_DWORD *)v41 == -1073741571 )
            _o__resetstkoflw();
          v4 = a1;
          v3 = a2;
          v9 = (__int64 *)v30;
          v5 = v29;
          continue;
        }
      }
    }
    else
    {
      v46 = (LPCRITICAL_SECTION)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition(v4 + 56);
      while ( v46 )
      {
        NextValue = (_QWORD *)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                                v4 + 56,
                                &v46);
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
    if ( v32 )
      LeaveCriticalSection(lpCriticalSection);
    for ( i = 0; i < (int)v36; ++i )
    {
      v24 = (CAudioSession **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](&v35, i);
      CAudioSession::ForceExpire(*v24);
      v25 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](&v35, i);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v25 + 16LL))(*v25);
    }
    if ( v3 != 6 && v3 != 1 )
    {
      for ( j = v5; j != v9; ++j )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*j + 384LL))(*j, *(_QWORD *)(v4 + 296));
    }
    ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::~CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>(&v35);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
    if ( v5 )
    {
      for ( k = v5; k != v9; ++k )
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(k);
      std::_Deallocate<16,0>(v5, (*((_QWORD *)&v30 + 1) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    return 0LL;
  }
}
