/*
 * XREFs of ??1?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x1801ED370
 * Callers:
 *     _ShellFeedsDesktopExperienceView::RuntimeClassInitialize_::_1_::dtor$0_0 @ 0x18009F66B (_ShellFeedsDesktopExperienceView--RuntimeClassInitialize_--_1_--dtor$0_0.c)
 *     _CortanaDesktopExperienceView::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1801F014A (_CortanaDesktopExperienceView--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CortanaDesktopExperienceView::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1801F044C (_CortanaDesktopExperienceView--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::~unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>(
        __int64 a1)
{
  return wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
           a1,
           0LL);
}
