/*
 * XREFs of ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x1800BCB80
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z @ 0x1800BCBD0 (-CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::CheckDeviceState(CD3DDeviceLevel1 **this)
{
  signed int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  if ( (*((unsigned __int8 (__fastcall **)(char *))*(this - 18) + 4))((char *)this - 144) )
  {
    v2 = CD3DDeviceLevel1::CheckDeviceState(this[1], this[4]);
    v4 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1802C0180, 2u, v2, 0x1C4u, 0LL);
  }
  else
  {
    return (unsigned int)-2003304442;
  }
  return v4;
}
