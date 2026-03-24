/*
 * XREFs of ZwUnloadKey @ 0x1401BB990
 * Callers:
 *     BiUnloadHiveByName @ 0x1406E1840 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x1407112E4 (BiLoadHive.c)
 *     VrpUnloadDifferencingHive @ 0x14080DCBC (VrpUnloadDifferencingHive.c)
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
