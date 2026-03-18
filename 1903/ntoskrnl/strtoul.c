/*
 * XREFs of strtoul @ 0x1401A28EC
 * Callers:
 *     EmpCacheBiosDate @ 0x1409F9810 (EmpCacheBiosDate.c)
 *     EmpParseCallbacks @ 0x1409FA17C (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x1409FA9F8 (EmpParseRules.c)
 *     EmpParseRuleTermArgMapping @ 0x1409FB7E8 (EmpParseRuleTermArgMapping.c)
 *     CmpGetBiosDate @ 0x140A0C6F8 (CmpGetBiosDate.c)
 * Callees:
 *     strtoxlX @ 0x1401A265C (strtoxlX.c)
 */

unsigned int __cdecl strtoul(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 1, 0);
}
