/*
 * XREFs of TppTerminateProcess @ 0x18010F19C
 * Callers:
 *     TppWorkerpInnerExceptionFilter @ 0x18010FB24 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x18010FBA8 (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     <none>
 */

__int64 TppTerminateProcess()
{
  return ZwTerminateProcess();
}
