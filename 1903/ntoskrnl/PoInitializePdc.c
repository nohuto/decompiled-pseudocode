/*
 * XREFs of PoInitializePdc @ 0x140A3DA30
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 PoInitializePdc()
{
  PopPdcDeviceListLock = 0LL;
  return 0LL;
}
