/*
 * XREFs of ?SetShadowOpacity@CProjectedShadow@@QEAAXM@Z @ 0x1801F09E8
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180006990 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProjectedShadow::SetShadowOpacity(CProjectedShadow *this, float a2)
{
  __int64 v2; // rax

  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 21) - a2)) & _xmm) > 0.0000011920929 )
  {
    v2 = *(_QWORD *)this;
    *((float *)this + 21) = a2;
    (*(void (__fastcall **)(CProjectedShadow *, __int64, CProjectedShadow *))(v2 + 64))(this, 5LL, this);
  }
}
