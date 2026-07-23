/*
 * XREFs of ZwUnloadKey @ 0x1401C38F0
 * Callers:
 *     BiUnloadHiveByName @ 0x140728CBC (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x14073F16C (BiLoadHive.c)
 *     VrpUnloadDifferencingHive @ 0x140847524 (VrpUnloadDifferencingHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadKey(POBJECT_ATTRIBUTES KeyObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyObjectAttributes);
}
