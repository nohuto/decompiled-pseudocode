/*
 * XREFs of RaidUnitGetPowerCycleCount @ 0x1C001BC88
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C006C970 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     PortRegistryReadDeviceKey @ 0x1C006AFC4 (PortRegistryReadDeviceKey.c)
 */

__int64 __fastcall RaidUnitGetPowerCycleCount(__int64 a1)
{
  __int64 result; // rax
  int v3; // edi
  struct _UNICODE_STRING v4; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int v6; // [rsp+70h] [rbp+20h] BYREF
  int v7; // [rsp+78h] [rbp+28h] BYREF
  int *v8; // [rsp+80h] [rbp+30h] BYREF

  v6 = 4;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v4.Length = 0LL;
  v4.Buffer = 0LL;
  v8 = &v7;
  RtlInitUnicodeString(&DestinationString, L"Storport");
  RtlInitUnicodeString(&v4, L"PowerCycleCountOverride");
  result = PortRegistryReadDeviceKey(
             *(_QWORD *)(a1 + 8),
             (unsigned int)&DestinationString,
             (unsigned int)&v4,
             4,
             (__int64)&v8,
             (__int64)&v6);
  v3 = 0;
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a1 + 2704) = v7;
  }
  else
  {
    RtlInitUnicodeString(&v4, L"PowerCycleCount");
    result = PortRegistryReadDeviceKey(
               *(_QWORD *)(a1 + 8),
               (unsigned int)&DestinationString,
               (unsigned int)&v4,
               4,
               (__int64)&v8,
               (__int64)&v6);
    if ( (int)result >= 0 )
      v3 = v7;
    *(_DWORD *)(a1 + 2704) = v3;
  }
  return result;
}
