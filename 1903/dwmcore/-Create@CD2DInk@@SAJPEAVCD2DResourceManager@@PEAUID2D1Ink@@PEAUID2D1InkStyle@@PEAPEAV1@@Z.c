/*
 * XREFs of ?Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z @ 0x18016A39C
 * Callers:
 *     ?CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z @ 0x18015FF60 (-CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DIn.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x1800B3E54 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DInk::Create(
        struct CD2DResourceManager *a1,
        struct ID2D1Ink *a2,
        struct ID2D1InkStyle *a3,
        struct CD2DInk **a4)
{
  CD2DResource *v8; // rax
  __int64 v9; // rcx
  struct CD2DInk *v10; // rbx
  unsigned int v11; // edi

  *a4 = 0LL;
  v8 = (CD2DResource *)operator new(0x78uLL);
  v10 = v8;
  if ( v8 )
  {
    CD2DResource::CD2DResource(v8, a1, 0);
    *((_QWORD *)v10 + 13) = 0LL;
    *((_QWORD *)v10 + 14) = 0LL;
    *((_QWORD *)v10 + 2) = &CD2DEffect::`vftable'{for `IDeviceResource'};
    *(_QWORD *)v10 = &CD2DInk::`vftable'{for `CMILCOMBase'};
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    (*(void (__fastcall **)(struct CD2DInk *))(*(_QWORD *)v10 + 8LL))(v10);
    *((_QWORD *)v10 + 13) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)a2 + 8LL))(a2);
    *((_QWORD *)v10 + 14) = a3;
    if ( a3 )
      (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)a3 + 8LL))(a3);
    v11 = 0;
    *a4 = v10;
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x8007000E, 0x13u, 0LL);
  }
  return v11;
}
