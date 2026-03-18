/*
 * XREFs of ?CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z @ 0x180062630
 * Callers:
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x1800625E0 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 * Callees:
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x1800626C0 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180063830 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xq @ 0x18015D648 (McTemplateU0xq.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CheckDeviceState(CD3DDeviceLevel1 *this, struct CSwapChainBase *a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  __int64 v5; // rcx

  v2 = *((_DWORD *)this + 220);
  if ( (v2 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v2, 0xED3u, 0LL);
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
    McTemplateU0xq(v5, &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE, 0LL, v2);
  if ( ((v2 - 142213121) & 0xFFFFFFF7) != 0 )
    v2 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(this, v2, 1LL);
  CD3DDeviceLevel1::ProcessDeviceLost(this);
  return v2;
}
