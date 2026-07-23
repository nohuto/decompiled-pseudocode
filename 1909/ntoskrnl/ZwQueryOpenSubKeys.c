/*
 * XREFs of ZwQueryOpenSubKeys @ 0x1401C3650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryOpenSubKeys(POBJECT_ATTRIBUTES TargetKey, PULONG HandleCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
