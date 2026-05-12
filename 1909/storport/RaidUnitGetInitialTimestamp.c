/*
 * XREFs of RaidUnitGetInitialTimestamp @ 0x1C0018FC4
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C006CC50 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     PortRegistryWriteDeviceKey @ 0x1C006B9F8 (PortRegistryWriteDeviceKey.c)
 *     PortRegistryReadDeviceKey @ 0x1C006BEC4 (PortRegistryReadDeviceKey.c)
 */

__int64 __fastcall RaidUnitGetInitialTimestamp(__int64 a1)
{
  __int64 result; // rax
  struct _UNICODE_STRING v3; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  int v5; // [rsp+70h] [rbp+18h] BYREF
  __int64 v6; // [rsp+78h] [rbp+20h] BYREF
  __int64 *v7; // [rsp+80h] [rbp+28h] BYREF
  __int64 v8; // [rsp+88h] [rbp+30h] BYREF

  v5 = 8;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v3.Length = 0LL;
  v3.Buffer = 0LL;
  v7 = &v8;
  RtlInitUnicodeString(&DestinationString, L"Storport");
  RtlInitUnicodeString(&v3, L"InitialTimestamp");
  result = PortRegistryReadDeviceKey(
             *(_QWORD *)(a1 + 8),
             (unsigned int)&DestinationString,
             (unsigned int)&v3,
             11,
             (__int64)&v7,
             (__int64)&v5);
  v6 = MEMORY[0xFFFFF78000000014];
  if ( (int)result < 0 || MEMORY[0xFFFFF78000000014] < v8 )
  {
    PortRegistryWriteDeviceKey(
      *(_QWORD *)(a1 + 8),
      (unsigned int)&DestinationString,
      (unsigned int)&v3,
      11,
      (__int64)&v6,
      8);
    *(_QWORD *)(a1 + 2968) = v6;
    return 0LL;
  }
  else
  {
    *(_QWORD *)(a1 + 2968) = v8;
  }
  return result;
}
