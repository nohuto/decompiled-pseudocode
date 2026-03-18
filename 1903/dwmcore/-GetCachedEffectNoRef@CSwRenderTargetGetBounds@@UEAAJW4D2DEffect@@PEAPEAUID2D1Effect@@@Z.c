/*
 * XREFs of ?GetCachedEffectNoRef@CSwRenderTargetGetBounds@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x18023F210
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x18023F2C8 (-GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::GetCachedEffectNoRef(
        CSwRenderTargetGetBounds *a1,
        unsigned int a2,
        _QWORD *a3)
{
  signed int DefaultD2DContext; // eax
  __int64 v6; // rcx
  struct ID2DContext *v7; // rdi
  unsigned int v8; // ebx
  signed int v9; // eax
  __int64 v10; // rcx
  struct ID2DContext *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  *a3 = 0LL;
  DefaultD2DContext = CSwRenderTargetGetBounds::GetDefaultD2DContext(a1, &v12);
  v7 = v12;
  v8 = DefaultD2DContext;
  if ( DefaultD2DContext < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, DefaultD2DContext, 0x190u, 0LL);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(struct ID2DContext *, _QWORD, _QWORD *))(*(_QWORD *)v12 + 224LL))(v12, a2, a3);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x191u, 0LL);
  }
  if ( v7 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
