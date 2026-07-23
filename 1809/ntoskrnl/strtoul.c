/*
 * XREFs of strtoul @ 0x1401981DC
 * Callers:
 *     EmpCacheBiosDate @ 0x1409BEAE4 (EmpCacheBiosDate.c)
 *     EmpParseCallbacks @ 0x1409BF250 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x1409BFA68 (EmpParseRules.c)
 *     EmpParseRuleTermArgMapping @ 0x1409C0888 (EmpParseRuleTermArgMapping.c)
 *     CmpGetBiosDate @ 0x1409C3A94 (CmpGetBiosDate.c)
 * Callees:
 *     strtoxlX @ 0x140197F4C (strtoxlX.c)
 */

unsigned int __cdecl strtoul(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 1, 0);
}
