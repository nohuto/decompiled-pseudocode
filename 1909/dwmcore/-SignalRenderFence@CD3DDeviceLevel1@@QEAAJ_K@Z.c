/*
 * XREFs of ?SignalRenderFence@CD3DDeviceLevel1@@QEAAJ_K@Z @ 0x18015CBF4
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x18006C6B0 (-PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::SignalRenderFence(CD3DDeviceLevel1 *this, __int64 a2)
{
  int v2; // edi
  signed int v5; // eax
  __int64 v6; // rcx

  v2 = 0;
  if ( a2 != *((_QWORD *)this + 143) )
  {
    *((_BYTE *)this + 1164) = 0;
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 30) + 152LL))(
           *((_QWORD *)this + 30),
           *((_QWORD *)this + 76),
           a2);
    v2 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xE75u, 0LL);
    *((_QWORD *)this + 143) = a2;
  }
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v2, 0);
}
