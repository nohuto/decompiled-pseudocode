/*
 * XREFs of ?Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z @ 0x1802064BC
 * Callers:
 *     ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x1801FDCF0 (-CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x180098BE0 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DEffect::Create(struct CD2DResourceManager *a1, struct ID2D1Effect *a2, struct CD2DEffect **a3)
{
  unsigned int v3; // ebx
  CD2DResource *v7; // rax
  __int64 v8; // rcx
  struct CD2DEffect *v9; // rdi

  v3 = 0;
  *a3 = 0LL;
  v7 = (CD2DResource *)operator new(0x70uLL);
  v9 = v7;
  if ( v7 )
  {
    CD2DResource::CD2DResource(v7, a1, 0);
    *((_QWORD *)v9 + 13) = 0LL;
    *((_QWORD *)v9 + 2) = &CD2DEffect::`vftable'{for `IDeviceResource'};
    *(_QWORD *)v9 = &CD2DEffect::`vftable'{for `CMILCOMBase'};
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    (*(void (__fastcall **)(struct CD2DEffect *))(*(_QWORD *)v9 + 8LL))(v9);
    *((_QWORD *)v9 + 13) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)a2 + 8LL))(a2);
    *a3 = v9;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x13u);
  }
  return v3;
}
