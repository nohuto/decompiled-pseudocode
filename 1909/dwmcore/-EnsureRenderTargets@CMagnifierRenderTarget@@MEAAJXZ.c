/*
 * XREFs of ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x1801A86E0
 * Callers:
 *     ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x1801A9490 (-Slice@CMagnifierRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x180199650 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x1801A8740 (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CMagnifierRenderTarget::EnsureRenderTargets(CMagnifierRenderTarget *this)
{
  unsigned int v1; // ebx
  signed int v3; // eax
  __int64 v4; // rcx

  v1 = 0;
  if ( *((_DWORD *)this + 98) )
  {
    if ( !*((_DWORD *)this + 74) )
    {
      v3 = CMagnifierRenderTarget::EnsureSharedRenderTargets(this);
      v1 = v3;
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x1BFu, 0LL);
        COffScreenRenderTarget::ReleaseRenderTargets(this);
      }
    }
  }
  return v1;
}
