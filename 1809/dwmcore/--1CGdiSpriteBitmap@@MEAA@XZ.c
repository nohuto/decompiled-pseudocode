/*
 * XREFs of ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x1800926AC
 * Callers:
 *     ??_ECGdiSpriteBitmap@@MEAAPEAXI@Z @ 0x1800925B0 (--_ECGdiSpriteBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@IEAAXXZ @ 0x1800925F0 (-UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18009266C (--1CRegionShape@@UEAA@XZ.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@IEAAXXZ @ 0x180093130 (-ReleaseBitmapResources@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CGdiSpriteBitmap::~CGdiSpriteBitmap(CGdiSpriteBitmap *this)
{
  CMILRefCountBase *v2; // rcx
  CGdiSpriteBitmap **v3; // rdi
  CGdiSpriteBitmap **v4; // rsi

  *(_QWORD *)this = &CGdiSpriteBitmap::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CGdiSpriteBitmap::`vftable'{for `ISpriteImage'};
  *((_QWORD *)this + 8) = &CGdiSpriteBitmap::`vftable'{for `IDeviceResourceNotify'};
  CGdiSpriteBitmap::ReleaseBitmapResources(this);
  CGdiSpriteBitmap::UnRegisterWithSurfaceManager(this);
  v2 = (CMILRefCountBase *)*((_QWORD *)this + 10);
  if ( v2 )
    CMILRefCountBase::Release(v2);
  v3 = (CGdiSpriteBitmap **)*((_QWORD *)this + 59);
  if ( v3 )
  {
    v4 = (CGdiSpriteBitmap **)*((_QWORD *)this + 60);
    if ( v3 != v4 )
    {
      do
      {
        if ( *v3 )
          CGdiSpriteBitmap::Release(*v3);
        ++v3;
      }
      while ( v3 != v4 );
      v3 = (CGdiSpriteBitmap **)*((_QWORD *)this + 59);
    }
    std::_Deallocate<16,0>(v3, (*((_QWORD *)this + 61) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 59) = 0LL;
    *((_QWORD *)this + 60) = 0LL;
    *((_QWORD *)this + 61) = 0LL;
  }
  CRegionShape::~CRegionShape((CGdiSpriteBitmap *)((char *)this + 280));
  FastRegion::CRegion::FreeMemory((void **)this + 26);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 168);
  CResource::~CResource(this);
}
