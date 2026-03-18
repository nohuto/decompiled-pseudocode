/*
 * XREFs of HUBUCX_GetDeviceBusInfo @ 0x1C00252C8
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0016580 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_GetDeviceBusInfo(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *PoolWithTag; // rdi
  int v7; // ebx
  _DWORD v9[10]; // [rsp+30h] [rbp-28h] BYREF
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp+20h] BYREF

  LODWORD(NumberOfBytes) = 16;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x68334855u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, SIZE_T *, _DWORD *))(a1 + 656))(
         a2,
         1LL,
         PoolWithTag,
         &NumberOfBytes,
         v9);
  if ( v7 == -1073741789 )
  {
    LODWORD(NumberOfBytes) = v9[0];
    ExFreePoolWithTag(PoolWithTag, 0x68334855u);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x68334855u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, SIZE_T *, _DWORD *))(a1 + 656))(
           a2,
           1LL,
           PoolWithTag,
           &NumberOfBytes,
           v9);
  }
  if ( v7 >= 0 )
  {
    a3[1] = *PoolWithTag;
    a3[2] = PoolWithTag[1];
    a3[3] = PoolWithTag[2];
  }
  ExFreePoolWithTag(PoolWithTag, 0x68334855u);
  return (unsigned int)v7;
}
