/*
 * XREFs of ??0CRealmActivationHistory@@QEAA@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x180159BD4
 * Callers:
 *     ?s_CreateInstance@CRealmActivationHistory@@SAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x18015A154 (-s_CreateInstance@CRealmActivationHistory@@SAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUI.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002B4E8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0CObjectWithThreadUseDetection@@QEAA@W4ApartmentCheckEnum@@@Z @ 0x18012CD70 (--0CObjectWithThreadUseDetection@@QEAA@W4ApartmentCheckEnum@@@Z.c)
 */

CRealmActivationHistory *__fastcall CRealmActivationHistory::CRealmActivationHistory(
        CRealmActivationHistory *this,
        struct IImmersiveApplicationManagerInternal *a2)
{
  _DWORD *v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx

  Microsoft::WRL::FtmBase::FtmBase(this);
  *((_QWORD *)this + 4) = &CWRLObjectWithGITSite::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>>'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>>'};
  *((_QWORD *)this + 9) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>::`vftable'{for `IRealmActivationHistory'};
  *((_QWORD *)this + 10) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRealmActivationHistoryInternal>'};
  *((_DWORD *)this + 27) = 1;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  CObjectWithThreadUseDetection::CObjectWithThreadUseDetection((__int64)this + 112, 0);
  *(_QWORD *)this = &CRealmActivationHistory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>>'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>>'};
  *((_QWORD *)this + 9) = &CRealmActivationHistory::`vftable'{for `IRealmActivationHistory'};
  *((_QWORD *)this + 10) = &CRealmActivationHistory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRealmActivationHistoryInternal>'};
  *((_QWORD *)this + 50) = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 50);
  *((_QWORD *)this + 51) = 0LL;
  v4 = (_DWORD *)((char *)this + 160);
  v5 = 0LL;
  do
  {
    switch ( (_DWORD)v5 )
    {
      case 6:
        *v4 = 4;
        break;
      case 1:
      case 8:
        if ( (_DWORD)v5 == 1 )
          *v4 = 2;
        else
          *v4 = 1;
        break;
      case 0xD:
        *v4 = 8;
        break;
      case 0x13:
        *v4 = 16;
        break;
      default:
        *((_DWORD *)this + 3 * (int)v5 + 40) = 0;
        break;
    }
    v6 = (int)v5;
    v4 += 3;
    ++v5;
    v7 = 3 * v6;
    *((_DWORD *)this + v7 + 41) = 0;
    *((_DWORD *)this + v7 + 42) = 0;
  }
  while ( v5 < 0x14 );
  return this;
}
