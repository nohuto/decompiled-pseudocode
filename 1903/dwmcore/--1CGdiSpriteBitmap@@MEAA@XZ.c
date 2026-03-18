/*
 * XREFs of ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x180027D50
 * Callers:
 *     ??_ECGdiSpriteBitmap@@MEAAPEAXI@Z @ 0x180027D10 (--_ECGdiSpriteBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CRegionShape@@UEAA@XZ @ 0x1800282CC (--1CRegionShape@@UEAA@XZ.c)
 *     ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ @ 0x180028320 (-UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x18003A050 (-ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800BD580 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CGdiSpriteBitmap::~CGdiSpriteBitmap(CGdiSpriteBitmap *this)
{
  CDirtyRegion *v2; // rcx
  CGdiSpriteBitmap **v3; // rdi
  CGdiSpriteBitmap **v4; // rsi

  *(_QWORD *)this = &CGdiSpriteBitmap::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CGdiSpriteBitmap::`vftable'{for `ISpriteImage'};
  *((_QWORD *)this + 8) = &CGdiSpriteBitmap::`vftable'{for `IDeviceResourceNotify'};
  CGdiSpriteBitmap::ReleaseBitmapResources(this);
  CGdiSpriteBitmap::UnRegisterWithSurfaceManager(this);
  v2 = (CDirtyRegion *)*((_QWORD *)this + 10);
  if ( v2 )
    CDirtyRegion::Release(v2);
  v3 = (CGdiSpriteBitmap **)*((_QWORD *)this + 58);
  if ( v3 )
  {
    v4 = (CGdiSpriteBitmap **)*((_QWORD *)this + 59);
    if ( v3 != v4 )
    {
      do
      {
        if ( *v3 )
          CGdiSpriteBitmap::Release(*v3);
        ++v3;
      }
      while ( v3 != v4 );
      v3 = (CGdiSpriteBitmap **)*((_QWORD *)this + 58);
    }
    std::_Deallocate<16,0>(v3, (*((_QWORD *)this + 60) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 58) = 0LL;
    *((_QWORD *)this + 59) = 0LL;
    *((_QWORD *)this + 60) = 0LL;
  }
  CRegionShape::~CRegionShape((CGdiSpriteBitmap *)((char *)this + 280));
  FastRegion::CRegion::FreeMemory((CGdiSpriteBitmap *)((char *)this + 208));
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 168);
  CResource::~CResource(this);
}
