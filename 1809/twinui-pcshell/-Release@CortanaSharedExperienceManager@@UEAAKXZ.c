/*
 * XREFs of ?Release@CortanaSharedExperienceManager@@UEAAKXZ @ 0x18007CC20
 * Callers:
 *     ?Release@CortanaSharedExperienceManager@@W7EAAKXZ @ 0x18009E840 (-Release@CortanaSharedExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CortanaSharedExperienceManager@@WBA@EAAKXZ @ 0x18009E850 (-Release@CortanaSharedExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CortanaSharedExperienceManager@@WBI@EAAKXZ @ 0x18009E860 (-Release@CortanaSharedExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CortanaSharedExperienceManager::Release(CortanaSharedExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::Release(this);
}
