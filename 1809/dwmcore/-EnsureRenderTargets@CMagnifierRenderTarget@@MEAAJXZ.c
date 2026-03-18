/*
 * XREFs of ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x18015CF10
 * Callers:
 *     ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x18015DC10 (-Slice@CMagnifierRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x18001D440 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x18015CF6C (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CMagnifierRenderTarget::EnsureRenderTargets(CMagnifierRenderTarget *this)
{
  unsigned int v1; // ebx
  int v3; // eax
  __int64 v4; // rcx

  v1 = 0;
  if ( *((_DWORD *)this + 100) )
  {
    if ( !*((_DWORD *)this + 74) )
    {
      v3 = CMagnifierRenderTarget::EnsureSharedRenderTargets(this);
      v1 = v3;
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x1BBu);
        COffScreenRenderTarget::ReleaseRenderTargets(this);
      }
    }
  }
  return v1;
}
