/*
 * XREFs of ?CreateD2DInk@CSwRenderTargetGetBounds@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z @ 0x18023D7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x18023DBB8 (-GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::CreateD2DInk(
        CSwRenderTargetGetBounds *this,
        const struct D2D1_INK_POINT *a2,
        const struct D2D1_INK_STYLE_PROPERTIES *a3,
        struct CD2DInk **a4)
{
  signed int DefaultD2DContext; // eax
  __int64 v8; // rcx
  struct ID2DContext *v9; // rdi
  unsigned int v10; // ebx
  signed int v11; // eax
  __int64 v12; // rcx
  struct ID2DContext *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0LL;
  *a4 = 0LL;
  DefaultD2DContext = CSwRenderTargetGetBounds::GetDefaultD2DContext(this, &v14);
  v9 = v14;
  v10 = DefaultD2DContext;
  if ( DefaultD2DContext < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, DefaultD2DContext, 0x131u, 0LL);
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(struct ID2DContext *, const struct D2D1_INK_POINT *, const struct D2D1_INK_STYLE_PROPERTIES *, struct CD2DInk **))(*(_QWORD *)v14 + 184LL))(
            v14,
            a2,
            a3,
            a4);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x133u, 0LL);
  }
  if ( v9 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v9 + 16LL))(v9);
  return v10;
}
