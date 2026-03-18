/*
 * XREFs of ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SwapSystemCursorReason@@@Z @ 0x1C00DA894
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00BD788 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SwapSystemCursorReason@@@Z @ 0x1C00DA5BC (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SwapSystemCursorReas.c)
 */

void __fastcall xxxUpdateSystemCursorsFromRegistry(__int64 a1, int a2)
{
  signed int i; // ebx

  for ( i = 0; i < 19; ++i )
    xxxUpdateSystemCursorFromRegistry(a1, i, a2);
}
