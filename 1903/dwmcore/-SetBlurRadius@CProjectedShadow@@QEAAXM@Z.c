/*
 * XREFs of ?SetBlurRadius@CProjectedShadow@@QEAAXM@Z @ 0x1801F2128
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180008230 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProjectedShadow::SetBlurRadius(CProjectedShadow *this, float a2)
{
  __int64 v2; // rax

  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a2 - *((float *)this + 20))) & _xmm) > 0.5 )
  {
    v2 = *(_QWORD *)this;
    *((float *)this + 20) = a2;
    (*(void (__fastcall **)(CProjectedShadow *, _QWORD, CProjectedShadow *))(v2 + 64))(this, 0LL, this);
  }
}
