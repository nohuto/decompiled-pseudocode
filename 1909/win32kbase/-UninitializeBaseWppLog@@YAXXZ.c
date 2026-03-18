/*
 * XREFs of ?UninitializeBaseWppLog@@YAXXZ @ 0x1C00B4DBC
 * Callers:
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x1C009F154 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00B2090 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

void UninitializeBaseWppLog(void)
{
  if ( gBaseLog )
  {
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
    gBaseLog = 0LL;
  }
  if ( gRimLog )
  {
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
    gRimLog = 0LL;
  }
}
