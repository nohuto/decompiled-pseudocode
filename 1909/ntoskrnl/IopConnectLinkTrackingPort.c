/*
 * XREFs of IopConnectLinkTrackingPort @ 0x140853340
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x1405FBB70 (NtClose.c)
 *     NtConnectPort @ 0x1406CB760 (NtConnectPort.c)
 */

LONG __fastcall IopConnectLinkTrackingPort(__int64 a1)
{
  NTSTATUS v1; // ebx
  ULONG MaxMessageLength[2]; // [rsp+40h] [rbp-40h] BYREF
  HANDLE PortHandle; // [rsp+48h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+60h] [rbp-20h] BYREF

  v1 = 0;
  if ( !IopLinkTrackingServiceObject )
  {
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    *(_QWORD *)&SecurityQos.Length = 0LL;
    *(_DWORD *)&SecurityQos.ContextTrackingMode = 0;
    if ( *(_DWORD *)(IopLinkTrackingServiceEvent + 4) )
    {
      SecurityQos.ImpersonationLevel = SecurityImpersonation;
      *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
      RtlInitUnicodeString(&DestinationString, L"\\Security\\TRKWKS_PORT");
      v1 = NtConnectPort(&PortHandle, &DestinationString, &SecurityQos, 0LL, 0LL, MaxMessageLength, 0LL, 0LL);
      if ( v1 >= 0 )
      {
        if ( MaxMessageLength[0] - 128 > 0x80 )
        {
          NtClose(PortHandle);
          v1 = -1073741811;
        }
        else
        {
          v1 = ObReferenceObjectByHandle(PortHandle, 0, LpcPortObjectType, 0, (PVOID *)MaxMessageLength, 0LL);
          IopLinkTrackingServiceObject = *(PVOID *)MaxMessageLength;
          NtClose(PortHandle);
        }
      }
    }
    else
    {
      v1 = -1073741772;
    }
  }
  *(_DWORD *)(a1 + 56) = v1;
  return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
