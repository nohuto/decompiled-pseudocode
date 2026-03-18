/*
 * XREFs of ?PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z @ 0x1800C9800
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180061D20 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E0B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 */

__int64 __fastcall CDrawingContext::PushTransform(CDrawingContext *this, struct CTransform *a2, __int64 a3, __int64 a4)
{
  const struct CMILMatrix *Matrix; // rax
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx

  if ( a2 )
    Matrix = CTransform3D::GetMatrix(a2, 0LL);
  else
    Matrix = (const struct CMILMatrix *)&CMILMatrix::Identity;
  LOBYTE(a4) = 1;
  v6 = CDrawingContext::PushTransformInternal(this, 0LL, Matrix, a4, 1);
  v8 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1199u, 0LL);
  return v8;
}
