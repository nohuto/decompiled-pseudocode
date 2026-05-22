/*
 * XREFs of ?OnDeviceRemoval@MPCProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800F5E70
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessSourceDetectedAndLostForAllHands@MPCProcessor@@AEAAXPEAUIMPCTarget@@0@Z @ 0x1800F7204 (-ProcessSourceDetectedAndLostForAllHands@MPCProcessor@@AEAAXPEAUIMPCTarget@@0@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCProcessor::OnDeviceRemoval(struct IMPCTarget **this, struct DeviceInfo *a2)
{
  struct IMPCTarget *v4; // rcx
  _BYTE Src[24]; // [rsp+20h] [rbp-648h] BYREF
  int v7; // [rsp+38h] [rbp-630h]

  memset_0(Src, 0, 0x640uLL);
  v7 = 1600;
  memcpy_0(this + 58, Src, 0x640uLL);
  MPCProcessor::ProcessSourceDetectedAndLostForAllHands((MPCProcessor *)this, this[466], 0LL);
  v4 = this[466];
  if ( v4 )
  {
    this[466] = 0LL;
    (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return MPCInputProviderBase::OnDeviceRemoval((MPCInputProviderBase *)this, a2);
}
