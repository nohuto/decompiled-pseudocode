/*
 * XREFs of ?CreatePrimitiveProperties@CSwRenderTargetGetBounds@@UEAAJPEAPEAVCD2DPrimitiveProperties@@@Z @ 0x18023F160
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x18023F2C8 (-GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::CreatePrimitiveProperties(
        CSwRenderTargetGetBounds *this,
        struct CD2DPrimitiveProperties **a2)
{
  signed int DefaultD2DContext; // eax
  __int64 v4; // rcx
  struct ID2DContext *v5; // rdi
  unsigned int v6; // ebx
  signed int v7; // eax
  __int64 v8; // rcx
  struct ID2DContext *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  DefaultD2DContext = CSwRenderTargetGetBounds::GetDefaultD2DContext(this, &v10);
  v5 = v10;
  v6 = DefaultD2DContext;
  if ( DefaultD2DContext < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, DefaultD2DContext, 0x1C4u, 0LL);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(struct ID2DContext *, struct CD2DPrimitiveProperties **))(*(_QWORD *)v10 + 240LL))(
           v10,
           a2);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1C6u, 0LL);
  }
  if ( v5 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
