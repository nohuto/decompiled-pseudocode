/*
 * XREFs of ??_GCCortanaWNFService@Cortana@TwinUI@@QEAAPEAXI@Z @ 0x1801ED3E0
 * Callers:
 *     ??1?$unique_ptr@VCCortanaWNFService@Cortana@TwinUI@@U?$default_delete@VCCortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x1801ED34C (--1-$unique_ptr@VCCortanaWNFService@Cortana@TwinUI@@U-$default_delete@VCCortanaWNFService@Cortan.c)
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1801F009C (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800798F4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$00@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x1801F17EC (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$00@details@wil@@SAXPEAU.c)
 *     ?UnsubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJXZ @ 0x1801F20E0 (-UnsubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJXZ.c)
 */

TwinUI::Cortana::CCortanaWNFService *__fastcall TwinUI::Cortana::CCortanaWNFService::`scalar deleting destructor'(
        TwinUI::Cortana::CCortanaWNFService *this)
{
  __int64 v2; // rdi

  *(_QWORD *)this = &TwinUI::Cortana::CCortanaWNFService::`vftable';
  TwinUI::Cortana::CCortanaWNFService::UnsubscribeToWNF(this);
  v2 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v2 )
  {
    std::wstring::_Tidy_deallocate((_QWORD *)(v2 + 24));
    if ( *(_QWORD *)v2 )
      wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,1>::Destroy(*(PTP_TIMER *)v2);
    operator delete((void *)v2, (const struct std::nothrow_t *)0x38);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 7);
  operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
