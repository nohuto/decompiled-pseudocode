/*
 * XREFs of ?OnEnsureForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x180153610
 * Callers:
 *     <none>
 * Callees:
 *     ?_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ @ 0x18000F9D8 (-_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ.c)
 *     ?EnsureForegroundRights@CortanaSharedExperienceManager@@UEAAJXZ @ 0x180151D90 (-EnsureForegroundRights@CortanaSharedExperienceManager@@UEAAJXZ.c)
 */

void __fastcall CortanaExperienceManagerNotification::OnEnsureForegroundRightsRequested(
        CortanaExperienceManagerNotification *this)
{
  __int64 v1; // rdx

  if ( CortanaExperienceManagerNotification::_CanNotify((CortanaExperienceManagerNotification *)((char *)this - 8)) )
    CortanaSharedExperienceManager::EnsureForegroundRights(*(CortanaSharedExperienceManager **)(v1 + 48));
}
