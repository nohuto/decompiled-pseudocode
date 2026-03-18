/*
 * XREFs of RtlCheckRegistryKey @ 0x1406E8510
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x140138110 (RtlCheckPortableOperatingSystem.c)
 *     SepInitQuerySigningPolicyExt @ 0x14078A070 (SepInitQuerySigningPolicyExt.c)
 *     WheapCommitPolicy @ 0x14091A4A4 (WheapCommitPolicy.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x1405C3428 (RtlpGetRegistryHandle.c)
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
