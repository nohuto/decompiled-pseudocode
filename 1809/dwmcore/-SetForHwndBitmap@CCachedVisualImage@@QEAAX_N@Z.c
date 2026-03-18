/*
 * XREFs of ?SetForHwndBitmap@CCachedVisualImage@@QEAAX_N@Z @ 0x18018D6AC
 * Callers:
 *     ?SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@@Z @ 0x1800BD050 (-SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@@Z.c)
 *     ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x18019A494 (-EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ.c)
 * Callees:
 *     ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x180092390 (-ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ.c)
 */

void __fastcall CCachedVisualImage::SetForHwndBitmap(CCachedVisualImage *this, char a2)
{
  *((_BYTE *)this + 379) = a2;
  *(_QWORD *)((char *)this + 204) = 0LL;
  *((_DWORD *)this + 53) = 0;
  CCachedVisualImage::ChoosePixelFormat(this);
  CResource::NotifyOnChanged((__int64)this + 16, 0, 0LL);
}
