/*
 * XREFs of ExpUuidSaveSequenceNumberIf @ 0x1406E62AC
 * Callers:
 *     ExUuidCreate @ 0x140696870 (ExUuidCreate.c)
 *     NtAllocateUuids @ 0x1406E60F0 (NtAllocateUuids.c)
 * Callees:
 *     ExpUuidSaveSequenceNumber @ 0x140786320 (ExpUuidSaveSequenceNumber.c)
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
