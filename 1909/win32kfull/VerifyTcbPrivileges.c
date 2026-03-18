/*
 * XREFs of VerifyTcbPrivileges @ 0x1C011C190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN VerifyTcbPrivileges()
{
  return SeSinglePrivilegeCheck((LUID)7LL, 1);
}
