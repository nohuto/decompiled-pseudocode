/*
 * XREFs of PopCoolingInitializeWnfEvents @ 0x140A3D638
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     PopUpdateBackgroundCoolingStatus @ 0x14078C7D8 (PopUpdateBackgroundCoolingStatus.c)
 */

void __noreturn PopCoolingInitializeWnfEvents()
{
  PopUpdateBackgroundCoolingStatus(0);
}
