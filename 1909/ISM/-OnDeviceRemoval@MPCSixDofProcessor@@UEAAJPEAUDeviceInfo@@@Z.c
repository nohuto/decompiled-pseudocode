/*
 * XREFs of ?OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180130E90
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x180091B90 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x18013E514 (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z.c)
 */

__int64 __fastcall MPCSixDofProcessor::OnDeviceRemoval(MPCSixDofProcessor *this, struct DeviceInfo *a2)
{
  __int64 *v4; // rbx
  unsigned int v6; // [rsp+20h] [rbp-18h]

  if ( (*((_DWORD *)this + 118) & 0x2000) != 0 )
  {
    v4 = (__int64 *)((char *)this + 4600);
    *((_BYTE *)this + 5576) = 0;
    MPCInputProviderBase::ProcessSourceDetectedAndLost(this, *((struct IMPCTarget **)this + 575), 0LL, 0LL, v6);
    *((_BYTE *)this + 5576) = 1;
    Microsoft::WRL::ComPtr<IUnknown>::operator=(v4, 0LL);
  }
  return MPCInputProviderBase::OnDeviceRemoval(this, a2);
}
