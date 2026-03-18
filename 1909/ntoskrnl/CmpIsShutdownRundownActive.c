/*
 * XREFs of CmpIsShutdownRundownActive @ 0x1408320A8
 * Callers:
 *     CmpLoadHiveThread @ 0x14075BB10 (CmpLoadHiveThread.c)
 *     CmpFinishSystemHivesLoad @ 0x140762500 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     <none>
 */

char CmpIsShutdownRundownActive()
{
  return CmpShutdownRundown & 1;
}
