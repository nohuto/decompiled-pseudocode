/*
 * XREFs of ?PrepareForDrawing@CMaskBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800BE870
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::PrepareForDrawing(
        CMaskBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  signed int v10; // eax
  __int64 v11; // rcx

  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 360LL))(*((_QWORD *)this + 11));
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x192u, 0LL);
  }
  else
  {
    v9 = *((_QWORD *)this + 10);
    if ( v9
      && (v10 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v9 + 360LL))(
                  v9,
                  a2,
                  a3),
          v8 = v10,
          v10 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x196u, 0LL);
    }
    else
    {
      return 0;
    }
  }
  return v8;
}
