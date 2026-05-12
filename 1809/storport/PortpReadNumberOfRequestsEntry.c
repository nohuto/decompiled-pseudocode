/*
 * XREFs of PortpReadNumberOfRequestsEntry @ 0x1C006C0C0
 * Callers:
 *     PortReadRegistrySettings @ 0x1C006BFA4 (PortReadRegistrySettings.c)
 * Callees:
 *     <none>
 */

char __fastcall PortpReadNumberOfRequestsEntry(HANDLE KeyHandle, char *KeyValueInformation, __int64 a3)
{
  unsigned int v7; // ecx
  int v8; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp+10h] BYREF

  RtlInitUnicodeString(&DestinationString, L"NumberOfRequests");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValueFullInformation,
         KeyValueInformation,
         0x200u,
         &ResultLength) < 0
    || *((_DWORD *)KeyValueInformation + 1) != 4
    || *((_DWORD *)KeyValueInformation + 3) != 4 )
  {
    return 0;
  }
  v7 = *(_DWORD *)&KeyValueInformation[*((unsigned int *)KeyValueInformation + 2)];
  v8 = 16;
  if ( v7 >= 0x10 )
  {
    v8 = *(_DWORD *)&KeyValueInformation[*((unsigned int *)KeyValueInformation + 2)];
    if ( v7 > 0xFF )
      v8 = 255;
  }
  *(_DWORD *)(a3 + 32) = v8;
  return 1;
}
