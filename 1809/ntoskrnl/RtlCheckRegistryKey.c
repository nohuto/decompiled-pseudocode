/*
 * XREFs of RtlCheckRegistryKey @ 0x1406C8900
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x140135F00 (RtlCheckPortableOperatingSystem.c)
 *     SepInitQuerySigningPolicyExt @ 0x140764CE0 (SepInitQuerySigningPolicyExt.c)
 *     WheapCommitPolicy @ 0x1408DD49C (WheapCommitPolicy.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x1405C8774 (RtlpGetRegistryHandle.c)
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
