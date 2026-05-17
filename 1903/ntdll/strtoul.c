/*
 * XREFs of strtoul @ 0x180091CA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180091A10 @ 0x180091A10 (sub_180091A10.c)
 */

unsigned int __cdecl strtoul(const char *String, char **EndPtr, int Radix)
{
  return sub_180091A10((__int64)&off_180118AE8, (unsigned __int8 *)String, (unsigned __int8 **)EndPtr, Radix, 1, 0);
}
