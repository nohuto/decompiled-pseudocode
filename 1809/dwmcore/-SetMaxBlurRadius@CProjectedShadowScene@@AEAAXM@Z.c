/*
 * XREFs of ?SetMaxBlurRadius@CProjectedShadowScene@@AEAAXM@Z @ 0x1801B037C
 * Callers:
 *     ?ProcessSetMaxBlurRadius@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_SETMAXBLURRADIUS@@@Z @ 0x1801B02A0 (-ProcessSetMaxBlurRadius@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHA.c)
 *     ?SetProperty@CProjectedShadowScene@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801B0540 (-SetProperty@CProjectedShadowScene@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A5BF8 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProjectedShadowScene::SetMaxBlurRadius(CProjectedShadowScene *this, float a2)
{
  float v3; // xmm0_4

  v3 = fmaxf(0.0, a2);
  if ( *((float *)this + 24) != v3 )
  {
    *((float *)this + 24) = v3;
    CResource::InvalidateAnimationSources(this, 3);
    (*(void (__fastcall **)(CProjectedShadowScene *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  }
}
