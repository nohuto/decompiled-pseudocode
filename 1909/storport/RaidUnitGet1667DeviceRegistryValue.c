/*
 * XREFs of RaidUnitGet1667DeviceRegistryValue @ 0x1C001BA9C
 * Callers:
 *     RaidUnitGetCompatibleIds @ 0x1C001B528 (RaidUnitGetCompatibleIds.c)
 * Callees:
 *     PortRegistryReadDeviceKey @ 0x1C006BEC4 (PortRegistryReadDeviceKey.c)
 */

__int64 __fastcall RaidUnitGet1667DeviceRegistryValue(__int64 a1)
{
  __int64 result; // rax
  struct _UNICODE_STRING v3; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v5; // [rsp+60h] [rbp+10h] BYREF
  int v6; // [rsp+68h] [rbp+18h] BYREF
  unsigned int *v7; // [rsp+70h] [rbp+20h] BYREF

  result = *(_QWORD *)(a1 + 104);
  if ( (*(_BYTE *)result & 0x1F) == 0 || (*(_BYTE *)result & 0x1F) == 0x14 )
  {
    v5 = -1;
    v6 = 4;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    *(_QWORD *)&v3.Length = 0LL;
    v3.Buffer = 0LL;
    v7 = &v5;
    RtlInitUnicodeString(&DestinationString, L"Storport");
    RtlInitUnicodeString(&v3, L"Is1667Device");
    result = PortRegistryReadDeviceKey(
               *(_QWORD *)(a1 + 8),
               (unsigned int)&DestinationString,
               (unsigned int)&v3,
               4,
               (__int64)&v7,
               (__int64)&v6);
    if ( (int)result >= 0 )
    {
      result = v5;
      if ( v5 )
      {
        if ( v5 != -1 )
          *(_BYTE *)(a1 + 128) = 1;
      }
      else
      {
        *(_BYTE *)(a1 + 128) = 0;
      }
    }
  }
  return result;
}
