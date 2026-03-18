/*
 * XREFs of ?NeedsCopyFrontToBack@CHwFullScreenRenderTarget@@IEAA_NXZ @ 0x180167B50
 * Callers:
 *     ?ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z @ 0x1800BCD30 (-ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CHwFullScreenRenderTarget::NeedsCopyFrontToBack(CHwFullScreenRenderTarget *this)
{
  bool result; // al

  if ( (*((_DWORD *)this + 67) & 0x408) != 0x408 )
    return 0;
  if ( (*(unsigned __int8 (__fastcall **)(CHwFullScreenRenderTarget *))(*(_QWORD *)this + 304LL))(this) )
    return 0;
  result = 1;
  if ( *((_DWORD *)this + 56) <= 1u )
    return 0;
  return result;
}
