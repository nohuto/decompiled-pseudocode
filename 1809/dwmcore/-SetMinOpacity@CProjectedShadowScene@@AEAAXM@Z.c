/*
 * XREFs of ?SetMinOpacity@CProjectedShadowScene@@AEAAXM@Z @ 0x1801B0488
 * Callers:
 *     ?ProcessSetMinOpacity@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_SETMINOPACITY@@@Z @ 0x1801B02F4 (-ProcessSetMinOpacity@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOW.c)
 *     ?SetProperty@CProjectedShadowScene@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801B0540 (-SetProperty@CProjectedShadowScene@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A5BF8 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProjectedShadowScene::SetMinOpacity(CProjectedShadowScene *this, float a2)
{
  float v3; // xmm1_4
  float v4; // xmm0_4

  v3 = fmaxf(0.0, a2);
  v4 = fminf(1.0, v3);
  if ( *((float *)this + 27) != v4 )
  {
    *((float *)this + 27) = v4;
    CResource::InvalidateAnimationSources(this, 6);
    (*(void (__fastcall **)(CProjectedShadowScene *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  }
}
