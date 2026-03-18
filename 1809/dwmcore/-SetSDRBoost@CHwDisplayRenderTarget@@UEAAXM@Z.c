/*
 * XREFs of ?SetSDRBoost@CHwDisplayRenderTarget@@UEAAXM@Z @ 0x18007AF90
 * Callers:
 *     ?SetSDRBoost@CHwDisplayRenderTarget@@WNA@EAAXM@Z @ 0x1800F1270 (-SetSDRBoost@CHwDisplayRenderTarget@@WNA@EAAXM@Z.c)
 *     ?SetSDRBoost@CHDRConversionRenderTarget@@UEAAXM@Z @ 0x180203B00 (-SetSDRBoost@CHDRConversionRenderTarget@@UEAAXM@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwDisplayRenderTarget::SetSDRBoost(CHwDisplayRenderTarget *this, float a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)this;
  *((float *)this + 49) = a2;
  if ( (*(unsigned __int8 (**)(void))(v2 + 32))() )
    *(float *)(*((_QWORD *)this + 30) + 196LL) = (*(float (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 152LL))(this);
}
