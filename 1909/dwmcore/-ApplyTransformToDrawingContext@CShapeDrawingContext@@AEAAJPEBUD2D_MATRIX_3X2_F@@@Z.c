/*
 * XREFs of ?ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180251AD0
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1802524C8 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E0B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800C2114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 */

__int64 __fastcall CShapeDrawingContext::ApplyTransformToDrawingContext(
        CDrawingContext **this,
        const struct D2D_MATRIX_3X2_F *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // edi
  const struct D2D_MATRIX_3X2_F *v5; // r8
  FLOAT m11; // xmm0_4
  FLOAT m12; // xmm1_4
  CDrawingContext *v9; // rcx
  FLOAT m22; // xmm0_4
  FLOAT dx; // xmm1_4
  FLOAT dy; // xmm0_4
  signed int v13; // eax
  __int64 v14; // rcx
  _DWORD v16[6]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+48h] [rbp-38h]
  __int64 v18; // [rsp+50h] [rbp-30h]
  int v19; // [rsp+58h] [rbp-28h]
  int v20; // [rsp+5Ch] [rbp-24h]
  FLOAT v21; // [rsp+60h] [rbp-20h]
  FLOAT v22; // [rsp+64h] [rbp-1Ch]
  int v23; // [rsp+68h] [rbp-18h]
  int v24; // [rsp+6Ch] [rbp-14h]
  int v25; // [rsp+70h] [rbp-10h]

  v4 = 0;
  v5 = a2;
  if ( a2 )
  {
    if ( *((_BYTE *)this + 528) && *((_BYTE *)this + 530) )
    {
      CDrawingContext::PopTransformInternal(this[41], 1);
      *((_BYTE *)this + 530) = 0;
    }
    if ( !*((_BYTE *)this + 530) )
    {
      m11 = v5->m11;
      LOBYTE(a4) = 1;
      m12 = v5->m12;
      v9 = this[41];
      v25 = 0;
      v16[2] = 0;
      v16[3] = 0;
      v17 = 0LL;
      v18 = 0LL;
      v20 = 0;
      v23 = 0;
      *(FLOAT *)v16 = m11;
      m22 = v5->m22;
      *(FLOAT *)&v16[1] = m12;
      v16[4] = LODWORD(v5->m21);
      dx = v5->dx;
      *(FLOAT *)&v16[5] = m22;
      dy = v5->dy;
      v21 = dx;
      v22 = dy;
      v19 = 1065353216;
      v24 = 1065353216;
      v13 = CDrawingContext::PushTransformInternal(v9, 0LL, (const struct CMILMatrix *)v16, a4, 1);
      v4 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x189u, 0LL);
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
  return v4;
}
