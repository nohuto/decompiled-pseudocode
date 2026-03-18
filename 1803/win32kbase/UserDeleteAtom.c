/*
 * XREFs of UserDeleteAtom @ 0x1C0064CF0
 * Callers:
 *     <none>
 * Callees:
 *     UserDeleteAtomFromAtomTable @ 0x1C0064D10 (UserDeleteAtomFromAtomTable.c)
 */

__int64 __fastcall UserDeleteAtom(unsigned __int16 a1)
{
  return UserDeleteAtomFromAtomTable(UserAtomTableHandle, a1);
}
