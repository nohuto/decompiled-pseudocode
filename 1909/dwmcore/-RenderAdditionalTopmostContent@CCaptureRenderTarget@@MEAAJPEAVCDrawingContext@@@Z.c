/*
 * XREFs of ?RenderAdditionalTopmostContent@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@@Z @ 0x18024E490
 * Callers:
 *     <none>
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180036740 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180061D20 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E0B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800C2114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     CComposition::ForEachCursorVisual__lambda_ea7f4e07214ebedb7f6a77cfc24d0f02___ @ 0x1800EDCF8 (CComposition--ForEachCursorVisual__lambda_ea7f4e07214ebedb7f6a77cfc24d0f02___.c)
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
  __int64 v9; // r9
  signed int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  signed int v13; // eax
  __int64 v14; // rcx
  __int128 v16; // [rsp+38h] [rbp-9h] BYREF
  __int128 v17; // [rsp+48h] [rbp+7h] BYREF
  __int128 v18; // [rsp+58h] [rbp+17h]
  __int128 v19; // [rsp+68h] [rbp+27h]
  __int128 v20; // [rsp+78h] [rbp+37h]
  int v21; // [rsp+88h] [rbp+47h]

  v2 = 0;
  *((_QWORD *)&v3 + 1) = a2;
  *(_QWORD *)&v3 = this;
  if ( *((_BYTE *)this + 417) )
  {
    v21 = 0;
    v4 = (CTransform3D *)*((_QWORD *)this + 23);
    if ( v4 )
    {
      Matrix = CTransform3D::GetMatrix(v4, 0LL);
      v6 = *((_OWORD *)Matrix + 1);
      v17 = *(_OWORD *)Matrix;
      v7 = *((_OWORD *)Matrix + 2);
      v18 = v6;
      v8 = *((_OWORD *)Matrix + 3);
      LODWORD(Matrix) = *((_DWORD *)Matrix + 16);
      v19 = v7;
      v20 = v8;
      v21 = (int)Matrix;
    }
    else
    {
      v17 = _xmm;
      v18 = _xmm;
      v19 = _xmm;
      v20 = _xmm;
      LOWORD(v21) = 32085;
    }
    CMILMatrix::Translate(
      (CMILMatrix *)&v17,
      COERCE_FLOAT(*(_DWORD *)(v3 + 584) ^ _xmm),
      COERCE_FLOAT(*(_DWORD *)(v3 + 588) ^ _xmm));
    LOBYTE(v9) = 1;
    v10 = CDrawingContext::PushTransformInternal(
            *((CDrawingContext **)&v3 + 1),
            0LL,
            (const struct CMILMatrix *)&v17,
            v9,
            1);
    v2 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xF4u, 0LL);
    }
    else
    {
      v12 = *(_QWORD *)(v3 + 16);
      v16 = v3;
      v13 = CComposition::ForEachCursorVisual__lambda_ea7f4e07214ebedb7f6a77cfc24d0f02___(
              v12,
              (struct CComposition ***)&v16);
      v2 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x119u, 0LL);
      CDrawingContext::PopTransformInternal(*((CDrawingContext **)&v3 + 1), 1);
    }
  }
  return v2;
}
