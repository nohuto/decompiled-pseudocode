/*
 * XREFs of EtwpSavePersistedLoggers @ 0x140907FC4
 * Callers:
 *     EtwpKsrCallback @ 0x1409074E0 (EtwpKsrCallback.c)
 * Callees:
 *     ExIsSoftBoot @ 0x140182500 (ExIsSoftBoot.c)
 *     EtwpSavePersistedLoggersWorker @ 0x140907FF4 (EtwpSavePersistedLoggersWorker.c)
 */

char EtwpSavePersistedLoggers()
{
  signed __int32 v0; // eax

  LOBYTE(v0) = ExIsSoftBoot();
  if ( (_BYTE)v0 )
  {
    v0 = _InterlockedCompareExchange(&EtwpLoggerSaveState, 1, 0);
    if ( !v0 )
      LOBYTE(v0) = EtwpSavePersistedLoggersWorker();
  }
  return v0;
}
