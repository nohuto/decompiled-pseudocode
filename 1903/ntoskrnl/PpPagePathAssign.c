/*
 * XREFs of PpPagePathAssign @ 0x140861364
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 * Callees:
 *     PiPagePathSetState @ 0x14078175C (PiPagePathSetState.c)
 */

__int64 __fastcall PpPagePathAssign(struct _FILE_OBJECT *a1)
{
  return PiPagePathSetState(a1, 1);
}
