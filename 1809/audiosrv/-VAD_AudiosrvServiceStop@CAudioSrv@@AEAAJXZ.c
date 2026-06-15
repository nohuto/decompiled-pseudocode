/*
 * XREFs of ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800B3314
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800B3100 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ @ 0x180013BBC (-RemoveAll@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180020980 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 */

__int64 __fastcall CAudioSrv::VAD_AudiosrvServiceStop(CAudioSrv *this)
{
  CAudioSessionManager *v2; // rcx
  unsigned int v3; // eax
  __int64 v4; // rcx
  void *v5; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 38LL, &WPP_02a848516c583aee7a5d82f92b33b2e5_Traceguids);
    v2 = WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)this + 25) )
  {
    if ( v2 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)v2 + 28) & 4) != 0
      && *((_BYTE *)v2 + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)v2 + 2), 39LL, &WPP_02a848516c583aee7a5d82f92b33b2e5_Traceguids);
    }
    v3 = RpcServerUnregisterIfEx(&unk_18014A200, 0LL, 1);
    if ( v3
      && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 40LL, &WPP_02a848516c583aee7a5d82f92b33b2e5_Traceguids, v3);
    }
    *((_DWORD *)this + 25) = 0;
  }
  if ( g_DuckingManager )
    (*(void (__fastcall **)(struct IAudioDuckingManager *))(*(_QWORD *)g_DuckingManager + 24LL))(g_DuckingManager);
  v8 = 0;
  lpCriticalSection = &g_csVadList;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll((__int64)&g_VADServerList);
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  if ( g_SpatialAudioResourceManager )
  {
    (*(void (__fastcall **)(struct ISpatialAudioResourceManager *))(*(_QWORD *)g_SpatialAudioResourceManager + 40LL))(g_SpatialAudioResourceManager);
    if ( g_SpatialAudioResourceManager )
    {
      (*(void (__fastcall **)(struct ISpatialAudioResourceManager *))(*(_QWORD *)g_SpatialAudioResourceManager + 16LL))(g_SpatialAudioResourceManager);
      g_SpatialAudioResourceManager = 0LL;
    }
  }
  EnterCriticalSection(&g_SessionManagerProviderLock);
  v4 = g_SingletonAudioSessionManagerProvider;
  g_SingletonAudioSessionManagerProvider = 0LL;
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4);
  LeaveCriticalSection(&g_SessionManagerProviderLock);
  if ( g_AudioResourceManager )
  {
    (*(void (__fastcall **)(struct IAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 16LL))(g_AudioResourceManager);
    g_AudioResourceManager = 0LL;
  }
  if ( g_ProcessSubmixManager )
  {
    (*(void (__fastcall **)(struct IProcessSubmixManager *))(*(_QWORD *)g_ProcessSubmixManager + 16LL))(g_ProcessSubmixManager);
    g_ProcessSubmixManager = 0LL;
  }
  if ( g_DeviceGraphManager )
  {
    (*(void (__fastcall **)(struct IDeviceGraphManager *))(*(_QWORD *)g_DeviceGraphManager + 16LL))(g_DeviceGraphManager);
    g_DeviceGraphManager = 0LL;
  }
  if ( g_DeviceGraphStore )
  {
    (*(void (__fastcall **)(struct IDeviceGraphStore *))(*(_QWORD *)g_DeviceGraphStore + 16LL))(g_DeviceGraphStore);
    g_DeviceGraphStore = 0LL;
  }
  v5 = g_AudioHealthMonitor;
  if ( g_AudioHealthMonitor )
  {
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)g_AudioHealthMonitor + 24));
    operator delete(v5, (const struct std::nothrow_t *)0x48);
  }
  g_AudioHealthMonitor = 0LL;
  if ( g_PolicyConfig )
  {
    (*(void (__fastcall **)(struct IPolicyConfig *))(*(_QWORD *)g_PolicyConfig + 16LL))(g_PolicyConfig);
    g_PolicyConfig = 0LL;
  }
  if ( g_pEndpointCharacteristicsCache )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)g_pEndpointCharacteristicsCache + 32LL))(g_pEndpointCharacteristicsCache);
    if ( g_pEndpointCharacteristicsCache )
    {
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)g_pEndpointCharacteristicsCache + 16LL))(g_pEndpointCharacteristicsCache);
      g_pEndpointCharacteristicsCache = 0LL;
    }
  }
  if ( g_pVolumeProvider )
  {
    (*(void (__fastcall **)(struct IVolumeProvider *))(*(_QWORD *)g_pVolumeProvider + 16LL))(g_pVolumeProvider);
    g_pVolumeProvider = 0LL;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_02a848516c583aee7a5d82f92b33b2e5_Traceguids, 0LL);
  }
  return 0LL;
}
