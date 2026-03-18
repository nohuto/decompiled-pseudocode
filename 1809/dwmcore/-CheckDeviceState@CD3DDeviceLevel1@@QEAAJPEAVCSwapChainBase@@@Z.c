/*
 * XREFs of ?CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z @ 0x18007CFF0
 * Callers:
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x18007CFA0 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x1800376CC (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x18007D080 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xq @ 0x1801491D8 (McTemplateU0xq.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CheckDeviceState(CD3DDeviceLevel1 *this, struct CSwapChainBase *a2)
{
  int v2; // ebx
  int v4; // eax
  __int64 v5; // rcx

  v2 = *((_DWORD *)this + 212);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v2, 0xEE2u);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(struct CSwapChainBase *, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)a2 + 304LL))(
           a2,
           0LL,
           0LL,
           1LL,
           0LL);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xEE4u);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xq(v5, &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE, 0LL, (unsigned int)v2);
  if ( ((v2 - 142213121) & 0xFFFFFFF7) != 0 )
    v2 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v2, 1u);
  CD3DDeviceLevel1::ProcessDeviceLost(this);
  return (unsigned int)v2;
}
