/*
 * XREFs of ?ProcessNotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_NOTIFYDIRTY@@@Z @ 0x1800EB2C0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessNotifyDirty(
        CGdiSpriteBitmap *this,
        struct CResourceTable *a2,
        const struct MILCMD_GDISPRITEBITMAP_NOTIFYDIRTY *a3)
{
  return CGdiSpriteBitmap::NotifyDirty(this, *((_QWORD *)a3 + 1));
}
