/*
 * XREFs of ?Release@ImeNotificationExperienceManager@@UEAAKXZ @ 0x180182A30
 * Callers:
 *     ?Release@ImeNotificationExperienceManager@@W7EAAKXZ @ 0x1800B4A40 (-Release@ImeNotificationExperienceManager@@W7EAAKXZ.c)
 *     ?Release@ImeNotificationExperienceManager@@WBA@EAAKXZ @ 0x1800B4A50 (-Release@ImeNotificationExperienceManager@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ImeNotificationExperienceManager::Release(volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IImeStatusNotificationExperienceManager,Windows::Foundation::IClosable>::Release(this);
}
