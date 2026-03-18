/*
 * XREFs of ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180195BFC
 * Callers:
 *     ?Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z @ 0x180195680 (-Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18005A24C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z @ 0x18019555C (-GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180196110 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x18019AF10 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ReleaseCurrentBuffer(CIndirectSwapchainRenderTarget *this)
{
  int v1; // ebx
  __int64 v3; // rcx
  signed int v4; // eax
  __int64 v5; // rcx
  signed int v7; // [rsp+40h] [rbp+8h] BYREF
  void *v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v7 = 0;
  if ( *((_QWORD *)this + 65) )
  {
    CIndirectSwapchainRenderTarget::GetMetaData(this, &v8, (unsigned int *)&v7);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *))(**(_QWORD **)(v3 + 512) + 64LL))(
           *(_QWORD *)(v3 + 512),
           (unsigned int)v7,
           v8);
    v7 = v4;
    v1 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x1CDu, 0LL);
    }
    else
    {
      *((_WORD *)this + 252) = 0;
      *((_BYTE *)this + 506) = 0;
      *((_DWORD *)this + 124) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)this + 472, 1u);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 65) + 16LL))(*((_QWORD *)this + 65));
      *((_QWORD *)this + 65) = 0LL;
    }
  }
  COffScreenRenderTarget::ReleaseRenderTargets(this);
  if ( v1 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v1, 0, &v7);
    v1 = v7;
    if ( v7 == -2005270490 )
    {
      CIndirectSwapchainRenderTarget::Unregister(this);
      return 0;
    }
    else if ( v7 == -2003304307 )
    {
      CIndirectSwapchainRenderTarget::Unregister(this);
    }
  }
  return (unsigned int)v1;
}
