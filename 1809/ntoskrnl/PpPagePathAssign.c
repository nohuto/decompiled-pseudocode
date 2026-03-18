/*
 * XREFs of PpPagePathAssign @ 0x140826F18
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1409B1F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     PiPagePathSetState @ 0x14075C1FC (PiPagePathSetState.c)
 */

__int64 __fastcall PpPagePathAssign(struct _FILE_OBJECT *a1)
{
  return PiPagePathSetState(a1, 1u);
}
