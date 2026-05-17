/*
 * XREFs of TppTerminateProcess @ 0x1801109AC
 * Callers:
 *     TppWorkerpInnerExceptionFilter @ 0x1801112D0 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x180111354 (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     <none>
 */

__int64 TppTerminateProcess()
{
  return ZwTerminateProcess();
}
