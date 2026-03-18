/*
 * XREFs of ?SetHardwareProtection@CDWMSwapChain@@UEAAJ_N@Z @ 0x180162F70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetupDepthBuffer@CSwapChainBase@@IEAAJXZ @ 0x1800E48D4 (-SetupDepthBuffer@CSwapChainBase@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseD2DBitmaps@CSwapChainBase@@IEAAXXZ @ 0x180162D94 (-ReleaseD2DBitmaps@CSwapChainBase@@IEAAXXZ.c)
 *     ?RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ @ 0x18016429C (-RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ.c)
 */

__int64 __fastcall CDWMSwapChain::SetHardwareProtection(CDWMSwapChain *this, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  signed int v5; // eax
  __int64 v6; // rcx
  signed int refreshed; // eax
  __int64 v8; // rcx
  signed int v9; // eax
  __int64 v10; // rcx

  v2 = 0;
  if ( a2 != *((_BYTE *)this + 576) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 53) + 208LL))(*((_QWORD *)this + 53), a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x4F8u, 0LL);
    }
    else
    {
      *((_DWORD *)this + 148) = *((_DWORD *)this + 40);
      *((_BYTE *)this + 576) = a2;
      CSwapChainBase::ReleaseD2DBitmaps(this);
      refreshed = CSwapChainBase::RefreshBackBufferViews(this);
      v2 = refreshed;
      if ( refreshed < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, refreshed, 0x500u, 0LL);
      }
      else
      {
        v9 = CSwapChainBase::SetupDepthBuffer(this);
        v2 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x504u, 0LL);
      }
    }
  }
  return v2;
}
