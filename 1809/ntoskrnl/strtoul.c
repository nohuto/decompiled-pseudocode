/*
 * XREFs of strtoul @ 0x14019809C
 * Callers:
 *     EmpCacheBiosDate @ 0x1409BDAE4 (EmpCacheBiosDate.c)
 *     EmpParseCallbacks @ 0x1409BE250 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x1409BEA68 (EmpParseRules.c)
 *     EmpParseRuleTermArgMapping @ 0x1409BF888 (EmpParseRuleTermArgMapping.c)
 *     CmpGetBiosDate @ 0x1409C2A94 (CmpGetBiosDate.c)
 * Callees:
 *     strtoxlX @ 0x140197E0C (strtoxlX.c)
 */

unsigned int __cdecl strtoul(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 1, 0);
}
