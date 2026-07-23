/*
 * XREFs of WmipSaveGuidSecurityDescriptor @ 0x140763980
 * Callers:
 *     WmipSecurityMethod @ 0x1406ABD20 (WmipSecurityMethod.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlLengthSecurityDescriptor @ 0x1405CB090 (RtlLengthSecurityDescriptor.c)
 *     RtlGetPersistedStateLocation @ 0x140613450 (RtlGetPersistedStateLocation.c)
 *     RtlWriteRegistryValue @ 0x1406C3500 (RtlWriteRegistryValue.c)
 */

__int64 __fastcall WmipSaveGuidSecurityDescriptor(__int64 a1, void *a2)
{
  WCHAR *TargetPath; // rbx
  ULONG v5; // r14d
  ULONG BufferLengthIn; // edi
  NTSTATUS PersistedStateLocation; // eax
  unsigned int v8; // edi
  ULONG BufferLengthOut; // [rsp+70h] [rbp+18h] BYREF

  TargetPath = 0LL;
  v5 = RtlLengthSecurityDescriptor(a2);
  BufferLengthIn = 0;
  for ( BufferLengthOut = 0; ; BufferLengthIn = BufferLengthOut )
  {
    if ( BufferLengthIn )
    {
      TargetPath = (WCHAR *)ExAllocatePoolWithTag(PagedPool, BufferLengthIn, 0x70696D57u);
      if ( !TargetPath )
        return 3221225626LL;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"ETWSecurityPath",
                               0LL,
                               0LL,
                               LocationTypeRegistry,
                               TargetPath,
                               BufferLengthIn,
                               &BufferLengthOut);
    v8 = PersistedStateLocation;
    if ( PersistedStateLocation != -2147483643 )
      break;
    if ( TargetPath )
    {
      ExFreePoolWithTag(TargetPath, 0);
      TargetPath = 0LL;
    }
  }
  if ( !PersistedStateLocation )
    v8 = RtlWriteRegistryValue(0, TargetPath, *(PCWSTR *)(a1 + 8), 3u, a2, v5);
  if ( v8 == -1073741772 )
    v8 = RtlWriteRegistryValue(2u, L"WMI\\Security", *(PCWSTR *)(a1 + 8), 3u, a2, v5);
  if ( TargetPath )
    ExFreePoolWithTag(TargetPath, 0);
  return v8;
}
