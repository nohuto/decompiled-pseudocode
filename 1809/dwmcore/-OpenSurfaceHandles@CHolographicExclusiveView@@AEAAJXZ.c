/*
 * XREFs of ?OpenSurfaceHandles@CHolographicExclusiveView@@AEAAJXZ @ 0x18020CAA0
 * Callers:
 *     ?ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ @ 0x18020C718 (-ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ.c)
 *     ?ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@Z @ 0x18020CB64 (-ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHolographicExclusiveView::OpenSurfaceHandles(CHolographicExclusiveView *this)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx

  v1 = *((_QWORD *)this + 11);
  v2 = 0;
  if ( v1 )
    v4 = *(_QWORD *)(v1 + 88);
  else
    v4 = 0LL;
  if ( v4 )
  {
    v5 = *((_QWORD *)this + 17);
    if ( v5 )
    {
      *((_QWORD *)this + 16) = *(_QWORD *)(v4 + 56);
      v6 = NtOpenCompositionSurfaceSwapChainHandleInfo(v5, (char *)this + 128, (char *)this + 144);
      if ( v6 >= 0 )
      {
        *((_BYTE *)this + 73) = 1;
      }
      else
      {
        v2 = v6 | 0x10000000;
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6 | 0x10000000, 0x22Cu);
      }
    }
  }
  return v2;
}
