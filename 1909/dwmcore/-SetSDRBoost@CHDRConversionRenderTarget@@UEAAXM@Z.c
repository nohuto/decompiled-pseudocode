/*
 * XREFs of ?SetSDRBoost@CHDRConversionRenderTarget@@UEAAXM@Z @ 0x18015E6B0
 * Callers:
 *     ?SetSDRBoost@CHDRConversionRenderTarget@@WJA@EAAXM@Z @ 0x1800F06E0 (-SetSDRBoost@CHDRConversionRenderTarget@@WJA@EAAXM@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHDRConversionRenderTarget::SetSDRBoost(CHDRConversionRenderTarget *this, float a2)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 66);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 160LL))(v3);
  CHwDisplayRenderTarget::SetSDRBoost(this, a2);
}
