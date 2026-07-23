/*
 * XREFs of IopSafebootDriverLoad @ 0x14081B9D0
 * Callers:
 *     IopLoadDriver @ 0x140680BF4 (IopLoadDriver.c)
 *     PipCallDriverAddDevice @ 0x1406E7EEC (PipCallDriverAddDevice.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     RtlCopyUnicodeString @ 0x1400B97D0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400DD8DC (IopVerifierExAllocatePool_0.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F5250 (RtlAppendUnicodeStringToString.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x1406C7B50 (IopOpenRegistryKey.c)
 */

char __fastcall IopSafebootDriverLoad(PCUNICODE_STRING Source, _BYTE *a2)
{
  char v2; // di
  const WCHAR *v6; // rdx
  __int16 v7; // ax
  NTSTATUS v8; // ebx
  PVOID v9; // rcx
  ULONG v10; // [rsp+20h] [rbp-30h]
  ULONG v11; // [rsp+20h] [rbp-30h]
  UNICODE_STRING Destination; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+28h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+30h] BYREF
  PVOID P; // [rsp+88h] [rbp+38h] BYREF

  v2 = 0;
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
  v7 = Source->Length + 8;
  Destination.Length = 0;
  Destination.MaximumLength = DestinationString.Length + v7;
  Destination.Buffer = (wchar_t *)IopVerifierExAllocatePool_0(
                                    PagedPool,
                                    (unsigned __int16)(DestinationString.Length + v7));
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
    LOBYTE(v10) = 0;
    if ( IopOpenRegistryKey(&Handle, 0LL, &CmRegistryMachineSystemCurrentControlSetControlSafeBoot, 0xF003Fu, v10) >= 0 )
    {
      LOBYTE(v11) = 0;
      v8 = IopOpenRegistryKey(&KeyHandle, Handle, &Destination, 0xF003Fu, v11);
      ObCloseHandle(Handle, 0);
      if ( v8 >= 0 )
      {
        if ( a2 && IopGetRegistryValue(KeyHandle, L"SafeBootDrivers", 0, &P) >= 0 )
        {
          v9 = P;
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
          {
            if ( *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
              *a2 = 1;
          }
          ExFreePoolWithTag(v9, 0);
        }
        ObCloseHandle(KeyHandle, 0);
        v2 = 1;
      }
    }
  }
  ExFreePoolWithTag(Destination.Buffer, 0);
  return v2;
}
