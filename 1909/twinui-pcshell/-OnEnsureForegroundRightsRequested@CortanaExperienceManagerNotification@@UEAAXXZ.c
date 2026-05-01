/*
 * XREFs of ?OnEnsureForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18019E6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ @ 0x180050FE8 (-_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ.c)
 *     ?EnsureForegroundRights@CortanaSharedExperienceManager@@UEAAJXZ @ 0x18019CF60 (-EnsureForegroundRights@CortanaSharedExperienceManager@@UEAAJXZ.c)
 */

void __fastcall CortanaExperienceManagerNotification::OnEnsureForegroundRightsRequested(
        CortanaExperienceManagerNotification *this)
{
  __int64 v1; // rdx

  if ( CortanaExperienceManagerNotification::_CanNotify((CortanaExperienceManagerNotification *)((char *)this - 8)) )
    CortanaSharedExperienceManager::EnsureForegroundRights(*(CortanaSharedExperienceManager **)(v1 + 48));
}
