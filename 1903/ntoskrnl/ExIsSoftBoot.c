/*
 * XREFs of ExIsSoftBoot @ 0x140182500
 * Callers:
 *     BapdRecordFirmwareBootStats @ 0x14059ECD0 (BapdRecordFirmwareBootStats.c)
 *     PoInitHiberServices @ 0x14074B26C (PoInitHiberServices.c)
 *     PoClearTransitionMarker @ 0x140769D38 (PoClearTransitionMarker.c)
 *     EtwpSavePersistedLoggers @ 0x140907FC4 (EtwpSavePersistedLoggers.c)
 *     PopCheckShutdownMarker @ 0x140A14E68 (PopCheckShutdownMarker.c)
 * Callees:
 *     <none>
 */

bool ExIsSoftBoot()
{
  return (qword_1404324F8 & 4) != 0;
}
