/*
 * XREFs of ??1SpectrumListener@@UEAA@XZ @ 0x1800955D8
 * Callers:
 *     ??_GSpectrumListener@@UEAAPEAXI@Z @ 0x1800956B0 (--_GSpectrumListener@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x180095FB8 (-Unregister@SpectrumListener@@QEAAXXZ.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@IKU?$less@I@std@@V?$allocator@U?$pair@$$CBIK@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x18009620C (-clear@-$_Tree@V-$_Tmap_traits@IKU-$less@I@std@@V-$allocator@U-$pair@$$CBIK@std@@@2@$0A@@std@@@s.c)
 *     ??1SpeechRuntimeListener@@QEAA@XZ @ 0x180098400 (--1SpeechRuntimeListener@@QEAA@XZ.c)
 */

void __fastcall SpectrumListener::~SpectrumListener(SpectrumListener *this)
{
  void *v2; // rbx

  *(_QWORD *)this = &SpectrumListener::`vftable';
  SpectrumListener::Unregister(this);
  std::_Tree<std::_Tmap_traits<unsigned int,unsigned long,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned long>>,0>>::clear((char *)this + 104);
  std::_Deallocate<16,0>(*((void **)this + 13), (const struct std::nothrow_t *)0x28);
  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    SpeechRuntimeListener::~SpeechRuntimeListener(*((SpeechRuntimeListener **)this + 5));
    operator delete(v2, (const struct std::nothrow_t *)0x58);
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 3);
  *((_DWORD *)this + 3) = -1073741823;
}
