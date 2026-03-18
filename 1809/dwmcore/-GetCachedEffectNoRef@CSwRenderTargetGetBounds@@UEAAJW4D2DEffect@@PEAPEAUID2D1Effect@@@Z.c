/*
 * XREFs of ?GetCachedEffectNoRef@CSwRenderTargetGetBounds@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x1802017A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x180201848 (-GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::GetCachedEffectNoRef(
        CSwRenderTargetGetBounds *a1,
        unsigned int a2,
        _QWORD *a3)
{
  int DefaultD2DContext; // eax
  __int64 v6; // rcx
  struct ID2DContext *v7; // rdi
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  struct ID2DContext *v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0LL;
  *a3 = 0LL;
  DefaultD2DContext = CSwRenderTargetGetBounds::GetDefaultD2DContext(a1, &v12);
  v7 = v12;
  v8 = DefaultD2DContext;
  if ( DefaultD2DContext < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, DefaultD2DContext, 0x193u);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(struct ID2DContext *, _QWORD, _QWORD *))(*(_QWORD *)v12 + 224LL))(v12, a2, a3);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x194u);
  }
  if ( v7 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
