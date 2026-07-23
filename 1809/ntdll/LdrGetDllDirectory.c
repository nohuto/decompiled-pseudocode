/*
 * XREFs of LdrGetDllDirectory @ 0x180082760
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlCopyUnicodeString @ 0x1800411E0 (RtlCopyUnicodeString.c)
 */

NTSTATUS __cdecl LdrGetDllDirectory(PUNICODE_STRING DllDirectory)
{
  unsigned int MaximumLength; // edx
  unsigned int v3; // eax
  NTSTATUS v4; // edi

  if ( (LdrpPolicyBits & 4) == 0 )
    return -1073741811;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  MaximumLength = DllDirectory->MaximumLength;
  v3 = LdrpDllDirectory.Length + 2;
  if ( MaximumLength >= v3 )
  {
    RtlCopyUnicodeString(DllDirectory, &LdrpDllDirectory);
    v4 = 0;
  }
  else
  {
    DllDirectory->Length = v3;
    v4 = -1073741789;
    if ( (_WORD)MaximumLength )
      *DllDirectory->Buffer = 0;
  }
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  return v4;
}
