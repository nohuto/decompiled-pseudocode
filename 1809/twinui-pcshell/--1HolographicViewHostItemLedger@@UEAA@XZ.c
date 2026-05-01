/*
 * XREFs of ??1HolographicViewHostItemLedger@@UEAA@XZ @ 0x1801BA030
 * Callers:
 *     ??_EHolographicViewHostItemLedger@@UEAAPEAXI@Z @ 0x1801BA0E4 (--_EHolographicViewHostItemLedger@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HolographicViewHostItemLedger::~HolographicViewHostItemLedger(
        HolographicViewHostItemLedger *this,
        volatile int *a2)
{
  __int64 *v3; // rbx
  __int64 *v4; // rsi
  __int64 v5; // rcx

  v3 = (__int64 *)*((_QWORD *)this + 24);
  if ( v3 )
  {
    v4 = (__int64 *)*((_QWORD *)this + 25);
    if ( v3 != v4 )
    {
      do
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v3++);
      while ( v3 != v4 );
      v3 = (__int64 *)*((_QWORD *)this + 24);
    }
    std::_Deallocate<16,0>(
      v3,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 26) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 24) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
  }
  v5 = *((_QWORD *)this + 23);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>(
    (__int64 *)this,
    a2);
}
