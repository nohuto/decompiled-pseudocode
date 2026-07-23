/*
 * XREFs of RtlCreateRegistryKey @ 0x1800EB2F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003D40 @ 0x180003D40 (sub_180003D40.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 */

NTSTATUS __cdecl RtlCreateRegistryKey(ULONG RelativeTo, PWSTR Path)
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  result = sub_180003D40(RelativeTo, Path, 1, &Handle);
  if ( result >= 0 )
  {
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(Handle);
    return 0;
  }
  return result;
}
