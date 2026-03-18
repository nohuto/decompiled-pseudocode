/*
 * XREFs of ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18015C7A0
 * Callers:
 *     ?Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z @ 0x18015C310 (-Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z.c)
 * Callees:
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x18001D440 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180038C28 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z @ 0x18015C230 (-GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18015CC80 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ReleaseCurrentBuffer(CIndirectSwapchainRenderTarget *this)
{
  int v1; // ebx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  int v7; // [rsp+40h] [rbp+8h] BYREF
  void *v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v7 = 0;
  if ( *((_QWORD *)this + 66) )
  {
    CIndirectSwapchainRenderTarget::GetMetaData(this, &v8, (unsigned int *)&v7);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *))(**(_QWORD **)(v3 + 520) + 64LL))(
           *(_QWORD *)(v3 + 520),
           (unsigned int)v7,
           v8);
    v7 = v4;
    v1 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x1CFu);
    }
    else
    {
      *((_WORD *)this + 256) = 0;
      *((_BYTE *)this + 514) = 0;
      *((_DWORD *)this + 126) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)this + 480, 1u);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 66) + 16LL))(*((_QWORD *)this + 66));
      *((_QWORD *)this + 66) = 0LL;
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
