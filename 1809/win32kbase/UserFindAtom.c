/*
 * XREFs of UserFindAtom @ 0x1C0071B20
 * Callers:
 *     <none>
 * Callees:
 *     UserFindAtomFromAtomTable @ 0x1C0071B40 (UserFindAtomFromAtomTable.c)
 */

__int64 __fastcall UserFindAtom(__int64 a1)
{
  return UserFindAtomFromAtomTable(UserAtomTableHandle, a1);
}
