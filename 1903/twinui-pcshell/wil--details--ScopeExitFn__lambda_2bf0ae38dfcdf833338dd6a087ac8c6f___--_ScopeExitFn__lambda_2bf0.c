/*
 * XREFs of wil::details::ScopeExitFn__lambda_2bf0ae38dfcdf833338dd6a087ac8c6f___::_ScopeExitFn__lambda_2bf0ae38dfcdf833338dd6a087ac8c6f___ @ 0x180196F10
 * Callers:
 *     _CStartExperienceManager::SetBackgroundImage_::_1_::dtor$2 @ 0x180199C2F (_CStartExperienceManager--SetBackgroundImage_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::details::ScopeExitFn__lambda_2bf0ae38dfcdf833338dd6a087ac8c6f___::_ScopeExitFn__lambda_2bf0ae38dfcdf833338dd6a087ac8c6f___(
        __int64 a1)
{
  BOOL result; // eax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return DestroyWindow(*(HWND *)a1);
  }
  return result;
}
