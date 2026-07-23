/*
 * XREFs of KGetAppModelStateSeparatedRegKeyPath @ 0x1406E7C04
 * Callers:
 *     KIsUnlockSettingEnabled @ 0x1406E3610 (KIsUnlockSettingEnabled.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlGetPersistedStateLocation @ 0x1405C0E20 (RtlGetPersistedStateLocation.c)
 */

__int64 __fastcall KGetAppModelStateSeparatedRegKeyPath(
        PCWSTR SourceID,
        PCWSTR DefaultPath,
        PUNICODE_STRING DestinationString)
{
  NTSTATUS PersistedStateLocation; // eax
  NTSTATUS inited; // ebx
  ULONG BufferLengthIn; // ebx
  WCHAR *TargetPath; // rdi
  SIZE_T NumberOfBytes; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(NumberOfBytes) = 0;
  if ( DestinationString )
  {
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               SourceID,
                               L"TargetNtPath",
                               DefaultPath,
                               LocationTypeRegistry,
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
      TargetPath = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4D707041u);
      if ( TargetPath )
      {
        inited = RtlGetPersistedStateLocation(
                   SourceID,
                   L"TargetNtPath",
                   DefaultPath,
                   LocationTypeRegistry,
                   TargetPath,
                   BufferLengthIn,
                   (PULONG)&NumberOfBytes);
        if ( inited >= 0 )
        {
          inited = RtlInitUnicodeStringEx(DestinationString, TargetPath);
          if ( inited >= 0 )
            TargetPath = 0LL;
        }
        if ( TargetPath )
          ExFreePoolWithTag(TargetPath, 0x4D707041u);
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
