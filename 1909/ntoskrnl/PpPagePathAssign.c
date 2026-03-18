/*
 * XREFs of PpPagePathAssign @ 0x140860A64
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
 * Callees:
 *     PiPagePathSetState @ 0x140783ABC (PiPagePathSetState.c)
 */

__int64 __fastcall PpPagePathAssign(struct _FILE_OBJECT *a1)
{
  return PiPagePathSetState(a1, 1);
}
