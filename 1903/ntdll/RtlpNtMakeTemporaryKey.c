/*
 * XREFs of RtlpNtMakeTemporaryKey @ 0x180100F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl RtlpNtMakeTemporaryKey(HANDLE KeyHandle)
{
  return ZwDeleteKey(KeyHandle);
}
