/*
 * XREFs of ZwDeleteAtom @ 0x1401C1A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwDeleteAtom(RTL_ATOM Atom)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Atom);
}
