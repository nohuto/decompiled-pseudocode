/*
 * XREFs of ??1CHolographicManager@@EEAA@XZ @ 0x1802408B8
 * Callers:
 *     ??_ECHolographicManager@@EEAAPEAXI@Z @ 0x1802409E8 (--_ECHolographicManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180023F3C (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800BD580 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ @ 0x180241E4C (-ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ.c)
 */

void __fastcall CHolographicManager::~CHolographicManager(CHolographicManager *this)
{
  CGdiSpriteBitmap *v2; // rcx
  int v3; // eax
  void *v4; // rcx
  void *v5; // rcx
  CGdiSpriteBitmap **v6; // rdi
  CGdiSpriteBitmap **v7; // rsi

  *(_QWORD *)this = &CHolographicManager::`vftable'{for `IHolographicManager'};
  *((_QWORD *)this + 1) = &CHolographicManager::`vftable'{for `CMILRefCountBase'};
  v2 = (CGdiSpriteBitmap *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    CGdiSpriteBitmap::Release(v2);
    *((_QWORD *)this + 5) = 0LL;
    ReleaseInterface<CD3DSurface>((__int64 *)this + 6);
    ReleaseInterface<CD3DSurface>((__int64 *)this + 7);
    v3 = (int)DisplayId::None;
    *(_QWORD *)((char *)this + 68) = 0LL;
    *((_DWORD *)this + 16) = v3;
  }
  CHolographicManager::ReleaseInteropRenderTarget(this);
  v4 = (void *)*((_QWORD *)this + 29);
  if ( v4 )
    CloseHandle(v4);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 200);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 168);
  v5 = (void *)*((_QWORD *)this + 18);
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, (*((_QWORD *)this + 20) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 112);
  v6 = (CGdiSpriteBitmap **)*((_QWORD *)this + 10);
  if ( v6 )
  {
    v7 = (CGdiSpriteBitmap **)*((_QWORD *)this + 11);
    if ( v6 != v7 )
    {
      do
      {
        if ( *v6 )
          CGdiSpriteBitmap::Release(*v6);
        ++v6;
      }
      while ( v6 != v7 );
      v6 = (CGdiSpriteBitmap **)*((_QWORD *)this + 10);
    }
    std::_Deallocate<16,0>(v6, (*((_QWORD *)this + 12) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
}
