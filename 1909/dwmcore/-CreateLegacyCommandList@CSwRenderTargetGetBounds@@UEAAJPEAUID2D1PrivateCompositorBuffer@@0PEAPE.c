/*
 * XREFs of ?CreateLegacyCommandList@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap@@_K12PEAPEAUID2D1PrivateCompositorPrimitiveProperties@@2PEAPEAVCD2DCommandList@@@Z @ 0x18023D930
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x18023DBB8 (-GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
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
  struct CD2DCommandList **v10; // rsi
  signed int DefaultD2DContext; // eax
  __int64 v15; // rcx
  struct ID2DContext *v16; // rdi
  unsigned int v17; // ebx
  signed int v18; // eax
  __int64 v19; // rcx
  struct ID2DContext *v21; // [rsp+80h] [rbp+8h] BYREF

  v10 = a10;
  v21 = 0LL;
  *a10 = 0LL;
  DefaultD2DContext = CSwRenderTargetGetBounds::GetDefaultD2DContext(this, &v21);
  v16 = v21;
  v17 = DefaultD2DContext;
  if ( DefaultD2DContext < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, DefaultD2DContext, 0x1A9u, 0LL);
  }
  else
  {
    v18 = (*(__int64 (__fastcall **)(struct ID2DContext *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1Bitmap **, unsigned __int64, struct ID2D1Bitmap **, unsigned __int64, struct ID2D1PrivateCompositorPrimitiveProperties **, unsigned __int64, struct CD2DCommandList **))(*(_QWORD *)v21 + 232LL))(
            v21,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a9,
            v10);
    v17 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x1B5u, 0LL);
  }
  if ( v16 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v16 + 16LL))(v16);
  return v17;
}
