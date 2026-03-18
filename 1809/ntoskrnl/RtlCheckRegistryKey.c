/*
 * XREFs of RtlCheckRegistryKey @ 0x1406C7680
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x140135E10 (RtlCheckPortableOperatingSystem.c)
 *     SepInitQuerySigningPolicyExt @ 0x140763B10 (SepInitQuerySigningPolicyExt.c)
 *     WheapCommitPolicy @ 0x1408DC1FC (WheapCommitPolicy.c)
 * Callees:
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x1405C7774 (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlCheckRegistryKey(ULONG RelativeTo, PWSTR Path)
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  result = RtlpGetRegistryHandle(RelativeTo, Path, 0, &Handle);
  if ( result >= 0 )
  {
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(Handle);
    return 0;
  }
  return result;
}
