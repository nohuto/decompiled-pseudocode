/*
 * XREFs of PortpReadBusType @ 0x1C006D1F4
 * Callers:
 *     PortReadStorageBusType @ 0x1C006D178 (PortReadStorageBusType.c)
 * Callees:
 *     <none>
 */

bool __fastcall PortpReadBusType(HANDLE KeyHandle, char *KeyValueInformation, int *a3)
{
  int v6; // edx
  bool result; // al
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp+10h] BYREF

  RtlInitUnicodeString(&DestinationString, L"BusType");
  result = 0;
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValueFullInformation,
         KeyValueInformation,
         0x200u,
         &ResultLength) >= 0
    && *((_DWORD *)KeyValueInformation + 1) == 4
    && *((_DWORD *)KeyValueInformation + 3) == 4 )
  {
    v6 = *(_DWORD *)&KeyValueInformation[*((unsigned int *)KeyValueInformation + 2)];
    *a3 = v6;
    if ( v6 < 127 )
      return 1;
  }
  return result;
}
