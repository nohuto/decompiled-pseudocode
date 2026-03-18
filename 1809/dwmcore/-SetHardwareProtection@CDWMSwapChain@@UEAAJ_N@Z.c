/*
 * XREFs of ?SetHardwareProtection@CDWMSwapChain@@UEAAJ_N@Z @ 0x180204410
 * Callers:
 *     <none>
 * Callees:
 *     ?SetupDepthBuffer@CSwapChainBase@@IEAAJXZ @ 0x180078884 (-SetupDepthBuffer@CSwapChainBase@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseD2DBitmaps@CSwapChainBase@@IEAAXXZ @ 0x1802042A4 (-ReleaseD2DBitmaps@CSwapChainBase@@IEAAXXZ.c)
 *     ?RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ @ 0x180205738 (-RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ.c)
 */

__int64 __fastcall CDWMSwapChain::SetHardwareProtection(CDWMSwapChain *this, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int refreshed; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx

  v2 = 0;
  if ( a2 != *((_BYTE *)this + 568) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 53) + 208LL))(*((_QWORD *)this + 53), a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x4C4u);
    }
    else
    {
      *((_DWORD *)this + 146) = *((_DWORD *)this + 40);
      *((_BYTE *)this + 568) = a2;
      CSwapChainBase::ReleaseD2DBitmaps(this);
      refreshed = CSwapChainBase::RefreshBackBufferViews(this);
      v2 = refreshed;
      if ( refreshed < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, refreshed, 0x4CCu);
      }
      else
      {
        v9 = CSwapChainBase::SetupDepthBuffer(this);
        v2 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x4D0u);
      }
    }
  }
  return v2;
}
