/*
 * XREFs of ??_GViewEventArgsForShowAsStandalone@@UEAAPEAXI@Z @ 0x18000E150
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@UIWindowingEnironmentSettingsArgsForImplicitEvent@6789@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18000E1CC (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIVi.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

ViewEventArgsForShowAsStandalone *__fastcall ViewEventArgsForShowAsStandalone::`scalar deleting destructor'(
        ViewEventArgsForShowAsStandalone *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 18);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((char *)this + 136);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((char *)this + 112);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((char *)this + 104);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x98);
  return this;
}
