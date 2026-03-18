/*
 * XREFs of ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x1C0296FE8
 * Callers:
 *     MonitorCleanupGlobal @ 0x1C004F08C (MonitorCleanupGlobal.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 */

void MonitorCleanupAdditionalTiming(void)
{
  void *v0; // rcx

  while ( 1 )
  {
    v0 = qword_1C008EDF0;
    if ( !qword_1C008EDF0 )
      break;
    qword_1C008EDF0 = *(void **)qword_1C008EDF0;
    operator delete[](v0);
  }
}
