/*
 * XREFs of PipDmgSaveDeviceDmarPolicy @ 0x14077BBB4
 * Callers:
 *     PiDmaGuardProcessPreAddDevice @ 0x14071D2BC (PiDmaGuardProcessPreAddDevice.c)
 * Callees:
 *     _PnpSetObjectProperty @ 0x1407065F4 (_PnpSetObjectProperty.c)
 *     PnpTraceDmaGuardDevicePolicy @ 0x14077BC0C (PnpTraceDmaGuardDevicePolicy.c)
 */

__int64 __fastcall PipDmgSaveDeviceDmarPolicy(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  unsigned int v6; // eax
  unsigned int v7; // [rsp+70h] [rbp+18h] BYREF

  v7 = a3;
  v3 = 0;
  if ( a3 )
  {
    v6 = PnpSetObjectProperty(
           *(__int64 *)&PiPnpRtlCtx,
           *(_QWORD *)(a1 + 48),
           1u,
           a2,
           0LL,
           (__int64)&DEVPKEY_Device_DmaRemappingPolicy,
           7,
           (__int64)&v7,
           4u,
           0);
    a3 = v7;
    v3 = v6;
  }
  PnpTraceDmaGuardDevicePolicy(a1, a3);
  result = v3;
  *(_BYTE *)(*(_QWORD *)(a1 + 720) + 16LL) = (v7 == 2) | *(_BYTE *)(*(_QWORD *)(a1 + 720) + 16LL) & 0xFE;
  return result;
}
