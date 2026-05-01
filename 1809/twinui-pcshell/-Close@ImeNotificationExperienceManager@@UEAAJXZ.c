/*
 * XREFs of ?Close@ImeNotificationExperienceManager@@UEAAJXZ @ 0x1801563E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall ImeNotificationExperienceManager::Close(ImeNotificationExperienceManager *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 28);
  return 0LL;
}
