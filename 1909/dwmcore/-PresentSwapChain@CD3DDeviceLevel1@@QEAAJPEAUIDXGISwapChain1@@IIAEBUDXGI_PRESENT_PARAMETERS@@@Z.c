/*
 * XREFs of ?PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z @ 0x18015C9A8
 * Callers:
 *     ?Present@CHwCompSwapChainTarget@@UEAAJ_N@Z @ 0x18023EAE0 (-Present@CHwCompSwapChainTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x1800626C0 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180063830 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx

  v5 = *((_DWORD *)this + 220);
  v6 = a4;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1802E22B8, 1u, v5, 0xC51u, 0LL);
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
      MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_1802E22B8, 1u, v8, 0xC55u, 0LL);
    }
    else if ( (v6 & 1) == 0 )
    {
      *((_QWORD *)this + 144) = *((_QWORD *)g_pComposition + 48);
      *((_BYTE *)this + 1164) = 0;
    }
  }
  v10 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v5, 1u);
  CD3DDeviceLevel1::ProcessDeviceLost(this);
  return v10;
}
