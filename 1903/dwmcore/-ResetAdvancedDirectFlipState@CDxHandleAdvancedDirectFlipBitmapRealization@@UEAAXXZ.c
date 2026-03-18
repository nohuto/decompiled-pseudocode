/*
 * XREFs of ?ResetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ @ 0x180262A90
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ @ 0x180262AB8 (-ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ.c)
 */

void __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::ResetAdvancedDirectFlipState(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  CDxHandleAdvancedDirectFlipBitmapRealization::ResetRestoreBufferResources((CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 432));
  *((_BYTE *)this + 128) = 0;
}
