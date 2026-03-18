/*
 * XREFs of ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x18007CFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z @ 0x18007CFF0 (-CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::CheckDeviceState(CD3DDeviceLevel1 **this)
{
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ebx

  if ( (*((unsigned __int8 (__fastcall **)(char *))*(this - 26) + 4))((char *)this - 208) )
  {
    v2 = CD3DDeviceLevel1::CheckDeviceState(this[1], this[4]);
    v4 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1802925D8, 2u, v2, 0x1C4u);
  }
  else
  {
    return (unsigned int)-2003304442;
  }
  return v4;
}
