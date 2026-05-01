/*
 * XREFs of ?Release@CortanaSharedExperienceManager@@UEAAKXZ @ 0x18007F9E0
 * Callers:
 *     ?Release@CortanaSharedExperienceManager@@W7EAAKXZ @ 0x1800B49A0 (-Release@CortanaSharedExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CortanaSharedExperienceManager@@WBA@EAAKXZ @ 0x1800B49B0 (-Release@CortanaSharedExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CortanaSharedExperienceManager@@WBI@EAAKXZ @ 0x1800B49C0 (-Release@CortanaSharedExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CortanaSharedExperienceManager::Release(CortanaSharedExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::Release(this);
}
