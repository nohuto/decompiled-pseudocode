/*
 * XREFs of PopCoolingInitializeWnfEvents @ 0x140A3D868
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     PopUpdateBackgroundCoolingStatus @ 0x14078A378 (PopUpdateBackgroundCoolingStatus.c)
 */

void __noreturn PopCoolingInitializeWnfEvents()
{
  PopUpdateBackgroundCoolingStatus(0);
}
