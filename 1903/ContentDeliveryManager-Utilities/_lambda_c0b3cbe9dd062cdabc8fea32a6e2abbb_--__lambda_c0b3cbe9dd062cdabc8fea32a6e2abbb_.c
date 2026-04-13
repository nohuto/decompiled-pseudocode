/*
 * XREFs of _lambda_c0b3cbe9dd062cdabc8fea32a6e2abbb_::__lambda_c0b3cbe9dd062cdabc8fea32a6e2abbb_ @ 0x18000C44C
 * Callers:
 *     _ContentManagement::ThumbnailCacheHelper::AddThumbnailToCacheAsync_::_1_::dtor$1 @ 0x1800CC192 (_ContentManagement--ThumbnailCacheHelper--AddThumbnailToCacheAsync_--_1_--dtor$1.c)
 *     _Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&ContentManagement::AddThumbnailToCacheAsyncActionName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_c0b3cbe9dd062cdabc8fea32a6e2abbb____::_1_::dtor$2 @ 0x1800CC862 (_Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-ContentManagement--Ad.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall lambda_c0b3cbe9dd062cdabc8fea32a6e2abbb_::__lambda_c0b3cbe9dd062cdabc8fea32a6e2abbb_(HSTRING *a1)
{
  HSTRING v1; // rcx
  HRESULT result; // eax

  v1 = *a1;
  if ( v1 )
    return WindowsDeleteString(v1);
  return result;
}
