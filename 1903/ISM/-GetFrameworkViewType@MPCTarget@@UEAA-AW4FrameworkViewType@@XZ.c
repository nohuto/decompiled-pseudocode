/*
 * XREFs of ?GetFrameworkViewType@MPCTarget@@UEAA?AW4FrameworkViewType@@XZ @ 0x18000E0F0
 * Callers:
 *     ?GetFrameworkViewType@MPCFocusTarget@@WEI@EAA?AW4FrameworkViewType@@XZ @ 0x180038080 (-GetFrameworkViewType@MPCFocusTarget@@WEI@EAA-AW4FrameworkViewType@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCTarget::GetFrameworkViewType(__int64 a1)
{
  return *(unsigned int *)(a1 + 52);
}
