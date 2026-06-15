/*
 * XREFs of ??0GraphStreamingResourceManager@@QEAA@XZ @ 0x140003B94
 * Callers:
 *     ??$MakeAndInitialize@VGraphStreamingResourceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGraphStreamingResourceManager@@@Z @ 0x140003074 (--$MakeAndInitialize@VGraphStreamingResourceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGra.c)
 * Callees:
 *     ??0HandleRegistrations@GraphStreamingResourceManager@@QEAA@XZ @ 0x140003C74 (--0HandleRegistrations@GraphStreamingResourceManager@@QEAA@XZ.c)
 *     ?UpdateRehashThresholds@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEAAXXZ @ 0x1400047FC (-UpdateRehashThresholds@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x14000E274 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
GraphStreamingResourceManager *__fastcall GraphStreamingResourceManager::GraphStreamingResourceManager(
        GraphStreamingResourceManager *this)
{
  *((_DWORD *)this + 5) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,IAudioStreamingResourceRegistration>::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,IAudioStreamingResourceRegistration>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioStreamingResourceRegistration>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &GraphStreamingResourceManager::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 1) = &GraphStreamingResourceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioStreamingResourceRegistration>'};
  ATL::CCriticalSection::CCriticalSection((GraphStreamingResourceManager *)((char *)this + 24));
  GraphStreamingResourceManager::HandleRegistrations::HandleRegistrations((GraphStreamingResourceManager *)((char *)this + 64));
  GraphStreamingResourceManager::HandleRegistrations::HandleRegistrations((GraphStreamingResourceManager *)((char *)this + 136));
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 56) = 17;
  *((_QWORD *)this + 30) = 0xFFFFFFFFLL;
  *((_QWORD *)this + 31) = 0LL;
  *((_DWORD *)this + 64) = 0;
  *((_DWORD *)this + 65) = 10;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 57) = 1061158912;
  *((_DWORD *)this + 58) = 1048576000;
  *((_DWORD *)this + 59) = 1074790400;
  ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::UpdateRehashThresholds((char *)this + 208);
  *((_QWORD *)this + 35) = 0LL;
  return this;
}
