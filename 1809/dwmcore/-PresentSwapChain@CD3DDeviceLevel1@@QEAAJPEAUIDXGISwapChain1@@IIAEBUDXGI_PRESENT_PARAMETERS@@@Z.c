/*
 * XREFs of ?PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z @ 0x1801FD088
 * Callers:
 *     ?Present@CHwCompSwapChainTarget@@UEAAJ_N@Z @ 0x180200EB0 (-Present@CHwCompSwapChainTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x1800376CC (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x18007D080 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::PresentSwapChain(
        CD3DDeviceLevel1 *this,
        struct IDXGISwapChain1 *a2,
        __int64 a3,
        unsigned int a4,
        const struct DXGI_PRESENT_PARAMETERS *a5)
{
  int v5; // esi
  char v6; // bp
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx

  v5 = *((_DWORD *)this + 212);
  v6 = a4;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1802BDA64, 1u, v5, 0xC3Eu);
  }
  else
  {
    v8 = ((__int64 (__fastcall *)(struct IDXGISwapChain1 *, __int64, _QWORD, const struct DXGI_PRESENT_PARAMETERS *))a2->lpVtbl->Present1)(
           a2,
           1LL,
           a4,
           a5);
    v5 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_1802BDA64, 1u, v8, 0xC42u);
    }
    else if ( (v6 & 1) == 0 )
    {
      *((_QWORD *)this + 127) = *(_QWORD *)(*(_QWORD *)&g_pComposition + 368LL);
      *((_BYTE *)this + 1028) = 0;
    }
  }
  v10 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v5, 1u);
  CD3DDeviceLevel1::ProcessDeviceLost(this);
  return v10;
}
