/*
 * XREFs of ??1CExclusiveModeListener@@UEAA@XZ @ 0x180118FC8
 * Callers:
 *     ??_GCExclusiveModeListener@@UEAAPEAXI@Z @ 0x1801130A0 (--_GCExclusiveModeListener@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@2@0@Z @ 0x180116414 (-erase@-$_Tree@V-$_Tmap_traits@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator@U-$pair@$$CB.c)
 *     ??1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ @ 0x180116680 (--1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ.c)
 *     ?Shutdown@CExclusiveModeListener@@AEAAXXZ @ 0x18011A7FC (-Shutdown@CExclusiveModeListener@@AEAAXXZ.c)
 */

void __fastcall CExclusiveModeListener::~CExclusiveModeListener(CExclusiveModeListener *this)
{
  __int64 v2; // rcx
  __int64 v3; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)this = &CExclusiveModeListener::`vftable';
  *((_QWORD *)this + 1) = &CExclusiveModeListener::`vftable'{for `IMixedRealitySpatialAudioFormatPolicyChange'};
  *((_QWORD *)this + 2) = &CExclusiveModeListener::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  CExclusiveModeListener::Shutdown(this);
  CSpatialAudioResourceManagerTraceLogger::~CSpatialAudioResourceManagerTraceLogger((CExclusiveModeListener *)((char *)this + 184));
  std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::erase(
    (_QWORD *)this + 20,
    &v3,
    **((_QWORD **)this + 20),
    *((_QWORD *)this + 20));
  std::_Deallocate<16,0>(*((void **)this + 20), (const struct std::nothrow_t *)0x48);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 2);
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 8);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 7);
  *((_DWORD *)this + 13) = -1073741823;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 5);
}
