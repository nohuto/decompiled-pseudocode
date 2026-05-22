/*
 * XREFs of ?Unregister@SpectrumListener@@QEAAXXZ @ 0x1800961D8
 * Callers:
 *     ??1MPCRawInputProvider@@MEAA@XZ @ 0x180093D9C (--1MPCRawInputProvider@@MEAA@XZ.c)
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x180094800 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 *     ??1SpectrumListener@@UEAA@XZ @ 0x1800957F8 (--1SpectrumListener@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18007C0B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ?RemoveDevice@MPCRawInputProvider@@QEAAJK@Z @ 0x180094BA0 (-RemoveDevice@MPCRawInputProvider@@QEAAJK@Z.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@IKU?$less@I@std@@V?$allocator@U?$pair@$$CBIK@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x18009642C (-clear@-$_Tree@V-$_Tmap_traits@IKU-$less@I@std@@V-$allocator@U-$pair@$$CBIK@std@@@2@$0A@@std@@@s.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x18009794C (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     ?RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAX_K@Z @ 0x180097E94 (-RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAX_K@Z.c)
 *     ??1SpeechRuntimeListener@@QEAA@XZ @ 0x180098620 (--1SpeechRuntimeListener@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SpectrumListener::Unregister(SpectrumListener *this)
{
  __int64 *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rcx
  SpeechRuntimeListener *v5; // rbx
  unsigned int v6; // edx
  __int64 *v7; // rbx
  __int64 v8; // rax
  MPCHeadUpdateListener *Instance; // rax
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  char *v11; // [rsp+68h] [rbp+10h]

  if ( *((_BYTE *)this + 88) )
  {
    v2 = (__int64 *)((char *)this + 24);
    v3 = *((_QWORD *)this + 3);
    if ( v3 )
    {
      if ( *((_QWORD *)this + 7) )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 56LL))(v3, *((_QWORD *)this + 7));
        v3 = *v2;
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, *((_QWORD *)this + 8));
    }
    v4 = *((_QWORD *)this + 4);
    if ( v4 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 56LL))(v4, *((_QWORD *)this + 9));
    v5 = (SpeechRuntimeListener *)*((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = 0LL;
    if ( v5 )
    {
      SpeechRuntimeListener::~SpeechRuntimeListener(v5);
      operator delete(v5, (const struct std::nothrow_t *)0x58);
    }
    v6 = *((_DWORD *)this + 30);
    if ( v6 )
      MPCRawInputProvider::RemoveDevice(*((MPCRawInputProvider **)this + 2), v6);
    MPCRawInputProvider::RemoveDevice(*((MPCRawInputProvider **)this + 2), *((_DWORD *)this + 31));
    MPCRawInputProvider::RemoveDevice(*((MPCRawInputProvider **)this + 2), *((_DWORD *)this + 32));
    AcquireSRWLockExclusive((PSRWLOCK)this + 12);
    v11 = (char *)this + 96;
    v7 = (__int64 *)*((_QWORD *)this + 13);
    v8 = *v7;
    v10 = *v7;
    while ( (__int64 *)v8 != v7 )
    {
      MPCRawInputProvider::RemoveDevice(*((MPCRawInputProvider **)this + 2), *(_DWORD *)(v8 + 32));
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v10);
      v8 = v10;
    }
    std::_Tree<std::_Tmap_traits<unsigned int,unsigned long,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned long>>,0>>::clear((char *)this + 104);
    if ( this != (SpectrumListener *)-96LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 12);
    AcquireSRWLockExclusive((PSRWLOCK)this + 10);
    *((_QWORD *)this + 2) = 0LL;
    if ( this != (SpectrumListener *)-80LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 10);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v2);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 4);
    if ( *((_QWORD *)this + 6) )
    {
      Instance = MPCHeadUpdateListener::GetInstance();
      MPCHeadUpdateListener::RemoveHeadEventOccurred(Instance, *((_QWORD *)this + 6));
      *((_QWORD *)this + 6) = 0LL;
    }
    *((_BYTE *)this + 88) = 0;
  }
}
