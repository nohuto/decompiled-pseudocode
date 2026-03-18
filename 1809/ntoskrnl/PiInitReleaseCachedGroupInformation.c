/*
 * XREFs of PiInitReleaseCachedGroupInformation @ 0x14075051C
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x14018B1B4 (PnpCompleteSystemStartProcess.c)
 * Callees:
 *     PnpFreeUnicodeStringList @ 0x14018B260 (PnpFreeUnicodeStringList.c)
 */

void PiInitReleaseCachedGroupInformation()
{
  if ( PiInitGroupOrderTable )
  {
    PnpFreeUnicodeStringList((PVOID *)PiInitGroupOrderTable, (unsigned __int16)PiInitGroupOrderTableCount);
    PiInitGroupOrderTable = 0LL;
    PiInitGroupOrderTableCount = 0;
  }
}
