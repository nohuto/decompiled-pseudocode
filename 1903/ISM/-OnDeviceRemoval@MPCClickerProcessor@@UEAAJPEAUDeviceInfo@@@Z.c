/*
 * XREFs of ?OnDeviceRemoval@MPCClickerProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18013FBA0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x180091DD0 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x18013E4D4 (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z.c)
 */

__int64 __fastcall MPCClickerProcessor::OnDeviceRemoval(struct IMPCTarget **this, struct DeviceInfo *a2)
{
  __int64 *v4; // rbx
  signed int v6; // [rsp+20h] [rbp-18h]

  if ( ((_DWORD)this[59] & 0x400) != 0 )
  {
    v4 = (__int64 *)(this + 575);
    MPCInputProviderBase::ProcessSourceDetectedAndLost((MPCInputProviderBase *)this, this[575], 0LL, 0LL, v6);
    Microsoft::WRL::ComPtr<IUnknown>::operator=(v4, 0LL);
  }
  return MPCInputProviderBase::OnDeviceRemoval((MPCInputProviderBase *)this, a2);
}
