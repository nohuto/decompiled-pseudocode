/*
 * XREFs of ?GetDXGIOutput@CDisplay@@QEBAJPEAPEAUIDXGIOutput@@@Z @ 0x1800E388C
 * Callers:
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x1800E31CC (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 * Callees:
 *     ??$SetInterface@VIRenderTargetBitmap@@V1@@@YAXAEAPEAVIRenderTargetBitmap@@PEAV0@@Z @ 0x18003E2DC (--$SetInterface@VIRenderTargetBitmap@@V1@@@YAXAEAPEAVIRenderTargetBitmap@@PEAV0@@Z.c)
 */

__int64 __fastcall CDisplay::GetDXGIOutput(CDisplay *this, struct IDXGIOutput **a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx

  v3 = 0;
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    SetInterface<IRenderTargetBitmap,IRenderTargetBitmap>(a2, v4);
  }
  else
  {
    *a2 = 0LL;
    return (unsigned int)-2003304442;
  }
  return v3;
}
