/*
 * XREFs of PnpInitializeLegacyBusInformationTable @ 0x1409DA694
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409C7608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     <none>
 */

__int64 PnpInitializeLegacyBusInformationTable()
{
  _QWORD *v0; // rax

  v0 = &IopLegacyBusInformationTable;
  do
  {
    v0[1] = v0;
    *v0 = v0;
    v0 += 2;
  }
  while ( (__int64)v0 < (__int64)&PiDDBLock );
  return 0LL;
}
