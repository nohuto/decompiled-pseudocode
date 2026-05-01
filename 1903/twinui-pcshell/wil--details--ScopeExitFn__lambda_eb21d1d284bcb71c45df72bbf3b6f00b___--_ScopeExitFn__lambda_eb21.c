/*
 * XREFs of wil::details::ScopeExitFn__lambda_eb21d1d284bcb71c45df72bbf3b6f00b___::_ScopeExitFn__lambda_eb21d1d284bcb71c45df72bbf3b6f00b___ @ 0x1801A7190
 * Callers:
 *     __lambda_47c4ee998602912f584be58de1a81d16_::operator()_::_1_::dtor$0 @ 0x1801A76F2 (__lambda_47c4ee998602912f584be58de1a81d16_--operator()_--_1_--dtor$0.c)
 *     _CVirtualTouchpadExperienceManager::HideInternal_::_1_::dtor$0 @ 0x1801A8CF6 (_CVirtualTouchpadExperienceManager--HideInternal_--_1_--dtor$0.c)
 *     _CVirtualTouchpadExperienceManager::OnViewPropertiesChanging_::_1_::dtor$0 @ 0x1801A9563 (_CVirtualTouchpadExperienceManager--OnViewPropertiesChanging_--_1_--dtor$0.c)
 *     _CVirtualTouchpadExperienceManager::OnViewShown_::_1_::dtor$0 @ 0x1801A967C (_CVirtualTouchpadExperienceManager--OnViewShown_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_eb21d1d284bcb71c45df72bbf3b6f00b___::_ScopeExitFn__lambda_eb21d1d284bcb71c45df72bbf3b6f00b___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_DWORD *)(result + 736) = 0;
  }
  return result;
}
