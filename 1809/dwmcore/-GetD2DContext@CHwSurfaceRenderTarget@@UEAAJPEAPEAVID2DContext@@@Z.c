/*
 * XREFs of ?GetD2DContext@CHwSurfaceRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z @ 0x180029F60
 * Callers:
 *     ?GetD2DContext@CHwDisplayRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z @ 0x180029E50 (-GetD2DContext@CHwDisplayRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::GetD2DContext(CHwSurfaceRenderTarget *this, struct ID2DContext **a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  int v5; // ebx
  struct ID2DContext *v6; // rcx
  struct ID2DContext *v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = (*(__int64 (__fastcall **)(CHwSurfaceRenderTarget *, struct ID2DContext **))(*(_QWORD *)this + 248LL))(this, &v8);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x4Eu);
  }
  else
  {
    v5 = -2147024809;
    if ( a2 )
    {
      v5 = 0;
      v6 = v8;
      *a2 = v8;
      (*(void (__fastcall **)(struct ID2DContext *, _QWORD))(*(_QWORD *)v6 + 8LL))(
        v6,
        *(_QWORD *)GUID_74cc6ad9_1f38_4fd9_9734_84cb3e5c0b1b.Data4);
    }
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v5, 0x51u);
  }
  return (unsigned int)v5;
}
