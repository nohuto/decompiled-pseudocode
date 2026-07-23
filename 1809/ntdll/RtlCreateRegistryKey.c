/*
 * XREFs of RtlCreateRegistryKey @ 0x1800EE240
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetRegistryHandle @ 0x180053FCC (RtlpGetRegistryHandle.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 */

NTSTATUS __cdecl RtlCreateRegistryKey(ULONG RelativeTo, PWSTR Path)
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  result = RtlpGetRegistryHandle(RelativeTo, Path, 1, &Handle);
  if ( result >= 0 )
  {
    if ( (RelativeTo & 0x40000000) == 0 )
      NtClose(Handle);
    return 0;
  }
  return result;
}
