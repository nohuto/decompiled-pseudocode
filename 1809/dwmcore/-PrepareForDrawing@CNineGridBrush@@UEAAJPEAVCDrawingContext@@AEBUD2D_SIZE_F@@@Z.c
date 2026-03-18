/*
 * XREFs of ?PrepareForDrawing@CNineGridBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180019D60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::PrepareForDrawing(
        CNineGridBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx

  v3 = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext *, const struct D2D_SIZE_F *))(**((_QWORD **)this + 9)
                                                                                              + 296LL))(
         *((_QWORD *)this + 9),
         a2,
         a3);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x21Bu);
  else
    return 0;
  return v5;
}
