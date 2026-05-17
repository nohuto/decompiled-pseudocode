/*
 * XREFs of RtlpNtMakeTemporaryKey @ 0x180101060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 RtlpNtMakeTemporaryKey()
{
  return NtDeleteKey();
}
