/*
 * XREFs of ??1HolographicViewHostItemLedger@@UEAA@XZ @ 0x180207B70
 * Callers:
 *     ??_EHolographicViewHostItemLedger@@UEAAPEAXI@Z @ 0x180207C24 (--_EHolographicViewHostItemLedger@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080B08 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HolographicViewHostItemLedger::~HolographicViewHostItemLedger(HolographicViewHostItemLedger *this)
{
  __int64 *v2; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rcx

  v2 = (__int64 *)*((_QWORD *)this + 25);
  if ( v2 )
  {
    v3 = (__int64 *)*((_QWORD *)this + 26);
    if ( v2 != v3 )
    {
      do
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v2++);
      while ( v2 != v3 );
      v2 = (__int64 *)*((_QWORD *)this + 25);
    }
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 27) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
  }
  v4 = *((_QWORD *)this + 24);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::Shell::Holographic::IHolographicViewHostItemHistory,Windows::Internal::ComposableShell::Core::IViewProvider,Microsoft::WRL::CloakedIid<Windows::Internal::Shell::Holographic::IHolographicViewHostItemLedgerPrivate>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::Shell::Holographic::IHolographicViewHostItemHistory,Windows::Internal::ComposableShell::Core::IViewProvider,Microsoft::WRL::CloakedIid<Windows::Internal::Shell::Holographic::IHolographicViewHostItemLedgerPrivate>,Microsoft::WRL::FtmBase>((__int64 *)this);
}
