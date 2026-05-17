/*
 * XREFs of RtlpNtMakeTemporaryKey @ 0x180100F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 RtlpNtMakeTemporaryKey()
{
  return ZwDeleteKey();
}
