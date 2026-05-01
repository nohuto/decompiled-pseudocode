/*
 * XREFs of ?Release@CortanaSharedExperienceManager@@UEAAKXZ @ 0x180081D20
 * Callers:
 *     ?Release@CortanaSharedExperienceManager@@W7EAAKXZ @ 0x1800D7630 (-Release@CortanaSharedExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CortanaSharedExperienceManager@@WBA@EAAKXZ @ 0x1800D7640 (-Release@CortanaSharedExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CortanaSharedExperienceManager@@WBI@EAAKXZ @ 0x1800D7650 (-Release@CortanaSharedExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CortanaSharedExperienceManager::Release(CortanaSharedExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::Release(this);
}
