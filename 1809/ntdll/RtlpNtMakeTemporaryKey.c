/*
 * XREFs of RtlpNtMakeTemporaryKey @ 0x180103890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl RtlpNtMakeTemporaryKey(HANDLE KeyHandle)
{
  return NtDeleteKey(KeyHandle);
}
