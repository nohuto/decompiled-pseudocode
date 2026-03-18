/*
 * XREFs of PiDrvDbResolveKeyFilePaths @ 0x14087A338
 * Callers:
 *     PiDevCfgInitResolveContext @ 0x140715AD4 (PiDevCfgInitResolveContext.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     PiDrvDbFindNode @ 0x1402A15A0 (PiDrvDbFindNode.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlPrefixUnicodeString @ 0x140653340 (RtlPrefixUnicodeString.c)
 *     IopQueryRegistryKeySystemPath @ 0x14070D890 (IopQueryRegistryKeySystemPath.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x140878A3C (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x140879CC4 (PiDrvDbResolveFilePathKeyValues.c)
 */

__int64 __fastcall PiDrvDbResolveKeyFilePaths(HANDLE Handle)
{
  int Node; // ebx
  unsigned __int16 Length; // ax
  wchar_t *Buffer; // rbx
  unsigned __int64 v5; // rcx
  const WCHAR *v6; // rdx
  unsigned int v7; // ebx
  int NodeSystemRoot; // eax
  const UNICODE_STRING *v9; // r9
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+68h] [rbp+28h] BYREF
  const UNICODE_STRING *v14; // [rsp+70h] [rbp+30h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v14 = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  v13 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  Node = IopQueryRegistryKeySystemPath(Handle, &DestinationString);
  if ( Node >= 0 )
  {
    Length = DestinationString.Length;
    Buffer = DestinationString.Buffer;
    if ( DestinationString.Length >= 2u )
    {
      v5 = (unsigned __int64)DestinationString.Length >> 1;
      if ( DestinationString.Buffer[v5 - 1] == 92 )
      {
        DestinationString.Buffer[v5 - 1] = 0;
        Buffer = DestinationString.Buffer;
        Length = DestinationString.Length - 2;
        DestinationString.Length -= 2;
      }
    }
    if ( Length <= 0x1Cu
      || !RtlPrefixUnicodeString(&PiDrvDbDriverStoresRoot, &DestinationString, 1u)
      || (v6 = Buffer + 14, Buffer[13] != 92) )
    {
      v6 = L"SYSTEM";
    }
    RtlInitUnicodeString(&String2, v6);
    Node = PiDrvDbFindNode(&String2, &v13);
    if ( Node >= 0 )
    {
      if ( (*(_DWORD *)(v13 + 492) & 1) != 0 )
      {
        v7 = (MEMORY[0xFFFFF780000002F0] & 0x400 | 0x200u) >> 9;
        NodeSystemRoot = PiDrvDbGetNodeSystemRoot(v13, &v14);
        v9 = v14;
        if ( NodeSystemRoot < 0 )
          v9 = 0LL;
        Node = PiDrvDbResolveFilePathKeyValues((__int64)Handle, v7, &DestinationString, v9);
      }
      else
      {
        Node = 0;
      }
    }
  }
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)Node;
}
