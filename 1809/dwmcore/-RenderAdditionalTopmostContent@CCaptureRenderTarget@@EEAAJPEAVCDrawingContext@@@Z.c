/*
 * XREFs of ?RenderAdditionalTopmostContent@CCaptureRenderTarget@@EEAAJPEAVCDrawingContext@@@Z @ 0x180158DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002E720 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180032B60 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006726C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18008E53C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     CComposition::ForEachCursorVisual__lambda_560441768002dbeae5646fa63dd995da___ @ 0x180157794 (CComposition--ForEachCursorVisual__lambda_560441768002dbeae5646fa63dd995da___.c)
 */

__int64 __fastcall CCaptureRenderTarget::RenderAdditionalTopmostContent(
        CCaptureRenderTarget *this,
        struct CDrawingContext *a2)
{
  unsigned int v2; // ebx
  __int128 v3; // rdi
  CTransform3D *v4; // rcx
  const struct CMILMatrix *Matrix; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int128 v15; // [rsp+38h] [rbp-9h] BYREF
  __int128 v16; // [rsp+48h] [rbp+7h] BYREF
  __int128 v17; // [rsp+58h] [rbp+17h]
  __int128 v18; // [rsp+68h] [rbp+27h]
  __int128 v19; // [rsp+78h] [rbp+37h]
  int v20; // [rsp+88h] [rbp+47h]

  v2 = 0;
  *((_QWORD *)&v3 + 1) = a2;
  *(_QWORD *)&v3 = this;
  if ( *((_BYTE *)this + 425) )
  {
    v20 = 0;
    v4 = (CTransform3D *)*((_QWORD *)this + 23);
    if ( v4 )
    {
      Matrix = CTransform3D::GetMatrix(v4, 0LL);
      v6 = *((_OWORD *)Matrix + 1);
      v16 = *(_OWORD *)Matrix;
      v7 = *((_OWORD *)Matrix + 2);
      v17 = v6;
      v8 = *((_OWORD *)Matrix + 3);
      LODWORD(Matrix) = *((_DWORD *)Matrix + 16);
      v18 = v7;
      v19 = v8;
      v20 = (int)Matrix;
    }
    else
    {
      v16 = _xmm;
      v17 = _xmm;
      v18 = _xmm;
      v19 = _xmm;
      LOWORD(v20) = 32085;
    }
    CMILMatrix::Translate(
      (CMILMatrix *)&v16,
      COERCE_FLOAT(*(_DWORD *)(v3 + 584) ^ _xmm),
      COERCE_FLOAT(*(_DWORD *)(v3 + 588) ^ _xmm));
    v9 = CDrawingContext::PushTransformInternal(
           *((CDrawingContext **)&v3 + 1),
           0LL,
           (const struct CMILMatrix *)&v16,
           1,
           1);
    v2 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x101u);
    }
    else
    {
      v11 = *(_QWORD *)(v3 + 16);
      v15 = v3;
      v12 = CComposition::ForEachCursorVisual__lambda_560441768002dbeae5646fa63dd995da___(
              v11,
              (struct CComposition ***)&v15);
      v2 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x126u);
      CDrawingContext::PopTransformInternal(*((CDrawingContext **)&v3 + 1), 1);
    }
  }
  return v2;
}
