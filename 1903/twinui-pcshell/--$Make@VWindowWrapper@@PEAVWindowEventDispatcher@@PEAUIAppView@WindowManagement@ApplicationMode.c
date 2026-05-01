/*
 * XREFs of ??$Make@VWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@AEAW4AppModelKind@4567@AEAUAppViewId@4567@AEAPEAUIWindow@4567@AEAUWindowId@4567@AEAY0DF@$$CBGAEAW4WindowCreatedType@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWindowWrapper@@@12@$$QEAPEAVWindowEventDispatcher@@$$QEAPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@$$QEAPEAUIAppModel@6789@AEAW4AppModelKind@6789@AEAUAppViewId@6789@AEAPEAUIWindow@6789@AEAUWindowId@6789@AEAY0DF@$$CBGAEAW4WindowCreatedType@@@Z @ 0x18000B31C
 * Callers:
 *     ??$MakeOrThrow@VWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@AEAW4AppModelKind@4567@AEAUAppViewId@4567@AEAPEAUIWindow@4567@AEAUWindowId@4567@AEAY0DF@$$CBGAEAW4WindowCreatedType@@@wil@@YA?AV?$ComPtr@VWindowWrapper@@@WRL@Microsoft@@$$QEAPEAVWindowEventDispatcher@@$$QEAPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@$$QEAPEAUIAppModel@6789@AEAW4AppModelKind@6789@AEAUAppViewId@6789@AEAPEAUIWindow@6789@AEAUWindowId@6789@AEAY0DF@$$CBGAEAW4WindowCreatedType@@@Z @ 0x18000B290 (--$MakeOrThrow@VWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@Applicat.c)
 * Callees:
 *     ?Attach@?$ComPtr@VWindowWrapper@@@WRL@Microsoft@@QEAAXPEAVWindowWrapper@@@Z @ 0x18000B43C (-Attach@-$ComPtr@VWindowWrapper@@@WRL@Microsoft@@QEAAXPEAVWindowWrapper@@@Z.c)
 *     ??0WindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@3456@W4AppModelKind@3456@UAppViewId@3456@PEAUIWindow@3456@UWindowId@3456@PEBGW4WindowCreatedType@@@Z @ 0x180034554 (--0WindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@Applica.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Microsoft::WRL::Details::Make<WindowWrapper,WindowEventDispatcher *,Windows::Internal::ApplicationModel::WindowManagement::IAppView *,Windows::Internal::ApplicationModel::WindowManagement::IAppModel *,enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind &,Windows::Internal::ApplicationModel::WindowManagement::AppViewId &,Windows::Internal::ApplicationModel::WindowManagement::IWindow * &,Windows::Internal::ApplicationModel::WindowManagement::WindowId &,unsigned short const (&)[53],enum WindowCreatedType &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _QWORD *a7,
        _DWORD *a8,
        __int64 a9,
        _DWORD *a10)
{
  void *v14; // rax
  __int64 v15; // rax

  *a1 = 0LL;
  v14 = operator new(0x2E8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v14 )
  {
    v15 = WindowWrapper::WindowWrapper(
            v14,
            (*a2 + 16LL) & -(__int64)(*a2 != 0LL),
            *a3,
            *a4,
            *a5,
            *a6,
            *a7,
            *a8,
            a9,
            *a10,
            1,
            -2LL,
            v14,
            v14,
            v14);
    Microsoft::WRL::ComPtr<WindowWrapper>::Attach(a1, v15);
  }
  return a1;
}
