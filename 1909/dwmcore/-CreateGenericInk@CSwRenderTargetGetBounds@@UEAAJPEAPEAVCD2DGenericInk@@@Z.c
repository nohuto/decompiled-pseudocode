/*
 * XREFs of ?CreateGenericInk@CSwRenderTargetGetBounds@@UEAAJPEAPEAVCD2DGenericInk@@@Z @ 0x18023D880
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x18023DBB8 (-GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::CreateGenericInk(
        CSwRenderTargetGetBounds *this,
        struct CD2DGenericInk **a2)
{
  signed int DefaultD2DContext; // eax
  __int64 v4; // rcx
  struct ID2DContext *v5; // rdi
  unsigned int v6; // ebx
  signed int v7; // eax
  __int64 v8; // rcx
  struct ID2DContext *v10; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  DefaultD2DContext = CSwRenderTargetGetBounds::GetDefaultD2DContext(this, &v10);
  v5 = v10;
  v6 = DefaultD2DContext;
  if ( DefaultD2DContext < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, DefaultD2DContext, 0x144u, 0LL);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(struct ID2DContext *, struct CD2DGenericInk **))(*(_QWORD *)v10 + 192LL))(v10, a2);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x145u, 0LL);
  }
  if ( v5 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
