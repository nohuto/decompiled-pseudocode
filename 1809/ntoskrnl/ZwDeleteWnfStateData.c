/*
 * XREFs of ZwDeleteWnfStateData @ 0x1401B9D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteWnfStateData(PCWNF_STATE_NAME StateName, const void *ExplicitScope)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
