/*
 * XREFs of sub_1800F8F3C @ 0x1800F8F3C
 * Callers:
 *     RtlQueryProcessLockInformation @ 0x1800D7870 (RtlQueryProcessLockInformation.c)
 *     RtlAssert @ 0x1800EA470 (RtlAssert.c)
 *     sub_1800F8F8C @ 0x1800F8F8C (sub_1800F8F8C.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800FA340 (RtlUnhandledExceptionFilter2.c)
 *     sub_1801041A8 @ 0x1801041A8 (sub_1801041A8.c)
 * Callees:
 *     <none>
 */

BOOLEAN sub_1800F8F3C()
{
  BOOLEAN result; // al

  result = NtCurrentPeb()->BeingDebugged;
  if ( !result )
    return (MEMORY[0x7FFE02D4] & 3) == 3;
  return result;
}
