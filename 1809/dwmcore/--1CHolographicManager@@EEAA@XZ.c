/*
 * XREFs of ??1CHolographicManager@@EEAA@XZ @ 0x18020A324
 * Callers:
 *     ??_ECHolographicManager@@EEAAPEAXI@Z @ 0x18020A3F0 (--_ECHolographicManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x18007AF60 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ @ 0x18020B690 (-ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ.c)
 */

void __fastcall CHolographicManager::~CHolographicManager(CHolographicManager *this)
{
  CGdiSpriteBitmap *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  *(_QWORD *)this = &CHolographicManager::`vftable';
  v2 = (CGdiSpriteBitmap *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    CGdiSpriteBitmap::Release(v2);
    *((_QWORD *)this + 4) = 0LL;
    ReleaseInterface<CD3DSurface>((__int64 *)this + 5);
    ReleaseInterface<CD3DSurface>((__int64 *)this + 6);
    *((_DWORD *)this + 14) = DisplayId::None;
    *(_QWORD *)((char *)this + 60) = 0LL;
  }
  CHolographicManager::ReleaseInteropRenderTarget(this);
  v3 = (void *)*((_QWORD *)this + 26);
  if ( v3 )
    CloseHandle(v3);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 22);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 18);
  v4 = (void *)*((_QWORD *)this + 15);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 17) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 11);
}
