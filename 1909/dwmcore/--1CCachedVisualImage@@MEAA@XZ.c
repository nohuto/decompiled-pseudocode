/*
 * XREFs of ??1CCachedVisualImage@@MEAA@XZ @ 0x1800AD37C
 * Callers:
 *     ??_ECCachedVisualImage@@MEAAPEAXI@Z @ 0x1800AD33C (--_ECCachedVisualImage@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800A75F0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ @ 0x1800AD458 (-RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ.c)
 *     ?UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ @ 0x1800AD4D0 (-UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ.c)
 */

void __fastcall CCachedVisualImage::~CCachedVisualImage(CCachedVisualImage *this)
{
  __int64 v1; // r8
  CCachedVisualImage *v2; // rdi
  __int64 v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // r9
  CGdiSpriteBitmap *v7; // rcx

  v1 = *((_QWORD *)this + 4);
  *(_QWORD *)this = &CCachedVisualImage::`vftable'{for `IPixelFormat'};
  v2 = (CCachedVisualImage *)((char *)this + 16);
  *((_QWORD *)this + 1) = &CCachedVisualImage::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CCachedVisualImage::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CCachedVisualImage::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 16) = &CCachedVisualImage::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 17) = &CCachedVisualImage::`vftable'{for `IBitmapRealization'};
  v4 = 0LL;
  v5 = *(_DWORD *)(v1 + 688);
  v6 = *(_QWORD *)(v1 + 664);
  if ( v5 )
  {
    do
    {
      if ( this == *(CCachedVisualImage **)(v6 + 8 * v4) )
        break;
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < v5 );
  }
  if ( (unsigned int)v4 < v5 )
  {
    while ( (unsigned int)v4 < v5 - 1 )
    {
      *(_QWORD *)(v6 + 8 * v4) = *(_QWORD *)(v6 + 8LL * (unsigned int)(v4 + 1));
      v4 = (unsigned int)(v4 + 1);
      v5 = *(_DWORD *)(v1 + 688);
    }
    *(_DWORD *)(v1 + 688) = v5 - 1;
  }
  v7 = (CGdiSpriteBitmap *)*((_QWORD *)this + 46);
  if ( v7 )
    CGdiSpriteBitmap::Release(v7);
  operator delete(*((void **)this + 27));
  CCachedVisualImage::UnRegisterNotifiers(v2);
  CCachedVisualImage::RemoveAllTargets(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 30);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 80);
  CResource::~CResource(v2);
}
