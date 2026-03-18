/*
 * XREFs of ?OpenSurfaceHandles@CHolographicExclusiveView@@AEAAJXZ @ 0x1802437E0
 * Callers:
 *     ?ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ @ 0x180243448 (-ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ.c)
 *     ?ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@Z @ 0x1802438BC (-ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHolographicExclusiveView::OpenSurfaceHandles(CHolographicExclusiveView *this)
{
  unsigned int v2; // edi
  _QWORD *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx

  v2 = 0;
  v3 = (_QWORD *)*((_QWORD *)this + 11);
  if ( v3 )
    v3 = (_QWORD *)v3[11];
  if ( v3 && *((_QWORD *)this + 17) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD *))(*v3 + 56LL))(v3);
    v5 = *((_QWORD *)this + 17);
    *((_QWORD *)this + 16) = v4;
    v6 = NtOpenCompositionSurfaceSwapChainHandleInfo(v5, (char *)this + 128, (char *)this + 144);
    if ( v6 >= 0 )
    {
      *((_BYTE *)this + 73) = 1;
    }
    else
    {
      v2 = v6 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6 | 0x10000000, 0x222u, 0LL);
    }
  }
  return v2;
}
