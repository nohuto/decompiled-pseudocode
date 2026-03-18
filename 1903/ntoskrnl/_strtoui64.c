/*
 * XREFs of _strtoui64 @ 0x14019FEF0
 * Callers:
 *     <none>
 * Callees:
 *     strtoxq @ 0x14019FC98 (strtoxq.c)
 */

unsigned __int64 __cdecl strtoui64(const char *String, char **EndPtr, int Radix)
{
  return strtoxq((__int64)&_initiallocalestructinfo, (unsigned __int8 *)String, (unsigned __int8 **)EndPtr, Radix, 1);
}
