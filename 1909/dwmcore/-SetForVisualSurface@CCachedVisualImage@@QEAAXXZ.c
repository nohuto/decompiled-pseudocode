/*
 * XREFs of ?SetForVisualSurface@CCachedVisualImage@@QEAAXXZ @ 0x1801C7F7C
 * Callers:
 *     ?CreateCVI@CVisualSurface@@AEAAJPEAPEAVCCachedVisualImage@@@Z @ 0x1801FC900 (-CreateCVI@CVisualSurface@@AEAAJPEAPEAVCCachedVisualImage@@@Z.c)
 * Callees:
 *     ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x1800AD130 (-ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ.c)
 */

void __fastcall CCachedVisualImage::SetForVisualSurface(CCachedVisualImage *this)
{
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 28;
  *((_DWORD *)this + 53) = 1;
  *((_BYTE *)this + 377) = 1;
  CCachedVisualImage::ChoosePixelFormat(this);
  CResource::NotifyOnChanged((__int64)this + 16, 0, 0LL);
}
