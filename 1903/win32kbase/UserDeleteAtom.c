/*
 * XREFs of UserDeleteAtom @ 0x1C007A5C0
 * Callers:
 *     <none>
 * Callees:
 *     UserDeleteAtomFromAtomTable @ 0x1C007A5E0 (UserDeleteAtomFromAtomTable.c)
 */

__int64 __fastcall UserDeleteAtom(unsigned __int16 a1)
{
  return UserDeleteAtomFromAtomTable(UserAtomTableHandle, a1);
}
