/*
 * XREFs of UninitializeEditionAutoLogger @ 0x1C0135530
 * Callers:
 *     <none>
 * Callees:
 *     WppCleanupKm @ 0x1C03558EC (WppCleanupKm.c)
 */

__int64 __fastcall UninitializeEditionAutoLogger(__int64 a1)
{
  if ( gFullLog )
  {
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
    gFullLog = 0LL;
  }
  return WppCleanupKm(a1);
}
