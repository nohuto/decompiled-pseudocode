/*
 * XREFs of ZwUnloadKey @ 0x1401C4470
 * Callers:
 *     BiUnloadHiveByName @ 0x14072A02C (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x14074106C (BiLoadHive.c)
 *     VrpUnloadDifferencingHive @ 0x140846C2C (VrpUnloadDifferencingHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadKey(POBJECT_ATTRIBUTES KeyObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyObjectAttributes);
}
