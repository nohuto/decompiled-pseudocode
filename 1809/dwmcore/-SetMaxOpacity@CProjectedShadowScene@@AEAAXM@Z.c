/*
 * XREFs of ?SetMaxOpacity@CProjectedShadowScene@@AEAAXM@Z @ 0x1801B03D0
 * Callers:
 *     ?ProcessSetMaxOpacity@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_SETMAXOPACITY@@@Z @ 0x1801B02BC (-ProcessSetMaxOpacity@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOW.c)
 *     ?SetProperty@CProjectedShadowScene@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801B0540 (-SetProperty@CProjectedShadowScene@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A5BF8 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProjectedShadowScene::SetMaxOpacity(CProjectedShadowScene *this, float a2)
{
  float v3; // xmm1_4
  float v4; // xmm0_4

  v3 = fmaxf(0.0, a2);
  v4 = fminf(1.0, v3);
  if ( *((float *)this + 25) != v4 )
  {
    *((float *)this + 25) = v4;
    CResource::InvalidateAnimationSources(this, 4);
    (*(void (__fastcall **)(CProjectedShadowScene *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  }
}
