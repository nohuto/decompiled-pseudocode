/*
 * XREFs of ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x1C02CDB1C
 * Callers:
 *     MonitorCleanupGlobal @ 0x1C00561F0 (MonitorCleanupGlobal.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 */

void MonitorCleanupAdditionalTiming(void)
{
  void *v0; // rcx

  while ( 1 )
  {
    v0 = qword_1C00A2E10;
    if ( !qword_1C00A2E10 )
      break;
    qword_1C00A2E10 = *(void **)qword_1C00A2E10;
    operator delete[](v0);
  }
}
