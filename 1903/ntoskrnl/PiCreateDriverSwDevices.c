/*
 * XREFs of PiCreateDriverSwDevices @ 0x1406FED60
 * Callers:
 *     PipProcessStartPhase3 @ 0x1406FEE28 (PipProcessStartPhase3.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x1405C3678 (_SysCtxRegOpenKey.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x140702314 (PnpDeviceObjectToDeviceInstance.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140768CF4 (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 __fastcall PiCreateDriverSwDevices(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp-10h] BYREF
  __int64 v8; // [rsp+38h] [rbp-8h]
  HANDLE v9; // [rsp+50h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+18h] BYREF

  Handle = 0LL;
  v9 = 0LL;
  v7 = 0LL;
  v2 = *(_QWORD *)(a1 + 32);
  v8 = 0LL;
  v3 = PnpDeviceObjectToDeviceInstance(v2, &Handle, 131097LL);
  if ( v3 >= 0 )
  {
    if ( *(_QWORD *)&PiPnpRtlCtx )
      v4 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
    else
      v4 = 0LL;
    v5 = SysCtxRegOpenKey(v4, (__int64)Handle, (__int64)L"Devices", 0, 0x20019u, (__int64)&v9);
    v3 = v5;
    if ( v5 >= 0 )
    {
      LODWORD(v8) = 0;
      v7 = a1;
      v3 = PnpCtxRegEnumKeyWithCallback(*(_QWORD *)&PiPnpRtlCtx, v9, PiCreateDriverSwDeviceCallback, &v7);
      if ( v3 >= 0 && (int)v8 < 0 )
        v3 = v8;
    }
    else if ( v5 == -1073741772 )
    {
      v3 = 0;
    }
  }
  if ( v9 )
    ZwClose(v9);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v3;
}
