/*
 * XREFs of ??1CHDRConversionRenderTarget@@MEAA@XZ @ 0x18015F970
 * Callers:
 *     ??_GCHDRConversionRenderTarget@@MEAAPEAXI@Z @ 0x18015FA10 (--_GCHDRConversionRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHDRConversionRenderTarget::~CHDRConversionRenderTarget(CHDRConversionRenderTarget *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CHDRConversionRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 12) = &CHDRConversionRenderTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 18) = &CHDRConversionRenderTarget::`vftable';
  v2 = *((_QWORD *)this + 66);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  FastRegion::CRegion::FreeMemory((void **)this + 67);
  CHwFullScreenRenderTarget::~CHwFullScreenRenderTarget(this);
}
