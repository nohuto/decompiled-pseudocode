/*
 * XREFs of PoInitializePdc @ 0x140A3D800
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 PoInitializePdc()
{
  PopPdcDeviceListLock = 0LL;
  return 0LL;
}
