/*
 * XREFs of NtGetTickCount @ 0x1800E4200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG NtGetTickCount(void)
{
  return (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
}
