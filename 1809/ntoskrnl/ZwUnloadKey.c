/*
 * XREFs of ZwUnloadKey @ 0x1401BBAF0
 * Callers:
 *     BiUnloadHiveByName @ 0x1406E2AE0 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x140712584 (BiLoadHive.c)
 *     VrpUnloadDifferencingHive @ 0x14080EEBC (VrpUnloadDifferencingHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadKey(POBJECT_ATTRIBUTES KeyObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyObjectAttributes);
}
