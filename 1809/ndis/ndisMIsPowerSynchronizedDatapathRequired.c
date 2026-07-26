/*
 * XREFs of ndisMIsPowerSynchronizedDatapathRequired @ 0x1C001DCB4
 * Callers:
 *     ndisSetMiniportHandlers @ 0x1C010E9D0 (ndisSetMiniportHandlers.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisMIsPowerSynchronizedDatapathRequired(_DWORD *a1)
{
  return (a1[30] & 0x80u) == 0
      && ((a1[986] & 0x3000) == 0x2000 || LODWORD(WPP_MAIN_CB.DeviceExtension) && (int)a1[470] < 0);
}
