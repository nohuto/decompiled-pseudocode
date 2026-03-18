/*
 * XREFs of ??1CHDRConversionRenderTarget@@MEAA@XZ @ 0x180203704
 * Callers:
 *     ??_GCHDRConversionRenderTarget@@MEAAPEAXI@Z @ 0x180203770 (--_GCHDRConversionRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHDRConversionRenderTarget::~CHDRConversionRenderTarget(CHDRConversionRenderTarget *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CHDRConversionRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 20) = &CHDRConversionRenderTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 26) = &CHDRConversionRenderTarget::`vftable';
  v2 = *((_QWORD *)this + 74);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  FastRegion::CRegion::FreeMemory((void **)this + 75);
  CHwFullScreenRenderTarget::~CHwFullScreenRenderTarget(this);
}
