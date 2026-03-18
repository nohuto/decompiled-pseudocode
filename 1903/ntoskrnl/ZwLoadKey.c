/*
 * XREFs of ZwLoadKey @ 0x1401C2110
 * Callers:
 *     BiLoadHive @ 0x14073F16C (BiLoadHive.c)
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
