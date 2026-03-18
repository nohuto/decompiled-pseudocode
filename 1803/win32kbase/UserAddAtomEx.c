/*
 * XREFs of UserAddAtomEx @ 0x1C005FFA0
 * Callers:
 *     <none>
 * Callees:
 *     UserAddAtomToAtomTableEx @ 0x1C005FFD0 (UserAddAtomToAtomTableEx.c)
 */

__int64 UserAddAtomEx()
{
  return UserAddAtomToAtomTableEx(UserAtomTableHandle);
}
