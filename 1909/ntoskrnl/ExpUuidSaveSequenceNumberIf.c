/*
 * XREFs of ExpUuidSaveSequenceNumberIf @ 0x1406E70AC
 * Callers:
 *     ExUuidCreate @ 0x140689DE0 (ExUuidCreate.c)
 *     NtAllocateUuids @ 0x1406E6EF0 (NtAllocateUuids.c)
 * Callees:
 *     ExpUuidSaveSequenceNumber @ 0x140788680 (ExpUuidSaveSequenceNumber.c)
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
