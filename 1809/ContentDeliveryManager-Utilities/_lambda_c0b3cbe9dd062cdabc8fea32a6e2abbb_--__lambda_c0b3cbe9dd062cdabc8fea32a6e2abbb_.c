/*
 * XREFs of _lambda_c0b3cbe9dd062cdabc8fea32a6e2abbb_::__lambda_c0b3cbe9dd062cdabc8fea32a6e2abbb_ @ 0x18000BF6C
 * Callers:
 *     _ContentManagement::ThumbnailCacheHelper::AddThumbnailToCacheAsync_::_1_::dtor$1 @ 0x1800C8272 (_ContentManagement--ThumbnailCacheHelper--AddThumbnailToCacheAsync_--_1_--dtor$1.c)
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
