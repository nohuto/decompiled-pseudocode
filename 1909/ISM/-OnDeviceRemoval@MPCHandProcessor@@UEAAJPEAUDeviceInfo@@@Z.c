/*
 * XREFs of ?OnDeviceRemoval@MPCHandProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180135A80
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x180091B90 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x18013E514 (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z.c)
 */

__int64 __fastcall MPCHandProcessor::OnDeviceRemoval(MPCHandProcessor *this, struct DeviceInfo *a2)
{
  struct IMPCTarget **v2; // rdi
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v2 = (struct IMPCTarget **)((char *)this + 4600);
  if ( *((_BYTE *)this + 4536) )
    MPCInputProviderBase::ProcessSourceDetectedAndLost(this, *v2, 0LL, 0LL, v6);
  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)v2, 0LL);
  return MPCInputProviderBase::OnDeviceRemoval(this, a2);
}
