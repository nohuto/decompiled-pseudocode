/*
 * XREFs of IopSafebootDriverLoad @ 0x140853E20
 * Callers:
 *     PipCallDriverAddDevice @ 0x140704B38 (PipCallDriverAddDevice.c)
 *     IopLoadDriver @ 0x14070AF00 (IopLoadDriver.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x140043EC0 (RtlCopyUnicodeString.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400897F4 (IopVerifierExAllocatePool_0.c)
 *     RtlAppendUnicodeStringToString @ 0x1400EC910 (RtlAppendUnicodeStringToString.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     IopGetRegistryValue @ 0x1406DA724 (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x14070A534 (IopOpenRegistryKey.c)
 */

char __fastcall IopSafebootDriverLoad(PCUNICODE_STRING Source, _BYTE *a2)
{
  char v2; // di
  const WCHAR *v6; // rdx
  NTSTATUS v7; // ebx
  PVOID v8; // rcx
  ULONG v9; // [rsp+20h] [rbp-30h]
  ULONG v10; // [rsp+20h] [rbp-30h]
  UNICODE_STRING Destination; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+28h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+30h] BYREF
  PVOID P; // [rsp+88h] [rbp+38h] BYREF

  v2 = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( a2 )
    *a2 = 0;
  switch ( InitSafeBootMode )
  {
    case 1:
      v6 = L"MINIMAL";
      break;
    case 2:
      v6 = L"NETWORK";
      break;
    case 3:
      return 1;
    default:
      return 0;
  }
  RtlInitUnicodeString(&DestinationString, v6);
  Destination.MaximumLength = DestinationString.Length + Source->Length + 8;
  Destination.Buffer = (wchar_t *)IopVerifierExAllocatePool_0(PagedPool, Destination.MaximumLength);
  if ( !Destination.Buffer )
    return 0;
  RtlCopyUnicodeString(&Destination, &DestinationString);
  if ( RtlAppendUnicodeToString(&Destination, L"\\") < 0 )
  {
    ExFreePoolWithTag(Destination.Buffer, 0);
    return 0;
  }
  if ( RtlAppendUnicodeStringToString(&Destination, Source) >= 0 )
  {
    LOBYTE(v9) = 0;
    if ( IopOpenRegistryKey(&Handle, 0LL, &CmRegistryMachineSystemCurrentControlSetControlSafeBoot, 0xF003Fu, v9) >= 0 )
    {
      LOBYTE(v10) = 0;
      v7 = IopOpenRegistryKey(&KeyHandle, Handle, &Destination, 0xF003Fu, v10);
      ObCloseHandle(Handle, 0);
      if ( v7 >= 0 )
      {
        if ( a2 && IopGetRegistryValue(KeyHandle, L"SafeBootDrivers", 0, &P) >= 0 )
        {
          v8 = P;
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
          {
            if ( *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
              *a2 = 1;
          }
          ExFreePoolWithTag(v8, 0);
        }
        ObCloseHandle(KeyHandle, 0);
        v2 = 1;
      }
    }
  }
  ExFreePoolWithTag(Destination.Buffer, 0);
  return v2;
}
