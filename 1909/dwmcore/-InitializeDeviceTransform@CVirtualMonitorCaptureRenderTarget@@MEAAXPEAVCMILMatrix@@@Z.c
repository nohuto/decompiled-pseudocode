/*
 * XREFs of ?InitializeDeviceTransform@CVirtualMonitorCaptureRenderTarget@@MEAAXPEAVCMILMatrix@@@Z @ 0x1801A55D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeDeviceTransform@COffScreenRenderTarget@@MEAAXPEAVCMILMatrix@@@Z @ 0x180199530 (-InitializeDeviceTransform@COffScreenRenderTarget@@MEAAXPEAVCMILMatrix@@@Z.c)
 */

void __fastcall CVirtualMonitorCaptureRenderTarget::InitializeDeviceTransform(
        CVirtualMonitorCaptureRenderTarget *this,
        struct CMILMatrix *a2)
{
  if ( *((_QWORD *)this + 15) )
  {
    COffScreenRenderTarget::InitializeDeviceTransform(this, a2);
  }
  else
  {
    *(_OWORD *)a2 = _xmm;
    *((_WORD *)a2 + 32) = 32085;
    *((_OWORD *)a2 + 1) = _xmm;
    *((_OWORD *)a2 + 2) = _xmm;
    *((_OWORD *)a2 + 3) = _xmm;
  }
  CMILMatrix::Translate(
    a2,
    COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((int *)this + 159)) ^ _xmm),
    COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((int *)this + 160)) ^ _xmm));
}
