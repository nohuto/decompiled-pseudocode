/*
 * XREFs of ExpUuidSaveSequenceNumberIf @ 0x1406C608C
 * Callers:
 *     ExUuidCreate @ 0x1406062C0 (ExUuidCreate.c)
 *     NtAllocateUuids @ 0x1406C5EE0 (NtAllocateUuids.c)
 * Callees:
 *     ExpUuidSaveSequenceNumber @ 0x14075F9CC (ExpUuidSaveSequenceNumber.c)
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
