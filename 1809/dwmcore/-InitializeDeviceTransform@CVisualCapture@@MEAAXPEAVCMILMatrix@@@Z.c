/*
 * XREFs of ?InitializeDeviceTransform@CVisualCapture@@MEAAXPEAVCMILMatrix@@@Z @ 0x18001FF10
 * Callers:
 *     <none>
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800306CC (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x180044D00 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVi.c)
 */

void __fastcall CVisualCapture::InitializeDeviceTransform(CVisualCapture *this, struct CMILMatrix *a2)
{
  __int64 v3; // rcx
  _BYTE v4[64]; // [rsp+40h] [rbp-58h] BYREF
  int v5; // [rsp+80h] [rbp-18h]
  __int64 v6; // [rsp+A0h] [rbp+8h] BYREF

  *(_OWORD *)a2 = _xmm;
  *((_WORD *)a2 + 32) = 32085;
  *((_OWORD *)a2 + 1) = _xmm;
  *((_OWORD *)a2 + 2) = _xmm;
  *((_OWORD *)a2 + 3) = _xmm;
  v3 = *((_QWORD *)this + 50);
  if ( v3 )
  {
    v5 = 0;
    CVisual::CalcEffectiveTransform(v3, 5LL, 0LL, &v6, v4, 0LL, 0LL);
    CMILMatrix::Multiply(a2, (const struct CMILMatrix *)v4);
  }
}
