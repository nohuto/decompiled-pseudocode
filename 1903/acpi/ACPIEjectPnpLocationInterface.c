/*
 * XREFs of ACPIEjectPnpLocationInterface @ 0x1C0094A0C
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C000B2A0 (ACPIBusIrpQueryInterface.c)
 *     ACPIFilterIrpQueryPnpLocationInterface @ 0x1C00944B0 (ACPIFilterIrpQueryPnpLocationInterface.c)
 *     ACPIRootIrpQueryInterface @ 0x1C00945B0 (ACPIRootIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall ACPIEjectPnpLocationInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 DeviceExtension; // r14
  __int64 v5; // rdi
  char *PoolWithTag; // rax
  unsigned int v7; // ebx
  char *v8; // rsi
  _OWORD *v9; // rcx
  void (__fastcall *v10)(char *); // rax

  v2 = *(_QWORD *)(a2 + 184);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( *(_WORD *)(v2 + 16) >= 0x28u && *(_WORD *)(v2 + 18) )
  {
    v5 = *(_QWORD *)(v2 + 24);
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x46706341u);
    v7 = 0;
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_QWORD *)PoolWithTag = DeviceExtension;
      v9 = PoolWithTag + 8;
      *((_DWORD *)PoolWithTag + 12) = 0;
      if ( *(_DWORD *)(a2 + 48) )
      {
        memset(v9, 0, 0x28uLL);
      }
      else
      {
        *v9 = *(_OWORD *)v5;
        *(_OWORD *)(PoolWithTag + 24) = *(_OWORD *)(v5 + 16);
        *((_QWORD *)PoolWithTag + 5) = *(_QWORD *)(v5 + 32);
      }
      *(_OWORD *)v5 = PnpLocationInterface;
      *(_OWORD *)(v5 + 16) = *(_OWORD *)&off_1C006D840;
      *(_QWORD *)(v5 + 32) = ACPIGetPnpLocationString;
      v10 = *(void (__fastcall **)(char *))(v5 + 16);
      *(_QWORD *)(v5 + 8) = v8;
      v10(v8);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v7;
}
