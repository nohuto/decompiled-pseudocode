/*
 * XREFs of ExIsSoftBoot @ 0x140182BF0
 * Callers:
 *     BapdRecordFirmwareBootStats @ 0x14059ECB0 (BapdRecordFirmwareBootStats.c)
 *     PoClearTransitionMarker @ 0x140759704 (PoClearTransitionMarker.c)
 *     PoInitHiberServices @ 0x140759AFC (PoInitHiberServices.c)
 *     EtwpSavePersistedLoggers @ 0x1409079F4 (EtwpSavePersistedLoggers.c)
 *     PopCheckShutdownMarker @ 0x1409FBC20 (PopCheckShutdownMarker.c)
 * Callees:
 *     <none>
 */

bool ExIsSoftBoot()
{
  return (qword_140432498 & 4) != 0;
}
