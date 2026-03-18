/*
 * XREFs of ?SetSDRBoost@CHDRConversionRenderTarget@@UEAAXM@Z @ 0x180203B00
 * Callers:
 *     ?SetSDRBoost@CHDRConversionRenderTarget@@WNA@EAAXM@Z @ 0x1800F1260 (-SetSDRBoost@CHDRConversionRenderTarget@@WNA@EAAXM@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHDRConversionRenderTarget::SetSDRBoost(CHDRConversionRenderTarget *this, float a2)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 74);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 160LL))(v3);
  CHwDisplayRenderTarget::SetSDRBoost(this, a2);
}
