/*
 * XREFs of ?OnEnsureForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18017F4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ @ 0x18004F120 (-_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ.c)
 *     ?EnsureForegroundRights@CortanaSharedExperienceManager@@UEAAJXZ @ 0x18017DEA0 (-EnsureForegroundRights@CortanaSharedExperienceManager@@UEAAJXZ.c)
 */

void __fastcall CortanaExperienceManagerNotification::OnEnsureForegroundRightsRequested(
        CortanaExperienceManagerNotification *this)
{
  __int64 v1; // rdx

  if ( CortanaExperienceManagerNotification::_CanNotify((CortanaExperienceManagerNotification *)((char *)this - 8)) )
    CortanaSharedExperienceManager::EnsureForegroundRights(*(CortanaSharedExperienceManager **)(v1 + 48));
}
