/*
 * XREFs of ??1CHwndBitmap@@MEAA@XZ @ 0x1800D536C
 * Callers:
 *     ??_ECHwndBitmap@@MEAAPEAXI@Z @ 0x1800D532C (--_ECHwndBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x1801A9E7C (-RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 */

void __fastcall CHwndBitmap::~CHwndBitmap(CHwndBitmap *this)
{
  bool v1; // zf
  __int64 v3; // rcx
  CDirtyRegion *v4; // rcx

  v1 = *((_QWORD *)this + 12) == 0LL;
  *(_QWORD *)this = &CHwndBitmap::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 1) = &CHwndBitmap::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CHwndBitmap::`vftable'{for `CContent'};
  if ( !v1 )
    CWindowManager::RemoveHwndBitmap(*(CWindowManager **)(*((_QWORD *)this + 4) + 1328LL), this);
  CResource::UnRegisterNotifierInternal((CHwndBitmap *)((char *)this + 16), *((struct CResource **)this + 13));
  *((_QWORD *)this + 13) = 0LL;
  v3 = *((_QWORD *)this + 16);
  if ( v3 )
    CGdiSpriteBitmap::Release((CGdiSpriteBitmap *)(v3 + 16));
  v4 = (CDirtyRegion *)*((_QWORD *)this + 14);
  if ( v4 )
    CDirtyRegion::Release(v4);
  CBitmapResource::~CBitmapResource(this);
}
