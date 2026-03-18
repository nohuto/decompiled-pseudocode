/*
 * XREFs of ZwUnloadKey @ 0x1401BB970
 * Callers:
 *     BiUnloadHiveByName @ 0x1406E1860 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x140711304 (BiLoadHive.c)
 *     VrpUnloadDifferencingHive @ 0x14080DCDC (VrpUnloadDifferencingHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadKey(POBJECT_ATTRIBUTES KeyObjectAttributes)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(KeyObjectAttributes, v1, v2);
}
