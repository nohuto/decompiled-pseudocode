/*
 * XREFs of ?RenderAdditionalTopmostContent@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@@Z @ 0x18024FBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18006E200 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180071500 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180072034 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800C24A4 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     CComposition::ForEachCursorVisual__lambda_48108cc7c31619439c6c6618e560de86___ @ 0x1800EBAE8 (CComposition--ForEachCursorVisual__lambda_48108cc7c31619439c6c6618e560de86___.c)
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
  signed int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  signed int v12; // eax
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
  if ( *((_BYTE *)this + 417) )
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
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xF3u, 0LL);
    }
    else
    {
      v11 = *(_QWORD *)(v3 + 16);
      v15 = v3;
      v12 = CComposition::ForEachCursorVisual__lambda_48108cc7c31619439c6c6618e560de86___(
              v11,
              (struct CComposition ***)&v15);
      v2 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x118u, 0LL);
      CDrawingContext::PopTransformInternal(*((CDrawingContext **)&v3 + 1), 1);
    }
  }
  return v2;
}
