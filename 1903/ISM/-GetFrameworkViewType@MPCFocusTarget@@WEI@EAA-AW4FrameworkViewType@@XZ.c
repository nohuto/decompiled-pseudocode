/*
 * XREFs of ?GetFrameworkViewType@MPCFocusTarget@@WEI@EAA?AW4FrameworkViewType@@XZ @ 0x180038080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCFocusTarget::GetFrameworkViewType(__int64 a1)
{
  return MPCTarget::GetFrameworkViewType(a1 - 72);
}
