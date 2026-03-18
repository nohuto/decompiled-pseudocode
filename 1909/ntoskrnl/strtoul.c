/*
 * XREFs of strtoul @ 0x1401A300C
 * Callers:
 *     EmpCacheBiosDate @ 0x1409F9720 (EmpCacheBiosDate.c)
 *     EmpParseCallbacks @ 0x1409FA08C (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x1409FA908 (EmpParseRules.c)
 *     EmpParseRuleTermArgMapping @ 0x1409FB6F8 (EmpParseRuleTermArgMapping.c)
 *     CmpGetBiosDate @ 0x140A0CC24 (CmpGetBiosDate.c)
 * Callees:
 *     strtoxlX @ 0x1401A2D7C (strtoxlX.c)
 */

unsigned int __cdecl strtoul(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 1, 0);
}
