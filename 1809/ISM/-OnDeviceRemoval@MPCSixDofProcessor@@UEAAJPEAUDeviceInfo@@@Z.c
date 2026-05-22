/*
 * XREFs of ?OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800EF2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x180100D80 (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCSixDofProcessor::OnDeviceRemoval(MPCSixDofProcessor *this, struct DeviceInfo *a2)
{
  struct IMPCTarget *v4; // rdx
  __int64 v5; // rcx

  if ( (*((_DWORD *)this + 116) & 0x2000) != 0 )
  {
    v4 = (struct IMPCTarget *)*((_QWORD *)this + 466);
    *((_BYTE *)this + 4696) = 0;
    MPCInputProviderBase::ProcessSourceDetectedAndLost(this, v4, 0LL, 0LL, 0);
    *((_BYTE *)this + 4696) = 1;
    v5 = *((_QWORD *)this + 466);
    if ( v5 )
    {
      *((_QWORD *)this + 466) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  return MPCInputProviderBase::OnDeviceRemoval(this, a2);
}
