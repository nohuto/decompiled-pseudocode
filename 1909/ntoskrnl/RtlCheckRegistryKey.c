/*
 * XREFs of RtlCheckRegistryKey @ 0x1406E95B0
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x140138760 (RtlCheckPortableOperatingSystem.c)
 *     SepInitQuerySigningPolicyExt @ 0x14078C4D0 (SepInitQuerySigningPolicyExt.c)
 *     WheapCommitPolicy @ 0x140919F04 (WheapCommitPolicy.c)
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x1405C38F8 (RtlpGetRegistryHandle.c)
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
