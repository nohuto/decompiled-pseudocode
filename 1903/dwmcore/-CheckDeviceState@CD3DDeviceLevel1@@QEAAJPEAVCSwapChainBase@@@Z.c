/*
 * XREFs of ?CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z @ 0x1800BCBD0
 * Callers:
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x1800BCB80 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180059A50 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x1800BCC60 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xq @ 0x18015ED28 (McTemplateU0xq.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CheckDeviceState(CD3DDeviceLevel1 *this, struct CSwapChainBase *a2)
{
  int v2; // ebx
  signed int v4; // eax
  __int64 v5; // rcx

  v2 = *((_DWORD *)this + 220);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v2, 0xED3u, 0LL);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(struct CSwapChainBase *, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)a2 + 328LL))(
           a2,
           0LL,
           0LL,
           1LL,
           0LL);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xED5u, 0LL);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xq(v5, &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE, 0LL, (unsigned int)v2);
  if ( ((v2 - 142213121) & 0xFFFFFFF7) != 0 )
    v2 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v2, 1u);
  CD3DDeviceLevel1::ProcessDeviceLost(this);
  return (unsigned int)v2;
}
