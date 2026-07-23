/*
 * XREFs of PiGetStateRootPath @ 0x14070F3E0
 * Callers:
 *     PiOpenDriverRedirectedStateKey @ 0x1407066CC (PiOpenDriverRedirectedStateKey.c)
 *     PiCreateDriverRedirectedStateKey @ 0x1407583E8 (PiCreateDriverRedirectedStateKey.c)
 *     IoGetDeviceDirectory @ 0x140825BF0 (IoGetDeviceDirectory.c)
 *     PiGetDriverMutableStateDirectory @ 0x140826854 (PiGetDriverMutableStateDirectory.c)
 *     PiOpenDriverRedirectedStateRootKey @ 0x140826B28 (PiOpenDriverRedirectedStateRootKey.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x1409DA820 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlGetPersistedStateLocation @ 0x140613450 (RtlGetPersistedStateLocation.c)
 */

__int64 __fastcall PiGetStateRootPath(
        PCWSTR SourceID,
        PCWSTR DefaultPath,
        STATE_LOCATION_TYPE StateLocationType,
        PUNICODE_STRING DestinationString)
{
  NTSTATUS PersistedStateLocation; // eax
  NTSTATUS inited; // ebx
  ULONG BufferLengthIn; // ebx
  WCHAR *TargetPath; // rdi
  NTSTATUS v13; // eax
  SIZE_T NumberOfBytes; // [rsp+88h] [rbp+20h] BYREF

  if ( DestinationString )
  {
    LODWORD(NumberOfBytes) = 0;
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               SourceID,
                               0LL,
                               DefaultPath,
                               StateLocationType,
                               0LL,
                               0,
                               (PULONG)&NumberOfBytes);
    inited = PersistedStateLocation;
    if ( PersistedStateLocation >= 0 )
    {
      return (unsigned int)-1073741823;
    }
    else if ( PersistedStateLocation == -2147483643 )
    {
      BufferLengthIn = NumberOfBytes;
      TargetPath = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6F697050u);
      if ( TargetPath )
      {
        v13 = RtlGetPersistedStateLocation(
                SourceID,
                0LL,
                DefaultPath,
                StateLocationType,
                TargetPath,
                BufferLengthIn,
                (PULONG)&NumberOfBytes);
        inited = v13;
        if ( v13 == -1073741772 )
        {
          inited = -1073741595;
        }
        else if ( v13 >= 0 )
        {
          inited = RtlInitUnicodeStringEx(DestinationString, TargetPath);
          if ( inited >= 0 )
            TargetPath = 0LL;
        }
        if ( TargetPath )
          ExFreePoolWithTag(TargetPath, 0);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)inited;
}
