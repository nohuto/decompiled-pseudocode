/*
 * XREFs of ExpUuidSaveSequenceNumberIf @ 0x1406C730C
 * Callers:
 *     ExUuidCreate @ 0x1406072C0 (ExUuidCreate.c)
 *     NtAllocateUuids @ 0x1406C7160 (NtAllocateUuids.c)
 * Callees:
 *     ExpUuidSaveSequenceNumber @ 0x140760B9C (ExpUuidSaveSequenceNumber.c)
 */

__int64 ExpUuidSaveSequenceNumberIf()
{
  __int64 result; // rax

  result = 0LL;
  if ( ExpUuidSequenceNumberNotSaved == 1 )
  {
    result = ExpUuidSaveSequenceNumber();
    if ( (int)result >= 0 )
      ExpUuidSequenceNumberNotSaved = 0;
  }
  return result;
}
