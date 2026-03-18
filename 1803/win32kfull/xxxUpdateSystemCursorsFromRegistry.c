/*
 * XREFs of xxxUpdateSystemCursorsFromRegistry @ 0x1C006AF00
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0050D10 (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C006AF34 (xxxUpdateSystemCursorFromRegistry.c)
 */

__int64 __fastcall xxxUpdateSystemCursorsFromRegistry(__int64 a1)
{
  int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < 19; ++i )
    result = xxxUpdateSystemCursorFromRegistry(a1, (unsigned int)i);
  return result;
}
