/*
 * XREFs of ?CreateLegacyCommandList@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap@@_K12PEAPEAUID2D1PrivateCompositorPrimitiveProperties@@2PEAPEAVCD2DCommandList@@@Z @ 0x1802015F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x180201848 (-GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::CreateLegacyCommandList(
        CSwRenderTargetGetBounds *this,
        struct ID2D1PrivateCompositorBuffer *a2,
        struct ID2D1PrivateCompositorBuffer *a3,
        struct ID2D1Bitmap **a4,
        unsigned __int64 a5,
        struct ID2D1Bitmap **a6,
        unsigned __int64 a7,
        struct ID2D1PrivateCompositorPrimitiveProperties **a8,
        unsigned __int64 a9,
        struct CD2DCommandList **a10)
{
  int DefaultD2DContext; // eax
  __int64 v14; // rcx
  struct ID2DContext *v15; // rdi
  unsigned int v16; // ebx
  int v17; // eax
  __int64 v18; // rcx
  struct ID2DContext *v20; // [rsp+60h] [rbp-28h] BYREF

  v20 = 0LL;
  *a10 = 0LL;
  DefaultD2DContext = CSwRenderTargetGetBounds::GetDefaultD2DContext(this, &v20);
  v15 = v20;
  v16 = DefaultD2DContext;
  if ( DefaultD2DContext < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, DefaultD2DContext, 0x1ACu);
  }
  else
  {
    v17 = (*(__int64 (__fastcall **)(struct ID2DContext *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1Bitmap **, unsigned __int64, struct ID2D1Bitmap **, unsigned __int64, struct ID2D1PrivateCompositorPrimitiveProperties **, unsigned __int64, struct CD2DCommandList **))(*(_QWORD *)v20 + 232LL))(
            v20,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a9,
            a10);
    v16 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x1B8u);
  }
  if ( v15 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v15 + 16LL))(v15);
  return v16;
}
