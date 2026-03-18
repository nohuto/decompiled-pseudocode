/*
 * XREFs of ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x1C02CDBDC
 * Callers:
 *     MonitorCleanupGlobal @ 0x1C0056230 (MonitorCleanupGlobal.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 */

void MonitorCleanupAdditionalTiming(void)
{
  void *v0; // rcx

  while ( 1 )
  {
    v0 = qword_1C00A2E00;
    if ( !qword_1C00A2E00 )
      break;
    qword_1C00A2E00 = *(void **)qword_1C00A2E00;
    operator delete[](v0);
  }
}
