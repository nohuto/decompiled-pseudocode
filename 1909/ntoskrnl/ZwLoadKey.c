/*
 * XREFs of ZwLoadKey @ 0x1401C2C90
 * Callers:
 *     BiLoadHive @ 0x14074106C (BiLoadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLoadKey(POBJECT_ATTRIBUTES KeyObjectAttributes, POBJECT_ATTRIBUTES FileObjectAttributes)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(KeyObjectAttributes, FileObjectAttributes, v2);
}
