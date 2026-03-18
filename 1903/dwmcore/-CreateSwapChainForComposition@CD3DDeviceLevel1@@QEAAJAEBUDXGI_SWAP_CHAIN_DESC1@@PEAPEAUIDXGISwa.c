/*
 * XREFs of ?CreateSwapChainForComposition@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwapChain1@@@Z @ 0x18015C8A4
 * Callers:
 *     ?Init@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@@Z @ 0x18023FE90 (-Init@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180059A50 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800A8A7C (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x1800BCC60 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateSwapChainForComposition(
        CD3DDeviceLevel1 *this,
        const struct DXGI_SWAP_CHAIN_DESC1 *a2,
        struct IDXGISwapChain1 **a3)
{
  struct CDXGIEnumeration *v3; // rdi
  int v6; // ebx
  signed int v8; // eax
  __int64 v9; // rcx
  signed int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  struct CDXGIEnumeration *v14; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  *a3 = 0LL;
  v6 = *((_DWORD *)this + 220);
  v14 = 0LL;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v6, 0x6CDu, 0LL);
  }
  else
  {
    v8 = CDisplayManager::EnsureDXGIEnumeration(this, &v14);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x6CFu, 0LL);
      v3 = v14;
    }
    else
    {
      v3 = v14;
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct DXGI_SWAP_CHAIN_DESC1 *, _QWORD, struct IDXGISwapChain1 **))(**((_QWORD **)v14 + 2) + 192LL))(
              *((_QWORD *)v14 + 2),
              *((_QWORD *)this + 79),
              a2,
              0LL,
              a3);
      v6 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x6D4u, 0LL);
    }
  }
  if ( v3 )
    (*(void (__fastcall **)(struct CDXGIEnumeration *))(*(_QWORD *)v3 + 8LL))(v3);
  v12 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v6, 2u);
  CD3DDeviceLevel1::ProcessDeviceLost(this);
  return v12;
}
