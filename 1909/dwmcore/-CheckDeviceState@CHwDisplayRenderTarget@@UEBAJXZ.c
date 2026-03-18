/*
 * XREFs of ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x1800625E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z @ 0x180062630 (-CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::CheckDeviceState(CD3DDeviceLevel1 **this)
{
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ebx

  if ( (*((unsigned __int8 (__fastcall **)(char *))*(this - 18) + 4))((char *)this - 144) )
  {
    v2 = CD3DDeviceLevel1::CheckDeviceState(this[1], this[4]);
    v4 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1802BE2C0, 2u, v2, 0x1C4u, 0LL);
  }
  else
  {
    return (unsigned int)-2003304442;
  }
  return v4;
}
