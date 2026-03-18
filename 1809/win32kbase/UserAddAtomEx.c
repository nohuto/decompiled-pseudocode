/*
 * XREFs of UserAddAtomEx @ 0x1C006C760
 * Callers:
 *     <none>
 * Callees:
 *     UserAddAtomToAtomTableEx @ 0x1C006C790 (UserAddAtomToAtomTableEx.c)
 */

__int64 UserAddAtomEx()
{
  return UserAddAtomToAtomTableEx(UserAtomTableHandle);
}
