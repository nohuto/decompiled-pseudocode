/*
 * XREFs of UserFindAtom @ 0x1C00635C0
 * Callers:
 *     <none>
 * Callees:
 *     UserFindAtomFromAtomTable @ 0x1C00635E0 (UserFindAtomFromAtomTable.c)
 */

__int64 __fastcall UserFindAtom(__int64 a1)
{
  return UserFindAtomFromAtomTable(UserAtomTableHandle, a1);
}
