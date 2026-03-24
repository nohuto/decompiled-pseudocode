/*
 * XREFs of atoi @ 0x140194F50
 * Callers:
 *     KiInitializeBootStructures @ 0x14056FE10 (KiInitializeBootStructures.c)
 * Callees:
 *     atol @ 0x140194F70 (atol.c)
 */

int __cdecl atoi(const char *Str)
{
  return atol(Str);
}
