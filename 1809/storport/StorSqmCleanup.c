/*
 * XREFs of StorSqmCleanup @ 0x1C00535E4
 * Callers:
 *     RaSqmAndEtwCleanup @ 0x1C0074588 (RaSqmAndEtwCleanup.c)
 * Callees:
 *     <none>
 */

NTSTATUS StorSqmCleanup()
{
  NTSTATUS result; // eax

  if ( byte_1C00618B9 )
  {
    result = EtwUnregister(qword_1C00618E8);
    byte_1C00618B9 = 0;
  }
  return result;
}
