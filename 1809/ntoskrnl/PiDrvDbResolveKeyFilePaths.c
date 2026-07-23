/*
 * XREFs of PiDrvDbResolveKeyFilePaths @ 0x14083FDE4
 * Callers:
 *     PiDevCfgInitResolveContext @ 0x1406FB580 (PiDevCfgInitResolveContext.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     PiDrvDbFindNode @ 0x14028B574 (PiDrvDbFindNode.c)
 *     RtlPrefixUnicodeString @ 0x1405C8460 (RtlPrefixUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     IopQueryRegistryKeySystemPath @ 0x140681304 (IopQueryRegistryKeySystemPath.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x14083E918 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14083F81C (PiDrvDbResolveFilePathKeyValues.c)
 */

__int64 __fastcall PiDrvDbResolveKeyFilePaths(HANDLE Handle)
{
  int Node; // ebx
  unsigned __int64 v3; // rax
  const WCHAR *v4; // rcx
  unsigned int v5; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING String1; // [rsp+40h] [rbp-10h] BYREF
  __int64 v10; // [rsp+68h] [rbp+18h] BYREF

  v10 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  Node = IopQueryRegistryKeySystemPath(Handle, &DestinationString);
  if ( Node >= 0 )
  {
    if ( DestinationString.Length >= 2u )
    {
      v3 = (unsigned __int64)DestinationString.Length >> 1;
      if ( DestinationString.Buffer[v3 - 1] == 92 )
      {
        DestinationString.Buffer[v3 - 1] = 0;
        DestinationString.Length -= 2;
      }
    }
    RtlInitUnicodeString(&String1, L"\\DriverStores\\");
    if ( RtlPrefixUnicodeString(&String1, &DestinationString, 1u) )
      v4 = &DestinationString.Buffer[(unsigned __int64)String1.Length >> 1];
    else
      v4 = L"SYSTEM";
    Node = PiDrvDbFindNode(v4, &v10);
    if ( Node >= 0 )
    {
      if ( (*(_DWORD *)(v10 + 492) & 1) != 0 )
      {
        v5 = (MEMORY[0xFFFFF780000002F0] & 0x400 | 0x200u) >> 9;
        if ( PiDrvDbGetNodeSystemRoot(v10, &UnicodeString) < 0 )
          RtlInitUnicodeString(&UnicodeString, 0LL);
        Node = PiDrvDbResolveFilePathKeyValues(
                 (__int64)Handle,
                 v5,
                 &DestinationString,
                 (unsigned __int64)&UnicodeString & -(__int64)(UnicodeString.Buffer != 0LL));
      }
      else
      {
        Node = 0;
      }
    }
  }
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)Node;
}
