/*
 * XREFs of ?PrepareForDrawing@CMaskBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180059C50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::PrepareForDrawing(
        CMaskBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ecx

  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 296LL))(*((_QWORD *)this + 10));
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x15Cu);
  }
  else
  {
    v9 = *((_QWORD *)this + 9);
    if ( v9
      && (v10 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v9 + 296LL))(
                  v9,
                  a2,
                  a3),
          v8 = v10,
          v10 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x160u);
    }
    else
    {
      return 0;
    }
  }
  return v8;
}
