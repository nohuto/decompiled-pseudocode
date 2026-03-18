/*
 * XREFs of SeGetTokenDeviceMap @ 0x1406C3558
 * Callers:
 *     ObpReferenceDeviceMap @ 0x1405D10D0 (ObpReferenceDeviceMap.c)
 *     ObpLookupObjectName @ 0x1405F6F30 (ObpLookupObjectName.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406C344C (ObSetCurrentProcessDeviceMap.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x140002320 (PsGetServerSiloServiceSessionId.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     swprintf_s @ 0x1401A52F0 (swprintf_s.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwCreateDirectoryObject @ 0x1401C2090 (ZwCreateDirectoryObject.c)
 *     ZwCreateSymbolicLinkObject @ 0x1401C23D0 (ZwCreateSymbolicLinkObject.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObfDereferenceDeviceMap @ 0x1405D16F0 (ObfDereferenceDeviceMap.c)
 *     ObpSetDeviceMap @ 0x1406EB608 (ObpSetDeviceMap.c)
 */

NTSTATUS __fastcall SeGetTokenDeviceMap(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  NTSTATUS result; // eax
  unsigned int ServerSiloServiceSessionId; // eax
  NTSTATUS v8; // edi
  char v9[4]; // [rsp+20h] [rbp-E0h]
  int v10; // [rsp+28h] [rbp-D8h]
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE DirectoryHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE SymbolicLinkHandle; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v16; // [rsp+88h] [rbp-78h] BYREF
  wchar_t Dst[64]; // [rsp+A0h] [rbp-60h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  P = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v16.Length = 0LL;
  v16.Buffer = 0LL;
  if ( !a1 || !a2 )
    return -1073741811;
  if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
    return -1073741729;
  v4 = *(_QWORD *)(a1 + 216);
  if ( !v4 )
    return -1073741729;
  v5 = *(_QWORD *)(v4 + 40);
  if ( v5 )
  {
    *a2 = v5;
    return 0;
  }
  else
  {
    ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(*(_QWORD *)(v4 + 160));
    v10 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)v9 = *(_DWORD *)(a1 + 28);
    swprintf_s(Dst, 0x40uLL, L"\\Sessions\\%d\\DosDevices\\%08x-%08x", ServerSiloServiceSessionId, *(_DWORD *)v9, v10);
    RtlInitUnicodeString(&DestinationString, Dst);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 704;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
    if ( result >= 0 )
    {
      v8 = ObpSetDeviceMap(*(PVOID *)(v4 + 160), 2, (__int64)&P);
      if ( v8 >= 0 )
      {
        RtlInitUnicodeString(&v16, L"Global");
        RtlInitUnicodeString(&DestinationString, L"\\Global??");
        ObjectAttributes.RootDirectory = DirectoryHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &v16;
        ObjectAttributes.Attributes = 720;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v8 = ZwCreateSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes, &DestinationString);
        if ( v8 < 0 )
        {
          ObfDereferenceDeviceMap(P);
        }
        else
        {
          ZwClose(SymbolicLinkHandle);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 40), (signed __int64)P, 0LL) )
            ObfDereferenceDeviceMap(P);
          *a2 = *(_QWORD *)(v4 + 40);
        }
      }
      ZwClose(DirectoryHandle);
      return v8;
    }
  }
  return result;
}
