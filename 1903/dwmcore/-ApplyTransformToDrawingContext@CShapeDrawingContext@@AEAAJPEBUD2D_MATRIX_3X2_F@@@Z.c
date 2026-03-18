/*
 * XREFs of ?ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180253240
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180253C38 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180071500 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800C24A4 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 */

__int64 __fastcall CShapeDrawingContext::ApplyTransformToDrawingContext(
        CDrawingContext **this,
        const struct D2D_MATRIX_3X2_F *a2)
{
  unsigned int v2; // edi
  const struct D2D_MATRIX_3X2_F *v3; // r8
  FLOAT m11; // xmm0_4
  FLOAT m12; // xmm1_4
  CDrawingContext *v7; // rcx
  FLOAT m22; // xmm0_4
  FLOAT dx; // xmm1_4
  FLOAT dy; // xmm0_4
  signed int v11; // eax
  __int64 v12; // rcx
  _DWORD v14[6]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+48h] [rbp-38h]
  __int64 v16; // [rsp+50h] [rbp-30h]
  int v17; // [rsp+58h] [rbp-28h]
  int v18; // [rsp+5Ch] [rbp-24h]
  FLOAT v19; // [rsp+60h] [rbp-20h]
  FLOAT v20; // [rsp+64h] [rbp-1Ch]
  int v21; // [rsp+68h] [rbp-18h]
  int v22; // [rsp+6Ch] [rbp-14h]
  int v23; // [rsp+70h] [rbp-10h]

  v2 = 0;
  v3 = a2;
  if ( a2 )
  {
    if ( *((_BYTE *)this + 528) && *((_BYTE *)this + 530) )
    {
      CDrawingContext::PopTransformInternal(this[41], 1);
      *((_BYTE *)this + 530) = 0;
    }
    if ( !*((_BYTE *)this + 530) )
    {
      m11 = v3->m11;
      m12 = v3->m12;
      v7 = this[41];
      v23 = 0;
      v14[2] = 0;
      v14[3] = 0;
      v15 = 0LL;
      v16 = 0LL;
      v18 = 0;
      v21 = 0;
      *(FLOAT *)v14 = m11;
      m22 = v3->m22;
      *(FLOAT *)&v14[1] = m12;
      v14[4] = LODWORD(v3->m21);
      dx = v3->dx;
      *(FLOAT *)&v14[5] = m22;
      dy = v3->dy;
      v19 = dx;
      v20 = dy;
      v17 = 1065353216;
      v22 = 1065353216;
      v11 = CDrawingContext::PushTransformInternal(v7, 0LL, (const struct CMILMatrix *)v14, 1, 1);
      v2 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x189u, 0LL);
      }
      else
      {
        *((_BYTE *)this + 528) = 0;
        *((_BYTE *)this + 530) = 1;
      }
    }
  }
  else if ( *((_BYTE *)this + 530) )
  {
    CDrawingContext::PopTransformInternal(this[41], 1);
    *((_BYTE *)this + 530) = 0;
  }
  return v2;
}
