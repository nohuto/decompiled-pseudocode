/*
 * XREFs of UserDeleteAtom @ 0x1C0087F60
 * Callers:
 *     <none>
 * Callees:
 *     UserDeleteAtomFromAtomTable @ 0x1C0087F80 (UserDeleteAtomFromAtomTable.c)
 */

__int64 __fastcall UserDeleteAtom(unsigned __int16 a1)
{
  return UserDeleteAtomFromAtomTable(UserAtomTableHandle, a1);
}
