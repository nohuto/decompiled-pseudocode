/*
 * XREFs of ?SetCenter@CVisual@@QEAAXNN@Z @ 0x18008E604
 * Callers:
 *     ?UpdateAngle@CScreenRotation@@QEAAXHH@Z @ 0x1800A618C (-UpdateAngle@CScreenRotation@@QEAAXHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::SetCenter(CVisual *this, double a2, double a3)
{
  float v3; // xmm0_4
  float v4; // xmm0_4
  double v5; // rax

  v3 = a2;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)this + 18) - v3)) & _xmm) > 0.0000011920929
    || (v4 = a3,
        (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)this + 19) - v4)) & _xmm) > 0.0000011920929) )
  {
    v5 = *(double *)this;
    *((double *)this + 18) = a2;
    *((double *)this + 19) = a3;
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)&v5 + 24LL))(this, 16LL);
  }
}
