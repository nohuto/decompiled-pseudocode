/*
 * XREFs of ??1?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x1801511A8
 * Callers:
 *     _CortanaSharedExperienceManager::RuntimeClassInitialize_::_1_::dtor$2 @ 0x180153ED5 (_CortanaSharedExperienceManager--RuntimeClassInitialize_--_1_--dtor$2.c)
 *     _CortanaSharedExperienceManager::RuntimeClassInitialize_::_1_::dtor$0_0 @ 0x1801540B2 (_CortanaSharedExperienceManager--RuntimeClassInitialize_--_1_--dtor$0_0.c)
 *     _CortanaDesktopExperienceView::RuntimeClassInitialize_::_1_::dtor$1 @ 0x18018A2A8 (_CortanaDesktopExperienceView--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CortanaDesktopExperienceView::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18018A5E9 (_CortanaDesktopExperienceView--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::~unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)8);
}
