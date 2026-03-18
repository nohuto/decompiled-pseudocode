/*
 * XREFs of ??1CBitmapRealization@@MEAA@XZ @ 0x18009B59C
 * Callers:
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x1800918B0 (--1CSectionBitmapRealization@@MEAA@XZ.c)
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x18009B524 (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ??_GCD2DBitmapCacheSourceRealization@@UEAAPEAXI@Z @ 0x18009E210 (--_GCD2DBitmapCacheSourceRealization@@UEAAPEAXI@Z.c)
 *     ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x18022877C (--1CDxHandleYUVBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBitmapRealization::~CBitmapRealization(CBitmapRealization *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 51);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  FastRegion::CRegion::FreeMemory((void **)this + 42);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 96);
  CD2DBitmapCache::~CD2DBitmapCache(this);
}
