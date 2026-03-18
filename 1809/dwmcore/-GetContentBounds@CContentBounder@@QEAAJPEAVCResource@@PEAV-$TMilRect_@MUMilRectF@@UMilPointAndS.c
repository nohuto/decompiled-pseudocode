/*
 * XREFs of ?GetContentBounds@CContentBounder@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004C5CC
 * Callers:
 *     ?GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004C6D0 (-GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18004B9CC (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ @ 0x18004C508 (-EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ.c)
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x1800B63D0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CContentBounder::GetContentBounds(CDrawingContext **this, __int64 a2, float *a3)
{
  unsigned int v3; // ebx
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  CDrawingContext *v12; // rax

  v3 = 0;
  a3[3] = 0.0;
  a3[2] = 0.0;
  a3[1] = 0.0;
  *a3 = 0.0;
  if ( a2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, 124LL) )
    {
      v8 = CContentBounder::EnsureDrawingContextFrame((CContentBounder *)this);
      v3 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xC6u);
      }
      else
      {
        v10 = CRenderData::Draw(a2, this[1], 1LL);
        v3 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xC9u);
        }
        else
        {
          v3 = 0;
          *(_OWORD *)a3 = *(_OWORD *)((char *)this[2] + 52);
          if ( a3[2] < *a3 || a3[3] < a3[1] )
            *(_OWORD *)a3 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        }
        CDrawingContext::EndFrame(this[1]);
      }
    }
    else
    {
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024809, 0xD1u);
    }
  }
  v12 = this[2];
  if ( v12 )
    *(_OWORD *)((char *)v12 + 52) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  return v3;
}
