/*
 * XREFs of ?UninitializeBaseWppLog@@YAXXZ @ 0x1C00B789C
 * Callers:
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x1C009F9F8 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00B4B70 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
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
