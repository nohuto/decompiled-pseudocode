/*
 * XREFs of ?SetSDRBoost@CHwDisplayRenderTarget@@UEAAXM@Z @ 0x1800D8B40
 * Callers:
 *     ?SetSDRBoost@CHwDisplayRenderTarget@@WJA@EAAXM@Z @ 0x1800ECA30 (-SetSDRBoost@CHwDisplayRenderTarget@@WJA@EAAXM@Z.c)
 *     ?SetSDRBoost@CHDRConversionRenderTarget@@UEAAXM@Z @ 0x18015FDA0 (-SetSDRBoost@CHDRConversionRenderTarget@@UEAAXM@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwDisplayRenderTarget::SetSDRBoost(CHwDisplayRenderTarget *this, float a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx

  v2 = *(_QWORD *)this;
  *((float *)this + 33) = a2;
  if ( (*(unsigned __int8 (**)(void))(v2 + 32))() )
  {
    v4 = *((_QWORD *)this + 22);
    *(float *)(v4 + 196) = (*(float (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 152LL))(this);
  }
}
