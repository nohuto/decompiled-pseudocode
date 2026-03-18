/*
 * XREFs of ??1CBitmapRealization@@MEAA@XZ @ 0x18003AC10
 * Callers:
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x18003AC5C (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x1800CD7AC (--1CSectionBitmapRealization@@MEAA@XZ.c)
 *     ??_GCD2DBitmapCacheSourceRealization@@UEAAPEAXI@Z @ 0x1800D59B0 (--_GCD2DBitmapCacheSourceRealization@@UEAAPEAXI@Z.c)
 *     ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x1802639D0 (--1CDxHandleYUVBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBitmapRealization::~CBitmapRealization(CBitmapRealization *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 51);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  FastRegion::CRegion::FreeMemory((CBitmapRealization *)((char *)this + 336));
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 96);
  CD2DBitmapCache::~CD2DBitmapCache(this);
}
