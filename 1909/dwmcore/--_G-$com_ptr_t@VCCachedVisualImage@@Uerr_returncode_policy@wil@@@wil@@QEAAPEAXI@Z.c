/*
 * XREFs of ??_G?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAXI@Z @ 0x18019D364
 * Callers:
 *     ??$destruct_range@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x18019B0DC (--$destruct_range@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@detail@@Y.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 */

__int64 *__fastcall wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>::`scalar deleting destructor'(
        __int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
    CGdiSpriteBitmap::Release((CGdiSpriteBitmap *)(v2 + 16));
  return a1;
}
