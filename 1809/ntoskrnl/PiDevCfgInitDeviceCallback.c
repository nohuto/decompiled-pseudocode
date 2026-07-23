/*
 * XREFs of PiDevCfgInitDeviceCallback @ 0x14082E3D0
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     _PnpOpenObjectRegKey @ 0x140598118 (_PnpOpenObjectRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     PiDevCfgFreeDeviceContext @ 0x1406F5C74 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgInitDeviceContext @ 0x1406F5CB8 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgSetDeviceRegProp @ 0x1406F7BA0 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14082C75C (PiDevCfgCheckDeviceNeedsUpdate.c)
 */

__int64 __fastcall PiDevCfgInitDeviceCallback(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v10; // [rsp+40h] [rbp-9h] BYREF
  unsigned int v11; // [rsp+44h] [rbp-5h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-1h] BYREF
  _QWORD v13[10]; // [rsp+50h] [rbp+7h] BYREF
  int v14; // [rsp+B0h] [rbp+67h] BYREF
  int v15; // [rsp+C8h] [rbp+7Fh] BYREF

  memset(v13, 0, 0x48uLL);
  v5 = *(_DWORD *)(a1 + 28);
  v6 = *(_QWORD *)(a1 + 16);
  Handle = 0LL;
  v14 = 0;
  v11 = 0;
  v15 = 0;
  v10 = 1;
  if ( (int)PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, v6, v5, 983103, 0, (__int64)&Handle) >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v15 = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v7,
                (__int64)Handle,
                11,
                (__int64)&v10,
                (__int64)&v14,
                (__int64)&v15,
                0) < 0
      || v10 != 4
      || v15 != 4 )
    {
      v14 = 0;
    }
    if ( (int)PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 16), (__int64)Handle, v13) >= 0 )
    {
      if ( (int)PiDevCfgCheckDeviceNeedsUpdate((__int64)v13, &v11) >= 0 && v11 )
      {
        v14 |= v11;
        PiDevCfgSetDeviceRegProp(v8, (__int64)v13, 0xBu, 4, (__int64)&v14, 4);
      }
      *a3 = 0;
    }
  }
  PiDevCfgFreeDeviceContext((__int64)v13);
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
