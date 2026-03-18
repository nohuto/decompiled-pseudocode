/*
 * XREFs of ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18019602C
 * Callers:
 *     ?PostPresent@CIndirectSwapchainRenderTarget@@UEAAJ_N@Z @ 0x1801955F0 (-PostPresent@CIndirectSwapchainRenderTarget@@UEAAJ_N@Z.c)
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z @ 0x180195DE0 (-Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18005A24C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801950DC (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180196110 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::TryTargetNextBuffer(CIndirectSwapchainRenderTarget *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  int v4; // eax
  signed int RenderTargetForAcquiredBuffer; // eax
  __int64 v6; // rcx
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)this + 64);
  if ( v3 && !*((_QWORD *)this + 65) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 56LL))(v3, 0LL);
    v8 = v4;
    if ( v4 >= 0 )
    {
      RenderTargetForAcquiredBuffer = CIndirectSwapchainRenderTarget::CreateRenderTargetForAcquiredBuffer((struct _LUID *)this);
      v2 = RenderTargetForAcquiredBuffer;
      if ( RenderTargetForAcquiredBuffer < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, RenderTargetForAcquiredBuffer, 0x1B4u, 0LL);
    }
    else
    {
      TranslateDXGIorD3DErrorInContext(v4, 0, &v8);
      v2 = v8;
      if ( v8 == -2005270490 )
      {
        CIndirectSwapchainRenderTarget::Unregister(this);
        return 0;
      }
      if ( v8 == -2147483638 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 552LL) + 96LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
          0LL,
          4096LL);
        v2 = 0;
      }
    }
    if ( v2 == -2003304307 )
      CIndirectSwapchainRenderTarget::Unregister(this);
  }
  return v2;
}
