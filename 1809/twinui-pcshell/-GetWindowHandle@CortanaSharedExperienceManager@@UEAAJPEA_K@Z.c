/*
 * XREFs of ?GetWindowHandle@CortanaSharedExperienceManager@@UEAAJPEA_K@Z @ 0x1800695A0
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003F6A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetViewWrapper@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x180069604 (-_GetViewWrapper@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerIntero.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::GetWindowHandle(
        CortanaSharedExperienceManager *this,
        unsigned __int64 *a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v3; // rdx
  __int64 v4; // rbx
  ExperienceManagerUtils *v6; // [rsp+48h] [rbp+10h] BYREF

  CortanaSharedExperienceManager::_GetViewWrapper(this, &v6);
  v4 = 0LL;
  if ( v6 )
    v4 = ExperienceManagerUtils::WindowFromViewWrapper(v6, v3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  *a2 = v4;
  return v4 == 0 ? 0x8007139F : 0;
}
