/*
 * XREFs of ??1XamlExplorerHostShellComponent@@UEAA@XZ @ 0x180259A8C
 * Callers:
 *     ??_EXamlExplorerHostShellComponent@@UEAAPEAXI@Z @ 0x180259E2C (--_EXamlExplorerHostShellComponent@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall XamlExplorerHostShellComponent::~XamlExplorerHostShellComponent(XamlExplorerHostShellComponent *this)
{
  __int64 v2; // rcx
  __int64 *v3; // rdi
  __int64 *v4; // rsi
  volatile int *v5; // rdx

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 30);
  v2 = *((_QWORD *)this + 28);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = (__int64 *)*((_QWORD *)this + 25);
  if ( v3 )
  {
    v4 = (__int64 *)*((_QWORD *)this + 26);
    if ( v3 != v4 )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v3++);
      while ( v3 != v4 );
      v3 = (__int64 *)*((_QWORD *)this + 25);
    }
    std::_Deallocate<16,0>(
      v3,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 27) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>(
    (__int64 *)this,
    v5);
}
