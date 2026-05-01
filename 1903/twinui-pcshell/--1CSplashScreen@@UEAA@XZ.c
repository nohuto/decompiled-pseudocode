/*
 * XREFs of ??1CSplashScreen@@UEAA@XZ @ 0x180152868
 * Callers:
 *     ??_ECSplashScreen@@UEAAPEAXI@Z @ 0x1801529B0 (--_ECSplashScreen@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_G?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x180042910 (--_G-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080B08 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSplashScreen::~CSplashScreen(CSplashScreen *this)
{
  char *v2; // rdi
  char *v3; // rsi
  volatile signed __int32 *v4; // rcx

  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 15);
  v2 = (char *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    v3 = (char *)*((_QWORD *)this + 13);
    if ( v2 != v3 )
    {
      do
      {
        Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::`scalar deleting destructor'((__int64)v2);
        v2 += 8;
      }
      while ( v2 != v3 );
      v2 = (char *)*((_QWORD *)this + 12);
    }
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 14) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 9);
  if ( v4 )
  {
    *((_QWORD *)this + 9) = 0LL;
    if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::IIterable<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::IIterable<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Microsoft::WRL::FtmBase>((__int64)this);
}
