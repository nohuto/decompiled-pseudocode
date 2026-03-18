/*
 * XREFs of ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x18008B7E8
 * Callers:
 *     ?OnChanged@CCachedVisualImage@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008B7C0 (-OnChanged@CCachedVisualImage@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x1800921EC (-ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z.c)
 *     ?SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x18018D8A4 (-SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ @ 0x18008C270 (-Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ.c)
 *     ?IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ @ 0x18008C6F4 (-IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ.c)
 *     ?RemoveAt@?$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z @ 0x180091468 (-RemoveAt@-$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z.c)
 */

void __fastcall CCachedVisualImage::MarkAllTargetsDirty(CCachedVisualImage *this)
{
  int v1; // ebx
  _QWORD *v2; // rsi
  __int64 v3; // rbp
  CCachedVisualImage::RenderTargetBitmapInfo *v4; // rdi

  v1 = *((_DWORD *)this + 66);
  if ( v1 > 0 )
  {
    v2 = (_QWORD *)((char *)this + 240);
    do
    {
      v3 = (unsigned int)(v1 - 1);
      v4 = (CCachedVisualImage::RenderTargetBitmapInfo *)(*v2 + 48 * v3);
      if ( CCachedVisualImage::RenderTargetBitmapInfo::IsValid(v4) )
      {
        *((_BYTE *)v4 + 44) = 1;
      }
      else
      {
        CCachedVisualImage::RenderTargetBitmapInfo::Destruct(v4);
        DynArray<CCachedVisualImage::RenderTargetBitmapInfo,1>::RemoveAt(v2, (unsigned int)v3);
      }
      --v1;
    }
    while ( v1 > 0 );
  }
}
