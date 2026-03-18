/*
 * XREFs of ?Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAPEAV1@@Z @ 0x1802061B8
 * Callers:
 *     ?CreateGenericInk@CD2DContext@@UEAAJPEAPEAVCD2DGenericInk@@@Z @ 0x1801FDEF0 (-CreateGenericInk@CD2DContext@@UEAAJPEAPEAVCD2DGenericInk@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x180098BE0 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18018EA70 (-InternalRelease@-$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CD2DGenericInk::Create(
        struct CD2DResourceManager *a1,
        struct IDCompositionDirectInkWetStrokePartner *a2,
        struct CD2DGenericInk **a3)
{
  unsigned int v3; // ebx
  CD2DResource *v7; // rax
  __int64 v8; // rcx
  CD2DResource *v9; // rdi
  CGdiSpriteBitmap *v11; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  v11 = 0LL;
  *a3 = 0LL;
  v7 = (CD2DResource *)operator new(0x70uLL);
  v9 = v7;
  if ( v7 )
  {
    CD2DResource::CD2DResource(v7, a1, 0);
    *((_QWORD *)v9 + 2) = &CD2DEffect::`vftable'{for `IDeviceResource'};
    *(_QWORD *)v9 = &CD2DGenericInk::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v9 + 13) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *))(*(_QWORD *)a2 + 8LL))(a2);
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    CMILCOMBase::InternalAddRef(v9);
    v11 = 0LL;
    Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v11);
    v11 = 0LL;
    *a3 = v9;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x41u);
  }
  Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v11);
  return v3;
}
