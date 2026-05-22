/*
 * XREFs of ?OnDeviceRemoval@MPCClickerProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800FF240
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x180100D80 (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCClickerProcessor::OnDeviceRemoval(struct IMPCTarget **this, struct DeviceInfo *a2)
{
  struct IMPCTarget *v4; // rcx

  if ( ((_DWORD)this[58] & 0x400) != 0 )
  {
    MPCInputProviderBase::ProcessSourceDetectedAndLost((MPCInputProviderBase *)this, this[466], 0LL, 0LL, 0);
    v4 = this[466];
    if ( v4 )
    {
      this[466] = 0LL;
      (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  return MPCInputProviderBase::OnDeviceRemoval((MPCInputProviderBase *)this, a2);
}
